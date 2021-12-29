from enum import Enum
from amaranth import *
from amaranth.utils import log2_int

from riscv_tilelink import tilelink
from riscv_tilelink.core import DataStreamRecord


class RequestState(Enum):
    IDLE = 0
    IN_FLIGHT = 1
    VALID = 2


class TilelinkDataMaster(Elaboratable):
    def __init__(self, addr_width, data_width=4, max_outstanding=2):
        self.addr_width = addr_width
        self.data_width = data_width
        self.max_outstanding = max_outstanding

        self.data_stream = DataStreamRecord()

        # Check the sizes of the different interfaces
        if self.data_stream.req_addr.shape().width != self.addr_width:
            raise ValueError("The core data stream address ({}) should be the same width as the Tilelink interface ({}).".format(self.data_stream.req_addr.shape().width, self.addr_width))
        if self.data_stream.req_data.shape().width != 8 * self.data_width:
            raise ValueError("The core data stream request data ({}) should be the same width as the Tilelink interface ({})".format(self.data_stream.rsp_data.shape().width, 8 * self.data_width))
        if self.data_stream.rsp_data.shape().width != 8 * self.data_width:
            raise ValueError("The core data stream response data ({}) should be the same width as the Tilelink interface ({})".format(self.data_stream.rsp_data.shape().width, 8 * self.data_width))

        # Create the Tilelink bus interface
        self.bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=log2_int(max_outstanding), sink_id_width=0)

    def elaborate(self, platform):
        m = Module()

        # Create an array of for the state of each request
        layout = [
            ('state', RequestState),
            ('data', 8 * self.data_width),
            ('size', self.bus.size_bits),
            ('unsigned', 1),
            ('addr_low', self.bus.addr_local_width),
            ('corrupt', 1),
        ]
        requests_state = Array(Record(layout) for _ in range(self.max_outstanding))

        # Create pointers into the array
        read_ptr = Signal(range(self.max_outstanding))
        send_ptr = Signal(range(self.max_outstanding))

        # Define some helper relations. A request can be read if the read
        # pointer is pointing to a request that contains valid data. A new
        # request can be sent if the send pointer is pointing to an idle request.
        can_read = requests_state[read_ptr].state == RequestState.VALID
        can_send = requests_state[send_ptr].state == RequestState.IDLE

        # We can always receive replies since we never send more than we have space for
        m.d.comb += self.bus.d.ready.eq(1)

        # We are ready to accept a request if channel A is ready and we can send
        m.d.comb += self.data_stream.req_ready.eq(can_send & self.bus.a.ready)

        # A valid request is presented on channel A if we can send and the request is valid
        m.d.comb += self.bus.a.valid.eq(can_send & self.data_stream.req_valid)

        # Calculate the mask based on the request size, and align the data to
        # the correct byte lane
        req_size = self.data_stream.req_size
        addr_local_bits = self.data_stream.req_addr[:self.bus.addr_local_width]
        mask = Signal(unsigned(self.data_width))
        data = Signal(unsigned(8 * self.data_width))

        # Automatically generate the mask and data offset for every combination
        # of size and lower address bits
        for size in range(0, log2_int(self.data_width) + 1):
            num_bytes = 2**size
            mask_base = 2**num_bytes - 1

            with m.If(req_size == size):
                with m.Switch(addr_local_bits):
                    for byte_start in range(0, self.data_width, num_bytes):
                        # Create a pattern for the lower bits of the address
                        pattern = '{{:0{}b}}'.format(self.bus.addr_local_width).format(byte_start)
                        pattern = pattern[:self.bus.addr_local_width - size] + '-'*size
                        # Calculate the start and end offset for the data
                        bit_start = 8 * byte_start
                        bit_end = 8 * (byte_start+num_bytes)

                        with m.Case(pattern):
                            m.d.comb += [
                                mask.eq(mask_base << byte_start),
                                data[bit_start:bit_end].eq(self.data_stream.req_data),
                            ]

        # Place the correct request in channel A
        with m.If(self.data_stream.req_we):
            m.d.comb += self.bus.tilelink_put_full_data(
                address=self.data_stream.req_addr,
                data=data, size=req_size, mask=mask, source=send_ptr
            )
        with m.Else():
            m.d.comb += self.bus.tilelink_get(
                address=self.data_stream.req_addr,
                size=req_size, mask=mask, source=send_ptr
            )

        # When the request on channel A is accepted we mark the request as
        # in-flight and increment the send pointer
        with m.If(self.bus.a.valid & self.bus.a.ready):
            m.d.sync += [
                requests_state[send_ptr].state.eq(RequestState.IN_FLIGHT),
                requests_state[send_ptr].size.eq(self.data_stream.req_size),
                requests_state[send_ptr].unsigned.eq(self.data_stream.req_unsigned),
                requests_state[send_ptr].addr_low.eq(self.data_stream.req_addr[:2]),
                send_ptr.eq(send_ptr + 1),
            ]

        # The response is valid when we can read
        m.d.comb += [
            self.data_stream.rsp_valid.eq(can_read),
            self.data_stream.rsp_data.eq(requests_state[read_ptr].data),
            self.data_stream.rsp_corrupt.eq(requests_state[read_ptr].corrupt),
        ]

        # When the response is accepted the request state is set to idle and
        # the read pointer is incremented
        with m.If(self.data_stream.rsp_valid & self.data_stream.rsp_ready):
            m.d.sync += [
                requests_state[read_ptr].state.eq(RequestState.IDLE),
                read_ptr.eq(read_ptr + 1),
            ]

        # When channel D produces a response we either store it, or directly
        # forward it depending on if the response channel is ready. This is
        # done to prevent an extra cycle of delay.
        with m.If(self.bus.d.valid & self.bus.d.ready):
            read_data = Signal(unsigned(8 * self.bus.data_width))
            req_size = Signal(unsigned(self.bus.size_bits))
            is_unsigned = Signal()
            addr_local_bits = Signal(unsigned(self.bus.addr_local_width))
            m.d.comb += [
                req_size.eq(requests_state[self.bus.d.source].size),
                is_unsigned.eq(requests_state[self.bus.d.source].unsigned),
                addr_local_bits.eq(requests_state[self.bus.d.source].addr_low),
            ]

            # Automatically generate the data selection and sign bit application
            # for the different request sizes
            for size in range(0, log2_int(self.data_width) + 1):
                num_bytes = 2**size
                with m.If(req_size == size):
                    with m.Switch(addr_local_bits):
                        for byte_start in range(0, self.data_width, num_bytes):
                            # Create a pattern for the lower bits of the address
                            pattern = '{{:0{}b}}'.format(self.bus.addr_local_width).format(byte_start)
                            pattern = pattern[:self.bus.addr_local_width - size] + '-'*size
                            # Calculate the start and end offset for the data
                            bit_start = 8 * byte_start
                            bit_end = 8 * (byte_start+num_bytes)
                            with m.Case(pattern):
                                sign_bit = Mux(is_unsigned, 0, self.bus.d.data[bit_end-1])
                                repeat_cnt = 8 * (self.data_width - num_bytes)
                                m.d.comb += read_data.eq(Cat(self.bus.d.data[bit_start:bit_end], Repl(sign_bit, repeat_cnt)))

            # Check if the response if for the oldest unanswerd request
            with m.If(self.bus.d.source == read_ptr):
                # Directly forward the response to the response channel
                m.d.comb += [
                    self.data_stream.rsp_valid.eq(1),
                    self.data_stream.rsp_data.eq(read_data),
                    self.data_stream.rsp_corrupt.eq(self.bus.d.corrupt),
                ]
                # If the response channel is not ready, store the result anyway
                with m.If(~self.data_stream.rsp_ready):
                    m.d.sync += [
                        requests_state[self.bus.d.source].state.eq(RequestState.VALID),
                        requests_state[self.bus.d.source].data.eq(read_data),
                        requests_state[self.bus.d.source].corrupt.eq(self.bus.d.corrupt),
                    ]
            with m.Else():
                # Out-of-order messages are always stored, since the response
                # channel expects messages is the correct order
                m.d.sync += [
                    requests_state[self.bus.d.source].state.eq(RequestState.VALID),
                    requests_state[self.bus.d.source].data.eq(read_data),
                    requests_state[self.bus.d.source].corrupt.eq(self.bus.d.corrupt),
                ]

        return m

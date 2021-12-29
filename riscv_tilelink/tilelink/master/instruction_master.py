from enum import Enum
from amaranth import *
from amaranth.utils import log2_int
from riscv_tilelink import tilelink
from riscv_tilelink.core import InstructionStreamRecord


class RequestState(Enum):
    IDLE = 0
    IN_FLIGHT = 1
    VALID = 2


class TilelinkInstructionMaster(Elaboratable):
    def __init__(self, addr_width, data_width=4, max_outstanding=2):
        self.addr_width = addr_width
        self.data_width = data_width
        self.max_outstanding = max_outstanding

        self.instruction_stream = InstructionStreamRecord()

        # Check the sizes of the different interfaces
        if self.instruction_stream.req_addr.shape().width != self.addr_width:
            raise ValueError("The core instruction stream address ({}) should be the same width as the Tilelink interface ({}).".format(self.instruction_stream.req_addr.shape().width, self.addr_width))
        if self.instruction_stream.rsp_data.shape().width != 8 * self.data_width:
            raise ValueError("The core instruction stream data ({}) should be the same width as the Tilelink interface ({})".format(self.instruction_stream.rsp_data.shape().width, 8 * self.data_width))

        # Create the Tilelink bus interface
        self.bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=log2_int(max_outstanding), sink_id_width=0)

    def elaborate(self, platform):
        m = Module()

        # Create an array of for the state of each request
        layout = [
            ('state', RequestState),
            ('data', 8 * self.data_width),
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
        m.d.comb += self.instruction_stream.req_ready.eq(can_send & self.bus.a.ready)

        # A valid request is presented on channel A if we can send and the request is valid
        m.d.comb += [
            self.bus.a.valid.eq(can_send & self.instruction_stream.req_valid),
            self.bus.tilelink_get(
                address=self.instruction_stream.req_addr,
                size=log2_int(self.data_width),
                mask=(2**self.data_width - 1),
                source=send_ptr
            ),
        ]

        # When the request on channel A is accepted we mark the request as
        # in-flight and increment the send pointer
        with m.If(self.bus.a.valid & self.bus.a.ready):
            m.d.sync += [
                requests_state[send_ptr].eq(RequestState.IN_FLIGHT),
                send_ptr.eq(send_ptr + 1),
            ]

        # The response is valid when we can read
        m.d.comb += [
            self.instruction_stream.rsp_valid.eq(can_read),
            self.instruction_stream.rsp_data.eq(requests_state[read_ptr].data),
        ]

        # When the response is accepted the request state is set to idle and
        # the read pointer is incremented
        with m.If(self.instruction_stream.rsp_valid & self.instruction_stream.rsp_ready):
            m.d.sync += [
                requests_state[read_ptr].eq(RequestState.IDLE),
                read_ptr.eq(read_ptr + 1),
            ]

        # When channel D produces a response we either store it, or directly
        # forward it depending on if the response channel is ready. This is
        # done to prevent an extra cycle of delay.
        with m.If(self.bus.d.valid & self.bus.d.ready):
            # Check if the response if for the oldest unanswerd request
            with m.If(self.bus.d.source == read_ptr):
                # Directly forward the response to the response channel
                m.d.comb += [
                    self.instruction_stream.rsp_valid.eq(1),
                    self.instruction_stream.rsp_data.eq(self.bus.d.data),
                ]
                # If the response channel is not ready, store the result anyway
                with m.If(~self.instruction_stream.rsp_ready):
                    m.d.sync += [
                        requests_state[self.bus.d.source].state.eq(RequestState.VALID),
                        requests_state[self.bus.d.source].data.eq(self.bus.d.data),
                    ]
            with m.Else():
                # Out-of-order messages are always stored, since the response
                # channel expects messages is the correct order
                m.d.sync += [
                    requests_state[self.bus.d.source].state.eq(RequestState.VALID),
                    requests_state[self.bus.d.source].data.eq(self.bus.d.data),
                ]

        return m

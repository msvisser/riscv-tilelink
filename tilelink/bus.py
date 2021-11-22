from enum import Enum
from nmigen import *
from nmigen.hdl.rec import Direction
from nmigen.utils import log2_int, bits_for
from nmigen_soc.memory import MemoryMap


class ChannelAOpcode(Enum):
    PutFullData = 0
    PutPartialData = 1
    ArithmeticData = 2
    LogicalData = 3
    Get = 4
    Intent = 5
    AcquireBlock = 6
    AcquirePerm = 7


class ChannelDOpcode(Enum):
    AccessAck = 0
    AccessAckData = 1
    HintAck = 2
    Grant = 4
    GrantData = 5
    ReleaseAck = 6


class Interface(Record):
    def __init__(self, *, addr_width, data_width, source_id_width, sink_id_width, name=None):
        self.addr_width = addr_width
        self.data_width = data_width
        self.source_id_width = source_id_width
        self.sink_id_width = sink_id_width
        self.addr_local_width = log2_int(data_width)
        self.size_bits = bits_for(self.addr_local_width)

        channel_a_layout = [
            ('opcode',  ChannelAOpcode,  Direction.FANOUT),
            ('param',   3,               Direction.FANOUT),
            ('size',    self.size_bits,  Direction.FANOUT),
            ('source',  source_id_width, Direction.FANOUT),
            ('address', addr_width,      Direction.FANOUT),
            ('mask',    data_width,      Direction.FANOUT),
            ('data',    8 * data_width,  Direction.FANOUT),
            ('corrupt', 1,               Direction.FANOUT),
            ('valid',   1,               Direction.FANOUT),
            ('ready',   1,               Direction.FANIN),
        ]
        channel_d_layout = [
            ('opcode',  ChannelDOpcode,  Direction.FANIN),
            ('param',   2,               Direction.FANIN),
            ('size',    self.size_bits,  Direction.FANIN),
            ('source',  source_id_width, Direction.FANIN),
            ('sink',    sink_id_width,   Direction.FANIN),
            ('denied',  1,               Direction.FANIN),
            ('corrupt', 1,               Direction.FANIN),
            ('data',    8 * data_width,  Direction.FANIN),
            ('valid',   1,               Direction.FANIN),
            ('ready',   1,               Direction.FANOUT),
        ]

        layout = [
            ('a', channel_a_layout),
            ('d', channel_d_layout),
        ]
        super().__init__(layout, name=name, src_loc_at=1)

    @property
    def memory_map(self):
        if self._map is None:
            raise NotImplementedError("Bus interface {!r} does not have a memory map"
                                      .format(self))
        return self._map

    @memory_map.setter
    def memory_map(self, memory_map):
        if not isinstance(memory_map, MemoryMap):
            raise TypeError("Memory map must be an instance of MemoryMap, not {!r}"
                            .format(memory_map))
        if memory_map.data_width != 8:
            raise ValueError("Memory map has data width {}, which is not the same as bus "
                             "interface granularity {}"
                             .format(memory_map.data_width, 8))
        granularity_bits = log2_int(self.data_width // 8)
        if memory_map.addr_width != max(1, self.addr_width):
            raise ValueError("Memory map has address width {}, which is not the same as bus "
                             "interface address width {}"
                             .format(memory_map.addr_width, self.addr_width))
        memory_map.freeze()
        self._map = memory_map

    def tilelink_get(self, address, size, mask, source=0):
        return [
            self.a.opcode.eq(ChannelAOpcode.Get),
            self.a.param.eq(0),
            self.a.size.eq(size),
            self.a.source.eq(source),
            self.a.address.eq(address),
            self.a.mask.eq(mask),
            self.a.corrupt.eq(0),
        ]

    def tilelink_put_full_data(self, address, data, size, mask, source=0):
        return [
            self.a.opcode.eq(ChannelAOpcode.PutFullData),
            self.a.param.eq(0),
            self.a.size.eq(size),
            self.a.source.eq(source),
            self.a.address.eq(address),
            self.a.mask.eq(mask),
            self.a.data.eq(data),
            self.a.corrupt.eq(0),
        ]

    def tilelink_access_ack(self, size, source=0, sink=0):
        return [
            self.d.opcode.eq(ChannelDOpcode.AccessAck),
            self.d.param.eq(0),
            self.d.size.eq(size),
            self.d.source.eq(source),
            self.d.sink.eq(sink),
            self.d.denied.eq(0),
            self.d.corrupt.eq(0),
        ]

    def tilelink_access_ack_data(self, data, size, source=0, sink=0, corrupt=0):
        return [
            self.d.opcode.eq(ChannelDOpcode.AccessAckData),
            self.d.param.eq(0),
            self.d.size.eq(size),
            self.d.source.eq(source),
            self.d.sink.eq(sink),
            self.d.denied.eq(0),
            self.d.corrupt.eq(corrupt),
            self.d.data.eq(data),
        ]

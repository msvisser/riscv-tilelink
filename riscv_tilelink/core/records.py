from amaranth.hdl.rec import Direction, Record


class InstructionStreamRecord(Record):
    """
    Record for the stream of instruction requests coming out of the core and
    responses going back into the core.
    """
    def __init__(self):
        super().__init__([
            ('req_addr', 32, Direction.FANOUT),
            ('req_valid', 1, Direction.FANOUT),
            ('req_ready', 1, Direction.FANIN),

            ('rsp_data', 32, Direction.FANIN),
            ('rsp_valid', 1, Direction.FANIN),
            ('rsp_ready', 1, Direction.FANOUT),
        ])


class DataStreamRecord(Record):
    """
    Record for the stream of data requests coming out of the core and responses
    going back into the core.
    """
    def __init__(self):
        super().__init__([
            ('req_addr', 32, Direction.FANOUT),
            ('req_data', 32, Direction.FANOUT),
            ('req_we', 1, Direction.FANOUT),
            ('req_size', 2, Direction.FANOUT),
            ('req_unsigned', 1, Direction.FANOUT),
            ('req_valid', 1, Direction.FANOUT),
            ('req_ready', 1, Direction.FANIN),

            ('rsp_data', 32, Direction.FANIN),
            ('rsp_corrupt', 1, Direction.FANIN),
            ('rsp_valid', 1, Direction.FANIN),
            ('rsp_ready', 1, Direction.FANOUT),
        ])

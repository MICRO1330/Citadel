require_extension('A');
WRITE_RD(sext32(MMU.amo_uint32(RS1, [&](int32_t lhs) { return std::min(lhs, int32_t(RS2)); })));
if (insn.aq()) MMU.flush_dcache();
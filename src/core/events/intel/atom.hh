#include <cstdint>
#include <intel_priv.hh>
namespace optkit::intel::atom{
	enum atom : uint64_t {
		UNHALTED_CORE_CYCLES = 0x3c, // Unhalted core cycles
		UNHALTED_REFERENCE_CYCLES = 0x0300, // Unhalted reference cycle
		INSTRUCTION_RETIRED = 0xc0, // Instructions retired
		INSTRUCTIONS_RETIRED = 0xc0, // This is an alias for INSTRUCTION_RETIRED
		LLC_REFERENCES = 0x4f2e, // Last level of cache references
		LAST_LEVEL_CACHE_REFERENCES = 0x4f2e, // This is an alias for LLC_REFERENCES
		LLC_MISSES = 0x412e, // Last level of cache misses
		LAST_LEVEL_CACHE_MISSES = 0x412e, // This is an alias for LLC_MISSES
		BRANCH_INSTRUCTIONS_RETIRED = 0xc4, // Branch instructions retired
		MISPREDICTED_BRANCH_RETIRED = 0xc5, // Mispredicted branch instruction retired
		SIMD_INSTR_RETIRED = 0xce, // SIMD Instructions retired
		L2_REJECT_BUSQ = 0x30, // Rejected L2 cache requests
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__MESI = 0xf00, // Any cacheline access
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__I_STATE = 0x100, // Invalid cacheline
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__S_STATE = 0x200, // Shared cacheline
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__E_STATE = 0x400, // Exclusive cacheline
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__M_STATE = 0x800, // Modified cacheline
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__SELF = 0x4000, // This core
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__BOTH_CORES = 0xc000, // Both cores
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__ANY = 0x3000, // All inclusive
		L2_REJECT_BUSQ__MASK__ATOM_L2_REJECT_BUSQ__PREFETCH = 0x1000, // Hardware prefetch only
		SIMD_SAT_INSTR_RETIRED = 0xcf, // Saturated arithmetic instructions retired
		ICACHE = 0x80, // Instruction fetches
		ICACHE__MASK__ATOM_ICACHE__ACCESSES = 0x300, // Instruction fetches
		ICACHE__MASK__ATOM_ICACHE__MISSES = 0x200, // Count all instructions fetches that miss the icache or produce memory requests. This includes uncacheache fetches. Any instruction fetch miss is counted only once and not once for every cycle it is outstanding
		L2_LOCK = 0x2b, // L2 locked accesses
		L2_LOCK__MASK__ATOM_L2_LOCK__MESI = 0xf00, // Any cacheline access
		L2_LOCK__MASK__ATOM_L2_LOCK__I_STATE = 0x100, // Invalid cacheline
		L2_LOCK__MASK__ATOM_L2_LOCK__S_STATE = 0x200, // Shared cacheline
		L2_LOCK__MASK__ATOM_L2_LOCK__E_STATE = 0x400, // Exclusive cacheline
		L2_LOCK__MASK__ATOM_L2_LOCK__M_STATE = 0x800, // Modified cacheline
		L2_LOCK__MASK__ATOM_L2_LOCK__SELF = 0x4000, // This core
		L2_LOCK__MASK__ATOM_L2_LOCK__BOTH_CORES = 0xc000, // Both cores
		UOPS_RETIRED = 0xc2, // Micro-ops retired
		UOPS_RETIRED__MASK__ATOM_UOPS_RETIRED__ANY = 0x1000, // Micro-ops retired
		UOPS_RETIRED__MASK__ATOM_UOPS_RETIRED__STALLED_CYCLES = 0x1000 | INTEL_X86_MOD_INV | (0x1 << INTEL_X86_CMASK_BIT), // Cycles no micro-ops retired
		UOPS_RETIRED__MASK__ATOM_UOPS_RETIRED__STALLS = 0x1000 | INTEL_X86_MOD_EDGE | INTEL_X86_MOD_INV | (0x1 << INTEL_X86_CMASK_BIT), // Periods no micro-ops retired
		L2_M_LINES_OUT = 0x27, // Modified lines evicted from the L2 cache
		L2_M_LINES_OUT__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		L2_M_LINES_OUT__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		L2_M_LINES_OUT__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		L2_M_LINES_OUT__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		SIMD_COMP_INST_RETIRED = 0xca, // Retired computational Streaming SIMD Extensions (SSE) instructions
		SIMD_COMP_INST_RETIRED__MASK__ATOM_SIMD_COMP_INST_RETIRED__PACKED_SINGLE = 0x100, // Retired computational Streaming SIMD Extensions (SSE) packed-single instructions
		SIMD_COMP_INST_RETIRED__MASK__ATOM_SIMD_COMP_INST_RETIRED__SCALAR_SINGLE = 0x200, // Retired computational Streaming SIMD Extensions (SSE) scalar-single instructions
		SIMD_COMP_INST_RETIRED__MASK__ATOM_SIMD_COMP_INST_RETIRED__PACKED_DOUBLE = 0x400, // Retired computational Streaming SIMD Extensions 2 (SSE2) packed-double instructions
		SIMD_COMP_INST_RETIRED__MASK__ATOM_SIMD_COMP_INST_RETIRED__SCALAR_DOUBLE = 0x800, // Retired computational Streaming SIMD Extensions 2 (SSE2) scalar-double instructions
		SNOOP_STALL_DRV = 0x7e, // Bus stalled for snoops
		SNOOP_STALL_DRV__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		SNOOP_STALL_DRV__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		SNOOP_STALL_DRV__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		SNOOP_STALL_DRV__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_BURST = 0x6e, // Burst (full cache-line) bus transactions
		BUS_TRANS_BURST__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_BURST__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_BURST__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_BURST__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		SIMD_SAT_UOP_EXEC = 0xb1, // SIMD saturated arithmetic micro-ops executed
		SIMD_SAT_UOP_EXEC__MASK__ATOM_SIMD_SAT_UOP_EXEC__S = 0x0, // SIMD saturated arithmetic micro-ops executed
		SIMD_SAT_UOP_EXEC__MASK__ATOM_SIMD_SAT_UOP_EXEC__AR = 0x8000, // SIMD saturated arithmetic micro-ops retired
		BUS_TRANS_IO = 0x6c, // IO bus transactions
		BUS_TRANS_IO__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_IO__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_IO__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_IO__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_RFO = 0x66, // RFO bus transactions
		BUS_TRANS_RFO__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_RFO__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_RFO__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_RFO__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		SIMD_ASSIST = 0xcd, // SIMD assists invoked
		INST_RETIRED = 0xc0, // Instructions retired
		INST_RETIRED__MASK__ATOM_INST_RETIRED__ANY_P = 0x0, // Instructions retired using generic counter (precise event)
		L1D_CACHE = 0x40, // L1 Cacheable Data Reads
		L1D_CACHE__MASK__ATOM_L1D_CACHE__LD = 0x2100, // L1 Cacheable Data Reads
		L1D_CACHE__MASK__ATOM_L1D_CACHE__ST = 0x2200, // L1 Cacheable Data Writes
		MUL = 0x12, // Multiply operations executed
		MUL__MASK__ATOM_MUL__S = 0x100, // Multiply operations executed
		MUL__MASK__ATOM_MUL__AR = 0x8100, // Multiply operations retired
		DIV = 0x13, // Divide operations executed
		DIV__MASK__ATOM_DIV__S = 0x100, // Divide operations executed
		DIV__MASK__ATOM_DIV__AR = 0x8100, // Divide operations retired
		BUS_TRANS_P = 0x6b, // Partial bus transactions
		BUS_TRANS_P__MASK__ATOM_BUS_TRANS_P__THIS_AGENT = 0x0, // This agent
		BUS_TRANS_P__MASK__ATOM_BUS_TRANS_P__ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_TRANS_P__MASK__ATOM_BUS_TRANS_P__SELF = 0x4000, // This core
		BUS_TRANS_P__MASK__ATOM_BUS_TRANS_P__BOTH_CORES = 0xc000, // Both cores
		BUS_IO_WAIT = 0x7f, // IO requests waiting in the bus queue
		BUS_IO_WAIT__MASK__ATOM_BUS_IO_WAIT__SELF = 0x4000, // This core
		BUS_IO_WAIT__MASK__ATOM_BUS_IO_WAIT__BOTH_CORES = 0xc000, // Both cores
		L2_M_LINES_IN = 0x25, // L2 cache line modifications
		L2_M_LINES_IN__MASK__ATOM_BUS_IO_WAIT__SELF = 0x4000, // This core
		L2_M_LINES_IN__MASK__ATOM_BUS_IO_WAIT__BOTH_CORES = 0xc000, // Both cores
		L2_LINES_IN = 0x24, // L2 cache misses
		L2_LINES_IN__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		L2_LINES_IN__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		L2_LINES_IN__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		L2_LINES_IN__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		BUSQ_EMPTY = 0x7d, // Bus queue is empty
		BUSQ_EMPTY__MASK__ATOM_BUS_IO_WAIT__SELF = 0x4000, // This core
		BUSQ_EMPTY__MASK__ATOM_BUS_IO_WAIT__BOTH_CORES = 0xc000, // Both cores
		L2_IFETCH = 0x28, // L2 cacheable instruction fetch requests
		L2_IFETCH__MASK__ATOM_L2_LOCK__MESI = 0xf00, // Any cacheline access
		L2_IFETCH__MASK__ATOM_L2_LOCK__I_STATE = 0x100, // Invalid cacheline
		L2_IFETCH__MASK__ATOM_L2_LOCK__S_STATE = 0x200, // Shared cacheline
		L2_IFETCH__MASK__ATOM_L2_LOCK__E_STATE = 0x400, // Exclusive cacheline
		L2_IFETCH__MASK__ATOM_L2_LOCK__M_STATE = 0x800, // Modified cacheline
		L2_IFETCH__MASK__ATOM_L2_LOCK__SELF = 0x4000, // This core
		L2_IFETCH__MASK__ATOM_L2_LOCK__BOTH_CORES = 0xc000, // Both cores
		BUS_HITM_DRV = 0x7b, // HITM signal asserted
		BUS_HITM_DRV__MASK__ATOM_BUS_HITM_DRV__THIS_AGENT = 0x0, // This agent
		BUS_HITM_DRV__MASK__ATOM_BUS_HITM_DRV__ALL_AGENTS = 0x2000, // Any agent on the bus
		ITLB = 0x82, // ITLB hits
		ITLB__MASK__ATOM_ITLB__FLUSH = 0x400, // ITLB flushes
		ITLB__MASK__ATOM_ITLB__MISSES = 0x200, // ITLB misses
		BUS_TRANS_MEM = 0x6f, // Memory bus transactions
		BUS_TRANS_MEM__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_MEM__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_MEM__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_MEM__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		BUS_TRANS_PWR = 0x6a, // Partial write bus transaction
		BUS_TRANS_PWR__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_PWR__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_PWR__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_PWR__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		BR_INST_DECODED = 0x1e0, // Branch instructions decoded
		BUS_TRANS_INVAL = 0x69, // Invalidate bus transactions
		BUS_TRANS_INVAL__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_INVAL__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_INVAL__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_INVAL__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		SIMD_UOP_TYPE_EXEC = 0xb3, // SIMD micro-ops executed
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__MUL_S = 0x100, // SIMD packed multiply micro-ops executed
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__MUL_AR = 0x8100, // SIMD packed multiply micro-ops retired
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__SHIFT_S = 0x200, // SIMD packed shift micro-ops executed
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__SHIFT_AR = 0x8200, // SIMD packed shift micro-ops retired
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__PACK_S = 0x400, // SIMD packed micro-ops executed
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__PACK_AR = 0x8400, // SIMD packed micro-ops retired
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__UNPACK_S = 0x800, // SIMD unpacked micro-ops executed
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__UNPACK_AR = 0x8800, // SIMD unpacked micro-ops retired
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__LOGICAL_S = 0x1000, // SIMD packed logical micro-ops executed
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__LOGICAL_AR = 0x9000, // SIMD packed logical micro-ops retired
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__ARITHMETIC_S = 0x2000, // SIMD packed arithmetic micro-ops executed
		SIMD_UOP_TYPE_EXEC__MASK__ATOM_SIMD_UOP_TYPE_EXEC__ARITHMETIC_AR = 0xa000, // SIMD packed arithmetic micro-ops retired
		SIMD_INST_RETIRED = 0xc7, // Retired Streaming SIMD Extensions (SSE) instructions
		SIMD_INST_RETIRED__MASK__ATOM_SIMD_INST_RETIRED__PACKED_SINGLE = 0x100, // Retired Streaming SIMD Extensions (SSE) packed-single instructions
		SIMD_INST_RETIRED__MASK__ATOM_SIMD_INST_RETIRED__SCALAR_SINGLE = 0x200, // Retired Streaming SIMD Extensions (SSE) scalar-single instructions
		SIMD_INST_RETIRED__MASK__ATOM_SIMD_INST_RETIRED__PACKED_DOUBLE = 0x400, // Retired Streaming SIMD Extensions 2 (SSE2) packed-double instructions
		SIMD_INST_RETIRED__MASK__ATOM_SIMD_INST_RETIRED__SCALAR_DOUBLE = 0x800, // Retired Streaming SIMD Extensions 2 (SSE2) scalar-double instructions
		SIMD_INST_RETIRED__MASK__ATOM_SIMD_INST_RETIRED__VECTOR = 0x1000, // Retired Streaming SIMD Extensions 2 (SSE2) vector instructions
		SIMD_INST_RETIRED__MASK__ATOM_SIMD_INST_RETIRED__ANY = 0x1f00, // Retired Streaming SIMD instructions
		CYCLES_DIV_BUSY = 0x14, // Cycles the divider is busy
		PREFETCH = 0x7, // Streaming SIMD Extensions (SSE) PrefetchT0 instructions executed
		PREFETCH__MASK__ATOM_PREFETCH__PREFETCHT0 = 0x100, // Streaming SIMD Extensions (SSE) PrefetchT0 instructions executed
		PREFETCH__MASK__ATOM_PREFETCH__SW_L2 = 0x600, // Streaming SIMD Extensions (SSE) PrefetchT1 and PrefetchT2 instructions executed
		PREFETCH__MASK__ATOM_PREFETCH__PREFETCHNTA = 0x800, // Streaming SIMD Extensions (SSE) Prefetch NTA instructions executed
		L2_RQSTS = 0x2e, // L2 cache requests
		L2_RQSTS__MASK__ATOM_L2_RQSTS__SELF = 0x4000, // This core
		L2_RQSTS__MASK__ATOM_L2_RQSTS__BOTH_CORES = 0xc000, // Both cores
		L2_RQSTS__MASK__ATOM_L2_RQSTS__ANY = 0x3000, // All inclusive
		L2_RQSTS__MASK__ATOM_L2_RQSTS__PREFETCH = 0x1000, // Hardware prefetch only
		L2_RQSTS__MASK__ATOM_L2_RQSTS__MESI = 0xf00, // Any cacheline access
		L2_RQSTS__MASK__ATOM_L2_RQSTS__I_STATE = 0x100, // Invalid cacheline
		L2_RQSTS__MASK__ATOM_L2_RQSTS__S_STATE = 0x200, // Shared cacheline
		L2_RQSTS__MASK__ATOM_L2_RQSTS__E_STATE = 0x400, // Exclusive cacheline
		L2_RQSTS__MASK__ATOM_L2_RQSTS__M_STATE = 0x800, // Modified cacheline
		SIMD_UOPS_EXEC = 0xb0, // SIMD micro-ops executed (excluding stores)
		SIMD_UOPS_EXEC__MASK__ATOM_SIMD_UOPS_EXEC__S = 0x0, // Number of SIMD saturated arithmetic micro-ops executed
		SIMD_UOPS_EXEC__MASK__ATOM_SIMD_UOPS_EXEC__AR = 0x8000, // Number of SIMD saturated arithmetic micro-ops retired
		HW_INT_RCV = 0x1c8, // Hardware interrupts received (warning overcounts by 2x)
		BUS_TRANS_BRD = 0x65, // Burst read bus transactions
		BUS_TRANS_BRD__MASK__ATOM_BUS_TRANS_P__THIS_AGENT = 0x0, // This agent
		BUS_TRANS_BRD__MASK__ATOM_BUS_TRANS_P__ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_TRANS_BRD__MASK__ATOM_BUS_TRANS_P__SELF = 0x4000, // This core
		BUS_TRANS_BRD__MASK__ATOM_BUS_TRANS_P__BOTH_CORES = 0xc000, // Both cores
		BOGUS_BR = 0xe4, // Bogus branches
		BUS_DATA_RCV = 0x64, // Bus cycles while processor receives data
		BUS_DATA_RCV__MASK__ATOM_BUS_IO_WAIT__SELF = 0x4000, // This core
		BUS_DATA_RCV__MASK__ATOM_BUS_IO_WAIT__BOTH_CORES = 0xc000, // Both cores
		MACHINE_CLEARS = 0xc3, // Self-Modifying Code detected
		MACHINE_CLEARS__MASK__ATOM_MACHINE_CLEARS__SMC = 0x100, // Self-Modifying Code detected
		BR_INST_RETIRED = 0xc4, // Retired branch instructions
		BR_INST_RETIRED__MASK__ATOM_BR_INST_RETIRED__ANY = 0x0, // Retired branch instructions
		BR_INST_RETIRED__MASK__ATOM_BR_INST_RETIRED__PRED_NOT_TAKEN = 0x100, // Retired branch instructions that were predicted not-taken
		BR_INST_RETIRED__MASK__ATOM_BR_INST_RETIRED__MISPRED_NOT_TAKEN = 0x200, // Retired branch instructions that were mispredicted not-taken
		BR_INST_RETIRED__MASK__ATOM_BR_INST_RETIRED__PRED_TAKEN = 0x400, // Retired branch instructions that were predicted taken
		BR_INST_RETIRED__MASK__ATOM_BR_INST_RETIRED__MISPRED_TAKEN = 0x800, // Retired branch instructions that were mispredicted taken
		BR_INST_RETIRED__MASK__ATOM_BR_INST_RETIRED__MISPRED = 0xa00, // Retired mispredicted branch instructions
		BR_INST_RETIRED__MASK__ATOM_BR_INST_RETIRED__TAKEN = 0xc00, // Retired taken branch instructions
		BR_INST_RETIRED__MASK__ATOM_BR_INST_RETIRED__ANY1 = 0xf00, // Retired branch instructions
		L2_ADS = 0x21, // Cycles L2 address bus is in use
		L2_ADS__MASK__ATOM_BUS_IO_WAIT__SELF = 0x4000, // This core
		L2_ADS__MASK__ATOM_BUS_IO_WAIT__BOTH_CORES = 0xc000, // Both cores
		EIST_TRANS = 0x3a, // Number of Enhanced Intel SpeedStep(R) Technology (EIST) transitions
		BUS_TRANS_WB = 0x67, // Explicit writeback bus transactions
		BUS_TRANS_WB__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_WB__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_WB__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_WB__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		MACRO_INSTS = 0xaa, // Macro-instructions decoded
		MACRO_INSTS__MASK__ATOM_MACRO_INSTS__NON_CISC_DECODED = 0x100, // Non-CISC macro instructions decoded
		MACRO_INSTS__MASK__ATOM_MACRO_INSTS__ALL_DECODED = 0x300, // All Instructions decoded
		L2_LINES_OUT = 0x26, // L2 cache lines evicted.
		L2_LINES_OUT__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		L2_LINES_OUT__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		L2_LINES_OUT__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		L2_LINES_OUT__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		L2_LD = 0x29, // L2 cache reads
		L2_LD__MASK__ATOM_L2_RQSTS__SELF = 0x4000, // This core
		L2_LD__MASK__ATOM_L2_RQSTS__BOTH_CORES = 0xc000, // Both cores
		L2_LD__MASK__ATOM_L2_RQSTS__ANY = 0x3000, // All inclusive
		L2_LD__MASK__ATOM_L2_RQSTS__PREFETCH = 0x1000, // Hardware prefetch only
		L2_LD__MASK__ATOM_L2_RQSTS__MESI = 0xf00, // Any cacheline access
		L2_LD__MASK__ATOM_L2_RQSTS__I_STATE = 0x100, // Invalid cacheline
		L2_LD__MASK__ATOM_L2_RQSTS__S_STATE = 0x200, // Shared cacheline
		L2_LD__MASK__ATOM_L2_RQSTS__E_STATE = 0x400, // Exclusive cacheline
		L2_LD__MASK__ATOM_L2_RQSTS__M_STATE = 0x800, // Modified cacheline
		SEGMENT_REG_LOADS = 0x6, // Number of segment register loads
		SEGMENT_REG_LOADS__MASK__ATOM_SEGMENT_REG_LOADS__ANY = 0x8000, // Number of segment register loads
		L2_NO_REQ = 0x32, // Cycles no L2 cache requests are pending
		L2_NO_REQ__MASK__ATOM_BUS_IO_WAIT__SELF = 0x4000, // This core
		L2_NO_REQ__MASK__ATOM_BUS_IO_WAIT__BOTH_CORES = 0xc000, // Both cores
		THERMAL_TRIP = 0xc03b, // Number of thermal trips
		EXT_SNOOP = 0x77, // External snoops
		EXT_SNOOP__MASK__ATOM_L2_LOCK__MESI = 0xf00, // Any cacheline access
		EXT_SNOOP__MASK__ATOM_L2_LOCK__I_STATE = 0x100, // Invalid cacheline
		EXT_SNOOP__MASK__ATOM_L2_LOCK__S_STATE = 0x200, // Shared cacheline
		EXT_SNOOP__MASK__ATOM_L2_LOCK__E_STATE = 0x400, // Exclusive cacheline
		EXT_SNOOP__MASK__ATOM_L2_LOCK__M_STATE = 0x800, // Modified cacheline
		EXT_SNOOP__MASK__ATOM_L2_LOCK__SELF = 0x4000, // This core
		EXT_SNOOP__MASK__ATOM_L2_LOCK__BOTH_CORES = 0xc000, // Both cores
		BACLEARS = 0xe6, // Branch address calculator
		BACLEARS__MASK__ATOM_BACLEARS__ANY = 0x100, // BACLEARS asserted
		CYCLES_INT_MASKED = 0xc6, // Cycles during which interrupts are disabled
		CYCLES_INT_MASKED__MASK__ATOM_CYCLES_INT_MASKED__CYCLES_INT_MASKED = 0x100, // Cycles during which interrupts are disabled
		CYCLES_INT_MASKED__MASK__ATOM_CYCLES_INT_MASKED__CYCLES_INT_PENDING_AND_MASKED = 0x200, // Cycles during which interrupts are pending and disabled
		FP_ASSIST = 0x11, // Floating point assists
		FP_ASSIST__MASK__ATOM_FP_ASSIST__S = 0x100, // Floating point assists for executed instructions
		FP_ASSIST__MASK__ATOM_FP_ASSIST__AR = 0x8100, // Floating point assists for retired instructions
		L2_ST = 0x2a, // L2 store requests
		L2_ST__MASK__ATOM_L2_LOCK__MESI = 0xf00, // Any cacheline access
		L2_ST__MASK__ATOM_L2_LOCK__I_STATE = 0x100, // Invalid cacheline
		L2_ST__MASK__ATOM_L2_LOCK__S_STATE = 0x200, // Shared cacheline
		L2_ST__MASK__ATOM_L2_LOCK__E_STATE = 0x400, // Exclusive cacheline
		L2_ST__MASK__ATOM_L2_LOCK__M_STATE = 0x800, // Modified cacheline
		L2_ST__MASK__ATOM_L2_LOCK__SELF = 0x4000, // This core
		L2_ST__MASK__ATOM_L2_LOCK__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_DEF = 0x6d, // Deferred bus transactions
		BUS_TRANS_DEF__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_DEF__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_DEF__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_DEF__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		DATA_TLB_MISSES = 0x8, // Memory accesses that missed the DTLB
		DATA_TLB_MISSES__MASK__ATOM_DATA_TLB_MISSES__DTLB_MISS = 0x700, // Memory accesses that missed the DTLB
		DATA_TLB_MISSES__MASK__ATOM_DATA_TLB_MISSES__DTLB_MISS_LD = 0x500, // DTLB misses due to load operations
		DATA_TLB_MISSES__MASK__ATOM_DATA_TLB_MISSES__L0_DTLB_MISS_LD = 0x900, // L0 (micro-TLB) misses due to load operations
		DATA_TLB_MISSES__MASK__ATOM_DATA_TLB_MISSES__DTLB_MISS_ST = 0x600, // DTLB misses due to store operations
		BUS_BNR_DRV = 0x61, // Number of Bus Not Ready signals asserted
		BUS_BNR_DRV__MASK__ATOM_BUS_HITM_DRV__THIS_AGENT = 0x0, // This agent
		BUS_BNR_DRV__MASK__ATOM_BUS_HITM_DRV__ALL_AGENTS = 0x2000, // Any agent on the bus
		STORE_FORWARDS = 0x2, // All store forwards
		STORE_FORWARDS__MASK__ATOM_STORE_FORWARDS__GOOD = 0x8100, // Good store forwards
		CPU_CLK_UNHALTED = 0x3c, // Core cycles when core is not halted
		CPU_CLK_UNHALTED__MASK__ATOM_CPU_CLK_UNHALTED__CORE_P = 0x0, // Core cycles when core is not halted
		CPU_CLK_UNHALTED__MASK__ATOM_CPU_CLK_UNHALTED__BUS = 0x100, // Bus cycles when core is not halted. This event can give a measurement of the elapsed time. This events has a constant ratio with CPU_CLK_UNHALTED:REF event
		CPU_CLK_UNHALTED__MASK__ATOM_CPU_CLK_UNHALTED__NO_OTHER = 0x200, // Bus cycles when core is active and other is halted
		BUS_TRANS_ANY = 0x70, // All bus transactions
		BUS_TRANS_ANY__MASK__ATOM_L2_M_LINES_OUT__SELF = 0x4000, // This core
		BUS_TRANS_ANY__MASK__ATOM_L2_M_LINES_OUT__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_ANY__MASK__ATOM_L2_M_LINES_OUT__ANY = 0x3000, // All inclusive
		BUS_TRANS_ANY__MASK__ATOM_L2_M_LINES_OUT__PREFETCH = 0x1000, // Hardware prefetch only
		MEM_LOAD_RETIRED = 0xcb, // Retired loads
		MEM_LOAD_RETIRED__MASK__ATOM_MEM_LOAD_RETIRED__L2_HIT = 0x100, // Retired loads that hit the L2 cache (precise event)
		MEM_LOAD_RETIRED__MASK__ATOM_MEM_LOAD_RETIRED__L2_MISS = 0x200, // Retired loads that miss the L2 cache (precise event)
		MEM_LOAD_RETIRED__MASK__ATOM_MEM_LOAD_RETIRED__DTLB_MISS = 0x400, // Retired loads that miss the DTLB (precise event)
		X87_COMP_OPS_EXE = 0x10, // Floating point computational micro-ops executed
		X87_COMP_OPS_EXE__MASK__ATOM_X87_COMP_OPS_EXE__ANY_S = 0x100, // Floating point computational micro-ops executed
		X87_COMP_OPS_EXE__MASK__ATOM_X87_COMP_OPS_EXE__ANY_AR = 0x8100, // Floating point computational micro-ops retired
		PAGE_WALKS = 0xc, // Number of page-walks executed
		PAGE_WALKS__MASK__ATOM_PAGE_WALKS__WALKS = 0x300 | INTEL_X86_MOD_EDGE, // Number of page-walks executed
		PAGE_WALKS__MASK__ATOM_PAGE_WALKS__CYCLES = 0x300, // Duration of page-walks in core cycles
		BUS_LOCK_CLOCKS = 0x63, // Bus cycles when a LOCK signal is asserted
		BUS_LOCK_CLOCKS__MASK__ATOM_BUS_TRANS_P__THIS_AGENT = 0x0, // This agent
		BUS_LOCK_CLOCKS__MASK__ATOM_BUS_TRANS_P__ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_LOCK_CLOCKS__MASK__ATOM_BUS_TRANS_P__SELF = 0x4000, // This core
		BUS_LOCK_CLOCKS__MASK__ATOM_BUS_TRANS_P__BOTH_CORES = 0xc000, // Both cores
		BUS_REQUEST_OUTSTANDING = 0x60, // Outstanding cacheable data read bus requests duration
		BUS_REQUEST_OUTSTANDING__MASK__ATOM_BUS_TRANS_P__THIS_AGENT = 0x0, // This agent
		BUS_REQUEST_OUTSTANDING__MASK__ATOM_BUS_TRANS_P__ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_REQUEST_OUTSTANDING__MASK__ATOM_BUS_TRANS_P__SELF = 0x4000, // This core
		BUS_REQUEST_OUTSTANDING__MASK__ATOM_BUS_TRANS_P__BOTH_CORES = 0xc000, // Both cores
		BUS_TRANS_IFETCH = 0x68, // Instruction-fetch bus transactions
		BUS_TRANS_IFETCH__MASK__ATOM_BUS_TRANS_P__THIS_AGENT = 0x0, // This agent
		BUS_TRANS_IFETCH__MASK__ATOM_BUS_TRANS_P__ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_TRANS_IFETCH__MASK__ATOM_BUS_TRANS_P__SELF = 0x4000, // This core
		BUS_TRANS_IFETCH__MASK__ATOM_BUS_TRANS_P__BOTH_CORES = 0xc000, // Both cores
		BUS_HIT_DRV = 0x7a, // HIT signal asserted
		BUS_HIT_DRV__MASK__ATOM_BUS_HITM_DRV__THIS_AGENT = 0x0, // This agent
		BUS_HIT_DRV__MASK__ATOM_BUS_HITM_DRV__ALL_AGENTS = 0x2000, // Any agent on the bus
		BUS_DRDY_CLOCKS = 0x62, // Bus cycles when data is sent on the bus
		BUS_DRDY_CLOCKS__MASK__ATOM_BUS_HITM_DRV__THIS_AGENT = 0x0, // This agent
		BUS_DRDY_CLOCKS__MASK__ATOM_BUS_HITM_DRV__ALL_AGENTS = 0x2000, // Any agent on the bus
		L2_DBUS_BUSY = 0x22, // Cycles the L2 cache data bus is busy
		L2_DBUS_BUSY__MASK__ATOM_BUS_IO_WAIT__SELF = 0x4000, // This core
		L2_DBUS_BUSY__MASK__ATOM_BUS_IO_WAIT__BOTH_CORES = 0xc000, // Both cores
		
	};
};

namespace atom = optkit::intel::atom;
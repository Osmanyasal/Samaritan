#include <cstdint>
#include <intel_priv.hh>
namespace optkit::intel::slm{
	enum slm : uint64_t {
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
		DECODE_RESTRICTION = 0xe9, // Instruction length prediction delay
		DECODE_RESTRICTION__MASK__SLM_DECODE_RESTRICTION__PREDECODE_WRONG = 0x0100, // Number of times the prediction (from the predecode cache) for instruction length is incorrect
		L2_REJECT_XQ = 0x30, // Rejected L2 requests to XQ
		L2_REJECT_XQ__MASK__SLM_L2_REJECT_XQ__ALL = 0x000, // Number of demand and prefetch transactions that the L2 XQ rejects due to a full or near full condition which likely indicates back pressure from the IDI link. The XQ may reject transactions from the L2Q (non-cacheable requests)
		ICACHE = 0x80, // Instruction fetches
		ICACHE__MASK__SLM_ICACHE__ACCESSES = 0x300, // Instruction fetches
		ICACHE__MASK__SLM_ICACHE__MISSES = 0x200, // Count all instructions fetches that miss the icache or produce memory requests. This includes uncacheache fetches. Any instruction fetch miss is counted only once and not once for every cycle it is outstanding
		ICACHE__MASK__SLM_ICACHE__HIT = 0x100, // Count all instructions fetches from the instruction cache
		UOPS_RETIRED = 0xc2, // Micro-ops retired
		UOPS_RETIRED__MASK__SLM_UOPS_RETIRED__ANY = 0x1000, // Micro-ops retired
		UOPS_RETIRED__MASK__SLM_UOPS_RETIRED__MS = 0x0100, // Micro-ops retired that were supplied fro MSROM
		UOPS_RETIRED__MASK__SLM_UOPS_RETIRED__STALLED_CYCLES = 0x1000 | INTEL_X86_MOD_INV | (0x1 << INTEL_X86_CMASK_BIT), // Cycles no micro-ops retired
		UOPS_RETIRED__MASK__SLM_UOPS_RETIRED__STALLS = 0x1000 | INTEL_X86_MOD_EDGE | INTEL_X86_MOD_INV | (0x1 << INTEL_X86_CMASK_BIT), // Periods no micro-ops retired
		INST_RETIRED = 0xc0, // Instructions retired
		INST_RETIRED__MASK__SLM_INST_RETIRED__ANY_P = 0x0, // Instructions retired using generic counter (precise event)
		INST_RETIRED__MASK__SLM_INST_RETIRED__ANY = 0x0, // Instructions retired using generic counter (precise event)
		CYCLES_DIV_BUSY = 0xcd, // Cycles the divider is busy
		CYCLES_DIV_BUSY__MASK__SLM_CYCLES_DIV_BUSY__ANY = 0x0100, // Number of cycles the divider is busy
		RS_FULL_STALL = 0xcb, // RS full
		RS_FULL_STALL__MASK__SLM_RS_FULL_STALL__MEC = 0x0100, // Number of cycles when the allocation pipeline is stalled due to the RS for the MEC cluster is full
		RS_FULL_STALL__MASK__SLM_RS_FULL_STALL__ALL = 0x1f00, // Number of cycles when the allocation pipeline is stalled due any one of the RS being full
		RS_FULL_STALL__MASK__SLM_RS_FULL_STALL__ANY = 0x1f00, // Number of cycles when the allocation pipeline is stalled due any one of the RS being full
		LLC_RQSTS = 0x2e, // L2 cache requests
		LLC_RQSTS__MASK__SLM_LLC_RQSTS__MISS = 0x4100, // Number of L2 cache misses
		LLC_RQSTS__MASK__SLM_LLC_RQSTS__ANY = 0x4f00, // Number of L2 cache references
		MACHINE_CLEARS = 0xc3, // Self-Modifying Code detected
		MACHINE_CLEARS__MASK__SLM_MACHINE_CLEARS__SMC = 0x100, // Self-Modifying Code detected
		MACHINE_CLEARS__MASK__SLM_MACHINE_CLEARS__MEMORY_ORDERING = 0x200, // Number of stalled cycles due to memory ordering
		MACHINE_CLEARS__MASK__SLM_MACHINE_CLEARS__FP_ASSIST = 0x400, // Number of stalled cycle due to FPU assist
		MACHINE_CLEARS__MASK__SLM_MACHINE_CLEARS__ALL = 0x800, // Count any the machine clears
		MACHINE_CLEARS__MASK__SLM_MACHINE_CLEARS__ANY = 0x800, // Count any the machine clears
		BR_INST_RETIRED = 0xc4, // Retired branch instructions
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__ANY = 0x0, // Any retired branch instruction (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__ALL_BRANCHES = 0x0, // Any Retired branch instruction (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__ALL_TAKEN_BRANCHES = 0x8000, // Retired branch instructions (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__JCC = 0x7e00, // JCC instructions retired (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__TAKEN_JCC = 0xfe00, // Taken JCC instructions retired (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__CALL = 0xf900, // Near call instructions retired (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__REL_CALL = 0xfd00, // Near relative call instructions retired (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__IND_CALL = 0xfb00, // Near indirect call instructions retired (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__RETURN = 0xf700, // Near ret instructions retired (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__NON_RETURN_IND = 0xeb00, // Number of near indirect jmp and near indirect call instructions retired (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__FAR_BRANCH = 0xbf00, // Far branch instructions retired (Precise Event)
		BR_INST_RETIRED__MASK__SLM_BR_INST_RETIRED__FAR = 0xbf00, // Far branch instructions retired (Precise Event)
		BR_MISP_RETIRED = 0xc5, // Mispredicted retired branch instructions (Precise Event)
		BR_MISP_RETIRED__MASK__SLM_BR_MISP_RETIRED__ALL_BRANCHES = 0x0000, // All mispredicted branches (Precise Event)
		BR_MISP_RETIRED__MASK__SLM_BR_MISP_RETIRED__ANY = 0x0000, // All mispredicted branches (Precise Event)
		BR_MISP_RETIRED__MASK__SLM_BR_MISP_RETIRED__JCC = 0x7e00, // Number of mispredicted conditional branch instructions retired (Precise Event)
		BR_MISP_RETIRED__MASK__SLM_BR_MISP_RETIRED__NON_RETURN_IND = 0xeb00, // Number of mispredicted non-return branch instructions retired (Precise Event)
		BR_MISP_RETIRED__MASK__SLM_BR_MISP_RETIRED__RETURN = 0xf700, // Number of mispredicted return branch instructions retired (Precise Event)
		BR_MISP_RETIRED__MASK__SLM_BR_MISP_RETIRED__IND_CALL = 0xfb00, // Number of mispredicted indirect call branch instructions retired (Precise Event)
		BR_MISP_RETIRED__MASK__SLM_BR_MISP_RETIRED__TAKEN_JCC = 0xfe00, // Number of mispredicted taken conditional branch instructions retired (Precise Event)
		BR_MISP_INST_RETIRED = 0xc5, // Mispredicted retired branch instructions (Precise Event)
		BR_MISP_INST_RETIRED__MASK__SLM_BR_MISP_RETIRED__ALL_BRANCHES = 0x0000, // All mispredicted branches (Precise Event)
		BR_MISP_INST_RETIRED__MASK__SLM_BR_MISP_RETIRED__ANY = 0x0000, // All mispredicted branches (Precise Event)
		BR_MISP_INST_RETIRED__MASK__SLM_BR_MISP_RETIRED__JCC = 0x7e00, // Number of mispredicted conditional branch instructions retired (Precise Event)
		BR_MISP_INST_RETIRED__MASK__SLM_BR_MISP_RETIRED__NON_RETURN_IND = 0xeb00, // Number of mispredicted non-return branch instructions retired (Precise Event)
		BR_MISP_INST_RETIRED__MASK__SLM_BR_MISP_RETIRED__RETURN = 0xf700, // Number of mispredicted return branch instructions retired (Precise Event)
		BR_MISP_INST_RETIRED__MASK__SLM_BR_MISP_RETIRED__IND_CALL = 0xfb00, // Number of mispredicted indirect call branch instructions retired (Precise Event)
		BR_MISP_INST_RETIRED__MASK__SLM_BR_MISP_RETIRED__TAKEN_JCC = 0xfe00, // Number of mispredicted taken conditional branch instructions retired (Precise Event)
		MS_DECODED = 0xe7, // MS decoder
		MS_DECODED__MASK__SLM_MS_DECODED__ENTRY = 0x0100, // Number of times the MSROM starts a flow of uops
		BACLEARS = 0xe6, // Branch address calculator
		BACLEARS__MASK__SLM_BACLEARS__ANY = 0x100, // BACLEARS asserted
		BACLEARS__MASK__SLM_BACLEARS__ALL = 0x100, // BACLEARS asserted
		BACLEARS__MASK__SLM_BACLEARS__RETURN = 0x800, // Number of baclears for return branches
		BACLEARS__MASK__SLM_BACLEARS__COND = 0x1000, // Number of baclears for conditional branches
		NO_ALLOC_CYCLES = 0xca, // Front-end allocation
		NO_ALLOC_CYCLES__MASK__SLM_NO_ALLOC_CYCLES__ANY = 0x3f00, // Number of cycles when the front-end does not provide any instructions to be allocated for any reason
		NO_ALLOC_CYCLES__MASK__SLM_NO_ALLOC_CYCLES__ALL = 0x3f00, // Number of cycles when the front-end does not provide any instructions to be allocated for any reason
		NO_ALLOC_CYCLES__MASK__SLM_NO_ALLOC_CYCLES__NOT_DELIVERED = 0x5000, // Number of cycles when the front-end does not provide any instructions to be allocated but the back-end is not stalled
		NO_ALLOC_CYCLES__MASK__SLM_NO_ALLOC_CYCLES__MISPREDICTS = 0x400, // Number of cycles when no uops are allocated and the alloc pipe is stalled waiting for a mispredicted jump to retire
		NO_ALLOC_CYCLES__MASK__SLM_NO_ALLOC_CYCLES__RAT_STALL = 0x2000, // Number of cycles when no uops are allocated and a RAT stall is asserted
		NO_ALLOC_CYCLES__MASK__SLM_NO_ALLOC_CYCLES__ROB_FULL = 0x0100, // Number of cycles when no uops are allocated and the ROB is full (less than 2 entries available)
		CPU_CLK_UNHALTED = 0x3c, // Core cycles when core is not halted
		CPU_CLK_UNHALTED__MASK__SLM_CPU_CLK_UNHALTED__CORE_P = 0x0, // Core cycles when core is not halted
		CPU_CLK_UNHALTED__MASK__SLM_CPU_CLK_UNHALTED__BUS = 0x100, // Bus cycles when core is not halted. This event can give a measurement of the elapsed time. This events has a constant ratio with CPU_CLK_UNHALTED:REF event
		CPU_CLK_UNHALTED__MASK__SLM_CPU_CLK_UNHALTED__REF = 0x100, // Number of reference cycles that the core is not in a halted state. The core enters the halted state when it is running the HLT instruction. In mobile systems
		MEM_UOP_RETIRED = 0x4, // Retired loads micro-ops
		MEM_UOP_RETIRED__MASK__SLM_MEM_UOP_RETIRED__LD_DCU_MISS = 0x100, // Number of load uops retired that miss in L1 data cache. Note that prefetch misses will not be counted
		MEM_UOP_RETIRED__MASK__SLM_MEM_UOP_RETIRED__LD_L2_HIT = 0x200, // Number of load uops retired that hit L2 (Precise Event)
		MEM_UOP_RETIRED__MASK__SLM_MEM_UOP_RETIRED__LD_L2_MISS = 0x400, // Number of load uops retired that missed L2 (Precise Event)
		MEM_UOP_RETIRED__MASK__SLM_MEM_UOP_RETIRED__LD_DTLB_MISS = 0x800, // Number of load uops retired that had a DTLB miss (Precise Event)
		MEM_UOP_RETIRED__MASK__SLM_MEM_UOP_RETIRED__LD_UTLB_MISS = 0x1000, // Number of load uops retired that had a UTLB miss
		MEM_UOP_RETIRED__MASK__SLM_MEM_UOP_RETIRED__HITM = 0x2000, // Number of load uops retired that got data from the other core or from the other module and the line was modified (Precise Event)
		MEM_UOP_RETIRED__MASK__SLM_MEM_UOP_RETIRED__ANY_LD = 0x4000, // Number of load uops retired
		MEM_UOP_RETIRED__MASK__SLM_MEM_UOP_RETIRED__ANY_ST = 0x8000, // Number of store uops retired
		CORE_REJECT_L2Q = 0x31, // Demand and L1 prefetcher requests rejected by L2
		CORE_REJECT_L2Q__MASK__SLM_CORE_REJECT_L2Q__ALL = 0x0000, // Number of requests that were not accepted into the L2Q because the L2Q was FULL
		REHABQ = 0x03, // Memory reference queue
		REHABQ__MASK__SLM_REHABQ__LD_BLOCK_ST_FORWARD = 0x0100, // Number of retired loads that were prohibited from receiving forwarded data from the store because of address mismatch (Precise Event)
		REHABQ__MASK__SLM_REHABQ__LD_BLOCK_STD_NOTREADY = 0x0200, // Number of times forward was technically possible but did not occur because the store data was not available at the right time
		REHABQ__MASK__SLM_REHABQ__ST_SPLITS = 0x0400, // Number of retired stores that experienced cache line boundary splits
		REHABQ__MASK__SLM_REHABQ__LD_SPLITS = 0x0800, // Number of retired loads that experienced cache line boundary splits (Precise Event)
		REHABQ__MASK__SLM_REHABQ__LOCK = 0x1000, // Number of retired memory operations with lock semantics. These are either implicit locked instructions such as XCHG or instructions with an explicit LOCK prefix
		REHABQ__MASK__SLM_REHABQ__STA_FULL = 0x2000, // Number of retired stores that are delayed because there is not a store address buffer available
		REHABQ__MASK__SLM_REHABQ__ANY_LD = 0x4000, // Number of load uops reissued from RehabQ
		REHABQ__MASK__SLM_REHABQ__ANY_ST = 0x8000, // Number of store uops reissued from RehabQ
		FETCH_STALL = 0x86, // Fetch stalls
		FETCH_STALL__MASK__SLM_FETCH_STALL__ICACHE_FILL_PENDING_CYCLES = 0x0400, // Number of cycles the NIP stalls because of an icache miss. This is a cumulative count of cycles the NIP stalled for all icache misses
		PAGE_WALKS = 0x5, // Page walker
		PAGE_WALKS__MASK__SLM_PAGE_WALKS__CYCLES = 0x0300, // Total cycles for all the page walks. (I-side and D-side)
		PAGE_WALKS__MASK__SLM_PAGE_WALKS__WALKS = 0x0300 | INTEL_X86_MOD_EDGE, // Total number of page walks. (I-side and D-side)
		PAGE_WALKS__MASK__SLM_PAGE_WALKS__D_SIDE_CYCLES = 0x0100, // Number of cycles when a D-side page walk is in progress
		PAGE_WALKS__MASK__SLM_PAGE_WALKS__D_SIDE_WALKS = 0x0100 | INTEL_X86_MOD_EDGE, // Number of D-side page walks
		PAGE_WALKS__MASK__SLM_PAGE_WALKS__I_SIDE_CYCLES = 0x0200, // Number of cycles when a I-side page walk is in progress
		PAGE_WALKS__MASK__SLM_PAGE_WALKS__I_SIDE_WALKS = 0x0200 | INTEL_X86_MOD_EDGE, // Number of I-side page walks
		OFFCORE_RESPONSE_0 = 0x01b7, // Offcore response event (must provide at least one request type and either any_response or any combination of supplier + snoop)
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__DMND_DATA_RD = 1ULL << (0 + 8), // Request: number of demand and DCU prefetch data reads of full and partial cachelines as well as demand data page table entry cacheline reads. Does not count L2 data read prefetches or instruction fetches
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__DMND_RFO = 1ULL << (1 + 8), // Request: number of demand and DCU prefetch reads for ownership (RFO) requests generated by a write to data cacheline. Does not count L2 RFO prefetches
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__DMND_IFETCH = 1ULL << (2 + 8), // Request: number of demand and DCU prefetch instruction cacheline reads. Does not count L2 code read prefetches
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__WB = 1ULL << (3 + 8), // Request: number of writebacks (modified to exclusive) transactions
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__PF_L2_DATA_RD = 1ULL << (4 + 8), // Request: number of data cacheline reads generated by L2 prefetchers
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__PF_RFO = 1ULL << (5 + 8), // Request: number of RFO requests generated by L2 prefetchers
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__PF_IFETCH = 1ULL << (6 + 8), // Request: number of code reads generated by L2 prefetchers
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__PARTIAL_READ = 1ULL << (7 + 8), // Request: number of demand reads of partial cachelines (including UC
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__PARTIAL_WRITE = 1ULL << (8 + 8), // Request: number of demand RFO requests to write to partial cache lines (includes UC
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__UC_IFETCH = 1ULL << (9 + 8), // Request: number of UC instruction fetches
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__BUS_LOCKS = 1ULL << (10 + 8), // Request: number bus lock and split lock requests
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__STRM_ST = 1ULL << (11 + 8), // Request: number of streaming store requests
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__SW_PREFETCH = 1ULL << (12 + 8), // Request: number of software prefetch requests
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__PF_L1_DATA_RD = 1ULL << (13 + 8), // Request: number of data cacheline reads generated by L1 prefetchers
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__PARTIAL_STRM_ST = 1ULL << (14 + 8), // Request: number of partial streaming store requests
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__OTHER = 1ULL << (15+8), // Request: counts one any other request that crosses IDI
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__ANY_IFETCH = (1ULL << 6 | 1ULL << 2 | 1ULL << 9)  << 8, // Request: combination of PF_IFETCH | DMND_IFETCH | UC_IFETCH
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__ANY_REQUEST = 0xffff00, // Request: combination of all request umasks
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__ANY_DATA = (1ULL << 0 | 1ULL << 4 | 1ULL << 13) << 8, // Request: combination of DMND_DATA | PF_L1_DATA_RD | PF_L2_DATA_RD
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__ANY_RFO = (1ULL << 1 | 1ULL << 5) << 8, // Request: combination of DMND_RFO | PF_RFO
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__ANY_RESPONSE = 1ULL << (16+8), // Response: count any response type
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__L2_HIT = 1ULL << (18+8), // Supplier: counts L2 hits in M/E/S states
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__SNP_NONE = 1ULL << (31+8), // Snoop: counts number of times no snoop-related information is available
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__SNP_MISS = 1ULL << (33+8), // Snoop: counts number of times a snoop was needed and it missed all snooped caches
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__SNP_HIT = 1ULL << (34+8), // Snoop: counts number of times a snoop hits in the other module where no modified copies were found in the L1 cache of the other core
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__SNP_HITM = 1ULL << (36+8), // Snoop: counts number of times a snoop hits in the other module where modified copies were found in the L1 cache of the other core
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__NON_DRAM = 1ULL << (37+8), // Snoop:  counts number of times target was a non-DRAM system address. This includes MMIO transactions
		OFFCORE_RESPONSE_0__MASK__SLM_OFFCORE_RESPONSE__SNP_ANY = 0x7dULL << (31+8), // Snoop: any snoop reason
		OFFCORE_RESPONSE_1 = 0x02b7, // Offcore response event (must provide at least one request type and either any_response or any combination of supplier + snoop)
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__DMND_DATA_RD = 1ULL << (0 + 8), // Request: number of demand and DCU prefetch data reads of full and partial cachelines as well as demand data page table entry cacheline reads. Does not count L2 data read prefetches or instruction fetches
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__DMND_RFO = 1ULL << (1 + 8), // Request: number of demand and DCU prefetch reads for ownership (RFO) requests generated by a write to data cacheline. Does not count L2 RFO prefetches
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__DMND_IFETCH = 1ULL << (2 + 8), // Request: number of demand and DCU prefetch instruction cacheline reads. Does not count L2 code read prefetches
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__WB = 1ULL << (3 + 8), // Request: number of writebacks (modified to exclusive) transactions
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__PF_L2_DATA_RD = 1ULL << (4 + 8), // Request: number of data cacheline reads generated by L2 prefetchers
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__PF_RFO = 1ULL << (5 + 8), // Request: number of RFO requests generated by L2 prefetchers
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__PF_IFETCH = 1ULL << (6 + 8), // Request: number of code reads generated by L2 prefetchers
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__PARTIAL_READ = 1ULL << (7 + 8), // Request: number of demand reads of partial cachelines (including UC
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__PARTIAL_WRITE = 1ULL << (8 + 8), // Request: number of demand RFO requests to write to partial cache lines (includes UC
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__UC_IFETCH = 1ULL << (9 + 8), // Request: number of UC instruction fetches
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__BUS_LOCKS = 1ULL << (10 + 8), // Request: number bus lock and split lock requests
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__STRM_ST = 1ULL << (11 + 8), // Request: number of streaming store requests
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__SW_PREFETCH = 1ULL << (12 + 8), // Request: number of software prefetch requests
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__PF_L1_DATA_RD = 1ULL << (13 + 8), // Request: number of data cacheline reads generated by L1 prefetchers
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__PARTIAL_STRM_ST = 1ULL << (14 + 8), // Request: number of partial streaming store requests
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__OTHER = 1ULL << (15+8), // Request: counts one any other request that crosses IDI
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__ANY_IFETCH = (1ULL << 6 | 1ULL << 2 | 1ULL << 9)  << 8, // Request: combination of PF_IFETCH | DMND_IFETCH | UC_IFETCH
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__ANY_REQUEST = 0xffff00, // Request: combination of all request umasks
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__ANY_DATA = (1ULL << 0 | 1ULL << 4 | 1ULL << 13) << 8, // Request: combination of DMND_DATA | PF_L1_DATA_RD | PF_L2_DATA_RD
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__ANY_RFO = (1ULL << 1 | 1ULL << 5) << 8, // Request: combination of DMND_RFO | PF_RFO
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__ANY_RESPONSE = 1ULL << (16+8), // Response: count any response type
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__L2_HIT = 1ULL << (18+8), // Supplier: counts L2 hits in M/E/S states
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__SNP_NONE = 1ULL << (31+8), // Snoop: counts number of times no snoop-related information is available
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__SNP_MISS = 1ULL << (33+8), // Snoop: counts number of times a snoop was needed and it missed all snooped caches
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__SNP_HIT = 1ULL << (34+8), // Snoop: counts number of times a snoop hits in the other module where no modified copies were found in the L1 cache of the other core
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__SNP_HITM = 1ULL << (36+8), // Snoop: counts number of times a snoop hits in the other module where modified copies were found in the L1 cache of the other core
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__NON_DRAM = 1ULL << (37+8), // Snoop:  counts number of times target was a non-DRAM system address. This includes MMIO transactions
		OFFCORE_RESPONSE_1__MASK__SLM_OFFCORE_RESPONSE__SNP_ANY = 0x7dULL << (31+8), // Snoop: any snoop reason
		
	};
};

namespace slm = optkit::intel::slm;
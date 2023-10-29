#include <cstdint>
#include <intel_priv.hh>
namespace optkit::intel::hswep_unc_c{
	enum hswep_unc_c : uint64_t {
		BL = 0x00, // C-box Uncore clockticks
		UNC_C_COUNTER0_OCCUPANCY = 0x1f, // Counter 0 occupancy. Counts the occupancy related information by filtering CB0 occupancy count captured in counter 0.
		UNC_C_LLC_LOOKUP = 0x34, // Cache lookups
		UNC_C_LLC_LOOKUP__MASK__HSWEP_UNC_C_LLC_LOOKUP__DATA_READ = 0x300, // Data read requests
		UNC_C_LLC_LOOKUP__MASK__HSWEP_UNC_C_LLC_LOOKUP__WRITE = 0x500, // Write requests. Includes all write transactions (cached
		UNC_C_LLC_LOOKUP__MASK__HSWEP_UNC_C_LLC_LOOKUP__REMOTE_SNOOP = 0x900, // External snoop request
		UNC_C_LLC_LOOKUP__MASK__HSWEP_UNC_C_LLC_LOOKUP__ANY = 0x1100, // Any request
		UNC_C_LLC_LOOKUP__MASK__HSWEP_UNC_C_LLC_LOOKUP__NID = 0x4100, // X modifier)
		UNC_C_LLC_VICTIMS = 0x37, // Lines victimized
		UNC_C_LLC_VICTIMS__MASK__HSWEP_UNC_C_LLC_VICTIMS__STATE_M = 0x100, // Lines in M state
		UNC_C_LLC_VICTIMS__MASK__HSWEP_UNC_C_LLC_VICTIMS__STATE_E = 0x200, // Lines in E state
		UNC_C_LLC_VICTIMS__MASK__HSWEP_UNC_C_LLC_VICTIMS__STATE_S = 0x400, // Lines in S state
		UNC_C_LLC_VICTIMS__MASK__HSWEP_UNC_C_LLC_VICTIMS__STATE_F = 0x800, // Lines in F state
		UNC_C_LLC_VICTIMS__MASK__HSWEP_UNC_C_LLC_VICTIMS__MISS = 0x1000, // TBD
		UNC_C_LLC_VICTIMS__MASK__HSWEP_UNC_C_LLC_VICTIMS__NID = 0x4000, // X modifier)
		UNC_C_MISC = 0x39, // Miscellaneous C-Box events
		UNC_C_MISC__MASK__HSWEP_UNC_C_MISC__BL = 0x400, // Onto BL ring
		UNC_C_MISC__MASK__HSWEP_UNC_C_MISC__WC_ALIASING = 0x200, // Counts the number of times a USWC write (WCIL(F)) transaction hits in the LLC in M state
		UNC_C_MISC__MASK__HSWEP_UNC_C_MISC__STARTED = 0x400, // TBD
		UNC_C_MISC__MASK__HSWEP_UNC_C_MISC__RFO_HIT_S = 0x800, // Counts the number of times that an RFO hits in S state. This is useful for determining if it might be good for a workload to use RSPIWB instead of RSPSWB
		UNC_C_MISC__MASK__HSWEP_UNC_C_MISC__CVZERO_PREFETCH_VICTIM = 0x1000, // 0 (core valid)
		UNC_C_MISC__MASK__HSWEP_UNC_C_MISC__CVZERO_PREFETCH_MISS = 0x2000, // 0 (core valid)
		UNC_C_RING_AD_USED = 0x1b, // Address ring in use. Counts number of cycles ring is being used at this ring stop
		UNC_C_RING_AD_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP_EVEN = 0x100, // Up and Even ring polarity filter
		UNC_C_RING_AD_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP_ODD = 0x200, // Up and odd ring polarity filter
		UNC_C_RING_AD_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN_EVEN = 0x400, // Down and even ring polarity filter
		UNC_C_RING_AD_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN_ODD = 0x800, // Down and odd ring polarity filter
		UNC_C_RING_AD_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP = 0x3300, // Up ring polarity filter
		UNC_C_RING_AD_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN = 0xcc00, // Down ring polarity filter
		UNC_C_RING_AD_USED__MASK__HSWEP_UNC_C_RING_AD_USED__ALL = 0xcc00, // up or down ring polarity filter
		UNC_C_RING_AK_USED = 0x1c, // Acknowledgement ring in use. Counts number of cycles ring is being used at this ring stop
		UNC_C_RING_AK_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP_EVEN = 0x100, // Up and Even ring polarity filter
		UNC_C_RING_AK_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP_ODD = 0x200, // Up and odd ring polarity filter
		UNC_C_RING_AK_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN_EVEN = 0x400, // Down and even ring polarity filter
		UNC_C_RING_AK_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN_ODD = 0x800, // Down and odd ring polarity filter
		UNC_C_RING_AK_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP = 0x3300, // Up ring polarity filter
		UNC_C_RING_AK_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN = 0xcc00, // Down ring polarity filter
		UNC_C_RING_AK_USED__MASK__HSWEP_UNC_C_RING_AD_USED__ALL = 0xcc00, // up or down ring polarity filter
		UNC_C_RING_BL_USED = 0x1d, // Bus or Data ring in use. Counts number of cycles ring is being used at this ring stop
		UNC_C_RING_BL_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP_EVEN = 0x100, // Up and Even ring polarity filter
		UNC_C_RING_BL_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP_ODD = 0x200, // Up and odd ring polarity filter
		UNC_C_RING_BL_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN_EVEN = 0x400, // Down and even ring polarity filter
		UNC_C_RING_BL_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN_ODD = 0x800, // Down and odd ring polarity filter
		UNC_C_RING_BL_USED__MASK__HSWEP_UNC_C_RING_AD_USED__UP = 0x3300, // Up ring polarity filter
		UNC_C_RING_BL_USED__MASK__HSWEP_UNC_C_RING_AD_USED__DOWN = 0xcc00, // Down ring polarity filter
		UNC_C_RING_BL_USED__MASK__HSWEP_UNC_C_RING_AD_USED__ALL = 0xcc00, // up or down ring polarity filter
		UNC_C_RING_BOUNCES = 0x05, // Number of LLC responses that bounced in the ring
		UNC_C_RING_BOUNCES__MASK__HSWEP_UNC_C_RING_BOUNCES__AD_IRQ = 0x200, // TBD
		UNC_C_RING_BOUNCES__MASK__HSWEP_UNC_C_RING_BOUNCES__AK = 0x400, // Acknowledgments to core
		UNC_C_RING_BOUNCES__MASK__HSWEP_UNC_C_RING_BOUNCES__BL = 0x800, // Data responses to core
		UNC_C_RING_BOUNCES__MASK__HSWEP_UNC_C_RING_BOUNCES__IV = 0x1000, // Snoops of processor cache
		UNC_C_FAST_ASSERTED = 0x09, // Number of cycles in which the local distress or incoming distress signals are asserted (FaST). Incoming distress includes both up and down
		UNC_C_BOUNCE_CONTROL = 0x0a, // Bounce control
		UNC_C_RING_IV_USED = 0x1e, // Invalidate ring in use. Counts number of cycles ring is being used at this ring stop
		UNC_C_RING_IV_USED__MASK__HSWEP_UNC_C_RING_IV_USED__ANY = 0x0f00, // Any filter
		UNC_C_RING_IV_USED__MASK__HSWEP_UNC_C_RING_IV_USED__UP = 0x0300, // Filter on any up polarity
		UNC_C_RING_IV_USED__MASK__HSWEP_UNC_C_RING_IV_USED__DN = 0x0c00, // Filter on any up polarity
		UNC_C_RING_IV_USED__MASK__HSWEP_UNC_C_RING_IV_USED__DOWN = 0xcc00, // Filter on any down polarity
		UNC_C_RING_SRC_THRTL = 0x07, // TDB
		UNC_C_RXR_EXT_STARVED = 0x12, // Ingress arbiter blocking cycles
		UNC_C_RXR_EXT_STARVED__MASK__HSWEP_UNC_C_RXR_EXT_STARVED__IRQ = 0x100, // Irq externally starved
		UNC_C_RXR_EXT_STARVED__MASK__HSWEP_UNC_C_RXR_EXT_STARVED__IPQ = 0x200, // IPQ externally starved
		UNC_C_RXR_EXT_STARVED__MASK__HSWEP_UNC_C_RXR_EXT_STARVED__PRQ = 0x400, // IRQ is blocking the ingress queue and causing starvation
		UNC_C_RXR_EXT_STARVED__MASK__HSWEP_UNC_C_RXR_EXT_STARVED__ISMQ_BIDS = 0x800, // Number of time the ISMQ bids
		UNC_C_RXR_INSERTS = 0x13, // Ingress Allocations
		UNC_C_RXR_INSERTS__MASK__HSWEP_UNC_C_RXR_INSERTS__IRQ = 0x100, // IRQ
		UNC_C_RXR_INSERTS__MASK__HSWEP_UNC_C_RXR_INSERTS__IRQ_REJECTED = 0x200, // IRQ rejected
		UNC_C_RXR_INSERTS__MASK__HSWEP_UNC_C_RXR_INSERTS__IPQ = 0x400, // IPQ
		UNC_C_RXR_INSERTS__MASK__HSWEP_UNC_C_RXR_INSERTS__PRQ = 0x1000, // PRQ
		UNC_C_RXR_INSERTS__MASK__HSWEP_UNC_C_RXR_INSERTS__PRQ_REJECTED = 0x2000, // PRQ rejected
		UNC_C_RXR_IPQ_RETRY = 0x31, // Probe Queue Retries
		UNC_C_RXR_IPQ_RETRY__MASK__HSWEP_UNC_C_RXR_IPQ_RETRY__ADDR_CONFLICT = 0x400, // Address conflict
		UNC_C_RXR_IPQ_RETRY__MASK__HSWEP_UNC_C_RXR_IPQ_RETRY__ANY = 0x100, // Any Reject
		UNC_C_RXR_IPQ_RETRY__MASK__HSWEP_UNC_C_RXR_IPQ_RETRY__FULL = 0x200, // No Egress credits
		UNC_C_RXR_IPQ_RETRY__MASK__HSWEP_UNC_C_RXR_IPQ_RETRY__QPI_CREDITS = 0x1000, // No QPI credits
		UNC_C_RXR_IPQ_RETRY2 = 0x28, // Probe Queue Retries
		UNC_C_RXR_IPQ_RETRY2__MASK__HSWEP_UNC_C_RXR_IPQ_RETRY2__AD_SBO = 0x100, // Count number of time that a request from the IPQ was retried because it lacked credits to send an AD packet to SBO
		UNC_C_RXR_IPQ_RETRY2__MASK__HSWEP_UNC_C_RXR_IPQ_RETRY2__TARGET = 0x100, // Count number of times that a request from the IPQ was retried filtered by the target NodeId
		UNC_C_RXR_IRQ_RETRY = 0x32, // Ingress Request Queue Rejects
		UNC_C_RXR_IRQ_RETRY__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY__ADDR_CONFLICT = 0x400, // Address conflict
		UNC_C_RXR_IRQ_RETRY__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY__ANY = 0x100, // Any reject
		UNC_C_RXR_IRQ_RETRY__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY__FULL = 0x200, // No Egress credits
		UNC_C_RXR_IRQ_RETRY__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY__QPI_CREDITS = 0x1000, // No QPI credits
		UNC_C_RXR_IRQ_RETRY__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY__RTID = 0x800, // No RTIDs
		UNC_C_RXR_IRQ_RETRY__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY__IIO_CREDITS = 0x2000, // No IIO Credits
		UNC_C_RXR_IRQ_RETRY2 = 0x29, // Ingress Request Queue Rejects
		UNC_C_RXR_IRQ_RETRY2__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY2__AD_SBO = 0x100, // Count number of time that a request from the IRQ was retried because it lacked credits to send an AD packet to SBO
		UNC_C_RXR_IRQ_RETRY2__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY2__BL_SBO = 0x100, // Count number of time that a request from the IRQ was retried because it lacked credits to send an BL packet to SBO
		UNC_C_RXR_IRQ_RETRY2__MASK__HSWEP_UNC_C_RXR_IRQ_RETRY2__TARGET = 0x100, // Count number of times that a request from the IRQ was retried filtered by the target NodeId
		UNC_C_RXR_ISMQ_RETRY = 0x33, // ISMQ Retries
		UNC_C_RXR_ISMQ_RETRY__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY__ANY = 0x100, // Any reject
		UNC_C_RXR_ISMQ_RETRY__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY__FULL = 0x200, // No Egress credits
		UNC_C_RXR_ISMQ_RETRY__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY__IIO_CREDITS = 0x2000, // No IIO credits
		UNC_C_RXR_ISMQ_RETRY__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY__QPI_CREDITS = 0x1000, // NO QPI credits
		UNC_C_RXR_ISMQ_RETRY__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY__RTID = 0x800, // No RTIDs
		UNC_C_RXR_ISMQ_RETRY__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY__WB_CREDITS = 0x8000, // No WB credits
		UNC_C_RXR_ISMQ_RETRY2 = 0x2a, // ISMQ Retries
		UNC_C_RXR_ISMQ_RETRY2__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY2__AD_SBO = 0x100, // Count number of time that a request from the ISMQ was retried because it lacked credits to send an AD packet to SBO
		UNC_C_RXR_ISMQ_RETRY2__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY2__BL_SBO = 0x100, // Count number of time that a request from the ISMQ was retried because it lacked credits to send an BL packet to SBO
		UNC_C_RXR_ISMQ_RETRY2__MASK__HSWEP_UNC_C_RXR_ISMQ_RETRY2__TARGET = 0x100, // Count number of times that a request from the ISMQ was retried filtered by the target NodeId
		UNC_C_RXR_OCCUPANCY = 0x11, // Ingress Occupancy
		UNC_C_RXR_OCCUPANCY__MASK__HSWEP_UNC_C_RXR_INSERTS__IRQ = 0x100, // IRQ
		UNC_C_RXR_OCCUPANCY__MASK__HSWEP_UNC_C_RXR_INSERTS__IRQ_REJECTED = 0x200, // IRQ rejected
		UNC_C_RXR_OCCUPANCY__MASK__HSWEP_UNC_C_RXR_INSERTS__IPQ = 0x400, // IPQ
		UNC_C_RXR_OCCUPANCY__MASK__HSWEP_UNC_C_RXR_INSERTS__PRQ = 0x1000, // PRQ
		UNC_C_RXR_OCCUPANCY__MASK__HSWEP_UNC_C_RXR_INSERTS__PRQ_REJECTED = 0x2000, // PRQ rejected
		UNC_C_TOR_INSERTS = 0x35, // TOR Inserts
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__OPCODE = 0x100, // Number of transactions inserted into the TOR that match an opcode (must provide opc_* umask)
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__MISS_OPCODE = 0x300, // Number of miss transactions inserted into the TOR that match an opcode (must provide opc_* umask)
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__EVICTION = 0x400, // Number of Evictions transactions inserted into TOR
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__ALL = 0x800, // Number of transactions inserted in TOR
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__WB = 0x1000, // Number of write transactions inserted into the TOR
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__LOCAL_OPCODE = 0x2100, // Number of opcode-matched transactions inserted into the TOR that are satisfied by locally homed memory
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__MISS_LOCAL_OPCODE = 0x2300, // Number of miss opcode-matched transactions inserted into the TOR that are satisfied by locally homed memory
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__LOCAL = 0x2800, // Number of transactions inserted into the TOR that are satisfied by locally homed memory
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__MISS_LOCAL = 0x2a00, // Number of miss transactions inserted into the TOR that are satisfied by locally homed memory
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__NID_OPCODE = 0x4100, // X modifier)
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__NID_MISS_OPCODE = 0x4300, // X modifier)
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__NID_EVICTION = 0x4400, // X modifier)
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__NID_ALL = 0x4800, // X modifier)
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__NID_MISS_ALL = 0x4a00, // X modifier)
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__NID_WB = 0x5000, // X modifier)
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__REMOTE_OPCODE = 0x8100, // Number of opcode-matched transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__MISS_REMOTE_OPCODE = 0x8300, // Number of miss opcode-matched transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__REMOTE = 0x8800, // Number of transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_INSERTS__MASK__HSWEP_UNC_C_TOR_INSERTS__MISS_REMOTE = 0x8a00, // Number of miss transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_OCCUPANCY = 0x36, // TOR Occupancy
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__OPCODE = 0x100, // Number of TOR entries that match an opcode (must provide opc_* umask)
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__MISS_OPCODE = 0x300, // Number of TOR entries that match a NID and an opcode (must provide opc_* umask)
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__EVICTION = 0x400, // Number of outstanding eviction transactions in the TOR
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__ALL = 0x800, // All valid TOR entries
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__MISS_ALL = 0xa00, // Number of outstanding miss requests in the TOR
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__WB = 0x1000, // Number of write transactions in the TOR. Does not include RFO
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__LOCAL_OPCODE = 0x2100, // Number of opcode-matched transactions in the TOR that are satisfied by locally homed memory
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__MISS_LOCAL_OPCODE = 0x2300, // Number of miss opcode-matched transactions in the TOR that are satisfied by locally homed memory
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__LOCAL = 0x2800, // Number of transactions in the TOR that are satisfied by locally homed memory
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__MISS_LOCAL = 0x2a00, // Number of miss transactions in the TOR that are satisfied by locally homed memory
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__NID_OPCODE = 0x4100, // X modifier and opc_* umask)
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__NID_MISS_OPCODE = 0x4300, // X modifier and opc_* umask)
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__NID_EVICTION = 0x4400, // X modifier)
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__NID_ALL = 0x4800, // X modifier)
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__NID_MISS_ALL = 0x4a00, // X modifier)
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__NID_WB = 0x5000, // X modifier)
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__REMOTE_OPCODE = 0x8100, // Number of opcode-matched transactions in the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__MISS_REMOTE_OPCODE = 0x8300, // Number of miss opcode-matched transactions in the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__REMOTE = 0x8800, // Number of transactions in the TOR that are satisfied by remote caches or memory
		UNC_C_TOR_OCCUPANCY__MASK__HSWEP_UNC_C_TOR_OCCUPANCY__MISS_REMOTE = 0x8a00, // Number of miss transactions inserted into the TOR that are satisfied by remote caches or memory
		UNC_C_TXR_ADS_USED = 0x04, // Egress events
		UNC_C_TXR_ADS_USED__MASK__HSWEP_UNC_C_TXR_ADS_USED__AD = 0x100, // onto AD ring
		UNC_C_TXR_ADS_USED__MASK__HSWEP_UNC_C_TXR_ADS_USED__AK = 0x200, // Onto AK ring
		UNC_C_TXR_INSERTS = 0x02, // Egress allocations
		UNC_C_TXR_INSERTS__MASK__HSWEP_UNC_C_TXR_INSERTS__AD_CACHE = 0x100, // Counts the number of ring transactions from Cachebo to AD ring
		UNC_C_TXR_INSERTS__MASK__HSWEP_UNC_C_TXR_INSERTS__AK_CACHE = 0x200, // Counts the number of ring transactions from Cachebo to AK ring
		UNC_C_TXR_INSERTS__MASK__HSWEP_UNC_C_TXR_INSERTS__BL_CACHE = 0x400, // Counts the number of ring transactions from Cachebo to BL ring
		UNC_C_TXR_INSERTS__MASK__HSWEP_UNC_C_TXR_INSERTS__IV_CACHE = 0x800, // Counts the number of ring transactions from Cachebo ton IV ring
		UNC_C_TXR_INSERTS__MASK__HSWEP_UNC_C_TXR_INSERTS__AD_CORE = 0x1000, // Counts the number of ring transactions from Corebo to AD ring
		UNC_C_TXR_INSERTS__MASK__HSWEP_UNC_C_TXR_INSERTS__AK_CORE = 0x2000, // Counts the number of ring transactions from Corebo to AK ring
		UNC_C_TXR_INSERTS__MASK__HSWEP_UNC_C_TXR_INSERTS__BL_CORE = 0x4000, // Counts the number of ring transactions from Corebo to BL ring
		UNC_C_SBO_CREDITS_ACQUIRED = 0x3d, // SBO credits acquired
		UNC_C_SBO_CREDITS_ACQUIRED__MASK__HSWEP_UNC_C_SBO_CREDITS_ACQUIRED__AD = 0x100, // for AD ring
		UNC_C_SBO_CREDITS_OCCUPANCY = 0x3e, // SBO credits occupancy
		UNC_C_SBO_CREDITS_OCCUPANCY__MASK__HSWEP_UNC_C_SBO_CREDITS_ACQUIRED__AD = 0x100, // for AD ring
		
	};
};

namespace hswep_unc_c = optkit::intel::hswep_unc_c;
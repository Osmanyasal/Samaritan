#pragma once
#include <cstdint>
#include "intel_priv.hh"
namespace optkit::intel::ivbep_unc_q{
	enum ivbep_unc_q : uint64_t {
		UNC_Q_CLOCKTICKS = 0x14, // Number of qfclks
		UNC_Q_CTO_COUNT = 0x38 | (1ULL << 21), // Count of CTO Events
		UNC_Q_DIRECT2CORE = 0x13, // Direct 2 Core Spawning
		UNC_Q_DIRECT2CORE__MASK__IVBEP_UNC_Q_DIRECT2CORE__FAILURE_CREDITS = 0x200, // Number of spawn failures due to lack of Egress credits
		UNC_Q_DIRECT2CORE__MASK__IVBEP_UNC_Q_DIRECT2CORE__FAILURE_CREDITS_RBT = 0x800, // Number of spawn failures due to lack of Egress credit and route-back table (RBT) bit was not set
		UNC_Q_DIRECT2CORE__MASK__IVBEP_UNC_Q_DIRECT2CORE__FAILURE_RBT_HIT = 0x400, // Number of spawn failures because route-back table (RBT) specified that the transaction should not trigger a direct2core transaction
		UNC_Q_DIRECT2CORE__MASK__IVBEP_UNC_Q_DIRECT2CORE__SUCCESS_RBT_HIT = 0x100, // Number of spawn successes
		UNC_Q_DIRECT2CORE__MASK__IVBEP_UNC_Q_DIRECT2CORE__FAILURE_MISS = 0x1000, // Number of spawn failures due to RBT tag not matching although the valid bit was set and there was enough Egress credits
		UNC_Q_DIRECT2CORE__MASK__IVBEP_UNC_Q_DIRECT2CORE__FAILURE_CREDITS_MISS = 0x2000, // Number of spawn failures due to RBT tag not matching and they were not enough Egress credits. The valid bit was set
		UNC_Q_DIRECT2CORE__MASK__IVBEP_UNC_Q_DIRECT2CORE__FAILURE_RBT_MISS = 0x4000, // Number of spawn failures due to RBT tag not matching
		UNC_Q_DIRECT2CORE__MASK__IVBEP_UNC_Q_DIRECT2CORE__FAILURE_CREDITS_RBT_MISS = 0x8000, // Number of spawn failures due to RBT tag not matching
		UNC_Q_L1_POWER_CYCLES = 0x12, // Cycles in L1
		UNC_Q_RXL0P_POWER_CYCLES = 0x10, // Cycles in L0p
		UNC_Q_RXL0_POWER_CYCLES = 0xf, // Cycles in L0
		UNC_Q_RXL_BYPASSED = 0x9, // Rx Flit Buffer Bypassed
		UNC_Q_RXL_CREDITS_CONSUMED_VN0 = 0x1e | (1ULL << 21), // VN0 Credit Consumed
		UNC_Q_RXL_CREDITS_CONSUMED_VN0__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN0__DRS = 0x100, // Number of times VN0 consumed for DRS message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN0__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN0__HOM = 0x800, // Number of times VN0 consumed for HOM message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN0__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN0__NCB = 0x200, // Number of times VN0 consumed for NCB message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN0__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN0__NCS = 0x400, // Number of times VN0 consumed for NCS message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN0__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN0__NDR = 0x2000, // Number of times VN0 consumed for NDR message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN0__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN0__SNP = 0x1000, // Number of times VN0 consumed for SNP message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN1 = 0x39 | (1ULL << 21), // VN1 Credit Consumed
		UNC_Q_RXL_CREDITS_CONSUMED_VN1__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN1__DRS = 0x100, // Number of times VN1 consumed for DRS message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN1__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN1__HOM = 0x800, // Number of times VN1 consumed for HOM message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN1__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN1__NCB = 0x200, // Number of times VN1 consumed for NCB message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN1__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN1__NCS = 0x400, // Number of times VN1 consumed for NCS message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN1__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN1__NDR = 0x2000, // Number of times VN1 consumed for NDR message class
		UNC_Q_RXL_CREDITS_CONSUMED_VN1__MASK__IVBEP_UNC_Q_RXL_CREDITS_CONSUMED_VN1__SNP = 0x1000, // Number of times VN1 consumed for SNP message class
		UNC_Q_RXL_CREDITS_CONSUMED_VNA = 0x1d | (1ULL << 21), // VNA Credit Consumed
		UNC_Q_RXL_CYCLES_NE = 0xa, // RxQ Cycles Not Empty
		UNC_Q_RXL_FLITS_G0 = 0x1, // Flits Received - Group 0
		UNC_Q_RXL_FLITS_G0__MASK__IVBEP_UNC_Q_RXL_FLITS_G0__DATA = 0x200, // Number of data flits over QPI
		UNC_Q_RXL_FLITS_G0__MASK__IVBEP_UNC_Q_RXL_FLITS_G0__IDLE = 0x100, // Number of flits over QPI that do not hold protocol payload
		UNC_Q_RXL_FLITS_G0__MASK__IVBEP_UNC_Q_RXL_FLITS_G0__NON_DATA = 0x400, // Number of non-NULL non-data flits over QPI
		UNC_Q_RXL_FLITS_G1 = 0x2 | (1ULL << 21), // Flits Received - Group 1
		UNC_Q_RXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__DRS = 0x1800, // Number of flits over QPI on the Data Response (DRS) channel
		UNC_Q_RXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__DRS_DATA = 0x800, // Number of data flits over QPI on the Data Response (DRS) channel
		UNC_Q_RXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__DRS_NONDATA = 0x1000, // Number of protocol flits over QPI on the Data Response (DRS) channel
		UNC_Q_RXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__HOM = 0x600, // Number of flits over QPI on the home channel
		UNC_Q_RXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__HOM_NONREQ = 0x400, // Number of non-request flits over QPI on the home channel
		UNC_Q_RXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__HOM_REQ = 0x200, // Number of data requests over QPI on the home channel
		UNC_Q_RXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__SNP = 0x100, // Number of snoop requests flits over QPI
		UNC_Q_RXL_FLITS_G2 = 0x3 | (1ULL << 21), // Flits Received - Group 2
		UNC_Q_RXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NCB = 0xc00, // Number of non-coherent bypass flits
		UNC_Q_RXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NCB_DATA = 0x400, // Number of non-coherent data flits
		UNC_Q_RXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NCB_NONDATA = 0x800, // Number of bypass non-data flits
		UNC_Q_RXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NCS = 0x1000, // Number of non-coherent standard (NCS) flits
		UNC_Q_RXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NDR_AD = 0x100, // Number of flits received over Non-data response (NDR) channel
		UNC_Q_RXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NDR_AK = 0x200, // Number of flits received on the Non-data response (NDR) channel)
		UNC_Q_RXL_INSERTS = 0x8, // Rx Flit Buffer Allocations
		UNC_Q_RXL_INSERTS_DRS = 0x9 | (1ULL << 21), // Rx Flit Buffer Allocations - DRS
		UNC_Q_RXL_INSERTS_DRS__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_INSERTS_DRS__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_INSERTS_HOM = 0xc | (1ULL << 21), // Rx Flit Buffer Allocations - HOM
		UNC_Q_RXL_INSERTS_HOM__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_INSERTS_HOM__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_INSERTS_NCB = 0xa | (1ULL << 21), // Rx Flit Buffer Allocations - NCB
		UNC_Q_RXL_INSERTS_NCB__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_INSERTS_NCB__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_INSERTS_NCS = 0xb | (1ULL << 21), // Rx Flit Buffer Allocations - NCS
		UNC_Q_RXL_INSERTS_NCS__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_INSERTS_NCS__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_INSERTS_NDR = 0xe | (1ULL << 21), // Rx Flit Buffer Allocations - NDR
		UNC_Q_RXL_INSERTS_NDR__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_INSERTS_NDR__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_INSERTS_SNP = 0xd | (1ULL << 21), // Rx Flit Buffer Allocations - SNP
		UNC_Q_RXL_INSERTS_SNP__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_INSERTS_SNP__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_OCCUPANCY = 0xb, // RxQ Occupancy - All Packets
		UNC_Q_RXL_OCCUPANCY_DRS = 0x15 | (1ULL << 21), // RxQ Occupancy - DRS
		UNC_Q_RXL_OCCUPANCY_DRS__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_OCCUPANCY_DRS__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_OCCUPANCY_HOM = 0x18 | (1ULL << 21), // RxQ Occupancy - HOM
		UNC_Q_RXL_OCCUPANCY_HOM__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_OCCUPANCY_HOM__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_OCCUPANCY_NCB = 0x16 | (1ULL << 21), // RxQ Occupancy - NCB
		UNC_Q_RXL_OCCUPANCY_NCB__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_OCCUPANCY_NCB__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_OCCUPANCY_NCS = 0x17 | (1ULL << 21), // RxQ Occupancy - NCS
		UNC_Q_RXL_OCCUPANCY_NCS__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_OCCUPANCY_NCS__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_OCCUPANCY_NDR = 0x1a | (1ULL << 21), // RxQ Occupancy - NDR
		UNC_Q_RXL_OCCUPANCY_NDR__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_OCCUPANCY_NDR__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_RXL_OCCUPANCY_SNP = 0x19 | (1ULL << 21), // RxQ Occupancy - SNP
		UNC_Q_RXL_OCCUPANCY_SNP__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_RXL_OCCUPANCY_SNP__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXL0P_POWER_CYCLES = 0xd, // Cycles in L0p
		UNC_Q_TXL0_POWER_CYCLES = 0xc, // Cycles in L0
		UNC_Q_TXL_BYPASSED = 0x5, // Tx Flit Buffer Bypassed
		UNC_Q_TXL_CYCLES_NE = 0x6, // Tx Flit Buffer Cycles not Empty
		UNC_Q_TXL_FLITS_G0 = 0x0, // Flits Transferred - Group 0
		UNC_Q_TXL_FLITS_G0__MASK__IVBEP_UNC_Q_TXL_FLITS_G0__DATA = 0x200, // Number of data flits over QPI
		UNC_Q_TXL_FLITS_G0__MASK__IVBEP_UNC_Q_TXL_FLITS_G0__NON_DATA = 0x400, // Number of non-NULL non-data flits over QPI
		UNC_Q_TXL_FLITS_G1 = 0x0 | (1ULL << 21), // Flits Transferred - Group 1
		UNC_Q_TXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__DRS = 0x1800, // Number of flits over QPI on the Data Response (DRS) channel
		UNC_Q_TXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__DRS_DATA = 0x800, // Number of data flits over QPI on the Data Response (DRS) channel
		UNC_Q_TXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__DRS_NONDATA = 0x1000, // Number of protocol flits over QPI on the Data Response (DRS) channel
		UNC_Q_TXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__HOM = 0x600, // Number of flits over QPI on the home channel
		UNC_Q_TXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__HOM_NONREQ = 0x400, // Number of non-request flits over QPI on the home channel
		UNC_Q_TXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__HOM_REQ = 0x200, // Number of data requests over QPI on the home channel
		UNC_Q_TXL_FLITS_G1__MASK__IVBEP_UNC_Q_RXL_FLITS_G1__SNP = 0x100, // Number of snoop requests flits over QPI
		UNC_Q_TXL_FLITS_G2 = 0x1 | (1ULL << 21), // Flits Transferred - Group 2
		UNC_Q_TXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NCB = 0xc00, // Number of non-coherent bypass flits
		UNC_Q_TXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NCB_DATA = 0x400, // Number of non-coherent data flits
		UNC_Q_TXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NCB_NONDATA = 0x800, // Number of bypass non-data flits
		UNC_Q_TXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NCS = 0x1000, // Number of non-coherent standard (NCS) flits
		UNC_Q_TXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NDR_AD = 0x100, // Number of flits received over Non-data response (NDR) channel
		UNC_Q_TXL_FLITS_G2__MASK__IVBEP_UNC_Q_RXL_FLITS_G2__NDR_AK = 0x200, // Number of flits received on the Non-data response (NDR) channel)
		UNC_Q_TXL_INSERTS = 0x4, // Tx Flit Buffer Allocations
		UNC_Q_TXL_OCCUPANCY = 0x7, // Tx Flit Buffer Occupancy
		UNC_Q_VNA_CREDIT_RETURNS = 0x1c | (1ULL << 21), // VNA Credits Returned
		UNC_Q_VNA_CREDIT_RETURN_OCCUPANCY = 0x1b | (1ULL << 21), // VNA Credits Pending Return - Occupancy
		UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED = 0x26 | (1ULL << 21), // R3QPI Egress credit occupancy AD HOM
		UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_AD_HOM_CREDIT_OCCUPANCY = 0x22 | (1ULL << 21), // R3QPI Egress credit occupancy AD HOM
		UNC_Q_TXR_AD_HOM_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_AD_HOM_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_AD_NDR_CREDIT_ACQUIRED = 0x28 | (1ULL << 21), // R3QPI Egress credit occupancy AD NDR
		UNC_Q_TXR_AD_NDR_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_AD_NDR_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_AD_NDR_CREDIT_OCCUPANCY = 0x24 | (1ULL << 21), // R3QPI Egress credit occupancy AD NDR
		UNC_Q_TXR_AD_NDR_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_AD_NDR_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_AD_SNP_CREDIT_ACQUIRED = 0x27 | (1ULL << 21), // R3QPI Egress credit occupancy AD SNP
		UNC_Q_TXR_AD_SNP_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_AD_SNP_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_AD_SNP_CREDIT_OCCUPANCY = 0x23 | (1ULL << 21), // R3QPI Egress credit occupancy AD SNP
		UNC_Q_TXR_AD_SNP_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_AD_SNP_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_AK_NDR_CREDIT_ACQUIRED = 0x29 | (1ULL << 21), // R3QPI Egress credit occupancy AK NDR
		UNC_Q_TXR_AK_NDR_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_AK_NDR_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_AK_NDR_CREDIT_OCCUPANCY = 0x25 | (1ULL << 21), // R3QPI Egress credit occupancy AD NDR
		UNC_Q_TXR_AK_NDR_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_AK_NDR_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED = 0x2a | (1ULL << 21), // R3QPI Egress credit occupancy BL DRS
		UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__VN_SHR = 0x400, // for shared VN
		UNC_Q_TXR_BL_DRS_CREDIT_OCCUPANCY = 0x1f | (1ULL << 21), // R3QPI Egress credit occupancy BL DRS
		UNC_Q_TXR_BL_DRS_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_BL_DRS_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_BL_DRS_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_BL_DRS_CREDIT_ACQUIRED__VN_SHR = 0x400, // for shared VN
		UNC_Q_TXR_BL_NCB_CREDIT_ACQUIRED = 0x2b | (1ULL << 21), // R3QPI Egress credit occupancy BL NCB
		UNC_Q_TXR_BL_NCB_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_BL_NCB_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_BL_NCB_CREDIT_OCCUPANCY = 0x20 | (1ULL << 21), // R3QPI Egress credit occupancy BL NCB
		UNC_Q_TXR_BL_NCB_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_BL_NCB_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_BL_NCS_CREDIT_ACQUIRED = 0x2c | (1ULL << 21), // R3QPI Egress credit occupancy BL NCS
		UNC_Q_TXR_BL_NCS_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_BL_NCS_CREDIT_ACQUIRED__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		UNC_Q_TXR_BL_NCS_CREDIT_OCCUPANCY = 0x21 | (1ULL << 21), // R3QPI Egress credit occupancy BL NCS
		UNC_Q_TXR_BL_NCS_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN0 = 0x100, // for VN0
		UNC_Q_TXR_BL_NCS_CREDIT_OCCUPANCY__MASK__IVBEP_UNC_Q_TXR_AD_HOM_CREDIT_ACQUIRED__VN1 = 0x200, // for VN1
		
	};
};

namespace ivbep_unc_q = optkit::intel::ivbep_unc_q;
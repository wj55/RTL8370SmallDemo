#ifndef _RTL8367C_ASICDRV_H_
#define _RTL8367C_ASICDRV_H_

#include <rtk_types.h>
#include <rtk_error.h>
#include <rtl8367c_reg.h>
#include <rtl8367c_base.h>

#define RTL8367C_REGBITLENGTH               16
#define RTL8367C_REGDATAMAX                 0xFFFF

#define RTL8367C_VIDMAX                     0xFFF
#define RTL8367C_EVIDMAX                    0x1FFF
#define RTL8367C_CVIDXNO                    32
#define RTL8367C_CVIDXMAX                   (RTL8367C_CVIDXNO-1)

#define RTL8367C_PRIMAX                     7
#define RTL8367C_DSCPMAX                    63

#define RTL8367C_PORTNO                     11
#define RTL8367C_PORTIDMAX                  (RTL8367C_PORTNO-1)
#define RTL8367C_PMSKMAX                    ((1<<(RTL8367C_PORTNO))-1)
#define RTL8367C_PORTMASK                   0x7FF

#define RTL8367C_PHYNO                      5
#define RTL8367C_PHYIDMAX                  (RTL8367C_PHYNO-1)

#define RTL8367C_SVIDXNO                    64
#define RTL8367C_SVIDXMAX                   (RTL8367C_SVIDXNO-1)
#define RTL8367C_MSTIMAX                    15

#define RTL8367C_METERNO                    64
#define RTL8367C_METERMAX                   (RTL8367C_METERNO-1)
#define RTL8367C_METERBUCKETSIZEMAX         0xFFFF

#define RTL8367C_QUEUENO                    8
#define RTL8367C_QIDMAX                     (RTL8367C_QUEUENO-1)

#define RTL8367C_PHY_BUSY_CHECK_COUNTER     1000

#define RTL8367C_QOS_GRANULARTY_MAX         0x7FFFF
#define RTL8367C_QOS_GRANULARTY_LSB_MASK    0xFFFF
#define RTL8367C_QOS_GRANULARTY_LSB_OFFSET  0
#define RTL8367C_QOS_GRANULARTY_MSB_MASK    0x70000
#define RTL8367C_QOS_GRANULARTY_MSB_OFFSET  16

#define RTL8367C_QOS_GRANULARTY_UNIT_KBPS   8

#define RTL8367C_QOS_RATE_INPUT_MAX         (0x1FFFF * 8)
#define RTL8367C_QOS_RATE_INPUT_MAX_HSG     (0x7FFFF * 8)
#define RTL8367C_QOS_RATE_INPUT_MIN         8
#define RTL8367C_QOS_PPS_INPUT_MAX          (0x7FFFF)
#define RTL8367C_QOS_PPS_INPUT_MIN          1

#define RTL8367C_QUEUE_MASK                 0xFF

#define RTL8367C_EFIDMAX                    0x7
#define RTL8367C_FIDMAX                     0xF

#define RTL8367C_EAV_SECONDMAX                  0xFFFFFFFF
#define RTL8367C_EAV_NANOSECONDMAX          0x3B9AC9FF


/* the above macro is generated by genDotH */
#define RTL8367C_VALID_REG_NO               3869

#ifdef __cplusplus
extern "C" {
#endif


/*=======================================================================
 *  Enum
 *========================================================================*/
enum RTL8367C_TABLE_ACCESS_OP
{
    TB_OP_READ = 0,
    TB_OP_WRITE
};

enum RTL8367C_TABLE_ACCESS_TARGET
{
    TB_TARGET_ACLRULE = 1,
    TB_TARGET_ACLACT,
    TB_TARGET_CVLAN,
    TB_TARGET_L2,
    TB_TARGET_IGMP_GROUP
};

#define RTL8367C_TABLE_ACCESS_REG_DATA(op, target)    ((op << 3) | target)

/*=======================================================================
 *  Structures
 *========================================================================*/


#ifdef __cplusplus
extern "C" {
#endif
extern ret_t rtl8367c_setAsicRegBit(rtk_uint32 reg, rtk_uint32 bit, rtk_uint32 value);
extern ret_t rtl8367c_getAsicRegBit(rtk_uint32 reg, rtk_uint32 bit, rtk_uint32 *pValue);

extern ret_t rtl8367c_setAsicRegBits(rtk_uint32 reg, rtk_uint32 bits, rtk_uint32 value);
extern ret_t rtl8367c_getAsicRegBits(rtk_uint32 reg, rtk_uint32 bits, rtk_uint32 *pValue);

extern ret_t rtl8367c_setAsicReg(rtk_uint32 reg, rtk_uint32 value);
extern ret_t rtl8367c_getAsicReg(rtk_uint32 reg, rtk_uint32 *pValue);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
}
#endif


#endif /*#ifndef _RTL8367C_ASICDRV_H_*/


#include "newmacros.h"
#include "runtime.h"

#define FN_CPUTime_46hs_95clock_35	((void*)startLabel+8)
#define CT_v208	((void*)startLabel+24)
#define F0_CPUTime_46hs_95clock_35	((void*)startLabel+32)
#define FN_CPUTime_46hs_95clock	((void*)startLabel+44)
#define CT_v209	((void*)startLabel+56)
#define CF_CPUTime_46hs_95clock	((void*)startLabel+64)
#define FN_CPUTime_46clock	((void*)startLabel+84)
#define CT_v213	((void*)startLabel+104)
#define F0_CPUTime_46clock	((void*)startLabel+112)
#define CT_v214	((void*)startLabel+160)
#define FN_LAMBDA206	((void*)startLabel+192)
#define CT_v215	((void*)startLabel+212)
#define F0_LAMBDA206	((void*)startLabel+220)
void FR_CPUTime_46hs_95clock_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node C0__40_41[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node CF_CPUTime_46cpuTimePrecision[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v208)
,	/* FN_CPUTime_46hs_95clock_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_CPUTime_46hs_95clock_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v208: (byte 0) */
  HW(0,1)
, 0
,	/* F0_CPUTime_46hs_95clock_35: (byte 0) */
  CAPTAG(useLabel(FN_CPUTime_46hs_95clock_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v209)
,	/* FN_CPUTime_46hs_95clock: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v209: (byte 0) */
  HW(2,0)
, 0
,	/* CF_CPUTime_46hs_95clock: (byte 0) */
  VAPTAG(useLabel(FN_CPUTime_46hs_95clock))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_CPUTime_46hs_95clock_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v213)
,	/* FN_CPUTime_46clock: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_CVAL_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v213: (byte 0) */
  HW(2,1)
, 0
,	/* F0_CPUTime_46clock: (byte 0) */
  CAPTAG(useLabel(FN_CPUTime_46clock),1)
, useLabel(C0__40_41)
, VAPTAG(useLabel(FN_CPUTime_46hs_95clock))
, bytes2word(0,0,0,0)
, useLabel(CT_v214)
,};
Node FN_CPUTime_46getCPUTime[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v214: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_CPUTime_46getCPUTime[] = {
  VAPTAG(useLabel(FN_CPUTime_46getCPUTime))
, VAPTAG(useLabel(FN_CPUTime_46clock))
, CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v215)
,	/* FN_LAMBDA206: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v215: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA206: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, useLabel(CF_CPUTime_46cpuTimePrecision)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_clock" CPUTime.hs_clock# 1 :: Prelude.() -> Prelude.Int */
extern HsInt hs_clock(void);
#ifdef PROFILE
static SInfo pf_CPUTime_46hs_95clock_35 = {"CPUTime","CPUTime.hs_clock#","Prelude.Int"};
#endif
C_HEADER(FR_CPUTime_46hs_95clock_35) {
  NodePtr nodeptr;
  HsInt result;
  /* void arg1 */;

  result = hs_clock();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_CPUTime_46hs_95clock_35);
  C_RETURN(nodeptr);
}

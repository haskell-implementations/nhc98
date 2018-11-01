#include "newmacros.h"
#include "runtime.h"

#define FN_CPUTime_46hs_95clock_35	((void*)startLabel+8)
#define CT_v209	((void*)startLabel+36)
#define F0_CPUTime_46hs_95clock_35	((void*)startLabel+44)
#define FN_CPUTime_46hs_95clock	((void*)startLabel+56)
#define CT_v211	((void*)startLabel+80)
#define CF_CPUTime_46hs_95clock	((void*)startLabel+88)
#define FN_CPUTime_46clock	((void*)startLabel+108)
#define CT_v216	((void*)startLabel+140)
#define F0_CPUTime_46clock	((void*)startLabel+148)
#define CT_v218	((void*)startLabel+208)
#define FN_LAMBDA206	((void*)startLabel+240)
#define CT_v220	((void*)startLabel+272)
#define F0_LAMBDA206	((void*)startLabel+280)
#define ST_v214	((void*)startLabel+300)
#define ST_v217	((void*)startLabel+314)
#define ST_v219	((void*)startLabel+333)
#define ST_v210	((void*)startLabel+361)
#define ST_v208	((void*)startLabel+378)
extern Node TM_CPUTime[];
void FR_CPUTime_46hs_95clock_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node C0__40_41[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_CPUTime[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node CF_CPUTime_46cpuTimePrecision[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v209)
,	/* FN_CPUTime_46hs_95clock_35: (byte 0) */
  useLabel(TM_CPUTime)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_CPUTime_46hs_95clock_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v208)
,	/* CT_v209: (byte 0) */
  HW(0,1)
, 0
,	/* F0_CPUTime_46hs_95clock_35: (byte 0) */
  CAPTAG(useLabel(FN_CPUTime_46hs_95clock_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v211)
,	/* FN_CPUTime_46hs_95clock: (byte 0) */
  useLabel(TM_CPUTime)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v210)
,	/* CT_v211: (byte 0) */
  HW(2,0)
, 0
,	/* CF_CPUTime_46hs_95clock: (byte 0) */
  VAPTAG(useLabel(FN_CPUTime_46hs_95clock))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_CPUTime_46hs_95clock_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v216)
,	/* FN_CPUTime_46clock: (byte 0) */
  useLabel(TM_CPUTime)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_CVAL_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v214)
,	/* CT_v216: (byte 0) */
  HW(2,1)
, 0
,	/* F0_CPUTime_46clock: (byte 0) */
  CAPTAG(useLabel(FN_CPUTime_46clock),1)
, useLabel(C0__40_41)
, VAPTAG(useLabel(FN_CPUTime_46hs_95clock))
, bytes2word(0,0,0,0)
, useLabel(CT_v218)
,};
Node FN_CPUTime_46getCPUTime[] = {
  useLabel(TM_CPUTime)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 70001
, useLabel(ST_v217)
,	/* CT_v218: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_CPUTime_46getCPUTime[] = {
  VAPTAG(useLabel(FN_CPUTime_46getCPUTime))
, VAPTAG(useLabel(FN_CPUTime_46clock))
, CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v220)
,	/* FN_LAMBDA206: (byte 0) */
  useLabel(TMSUB_CPUTime)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80008
, useLabel(ST_v219)
,	/* CT_v220: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA206: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, useLabel(CF_CPUTime_46cpuTimePrecision)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v214: (byte 0) */
  bytes2word(67,80,85,84)
, bytes2word(105,109,101,46)
, bytes2word(99,108,111,99)
,	/* ST_v217: (byte 2) */
  bytes2word(107,0,67,80)
, bytes2word(85,84,105,109)
, bytes2word(101,46,103,101)
, bytes2word(116,67,80,85)
, bytes2word(84,105,109,101)
,	/* ST_v219: (byte 1) */
  bytes2word(0,67,80,85)
, bytes2word(84,105,109,101)
, bytes2word(46,103,101,116)
, bytes2word(67,80,85,84)
, bytes2word(105,109,101,58)
, bytes2word(56,58,56,45)
, bytes2word(56,58,49,54)
,	/* ST_v210: (byte 1) */
  bytes2word(0,67,80,85)
, bytes2word(84,105,109,101)
, bytes2word(46,104,115,95)
, bytes2word(99,108,111,99)
,	/* ST_v208: (byte 2) */
  bytes2word(107,0,67,80)
, bytes2word(85,84,105,109)
, bytes2word(101,46,104,115)
, bytes2word(95,99,108,111)
, bytes2word(99,107,35,0)
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

#include "newmacros.h"
#include "runtime.h"

#define FN_CPUTime_46hs_95clock_35	((void*)startLabel+8)
#define CT_v210	((void*)startLabel+32)
#define F0_CPUTime_46hs_95clock_35	((void*)startLabel+40)
#define FN_CPUTime_46hs_95clock	((void*)startLabel+68)
#define CT_v214	((void*)startLabel+120)
#define CF_CPUTime_46hs_95clock	((void*)startLabel+128)
#define FN_CPUTime_46clock	((void*)startLabel+164)
#define CT_v221	((void*)startLabel+224)
#define F0_CPUTime_46clock	((void*)startLabel+232)
#define CT_v228	((void*)startLabel+424)
#define FN_LAMBDA206	((void*)startLabel+472)
#define CT_v234	((void*)startLabel+584)
#define F0_LAMBDA206	((void*)startLabel+592)
#define PP_CPUTime_46clock	((void*)startLabel+628)
#define PC_CPUTime_46clock	((void*)startLabel+628)
#define ST_v218	((void*)startLabel+628)
#define ST_v223	((void*)startLabel+644)
#define PP_LAMBDA206	((void*)startLabel+663)
#define PC_LAMBDA206	((void*)startLabel+663)
#define ST_v230	((void*)startLabel+663)
#define PP_CPUTime_46hs_95clock	((void*)startLabel+691)
#define PC_CPUTime_46hs_95clock	((void*)startLabel+691)
#define ST_v212	((void*)startLabel+691)
#define PP_CPUTime_46hs_95clock_35	((void*)startLabel+708)
#define PC_CPUTime_46hs_95clock_35	((void*)startLabel+708)
#define ST_v209	((void*)startLabel+708)
#define PS_v224	((void*)startLabel+728)
#define PS_v222	((void*)startLabel+740)
#define PS_v225	((void*)startLabel+752)
#define PS_v227	((void*)startLabel+764)
#define PS_v226	((void*)startLabel+776)
#define PS_v213	((void*)startLabel+788)
#define PS_v211	((void*)startLabel+800)
#define PS_v220	((void*)startLabel+812)
#define PS_v217	((void*)startLabel+824)
#define PS_v208	((void*)startLabel+836)
#define PS_v233	((void*)startLabel+848)
#define PS_v232	((void*)startLabel+860)
#define PS_v231	((void*)startLabel+872)
#define PS_v229	((void*)startLabel+884)
void FR_CPUTime_46hs_95clock_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node C0__40_41[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node CF_CPUTime_46cpuTimePrecision[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_CPUTime[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PC_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node PC_Prelude_46Integral_46Prelude_46Int_46toInteger[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v210)
,	/* FN_CPUTime_46hs_95clock_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_CPUTime_46hs_95clock_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v209)
,	/* CT_v210: (byte 0) */
  HW(0,1)
, 0
,	/* F0_CPUTime_46hs_95clock_35: (byte 0) */
  CAPTAG(useLabel(FN_CPUTime_46hs_95clock_35),1)
, useLabel(PS_v208)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v214)
,	/* FN_CPUTime_46hs_95clock: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v212)
,	/* CT_v214: (byte 0) */
  HW(2,0)
, 0
,	/* CF_CPUTime_46hs_95clock: (byte 0) */
  VAPTAG(useLabel(FN_CPUTime_46hs_95clock))
, useLabel(PS_v211)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_CPUTime_46hs_95clock_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v221)
,	/* FN_CPUTime_46clock: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_CVAL_P1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v220)
, 0
, 0
, 0
, 0
, 140001
, useLabel(ST_v218)
,	/* CT_v221: (byte 0) */
  HW(2,1)
, 0
,	/* F0_CPUTime_46clock: (byte 0) */
  CAPTAG(useLabel(FN_CPUTime_46clock),1)
, useLabel(PS_v217)
, 0
, 0
, 0
, useLabel(C0__40_41)
, VAPTAG(useLabel(FN_CPUTime_46hs_95clock))
, bytes2word(0,0,0,0)
, useLabel(CT_v228)
,};
Node FN_CPUTime_46getCPUTime[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v227)
, 0
, 0
, 0
, 0
, useLabel(PS_v226)
, 0
, 0
, 0
, 0
, useLabel(PS_v225)
, 0
, 0
, 0
, 0
, useLabel(PS_v224)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v223)
,	/* CT_v228: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_CPUTime_46getCPUTime[] = {
  VAPTAG(useLabel(FN_CPUTime_46getCPUTime))
, useLabel(PS_v222)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_CPUTime_46clock))
, CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v234)
,	/* FN_LAMBDA206: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v233)
, 0
, 0
, 0
, 0
, useLabel(PS_v232)
, 0
, 0
, 0
, 0
, useLabel(PS_v231)
, 0
, 0
, 0
, 0
, 80008
, useLabel(ST_v230)
,	/* CT_v234: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA206: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA206),1)
, useLabel(PS_v229)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, useLabel(CF_CPUTime_46cpuTimePrecision)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* PP_CPUTime_46clock: (byte 0) */
 	/* PC_CPUTime_46clock: (byte 0) */
 	/* ST_v218: (byte 0) */
  bytes2word(67,80,85,84)
, bytes2word(105,109,101,46)
, bytes2word(99,108,111,99)
, bytes2word(107,0,0,0)
,};
Node PP_CPUTime_46getCPUTime[] = {
 };
Node PC_CPUTime_46getCPUTime[] = {
 	/* ST_v223: (byte 0) */
  bytes2word(67,80,85,84)
, bytes2word(105,109,101,46)
, bytes2word(103,101,116,67)
, bytes2word(80,85,84,105)
,	/* PP_LAMBDA206: (byte 3) */
 	/* PC_LAMBDA206: (byte 3) */
 	/* ST_v230: (byte 3) */
  bytes2word(109,101,0,67)
, bytes2word(80,85,84,105)
, bytes2word(109,101,46,103)
, bytes2word(101,116,67,80)
, bytes2word(85,84,105,109)
, bytes2word(101,58,56,58)
, bytes2word(56,45,56,58)
,	/* PP_CPUTime_46hs_95clock: (byte 3) */
 	/* PC_CPUTime_46hs_95clock: (byte 3) */
 	/* ST_v212: (byte 3) */
  bytes2word(49,54,0,67)
, bytes2word(80,85,84,105)
, bytes2word(109,101,46,104)
, bytes2word(115,95,99,108)
,	/* PP_CPUTime_46hs_95clock_35: (byte 4) */
 	/* PC_CPUTime_46hs_95clock_35: (byte 4) */
 	/* ST_v209: (byte 4) */
  bytes2word(111,99,107,0)
, bytes2word(67,80,85,84)
, bytes2word(105,109,101,46)
, bytes2word(104,115,95,99)
, bytes2word(108,111,99,107)
, bytes2word(35,0,0,0)
,	/* PS_v224: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46getCPUTime)
, useLabel(PC__40_41)
,	/* PS_v222: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46getCPUTime)
, useLabel(PC_CPUTime_46getCPUTime)
,	/* PS_v225: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46getCPUTime)
, useLabel(PC_CPUTime_46clock)
,	/* PS_v227: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46getCPUTime)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v226: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46getCPUTime)
, useLabel(PC_LAMBDA206)
,	/* PS_v213: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46hs_95clock)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v211: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46hs_95clock)
, useLabel(PC_CPUTime_46hs_95clock)
,	/* PS_v220: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46clock)
, useLabel(PC_CPUTime_46hs_95clock)
,	/* PS_v217: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46clock)
, useLabel(PC_CPUTime_46clock)
,	/* PS_v208: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46hs_95clock_35)
, useLabel(PC_CPUTime_46hs_95clock_35)
,	/* PS_v233: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_LAMBDA206)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v232: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_LAMBDA206)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_42)
,	/* PS_v231: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_LAMBDA206)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46toInteger)
,	/* PS_v229: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_LAMBDA206)
, useLabel(PC_LAMBDA206)
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

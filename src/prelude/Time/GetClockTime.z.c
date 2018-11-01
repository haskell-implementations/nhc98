#include "newmacros.h"
#include "runtime.h"

#define FN_Time_46hs_95getClockTime_35	((void*)startLabel+8)
#define CT_v200	((void*)startLabel+36)
#define F0_Time_46hs_95getClockTime_35	((void*)startLabel+44)
#define FN_Time_46hs_95getClockTime	((void*)startLabel+56)
#define CT_v202	((void*)startLabel+80)
#define CF_Time_46hs_95getClockTime	((void*)startLabel+88)
#define CT_v204	((void*)startLabel+136)
#define FN_LAMBDA197	((void*)startLabel+168)
#define CT_v206	((void*)startLabel+204)
#define F0_LAMBDA197	((void*)startLabel+212)
#define ST_v203	((void*)startLabel+220)
#define ST_v205	((void*)startLabel+238)
#define ST_v201	((void*)startLabel+268)
#define ST_v199	((void*)startLabel+289)
extern Node TM_Time[];
void FR_Time_46hs_95getClockTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Time[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v200)
,	/* FN_Time_46hs_95getClockTime_35: (byte 0) */
  useLabel(TM_Time)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95getClockTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Time_46hs_95getClockTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Time_46hs_95getClockTime_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v202)
,	/* FN_Time_46hs_95getClockTime: (byte 0) */
  useLabel(TM_Time)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v201)
,	/* CT_v202: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Time_46hs_95getClockTime: (byte 0) */
  VAPTAG(useLabel(FN_Time_46hs_95getClockTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_Time_46hs_95getClockTime_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v204)
,};
Node FN_Time_46getClockTime[] = {
  useLabel(TM_Time)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v203)
,	/* CT_v204: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Time_46getClockTime[] = {
  VAPTAG(useLabel(FN_Time_46getClockTime))
, CAPTAG(useLabel(FN_LAMBDA197),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Time_46hs_95getClockTime)
, bytes2word(1,0,0,1)
, useLabel(CT_v206)
,	/* FN_LAMBDA197: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 130011
, useLabel(ST_v205)
,	/* CT_v206: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA197: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA197),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v203: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,103,101,116)
, bytes2word(67,108,111,99)
, bytes2word(107,84,105,109)
,	/* ST_v205: (byte 2) */
  bytes2word(101,0,84,105)
, bytes2word(109,101,46,103)
, bytes2word(101,116,67,108)
, bytes2word(111,99,107,84)
, bytes2word(105,109,101,58)
, bytes2word(49,51,58,49)
, bytes2word(49,45,49,51)
,	/* ST_v201: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(84,105,109,101)
, bytes2word(46,104,115,95)
, bytes2word(103,101,116,67)
, bytes2word(108,111,99,107)
, bytes2word(84,105,109,101)
,	/* ST_v199: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,104,115)
, bytes2word(95,103,101,116)
, bytes2word(67,108,111,99)
, bytes2word(107,84,105,109)
, bytes2word(101,35,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_getClockTime" Time.hs_getClockTime# 1 :: Prelude.() -> Prelude.Int */
extern HsInt hs_getClockTime(void);
#ifdef PROFILE
static SInfo pf_Time_46hs_95getClockTime_35 = {"Time","Time.hs_getClockTime#","Prelude.Int"};
#endif
C_HEADER(FR_Time_46hs_95getClockTime_35) {
  NodePtr nodeptr;
  HsInt result;
  /* void arg1 */;

  result = hs_getClockTime();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Time_46hs_95getClockTime_35);
  C_RETURN(nodeptr);
}

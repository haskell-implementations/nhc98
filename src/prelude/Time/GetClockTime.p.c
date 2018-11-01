#include "newmacros.h"
#include "runtime.h"

#define FN_Time_46hs_95getClockTime_35	((void*)startLabel+8)
#define CT_v201	((void*)startLabel+32)
#define F0_Time_46hs_95getClockTime_35	((void*)startLabel+40)
#define FN_Time_46hs_95getClockTime	((void*)startLabel+68)
#define CT_v205	((void*)startLabel+120)
#define CF_Time_46hs_95getClockTime	((void*)startLabel+128)
#define CT_v210	((void*)startLabel+240)
#define FN_LAMBDA197	((void*)startLabel+288)
#define CT_v215	((void*)startLabel+388)
#define F0_LAMBDA197	((void*)startLabel+396)
#define ST_v207	((void*)startLabel+420)
#define PP_LAMBDA197	((void*)startLabel+438)
#define PC_LAMBDA197	((void*)startLabel+438)
#define ST_v212	((void*)startLabel+438)
#define PP_Time_46hs_95getClockTime	((void*)startLabel+468)
#define PC_Time_46hs_95getClockTime	((void*)startLabel+468)
#define ST_v203	((void*)startLabel+468)
#define PP_Time_46hs_95getClockTime_35	((void*)startLabel+489)
#define PC_Time_46hs_95getClockTime_35	((void*)startLabel+489)
#define ST_v200	((void*)startLabel+489)
#define PS_v204	((void*)startLabel+512)
#define PS_v202	((void*)startLabel+524)
#define PS_v206	((void*)startLabel+536)
#define PS_v209	((void*)startLabel+548)
#define PS_v208	((void*)startLabel+560)
#define PS_v199	((void*)startLabel+572)
#define PS_v213	((void*)startLabel+584)
#define PS_v214	((void*)startLabel+596)
#define PS_v211	((void*)startLabel+608)
void FR_Time_46hs_95getClockTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_Time[];
extern Node PC_NHC_46Internal_46_95mkIOok0[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Time_46CT[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v201)
,	/* FN_Time_46hs_95getClockTime_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95getClockTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v200)
,	/* CT_v201: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Time_46hs_95getClockTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Time_46hs_95getClockTime_35),1)
, useLabel(PS_v199)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v205)
,	/* FN_Time_46hs_95getClockTime: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v203)
,	/* CT_v205: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Time_46hs_95getClockTime: (byte 0) */
  VAPTAG(useLabel(FN_Time_46hs_95getClockTime))
, useLabel(PS_v202)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_Time_46hs_95getClockTime_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v210)
,};
Node FN_Time_46getClockTime[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v209)
, 0
, 0
, 0
, 0
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, 120001
, useLabel(ST_v207)
,	/* CT_v210: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Time_46getClockTime[] = {
  VAPTAG(useLabel(FN_Time_46getClockTime))
, useLabel(PS_v206)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA197),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Time_46hs_95getClockTime)
, bytes2word(1,0,0,1)
, useLabel(CT_v215)
,	/* FN_LAMBDA197: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 130011
, useLabel(ST_v212)
,	/* CT_v215: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA197: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA197),1)
, useLabel(PS_v211)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_Time_46getClockTime[] = {
 };
Node PC_Time_46getClockTime[] = {
 	/* ST_v207: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,103,101,116)
, bytes2word(67,108,111,99)
, bytes2word(107,84,105,109)
,	/* PP_LAMBDA197: (byte 2) */
 	/* PC_LAMBDA197: (byte 2) */
 	/* ST_v212: (byte 2) */
  bytes2word(101,0,84,105)
, bytes2word(109,101,46,103)
, bytes2word(101,116,67,108)
, bytes2word(111,99,107,84)
, bytes2word(105,109,101,58)
, bytes2word(49,51,58,49)
, bytes2word(49,45,49,51)
,	/* PP_Time_46hs_95getClockTime: (byte 4) */
 	/* PC_Time_46hs_95getClockTime: (byte 4) */
 	/* ST_v203: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(84,105,109,101)
, bytes2word(46,104,115,95)
, bytes2word(103,101,116,67)
, bytes2word(108,111,99,107)
, bytes2word(84,105,109,101)
,	/* PP_Time_46hs_95getClockTime_35: (byte 1) */
 	/* PC_Time_46hs_95getClockTime_35: (byte 1) */
 	/* ST_v200: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,104,115)
, bytes2word(95,103,101,116)
, bytes2word(67,108,111,99)
, bytes2word(107,84,105,109)
, bytes2word(101,35,0,0)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46hs_95getClockTime)
, useLabel(PC_NHC_46Internal_46_95mkIOok0)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46hs_95getClockTime)
, useLabel(PC_Time_46hs_95getClockTime)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46getClockTime)
, useLabel(PC_Time_46getClockTime)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46getClockTime)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46getClockTime)
, useLabel(PC_LAMBDA197)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46hs_95getClockTime_35)
, useLabel(PC_Time_46hs_95getClockTime_35)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA197)
, useLabel(PC_Time_46CT)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA197)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v211: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA197)
, useLabel(PC_LAMBDA197)
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

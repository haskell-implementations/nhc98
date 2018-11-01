#include "newmacros.h"
#include "runtime.h"

#define FN_Time_46hs_95getClockTime_35	((void*)startLabel+8)
#define CT_v199	((void*)startLabel+24)
#define F0_Time_46hs_95getClockTime_35	((void*)startLabel+32)
#define FN_Time_46hs_95getClockTime	((void*)startLabel+44)
#define CT_v200	((void*)startLabel+56)
#define CF_Time_46hs_95getClockTime	((void*)startLabel+64)
#define CT_v201	((void*)startLabel+100)
#define FN_LAMBDA197	((void*)startLabel+132)
#define CT_v202	((void*)startLabel+156)
#define F0_LAMBDA197	((void*)startLabel+164)
void FR_Time_46hs_95getClockTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v199)
,	/* FN_Time_46hs_95getClockTime_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95getClockTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v199: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Time_46hs_95getClockTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Time_46hs_95getClockTime_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v200)
,	/* FN_Time_46hs_95getClockTime: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v200: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Time_46hs_95getClockTime: (byte 0) */
  VAPTAG(useLabel(FN_Time_46hs_95getClockTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_Time_46hs_95getClockTime_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v201)
,};
Node FN_Time_46getClockTime[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v201: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Time_46getClockTime[] = {
  VAPTAG(useLabel(FN_Time_46getClockTime))
, CAPTAG(useLabel(FN_LAMBDA197),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Time_46hs_95getClockTime)
, bytes2word(1,0,0,1)
, useLabel(CT_v202)
,	/* FN_LAMBDA197: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v202: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA197: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA197),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
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

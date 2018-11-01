#include "newmacros.h"
#include "runtime.h"

#define FN_Time_46hs_95toCalendarTime_35	((void*)startLabel+8)
#define CT_v294	((void*)startLabel+36)
#define F0_Time_46hs_95toCalendarTime_35	((void*)startLabel+44)
#define CT_v296	((void*)startLabel+80)
#define CT_v301	((void*)startLabel+148)
#define FN_LAMBDA291	((void*)startLabel+184)
#define CT_v306	((void*)startLabel+260)
#define F0_LAMBDA291	((void*)startLabel+268)
#define ST_v295	((void*)startLabel+292)
#define ST_v293	((void*)startLabel+315)
#define ST_v299	((void*)startLabel+339)
#define ST_v304	((void*)startLabel+359)
extern Node TM_Time[];
void FR_Time_46hs_95toCalendarTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Time[];
extern Node FN_Prelude_46Enum_46Time_46Month_46toEnum[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Enum_46Time_46Day_46toEnum[];
extern Node FN_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v294)
,	/* FN_Time_46hs_95toCalendarTime_35: (byte 0) */
  useLabel(TM_Time)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95toCalendarTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v293)
,	/* CT_v294: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Time_46hs_95toCalendarTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Time_46hs_95toCalendarTime_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v296)
,};
Node FN_Time_46hs_95toCalendarTime[] = {
  useLabel(TM_Time)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v295)
,	/* CT_v296: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Time_46hs_95toCalendarTime[] = {
  VAPTAG(useLabel(FN_Time_46hs_95toCalendarTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Time_46hs_95toCalendarTime_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v301)
,};
Node FN_Time_46toCalendarTime[] = {
  useLabel(TM_Time)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v299)
,	/* CT_v301: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Time_46toCalendarTime[] = {
  CAPTAG(useLabel(FN_Time_46toCalendarTime),1)
, VAPTAG(useLabel(FN_Time_46hs_95toCalendarTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA291),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v306)
,	/* FN_LAMBDA291: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,12,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_P1,6,HEAP_CVAL_I5)
, bytes2word(HEAP_P1,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_P1,9,HEAP_CVAL_IN3,HEAP_P1)
, bytes2word(0,HEAP_OFF_N1,10,HEAP_I2)
, bytes2word(HEAP_P1,3,HEAP_P1,4)
, bytes2word(HEAP_P1,5,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,12,HEAP_P1,8)
, bytes2word(HEAP_OFF_N1,12,HEAP_P1,10)
, bytes2word(HEAP_P1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,12,0)
, 110074
, useLabel(ST_v304)
,	/* CT_v306: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA291),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Month_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Day_46toEnum))
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v295: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,104,115,95)
, bytes2word(116,111,67,97)
, bytes2word(108,101,110,100)
, bytes2word(97,114,84,105)
,	/* ST_v293: (byte 3) */
  bytes2word(109,101,0,84)
, bytes2word(105,109,101,46)
, bytes2word(104,115,95,116)
, bytes2word(111,67,97,108)
, bytes2word(101,110,100,97)
, bytes2word(114,84,105,109)
,	/* ST_v299: (byte 3) */
  bytes2word(101,35,0,84)
, bytes2word(105,109,101,46)
, bytes2word(116,111,67,97)
, bytes2word(108,101,110,100)
, bytes2word(97,114,84,105)
,	/* ST_v304: (byte 3) */
  bytes2word(109,101,0,84)
, bytes2word(105,109,101,46)
, bytes2word(116,111,67,97)
, bytes2word(108,101,110,100)
, bytes2word(97,114,84,105)
, bytes2word(109,101,58,49)
, bytes2word(49,58,55,52)
, bytes2word(45,49,49,58)
, bytes2word(57,51,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_toCalendarTime" Time.hs_toCalendarTime# 1 :: Prelude.Int -> Prelude.12 */
extern Node* hs_toCalendarTime(HsInt);
#ifdef PROFILE
static SInfo pf_Time_46hs_95toCalendarTime_35 = {"Time","Time.hs_toCalendarTime#","Prelude.12"};
#endif
C_HEADER(FR_Time_46hs_95toCalendarTime_35) {
  NodePtr nodeptr;
  Node* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_toCalendarTime(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Time_46hs_95toCalendarTime_35);
  C_RETURN(nodeptr);
}

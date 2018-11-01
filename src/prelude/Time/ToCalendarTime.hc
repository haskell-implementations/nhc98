#include "newmacros.h"
#include "runtime.h"

#define FN_Time_46hs_95toCalendarTime_35	((void*)startLabel+8)
#define CT_v293	((void*)startLabel+24)
#define F0_Time_46hs_95toCalendarTime_35	((void*)startLabel+32)
#define CT_v294	((void*)startLabel+56)
#define CT_v298	((void*)startLabel+112)
#define FN_LAMBDA291	((void*)startLabel+148)
#define CT_v302	((void*)startLabel+212)
#define F0_LAMBDA291	((void*)startLabel+220)
void FR_Time_46hs_95toCalendarTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Enum_46Time_46Month_46toEnum[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Enum_46Time_46Day_46toEnum[];
extern Node FN_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v293)
,	/* FN_Time_46hs_95toCalendarTime_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95toCalendarTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v293: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Time_46hs_95toCalendarTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Time_46hs_95toCalendarTime_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v294)
,};
Node FN_Time_46hs_95toCalendarTime[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v294: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Time_46hs_95toCalendarTime[] = {
  VAPTAG(useLabel(FN_Time_46hs_95toCalendarTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Time_46hs_95toCalendarTime_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v298)
,};
Node FN_Time_46toCalendarTime[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v298: (byte 0) */
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
, useLabel(CT_v302)
,	/* FN_LAMBDA291: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,12,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_P1,6,HEAP_CVAL_I5)
, bytes2word(HEAP_P1,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_P1,9,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_OFF_N1,10)
, bytes2word(HEAP_I2,HEAP_P1,3,HEAP_P1)
, bytes2word(4,HEAP_P1,5,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,12,HEAP_P1)
, bytes2word(8,HEAP_OFF_N1,12,HEAP_P1)
, bytes2word(10,HEAP_P1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,14)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,12,0)
,	/* CT_v302: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA291),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Month_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Day_46toEnum))
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
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

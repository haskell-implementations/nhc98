#include "newmacros.h"
#include "runtime.h"

#define CT_v280	((void*)startLabel+92)
#define CT_v284	((void*)startLabel+184)
#define FN_Time_46Prelude_46226_46pc	((void*)startLabel+236)
#define CT_v285	((void*)startLabel+256)
#define F0_Time_46Prelude_46226_46pc	((void*)startLabel+264)
void FR_Time_46hs_95toClockTime(void);
extern Node FN_Prelude_46Enum_46Time_46Month_46fromEnum[];
extern Node FN_Prelude_46Enum_46Time_46Day_46fromEnum[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node FN_Prelude_46fromInteger[];

static Node startLabel[] = {
  bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v280)
,};
Node FN_Time_46hs_95toClockTime[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PUSH_ARG,4,EVAL)
, bytes2word(POP_I1,PUSH_ARG,5,EVAL)
, bytes2word(POP_I1,PUSH_ARG,6,EVAL)
, bytes2word(POP_I1,PUSH_ARG,7,EVAL)
, bytes2word(POP_I1,PUSH_ARG,8,EVAL)
, bytes2word(POP_I1,PUSH_ARG,9,EVAL)
, bytes2word(POP_I1,PUSH_ARG,10,EVAL)
, bytes2word(POP_I1,PUSH_ARG,11,EVAL)
, bytes2word(POP_I1,PUSH_ARG,12,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Time_46hs_95toClockTime)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v280: (byte 0) */
  HW(0,12)
, 0
,};
Node F0_Time_46hs_95toClockTime[] = {
  CAPTAG(useLabel(FN_Time_46hs_95toClockTime),12)
, bytes2word(1,0,0,1)
, useLabel(CT_v284)
,};
Node FN_Time_46toClockTime[] = {
  bytes2word(NEEDSTACK_P1,17,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,12,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_I2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,9,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_P1,12,HEAP_CVAL_P1,6)
, bytes2word(HEAP_P1,9,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_P1)
, bytes2word(4,HEAP_P1,3,HEAP_P1)
, bytes2word(6,HEAP_P1,7,HEAP_P1)
, bytes2word(8,HEAP_P1,9,HEAP_OFF_N1)
, bytes2word(10,HEAP_I2,HEAP_P1,12)
, bytes2word(HEAP_I1,HEAP_P1,14,HEAP_P1)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v284: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Time_46toClockTime[] = {
  CAPTAG(useLabel(FN_Time_46toClockTime),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Month_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Day_46fromEnum))
, VAPTAG(useLabel(FN_CString_46toCString))
, CAPTAG(useLabel(FN_Time_46Prelude_46226_46pc),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_Time_46hs_95toClockTime))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v285)
,	/* FN_Time_46Prelude_46226_46pc: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v285: (byte 0) */
  HW(1,2)
, 0
,	/* F0_Time_46Prelude_46226_46pc: (byte 0) */
  CAPTAG(useLabel(FN_Time_46Prelude_46226_46pc),2)
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_toClockTime" Time.hs_toClockTime 12 :: Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> Prelude.Int -> PackedString.PackedString -> Prelude.Int -> Prelude.Bool -> Prelude.Int */
extern HsInt hs_toClockTime(HsInt,HsInt,HsInt,HsInt,HsInt,HsInt,HsInt,HsInt,HsInt,char*,HsInt,HsBool);
#ifdef PROFILE
static SInfo pf_Time_46hs_95toClockTime = {"Time","Time.hs_toClockTime","Prelude.Int"};
#endif
C_HEADER(FR_Time_46hs_95toClockTime) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt arg2;
  HsInt arg3;
  HsInt arg4;
  HsInt arg5;
  HsInt arg6;
  HsInt arg7;
  HsInt arg8;
  HsInt arg9;
  char* arg10;
  HsInt arg11;
  HsBool arg12;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(4);
  IND_REMOVE(nodeptr);
  arg4 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(5);
  IND_REMOVE(nodeptr);
  arg5 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(6);
  IND_REMOVE(nodeptr);
  arg6 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(7);
  IND_REMOVE(nodeptr);
  arg7 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(8);
  IND_REMOVE(nodeptr);
  arg8 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(9);
  IND_REMOVE(nodeptr);
  arg9 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(10);
  IND_REMOVE(nodeptr);
  arg10 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(11);
  IND_REMOVE(nodeptr);
  arg11 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(12);
  IND_REMOVE(nodeptr);
  arg12 = (HsBool)GET_BOOL_VALUE(nodeptr);

  result = hs_toClockTime(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Time_46hs_95toClockTime);
  C_RETURN(nodeptr);
}

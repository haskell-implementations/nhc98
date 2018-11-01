#include "newmacros.h"
#include "runtime.h"

#define CT_v233	((void*)startLabel+252)
#define ST_v231	((void*)startLabel+328)
extern Node TM_Complex[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46exponent[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Floating[];
extern Node FN_Prelude_46sqrt[];
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46scaleFloat[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46_94[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v233)
,};
Node FN_Complex_46magnitude[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(91,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,14,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,0,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,16,HEAP_P1)
, bytes2word(4,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,17,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,4,HEAP_CVAL_P1,18)
, bytes2word(HEAP_OFF_N1,18,HEAP_P1,4)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,14,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_P1,6)
, bytes2word(HEAP_CVAL_P1,16,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,17,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(4,HEAP_CVAL_P1,18,HEAP_OFF_N1)
, bytes2word(18,HEAP_P1,3,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,7,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,55,HEAP_OFF_N1)
, bytes2word(33,HEAP_OFF_N1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,67,HEAP_OFF_N1)
, bytes2word(6,PUSH_P1,0,PUSH_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(10,ZAP_STACK_P1,9,ZAP_STACK_P1)
, bytes2word(8,ZAP_STACK_P1,7,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 2
, 60001
, useLabel(ST_v231)
,	/* CT_v233: (byte 0) */
  HW(16,2)
, 0
,};
Node F0_Complex_46magnitude[] = {
  CAPTAG(useLabel(FN_Complex_46magnitude),2)
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46exponent))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46max))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Floating))
, VAPTAG(useLabel(FN_Prelude_46sqrt))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46scaleFloat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46_94))
,	/* ST_v231: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(109,97,103,110)
, bytes2word(105,116,117,100)
, bytes2word(101,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v298	((void*)startLabel+80)
#define CT_v305	((void*)startLabel+488)
#define CT_v306	((void*)startLabel+584)
#define CT_v307	((void*)startLabel+656)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Fractional[];
extern Node FN_Prelude_46fromRational[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46exponent[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node FN_Prelude_46scaleFloat[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46_47[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46Fractional_46Complex_46Complex[];
extern Node FN_Prelude_46_95_46recip[];
extern Node FN_Prelude_46Num_46Complex_46Complex[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v298)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46fromRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,1,PUSH_I1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,POP_I1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
,	/* CT_v298: (byte 0) */
  HW(7,2)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46fromRational),2)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46fromRational))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v305)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46_47[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(146,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_I2,HEAP_P1)
, bytes2word(4,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,4,HEAP_P1)
, bytes2word(7,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,13)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,7)
, bytes2word(HEAP_P1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,8)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,15)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,10)
, bytes2word(HEAP_P1,4,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,11)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,39,HEAP_OFF_N1,6)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,16,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,12,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,11,HEAP_P1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,39,HEAP_OFF_N1,6)
, bytes2word(HEAP_I2,PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(14,ZAP_STACK_P1,13,ZAP_STACK_P1)
, bytes2word(12,ZAP_STACK_P1,11,ZAP_STACK_P1)
, bytes2word(10,ZAP_STACK_P1,9,ZAP_STACK_P1)
, bytes2word(8,ZAP_STACK_P1,7,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(POP_I1,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v305: (byte 0) */
  HW(14,3)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46_47),3)
, VAPTAG(useLabel(FN_Prelude_46exponent))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46max))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, VAPTAG(useLabel(FN_Prelude_46scaleFloat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46_47))
, VAPTAG(useLabel(FN_Prelude_46_45))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v306)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46recip[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v306: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46recip),2)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46recip))
, bytes2word(1,0,0,1)
, useLabel(CT_v307)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v307: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex))
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46_47),2)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46fromRational),1)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46recip),1)
,};

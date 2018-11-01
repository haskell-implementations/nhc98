#include "newmacros.h"
#include "runtime.h"

#define CT_v261	((void*)startLabel+84)
#define CT_v265	((void*)startLabel+144)
#define CT_v272	((void*)startLabel+232)
#define CT_v273	((void*)startLabel+316)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Ratio_46_37[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Fractional_46Ratio_46Ratio_46fromRational[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(POP_I1,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v261: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Fractional_46Ratio_46Ratio_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46fromRational),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v265)
,};
Node FN_Prelude_46Fractional_46Ratio_46Ratio_46recip[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Fractional_46Ratio_46Ratio_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46recip),2)
, VAPTAG(useLabel(FN_Ratio_46_37))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v272)
,};
Node FN_Prelude_46Fractional_46Ratio_46Ratio_46_47[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v272: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Prelude_46Fractional_46Ratio_46Ratio_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46_37))
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Fractional_46Ratio_46Ratio[] = {
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
,	/* CT_v273: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Fractional_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47),2)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46fromRational),1)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46recip),1)
,};

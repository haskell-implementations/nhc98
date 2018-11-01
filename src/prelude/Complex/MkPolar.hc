#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+116)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Floating[];
extern Node FN_Prelude_46cos[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46sin[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v193)
,};
Node FN_Complex_46mkPolar[] = {
  bytes2word(NEEDHEAP_P1,41,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,10,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,10,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,6,PUSH_I1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,POP_I1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v193: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Complex_46mkPolar[] = {
  CAPTAG(useLabel(FN_Complex_46mkPolar),3)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Floating))
, VAPTAG(useLabel(FN_Prelude_46cos))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46sin))
,};

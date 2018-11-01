#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+68)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46negate[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Complex_46conjugate[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_I2,PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(3,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v191: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Complex_46conjugate[] = {
  CAPTAG(useLabel(FN_Complex_46conjugate),2)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
,};

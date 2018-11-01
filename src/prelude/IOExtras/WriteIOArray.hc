#include "newmacros.h"
#include "runtime.h"

#define CT_v207	((void*)startLabel+76)
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Array_46primUpdateVectorC[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v207)
,};
Node FN_NHC_46IOExtras_46writeIOArray[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(4,PUSH_P1,3,PUSH_I1)
, bytes2word(PUSH_P1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,7,ZAP_STACK_P1,6)
, bytes2word(ZAP_STACK_P1,5,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v207: (byte 0) */
  HW(3,4)
, 0
,};
Node F0_NHC_46IOExtras_46writeIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46writeIOArray),4)
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
,};

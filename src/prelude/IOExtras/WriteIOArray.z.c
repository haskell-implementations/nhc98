#include "newmacros.h"
#include "runtime.h"

#define CT_v208	((void*)startLabel+88)
#define ST_v206	((void*)startLabel+112)
extern Node TM_NHC_46IOExtras[];
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Array_46primUpdateVectorC[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v208)
,};
Node FN_NHC_46IOExtras_46writeIOArray[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,4)
, bytes2word(PUSH_P1,3,PUSH_I1,PUSH_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 110001
, useLabel(ST_v206)
,	/* CT_v208: (byte 0) */
  HW(3,4)
, 0
,};
Node F0_NHC_46IOExtras_46writeIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46writeIOArray),4)
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
,	/* ST_v206: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,119,114,105)
, bytes2word(116,101,73,79)
, bytes2word(65,114,114,97)
, bytes2word(121,0,0,0)
,};

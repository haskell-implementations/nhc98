#include "newmacros.h"
#include "runtime.h"

#define CT_v200	((void*)startLabel+80)
extern Node FN_Ix_46rangeSize[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v200)
,};
Node FN_Ix_46_95tupleIndex[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG_ARG,2)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,EVAL)
, bytes2word(NEEDHEAP_I32,MUL_W,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,4,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(EVAL,NEEDHEAP_I32,ADD_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v200: (byte 0) */
  HW(4,5)
, 0
,};
Node F0_Ix_46_95tupleIndex[] = {
  CAPTAG(useLabel(FN_Ix_46_95tupleIndex),5)
, VAPTAG(useLabel(FN_Ix_46rangeSize))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
,};

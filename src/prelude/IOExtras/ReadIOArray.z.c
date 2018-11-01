#include "newmacros.h"
#include "runtime.h"

#define CT_v201	((void*)startLabel+64)
#define ST_v199	((void*)startLabel+88)
extern Node TM_NHC_46IOExtras[];
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Array_46primVectorIndexC[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v201)
,};
Node FN_NHC_46IOExtras_46readIOArray[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,HEAP_ARG,3)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,ZAP_ARG_I1,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,5,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v199)
,	/* CT_v201: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_NHC_46IOExtras_46readIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46readIOArray),3)
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46primVectorIndexC))
,	/* ST_v199: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,114,101,97)
, bytes2word(100,73,79,65)
, bytes2word(114,114,97,121)
, bytes2word(0,0,0,0)
,};

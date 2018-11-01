#include "newmacros.h"
#include "runtime.h"

#define CT_v201	((void*)startLabel+88)
#define ST_v200	((void*)startLabel+116)
extern Node TM_Ix[];
extern Node FN_Ix_46rangeSize[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v201)
,};
Node FN_Ix_46_95tupleIndex[] = {
  useLabel(TM_Ix)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,EVAL,NEEDHEAP_I32)
, bytes2word(MUL_W,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(4,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(ADD_W,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60001
, useLabel(ST_v200)
,	/* CT_v201: (byte 0) */
  HW(4,5)
, 0
,};
Node F0_Ix_46_95tupleIndex[] = {
  CAPTAG(useLabel(FN_Ix_46_95tupleIndex),5)
, VAPTAG(useLabel(FN_Ix_46rangeSize))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
,	/* ST_v200: (byte 0) */
  bytes2word(73,120,46,95)
, bytes2word(116,117,112,108)
, bytes2word(101,73,110,100)
, bytes2word(101,120,0,0)
,};

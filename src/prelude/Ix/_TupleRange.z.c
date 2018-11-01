#include "newmacros.h"
#include "runtime.h"

#define CT_v203	((void*)startLabel+84)
#define FN_LAMBDA200	((void*)startLabel+124)
#define CT_v205	((void*)startLabel+148)
#define F0_LAMBDA200	((void*)startLabel+156)
#define ST_v202	((void*)startLabel+164)
#define ST_v204	((void*)startLabel+179)
extern Node TM_Ix[];
extern Node FN_Ix_46range[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46concatMap[];
extern Node TMSUB_Ix[];
extern Node FN_Prelude_46map[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v203)
,};
Node FN_Ix_46_95tupleRange[] = {
  useLabel(TM_Ix)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,0,HEAP_CVAL_IN3)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,PUSH_ARG,4,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60001
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
  HW(4,4)
, 0
,};
Node F0_Ix_46_95tupleRange[] = {
  CAPTAG(useLabel(FN_Ix_46_95tupleRange),4)
, VAPTAG(useLabel(FN_Ix_46range))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA200),1)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v205)
,	/* FN_LAMBDA200: (byte 0) */
  useLabel(TMSUB_Ix)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(2,1,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80018
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),2)
, VAPTAG(useLabel(FN_Prelude_46map))
,	/* ST_v202: (byte 0) */
  bytes2word(73,120,46,95)
, bytes2word(116,117,112,108)
, bytes2word(101,82,97,110)
,	/* ST_v204: (byte 3) */
  bytes2word(103,101,0,73)
, bytes2word(120,46,95,116)
, bytes2word(117,112,108,101)
, bytes2word(82,97,110,103)
, bytes2word(101,58,56,58)
, bytes2word(49,56,45,56)
, bytes2word(58,51,50,0)
,};

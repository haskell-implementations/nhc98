#include "newmacros.h"
#include "runtime.h"

#define CT_v244	((void*)startLabel+80)
#define FN_LAMBDA241	((void*)startLabel+128)
#define CT_v245	((void*)startLabel+156)
#define F0_LAMBDA241	((void*)startLabel+164)
extern Node FN_Ix_46range[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Array_46array[];
extern Node FN_Array_46accum[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v244)
,};
Node FN_Array_46accumArray[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG_ARG,1,4)
, bytes2word(HEAP_OFF_N1,7,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG_ARG)
, bytes2word(1,2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v244: (byte 0) */
  HW(6,4)
, 0
,};
Node F0_Array_46accumArray[] = {
  CAPTAG(useLabel(FN_Array_46accumArray),4)
, CAPTAG(useLabel(FN_LAMBDA241),2)
, VAPTAG(useLabel(FN_Ix_46range))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_Array_46array))
, VAPTAG(useLabel(FN_Array_46accum))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v245)
,	/* FN_LAMBDA241: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(2,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v245: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA241: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA241),3)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v236	((void*)startLabel+28)
#define FN_LAMBDA234	((void*)startLabel+64)
#define CT_v240	((void*)startLabel+128)
#define F0_LAMBDA234	((void*)startLabel+136)
extern Node FN_Prelude_46foldl[];
extern Node FN_Array_46_33[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Array_46_47_47[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,};
Node FN_Array_46accum[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v236: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Array_46accum[] = {
  CAPTAG(useLabel(FN_Array_46accum),2)
, CAPTAG(useLabel(FN_LAMBDA234),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v240)
,	/* FN_LAMBDA234: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,6,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,0,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_N1,2,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG_ARG,1)
, bytes2word(3,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v240: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA234: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA234),4)
, VAPTAG(useLabel(FN_Array_46_33))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46_47_47))
,};

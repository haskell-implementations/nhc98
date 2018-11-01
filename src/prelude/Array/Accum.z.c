#include "newmacros.h"
#include "runtime.h"

#define CT_v237	((void*)startLabel+40)
#define FN_LAMBDA234	((void*)startLabel+76)
#define CT_v242	((void*)startLabel+152)
#define F0_LAMBDA234	((void*)startLabel+160)
#define ST_v236	((void*)startLabel+176)
#define ST_v240	((void*)startLabel+188)
extern Node TM_Array[];
extern Node FN_Prelude_46foldl[];
extern Node TMSUB_Array[];
extern Node FN_Array_46_33[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Array_46_47_47[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v237)
,};
Node FN_Array_46accum[] = {
  useLabel(TM_Array)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v236)
,	/* CT_v237: (byte 0) */
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
, useLabel(CT_v242)
,	/* FN_LAMBDA234: (byte 0) */
  useLabel(TMSUB_Array)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,6,HEAP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,0,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_N1,4,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG_ARG,1)
, bytes2word(3,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
, 100032
, useLabel(ST_v240)
,	/* CT_v242: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA234: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA234),4)
, VAPTAG(useLabel(FN_Array_46_33))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46_47_47))
,	/* ST_v236: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,97,99)
,	/* ST_v240: (byte 4) */
  bytes2word(99,117,109,0)
, bytes2word(65,114,114,97)
, bytes2word(121,46,97,99)
, bytes2word(99,117,109,58)
, bytes2word(49,48,58,51)
, bytes2word(50,45,49,48)
, bytes2word(58,54,51,0)
,};

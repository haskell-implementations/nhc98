#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+32)
#define FN_NHC_46PackedString_46Prelude_46168_46dw	((void*)startLabel+68)
#define v196	((void*)startLabel+113)
#define v194	((void*)startLabel+122)
#define CT_v198	((void*)startLabel+132)
#define F0_NHC_46PackedString_46Prelude_46168_46dw	((void*)startLabel+140)
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_NHC_46PackedString_46index[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_NHC_46PackedString_46substr[];
extern Node CF_NHC_46PackedString_46nil[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_NHC_46PackedString_46dropWhile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_INT_P1,0,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46dropWhile[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46dropWhile),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46dw))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v198)
,	/* FN_NHC_46PackedString_46Prelude_46168_46dw: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,LT_W)
, bytes2word(JUMPFALSE,45,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_P1,0,PUSH_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,SLIDE_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(17,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(3,HEAP_INT_P1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_OFF_N1,6,HEAP_ARG,4)
,	/* v196: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
,	/* v194: (byte 2) */
  bytes2word(4,RETURN_EVAL,PUSH_CVAL_P1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v198: (byte 0) */
  HW(5,4)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46168_46dw: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46dw),4)
, VAPTAG(useLabel(FN_NHC_46PackedString_46index))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46dw))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
, useLabel(CF_NHC_46PackedString_46nil)
,};

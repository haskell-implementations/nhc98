#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+44)
#define FN_NHC_46PackedString_46Prelude_46168_46dw	((void*)startLabel+80)
#define v197	((void*)startLabel+129)
#define v195	((void*)startLabel+138)
#define CT_v200	((void*)startLabel+156)
#define F0_NHC_46PackedString_46Prelude_46168_46dw	((void*)startLabel+164)
#define ST_v193	((void*)startLabel+188)
#define ST_v199	((void*)startLabel+215)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46length[];
extern Node TMSUB_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46index[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_NHC_46PackedString_46substr[];
extern Node CF_NHC_46PackedString_46nil[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_NHC_46PackedString_46dropWhile[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_INT_P1,0,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
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
, useLabel(CT_v200)
,	/* FN_NHC_46PackedString_46Prelude_46168_46dw: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
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
,	/* v197: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
,	/* v195: (byte 2) */
  bytes2word(4,RETURN_EVAL,PUSH_CVAL_P1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130015
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(5,4)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46168_46dw: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46dw),4)
, VAPTAG(useLabel(FN_NHC_46PackedString_46index))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46dw))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
, useLabel(CF_NHC_46PackedString_46nil)
,	/* ST_v193: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,100,114,111)
, bytes2word(112,87,104,105)
,	/* ST_v199: (byte 3) */
  bytes2word(108,101,0,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(100,114,111,112)
, bytes2word(87,104,105,108)
, bytes2word(101,58,49,51)
, bytes2word(58,49,53,45)
, bytes2word(49,55,58,50)
, bytes2word(51,0,0,0)
,};

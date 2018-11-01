#include "newmacros.h"
#include "runtime.h"

#define CT_v200	((void*)startLabel+44)
#define FN_NHC_46PackedString_46Prelude_46168_46sp	((void*)startLabel+80)
#define v203	((void*)startLabel+129)
#define v201	((void*)startLabel+151)
#define CT_v206	((void*)startLabel+180)
#define F0_NHC_46PackedString_46Prelude_46168_46sp	((void*)startLabel+188)
#define ST_v199	((void*)startLabel+212)
#define ST_v205	((void*)startLabel+234)
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
, useLabel(CT_v200)
,};
Node FN_NHC_46PackedString_46span[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_INT_P1,0,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46span[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46span),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46sp))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v206)
,	/* FN_NHC_46PackedString_46Prelude_46168_46sp: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,LT_W)
, bytes2word(JUMPFALSE,58,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_P1,0,PUSH_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,SLIDE_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(17,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(3,HEAP_INT_P1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_OFF_N1,6,HEAP_ARG,4)
,	/* v203: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(2,HEAP_INT_P1,0,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,9)
,	/* v201: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(7,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 130015
, useLabel(ST_v205)
,	/* CT_v206: (byte 0) */
  HW(5,4)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46168_46sp: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46sp),4)
, VAPTAG(useLabel(FN_NHC_46PackedString_46index))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46sp))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
, useLabel(CF_NHC_46PackedString_46nil)
,	/* ST_v199: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,115,112,97)
,	/* ST_v205: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,80,97)
, bytes2word(99,107,101,100)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,115)
, bytes2word(112,97,110,58)
, bytes2word(49,51,58,49)
, bytes2word(53,45,49,55)
, bytes2word(58,50,56,0)
,};

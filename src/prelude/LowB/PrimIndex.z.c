#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46PackedString_46indexPS	((void*)startLabel+12)
#define CT_v173	((void*)startLabel+44)
#define F0_NHC_46PackedString_46indexPS	((void*)startLabel+52)
#define CT_v175	((void*)startLabel+92)
#define ST_v174	((void*)startLabel+108)
#define ST_v172	((void*)startLabel+131)
extern Node TM_NHC_46PackedString[];
extern void *indexPS();

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v173)
,	/* FN_NHC_46PackedString_46indexPS: (byte 0) */
  useLabel(TM_NHC_46PackedString)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(indexPS)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v172)
,	/* CT_v173: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46PackedString_46indexPS: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46indexPS),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_NHC_46PackedString_46index[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v174)
,	/* CT_v175: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46PackedString_46index[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46index),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46indexPS))
,	/* ST_v174: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,105,110,100)
,	/* ST_v172: (byte 3) */
  bytes2word(101,120,0,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(105,110,100,101)
, bytes2word(120,80,83,0)
,};

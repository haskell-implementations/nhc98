#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46PackedString_46indexPS	((void*)startLabel+12)
#define CT_v172	((void*)startLabel+32)
#define F0_NHC_46PackedString_46indexPS	((void*)startLabel+40)
#define CT_v173	((void*)startLabel+68)
extern void *indexPS();

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,	/* FN_NHC_46PackedString_46indexPS: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(indexPS)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v172: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46PackedString_46indexPS: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46indexPS),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v173)
,};
Node FN_NHC_46PackedString_46index[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v173: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46PackedString_46index[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46index),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46indexPS))
,};

#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46PackedString_46indexPS	((void*)startLabel+12)
#define CT_v174	((void*)startLabel+40)
#define F0_NHC_46PackedString_46indexPS	((void*)startLabel+48)
#define CT_v178	((void*)startLabel+132)
#define ST_v176	((void*)startLabel+164)
#define PP_NHC_46PackedString_46indexPS	((void*)startLabel+187)
#define PC_NHC_46PackedString_46indexPS	((void*)startLabel+187)
#define ST_v173	((void*)startLabel+187)
#define PS_v172	((void*)startLabel+212)
#define PS_v177	((void*)startLabel+224)
#define PS_v175	((void*)startLabel+236)
extern void *indexPS();
extern Node PM_NHC_46PackedString[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v174)
,	/* FN_NHC_46PackedString_46indexPS: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(indexPS)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46PackedString_46indexPS: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46indexPS),2)
, useLabel(PS_v172)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v178)
,};
Node FN_NHC_46PackedString_46index[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v176)
,	/* CT_v178: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46PackedString_46index[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46index),2)
, useLabel(PS_v175)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46indexPS))
,};
Node PP_NHC_46PackedString_46index[] = {
 };
Node PC_NHC_46PackedString_46index[] = {
 	/* ST_v176: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,105,110,100)
,	/* PP_NHC_46PackedString_46indexPS: (byte 3) */
 	/* PC_NHC_46PackedString_46indexPS: (byte 3) */
 	/* ST_v173: (byte 3) */
  bytes2word(101,120,0,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(105,110,100,101)
, bytes2word(120,80,83,0)
,	/* PS_v172: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46indexPS)
, useLabel(PC_NHC_46PackedString_46indexPS)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46index)
, useLabel(PC_NHC_46PackedString_46indexPS)
,	/* PS_v175: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46index)
, useLabel(PC_NHC_46PackedString_46index)
,};

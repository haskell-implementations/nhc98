#include "newmacros.h"
#include "runtime.h"

#define v176	((void*)startLabel+18)
#define v177	((void*)startLabel+22)
#define CT_v182	((void*)startLabel+100)
#define ST_v179	((void*)startLabel+140)
#define PS_v181	((void*)startLabel+164)
#define PS_v178	((void*)startLabel+176)
extern Node CF_NHC_46PackedString_46nil[];
extern Node FN_NHC_46PackedString_46append[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46append[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_NHC_46PackedString_46concat[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v176: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_CVAL_P1)
,	/* v177: (byte 2) */
  bytes2word(7,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v179)
,	/* CT_v182: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_NHC_46PackedString_46concat[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46concat),1)
, useLabel(PS_v178)
, 0
, 0
, 0
, useLabel(CF_NHC_46PackedString_46nil)
, VAPTAG(useLabel(FN_NHC_46PackedString_46concat))
, VAPTAG(useLabel(FN_NHC_46PackedString_46append))
,};
Node PP_NHC_46PackedString_46concat[] = {
 };
Node PC_NHC_46PackedString_46concat[] = {
 	/* ST_v179: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,99,111,110)
, bytes2word(99,97,116,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46concat)
, useLabel(PC_NHC_46PackedString_46append)
,	/* PS_v178: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46concat)
, useLabel(PC_NHC_46PackedString_46concat)
,};

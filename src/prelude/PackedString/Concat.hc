#include "newmacros.h"
#include "runtime.h"

#define v176	((void*)startLabel+18)
#define v177	((void*)startLabel+22)
#define CT_v179	((void*)startLabel+40)
extern Node CF_NHC_46PackedString_46nil[];
extern Node FN_NHC_46PackedString_46append[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_NHC_46PackedString_46concat[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v176: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_CVAL_P1)
,	/* v177: (byte 2) */
  bytes2word(3,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v179: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_NHC_46PackedString_46concat[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46concat),1)
, useLabel(CF_NHC_46PackedString_46nil)
, VAPTAG(useLabel(FN_NHC_46PackedString_46concat))
, VAPTAG(useLabel(FN_NHC_46PackedString_46append))
,};

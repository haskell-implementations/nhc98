#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+36)
#define ST_v170	((void*)startLabel+52)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46index[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v171)
,};
Node FN_NHC_46PackedString_46head[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v170)
,	/* CT_v171: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46PackedString_46head[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46head),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46index))
,	/* ST_v170: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,104,101,97)
, bytes2word(100,0,0,0)
,};

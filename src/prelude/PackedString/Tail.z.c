#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+40)
#define ST_v171	((void*)startLabel+60)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_NHC_46PackedString_46substr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_NHC_46PackedString_46tail[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,1,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v171)
,	/* CT_v172: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46PackedString_46tail[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46tail),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
,	/* ST_v171: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,116,97,105)
, bytes2word(108,0,0,0)
,};

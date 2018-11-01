#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+40)
#define ST_v180	((void*)startLabel+64)
extern Node TM_NHC_46PackedString[];
extern Node FN_Prelude_46foldl[];
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v181)
,};
Node FN_NHC_46PackedString_46foldl[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v180)
,	/* CT_v181: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46foldl[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46foldl),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
,	/* ST_v180: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,102,111,108)
, bytes2word(100,108,0,0)
,};

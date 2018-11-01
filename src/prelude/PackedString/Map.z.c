#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+40)
#define ST_v179	((void*)startLabel+68)
extern Node TM_NHC_46PackedString[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v180)
,};
Node FN_NHC_46PackedString_46map[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46PackedString_46map[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46map),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_NHC_46PackedString_46packString)
,	/* ST_v179: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,109,97,112)
, bytes2word(0,0,0,0)
,};

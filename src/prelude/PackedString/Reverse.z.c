#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+36)
#define ST_v175	((void*)startLabel+64)
extern Node TM_NHC_46PackedString[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46reverse[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v176)
,};
Node FN_NHC_46PackedString_46reverse[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v175)
,	/* CT_v176: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_NHC_46PackedString_46reverse[] = {
  VAPTAG(useLabel(FN_NHC_46PackedString_46reverse))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46reverse)
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_NHC_46PackedString_46packString)
,	/* ST_v175: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,114,101,118)
, bytes2word(101,114,115,101)
, bytes2word(0,0,0,0)
,};

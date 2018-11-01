#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+44)
#define ST_v176	((void*)startLabel+68)
extern Node TM_NHC_46PackedString[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46not[];
extern Node FN_NHC_46PackedString_46span[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v177)
,};
Node FN_NHC_46PackedString_46break[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v176)
,	/* CT_v177: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46break[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46break),2)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46not)
, VAPTAG(useLabel(FN_NHC_46PackedString_46span))
,	/* ST_v176: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,98,114,101)
, bytes2word(97,107,0,0)
,};

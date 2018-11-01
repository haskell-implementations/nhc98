#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+48)
#define ST_v175	((void*)startLabel+72)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v176)
,};
Node FN_NHC_46PackedString_46append[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v175)
,	/* CT_v176: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46append[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46append),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
,	/* ST_v175: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,97,112,112)
, bytes2word(101,110,100,0)
,};

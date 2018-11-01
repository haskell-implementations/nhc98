#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+52)
#define ST_v173	((void*)startLabel+72)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v174)
,};
Node FN_NHC_46PackedString_46cons[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 90001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46cons[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46cons),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
,	/* ST_v173: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,99,111,110)
, bytes2word(115,0,0,0)
,};

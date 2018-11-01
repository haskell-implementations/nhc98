#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+48)
#define ST_v178	((void*)startLabel+72)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46min[];
extern Node FN_NHC_46PackedString_46substr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,};
Node FN_NHC_46PackedString_46drop[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46drop[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46drop),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46min))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
,	/* ST_v178: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,100,114,111)
, bytes2word(112,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+68)
#define ST_v192	((void*)startLabel+104)
extern Node TM_NHC_46PackedString[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46take[];
extern Node FN_Prelude_46drop[];
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v193)
,};
Node FN_NHC_46PackedString_46substr[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(3,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,5,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_NHC_46PackedString_46substr[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46substr),3)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, CAPTAG(useLabel(FN_Prelude_46take),1)
, CAPTAG(useLabel(FN_Prelude_46drop),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_NHC_46PackedString_46packString)
,	/* ST_v192: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,115,117,98)
, bytes2word(115,116,114,0)
,};

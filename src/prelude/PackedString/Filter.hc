#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+28)
extern Node FN_Prelude_46filter[];
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_NHC_46PackedString_46filter[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46PackedString_46filter[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46filter),1)
, CAPTAG(useLabel(FN_Prelude_46filter),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_NHC_46PackedString_46packString)
,};

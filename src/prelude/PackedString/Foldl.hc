#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+28)
extern Node FN_Prelude_46foldl[];
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v180)
,};
Node FN_NHC_46PackedString_46foldl[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v180: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46foldl[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46foldl),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
,};

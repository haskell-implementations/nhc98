#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+28)
extern Node FN_Prelude_46map[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46unlines[];
extern Node F0_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v177)
,};
Node FN_NHC_46PackedString_46unlines[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_NHC_46PackedString_46unlines[] = {
  VAPTAG(useLabel(FN_NHC_46PackedString_46unlines))
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(F0_NHC_46PackedString_46unpackPS)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46unlines)
, useLabel(F0_NHC_46PackedString_46packString)
,};

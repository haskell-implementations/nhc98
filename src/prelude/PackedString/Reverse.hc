#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+24)
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46reverse[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v175)
,};
Node FN_NHC_46PackedString_46reverse[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v175: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_NHC_46PackedString_46reverse[] = {
  VAPTAG(useLabel(FN_NHC_46PackedString_46reverse))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46reverse)
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_NHC_46PackedString_46packString)
,};

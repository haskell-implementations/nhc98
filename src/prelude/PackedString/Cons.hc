#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+40)
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v173)
,};
Node FN_NHC_46PackedString_46cons[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v173: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46cons[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46cons),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
,};

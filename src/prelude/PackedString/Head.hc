#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+24)
extern Node FN_NHC_46PackedString_46index[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_NHC_46PackedString_46head[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v170: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46PackedString_46head[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46head),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46index))
,};

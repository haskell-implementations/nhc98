#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+28)
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_NHC_46PackedString_46substr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v171)
,};
Node FN_NHC_46PackedString_46tail[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,1,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v171: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46PackedString_46tail[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46tail),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
,};

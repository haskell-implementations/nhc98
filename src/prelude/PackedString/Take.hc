#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+36)
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46min[];
extern Node FN_NHC_46PackedString_46substr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v177)
,};
Node FN_NHC_46PackedString_46take[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_INT_P1,0,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46take[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46take),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46min))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
,};

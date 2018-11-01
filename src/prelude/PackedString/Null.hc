#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+24)
extern Node FN_NHC_46PackedString_46length[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_NHC_46PackedString_46null[] = {
  bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(EVAL,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v173: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46PackedString_46null[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46null),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
,};

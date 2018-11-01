#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+24)
extern void *length();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v163)
,};
Node FN_NHC_46PackedString_46length[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(length)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v163: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46PackedString_46length[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46length),1)
,};

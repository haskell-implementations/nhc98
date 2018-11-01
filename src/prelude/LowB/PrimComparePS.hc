#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+32)
extern void *primComparePS();

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v163)
,};
Node FN_NHC_46PackedString_46primComparePS[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(primComparePS)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v163: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46PackedString_46primComparePS[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS),2)
,};

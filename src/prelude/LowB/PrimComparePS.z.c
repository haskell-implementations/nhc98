#include "newmacros.h"
#include "runtime.h"

#define CT_v164	((void*)startLabel+44)
#define ST_v163	((void*)startLabel+56)
extern Node TM_NHC_46PackedString[];
extern void *primComparePS();

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v164)
,};
Node FN_NHC_46PackedString_46primComparePS[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(primComparePS)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v163)
,	/* CT_v164: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46PackedString_46primComparePS[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS),2)
,	/* ST_v163: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,112,114,105)
, bytes2word(109,67,111,109)
, bytes2word(112,97,114,101)
, bytes2word(80,83,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v164	((void*)startLabel+36)
#define ST_v163	((void*)startLabel+48)
extern Node TM_NHC_46PackedString[];
extern void *unpackPS();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v164)
,};
Node FN_NHC_46PackedString_46unpackPS[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(unpackPS)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v163)
,	/* CT_v164: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46PackedString_46unpackPS[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS),1)
,	/* ST_v163: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,117,110,112)
, bytes2word(97,99,107,80)
, bytes2word(83,0,0,0)
,};

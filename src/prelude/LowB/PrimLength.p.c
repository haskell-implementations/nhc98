#include "newmacros.h"
#include "runtime.h"

#define CT_v165	((void*)startLabel+32)
#define ST_v164	((void*)startLabel+60)
#define PS_v163	((void*)startLabel+84)
extern void *length();
extern Node PM_NHC_46PackedString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v165)
,};
Node FN_NHC_46PackedString_46length[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(length)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v164)
,	/* CT_v165: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46PackedString_46length[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46length),1)
, useLabel(PS_v163)
, 0
, 0
, 0
,};
Node PP_NHC_46PackedString_46length[] = {
 };
Node PC_NHC_46PackedString_46length[] = {
 	/* ST_v164: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,108,101,110)
, bytes2word(103,116,104,0)
,	/* PS_v163: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46length)
, useLabel(PC_NHC_46PackedString_46length)
,};

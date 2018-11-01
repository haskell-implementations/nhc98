#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+40)
#define ST_v181	((void*)startLabel+52)
extern Node TM_Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,};
Node FN_Ratio_46denominator[] = {
  useLabel(TM_Ratio)
, bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v181)
,	/* CT_v183: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Ratio_46denominator[] = {
  CAPTAG(useLabel(FN_Ratio_46denominator),2)
,	/* ST_v181: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,100,101)
, bytes2word(110,111,109,105)
, bytes2word(110,97,116,111)
, bytes2word(114,0,0,0)
,};

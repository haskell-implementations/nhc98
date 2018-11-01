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
Node FN_Ratio_46numerator[] = {
  useLabel(TM_Ratio)
, bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v181)
,	/* CT_v183: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Ratio_46numerator[] = {
  CAPTAG(useLabel(FN_Ratio_46numerator),2)
,	/* ST_v181: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,110,117)
, bytes2word(109,101,114,97)
, bytes2word(116,111,114,0)
,};

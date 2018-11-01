#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+36)
#define ST_v182	((void*)startLabel+64)
#define PS_v181	((void*)startLabel+84)
extern Node PM_Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Ratio_46denominator[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v182)
,	/* CT_v184: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Ratio_46denominator[] = {
  CAPTAG(useLabel(FN_Ratio_46denominator),2)
, useLabel(PS_v181)
, 0
, 0
, 0
,};
Node PP_Ratio_46denominator[] = {
 };
Node PC_Ratio_46denominator[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,100,101)
, bytes2word(110,111,109,105)
, bytes2word(110,97,116,111)
, bytes2word(114,0,0,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46denominator)
, useLabel(PC_Ratio_46denominator)
,};

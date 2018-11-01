#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+36)
#define ST_v182	((void*)startLabel+64)
#define PS_v181	((void*)startLabel+80)
extern Node PM_Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Ratio_46numerator[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v182)
,	/* CT_v184: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Ratio_46numerator[] = {
  CAPTAG(useLabel(FN_Ratio_46numerator),2)
, useLabel(PS_v181)
, 0
, 0
, 0
,};
Node PP_Ratio_46numerator[] = {
 };
Node PC_Ratio_46numerator[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,110,117)
, bytes2word(109,101,114,97)
, bytes2word(116,111,114,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46numerator)
, useLabel(PC_Ratio_46numerator)
,};

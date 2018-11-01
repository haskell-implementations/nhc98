#include "newmacros.h"
#include "runtime.h"

#define CT_v185	((void*)startLabel+36)
#define ST_v183	((void*)startLabel+64)
#define PS_v182	((void*)startLabel+84)
extern Node PM_Complex[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,};
Node FN_Complex_46realPart[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v183)
,	/* CT_v185: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Complex_46realPart[] = {
  CAPTAG(useLabel(FN_Complex_46realPart),2)
, useLabel(PS_v182)
, 0
, 0
, 0
,};
Node PP_Complex_46realPart[] = {
 };
Node PC_Complex_46realPart[] = {
 	/* ST_v183: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(114,101,97,108)
, bytes2word(80,97,114,116)
, bytes2word(0,0,0,0)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46realPart)
, useLabel(PC_Complex_46realPart)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+40)
#define ST_v182	((void*)startLabel+52)
extern Node TM_Complex[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Complex_46realPart[] = {
  useLabel(TM_Complex)
, bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v182)
,	/* CT_v184: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Complex_46realPart[] = {
  CAPTAG(useLabel(FN_Complex_46realPart),2)
,	/* ST_v182: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(114,101,97,108)
, bytes2word(80,97,114,116)
, bytes2word(0,0,0,0)
,};

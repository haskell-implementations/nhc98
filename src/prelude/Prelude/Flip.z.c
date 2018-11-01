#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+40)
#define ST_v177	((void*)startLabel+52)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v178)
,};
Node FN_Prelude_46flip[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ARG_I3,PUSH_ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46flip[] = {
  CAPTAG(useLabel(FN_Prelude_46flip),3)
,	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,108,105,112)
, bytes2word(0,0,0,0)
,};

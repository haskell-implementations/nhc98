#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+36)
#define ST_v176	((void*)startLabel+48)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v177)
,};
Node FN_Prelude_46seq[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v176)
,	/* CT_v177: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46seq[] = {
  CAPTAG(useLabel(FN_Prelude_46seq),2)
,	/* ST_v176: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,101,113,0)
,};

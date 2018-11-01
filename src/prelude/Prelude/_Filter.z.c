#include "newmacros.h"
#include "runtime.h"

#define v174	((void*)startLabel+29)
#define CT_v177	((void*)startLabel+44)
#define ST_v176	((void*)startLabel+56)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v177)
,};
Node FN_Prelude_46_95filter[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,JUMPFALSE)
, bytes2word(9,0,PUSH_ARG_I3,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v174: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v176)
,	/* CT_v177: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46_95filter[] = {
  CAPTAG(useLabel(FN_Prelude_46_95filter),3)
,	/* ST_v176: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,102,105,108)
, bytes2word(116,101,114,0)
,};

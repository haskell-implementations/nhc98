#include "newmacros.h"
#include "runtime.h"

#define CT_v158	((void*)startLabel+36)
#define ST_v157	((void*)startLabel+48)
extern Node TM_Prelude[];
extern void *primIntFromInteger();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v158)
,};
Node FN_Prelude_46primIntFromInteger[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(primIntFromInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v157)
,	/* CT_v158: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primIntFromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntFromInteger),1)
,	/* ST_v157: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,70)
, bytes2word(114,111,109,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v158	((void*)startLabel+36)
#define ST_v157	((void*)startLabel+48)
extern Node TM_Prelude[];
extern void *primFloatFromInteger();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v158)
,};
Node FN_Prelude_46primFloatFromInteger[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(primFloatFromInteger)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v157)
,	/* CT_v158: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primFloatFromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46primFloatFromInteger),1)
,	/* ST_v157: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(70,108,111,97)
, bytes2word(116,70,114,111)
, bytes2word(109,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(0,0,0,0)
,};

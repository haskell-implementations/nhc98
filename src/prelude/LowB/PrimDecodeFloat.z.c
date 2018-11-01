#include "newmacros.h"
#include "runtime.h"

#define CT_v158	((void*)startLabel+36)
#define ST_v157	((void*)startLabel+48)
extern Node TM_Prelude[];
extern void *primDecodeFloat();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v158)
,};
Node FN_Prelude_46primDecodeFloat[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(primDecodeFloat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v157)
,	/* CT_v158: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primDecodeFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46primDecodeFloat),1)
,	/* ST_v157: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(68,101,99,111)
, bytes2word(100,101,70,108)
, bytes2word(111,97,116,0)
,};

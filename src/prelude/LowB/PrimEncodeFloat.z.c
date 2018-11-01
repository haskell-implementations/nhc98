#include "newmacros.h"
#include "runtime.h"

#define CT_v158	((void*)startLabel+44)
#define ST_v157	((void*)startLabel+56)
extern Node TM_Prelude[];
extern void *primEncodeFloat();

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v158)
,};
Node FN_Prelude_46primEncodeFloat[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(primEncodeFloat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v157)
,	/* CT_v158: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primEncodeFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46primEncodeFloat),2)
,	/* ST_v157: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(69,110,99,111)
, bytes2word(100,101,70,108)
, bytes2word(111,97,116,0)
,};

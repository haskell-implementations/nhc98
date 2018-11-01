#include "newmacros.h"
#include "runtime.h"

#define CT_v158	((void*)startLabel+36)
#define ST_v157	((void*)startLabel+48)
extern Node TM_Prelude[];
extern void *primDecodeDouble();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v158)
,};
Node FN_Prelude_46primDecodeDouble[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(primDecodeDouble)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v157)
,	/* CT_v158: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primDecodeDouble[] = {
  CAPTAG(useLabel(FN_Prelude_46primDecodeDouble),1)
,	/* ST_v157: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(68,101,99,111)
, bytes2word(100,101,68,111)
, bytes2word(117,98,108,101)
, bytes2word(0,0,0,0)
,};

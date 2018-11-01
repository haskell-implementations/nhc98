#include "newmacros.h"
#include "runtime.h"

#define CT_v159	((void*)startLabel+32)
#define ST_v158	((void*)startLabel+60)
#define PS_v157	((void*)startLabel+88)
extern void *primDecodeDouble();
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v159)
,};
Node FN_Prelude_46primDecodeDouble[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(primDecodeDouble)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v158)
,	/* CT_v159: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primDecodeDouble[] = {
  CAPTAG(useLabel(FN_Prelude_46primDecodeDouble),1)
, useLabel(PS_v157)
, 0
, 0
, 0
,};
Node PP_Prelude_46primDecodeDouble[] = {
 };
Node PC_Prelude_46primDecodeDouble[] = {
 	/* ST_v158: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(68,101,99,111)
, bytes2word(100,101,68,111)
, bytes2word(117,98,108,101)
, bytes2word(0,0,0,0)
,	/* PS_v157: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primDecodeDouble)
, useLabel(PC_Prelude_46primDecodeDouble)
,};

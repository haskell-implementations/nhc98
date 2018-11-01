#include "newmacros.h"
#include "runtime.h"

#define CT_v159	((void*)startLabel+40)
#define ST_v158	((void*)startLabel+68)
#define PS_v157	((void*)startLabel+92)
extern void *primEncodeFloat();
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v159)
,};
Node FN_Prelude_46primEncodeFloat[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(primEncodeFloat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v158)
,	/* CT_v159: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primEncodeFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46primEncodeFloat),2)
, useLabel(PS_v157)
, 0
, 0
, 0
,};
Node PP_Prelude_46primEncodeFloat[] = {
 };
Node PC_Prelude_46primEncodeFloat[] = {
 	/* ST_v158: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(69,110,99,111)
, bytes2word(100,101,70,108)
, bytes2word(111,97,116,0)
,	/* PS_v157: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primEncodeFloat)
, useLabel(PC_Prelude_46primEncodeFloat)
,};

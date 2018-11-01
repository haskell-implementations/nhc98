#include "newmacros.h"
#include "runtime.h"

#define v191	((void*)startLabel+22)
#define v192	((void*)startLabel+32)
#define CT_v196	((void*)startLabel+60)
#define ST_v194	((void*)startLabel+88)
#define PS_v193	((void*)startLabel+104)
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v196)
,};
Node FN_Prelude_46either[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v191: (byte 2) */
  bytes2word(TOP(14),BOT(14),UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_ZAP_ARG_I1,EVAL)
,	/* v192: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v194)
,	/* CT_v196: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46either[] = {
  CAPTAG(useLabel(FN_Prelude_46either),3)
, useLabel(PS_v193)
, 0
, 0
, 0
,};
Node PP_Prelude_46either[] = {
 };
Node PC_Prelude_46either[] = {
 	/* ST_v194: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(101,105,116,104)
, bytes2word(101,114,0,0)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46either)
, useLabel(PC_Prelude_46either)
,};

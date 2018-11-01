#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+22)
#define v185	((void*)startLabel+25)
#define CT_v187	((void*)startLabel+44)

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v187)
,};
Node FN_Prelude_46maybe[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v184: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I1)
,	/* v185: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v187: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46maybe),3)
,};

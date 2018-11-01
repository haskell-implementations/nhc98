#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+26)
#define v185	((void*)startLabel+29)
#define CT_v188	((void*)startLabel+56)
#define ST_v186	((void*)startLabel+68)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,};
Node FN_Prelude_46maybe[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v184: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I1)
,	/* v185: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v186)
,	/* CT_v188: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46maybe),3)
,	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,121,98)
, bytes2word(101,0,0,0)
,};

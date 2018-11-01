#include "newmacros.h"
#include "runtime.h"

#define v169	((void*)startLabel+26)
#define v170	((void*)startLabel+30)
#define CT_v173	((void*)startLabel+56)
#define ST_v171	((void*)startLabel+68)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v173)
,};
Node FN_Prelude_46_38_38[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v169: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v170: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_ARG_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v171)
,	/* CT_v173: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46_38_38[] = {
  CAPTAG(useLabel(FN_Prelude_46_38_38),2)
,	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(38,38,0,0)
,};

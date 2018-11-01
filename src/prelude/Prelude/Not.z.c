#include "newmacros.h"
#include "runtime.h"

#define v165	((void*)startLabel+22)
#define v166	((void*)startLabel+26)
#define CT_v169	((void*)startLabel+52)
#define ST_v167	((void*)startLabel+64)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Prelude_46not[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v165: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v166: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 40001
, useLabel(ST_v167)
,	/* CT_v169: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46not[] = {
  CAPTAG(useLabel(FN_Prelude_46not),1)
,	/* ST_v167: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(110,111,116,0)
,};

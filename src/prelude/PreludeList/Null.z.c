#include "newmacros.h"
#include "runtime.h"

#define v168	((void*)startLabel+22)
#define v169	((void*)startLabel+26)
#define CT_v172	((void*)startLabel+56)
#define ST_v170	((void*)startLabel+68)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Prelude_46null[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v168: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v169: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 40001
, useLabel(ST_v170)
,	/* CT_v172: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46null[] = {
  CAPTAG(useLabel(FN_Prelude_46null),1)
,	/* ST_v170: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(110,117,108,108)
, bytes2word(0,0,0,0)
,};

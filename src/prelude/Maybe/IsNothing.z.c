#include "newmacros.h"
#include "runtime.h"

#define v168	((void*)startLabel+22)
#define v166	((void*)startLabel+26)
#define v163	((void*)startLabel+30)
#define CT_v169	((void*)startLabel+56)
#define ST_v167	((void*)startLabel+68)
extern Node TM_Maybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Maybe_46isNothing[] = {
  useLabel(TM_Maybe)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v168: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v166: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_HEAP)
,	/* v163: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 40001
, useLabel(ST_v167)
,	/* CT_v169: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46isNothing[] = {
  CAPTAG(useLabel(FN_Maybe_46isNothing),1)
,	/* ST_v167: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,105,115)
, bytes2word(78,111,116,104)
, bytes2word(105,110,103,0)
,};

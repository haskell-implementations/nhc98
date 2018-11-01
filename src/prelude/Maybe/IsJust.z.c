#include "newmacros.h"
#include "runtime.h"

#define v167	((void*)startLabel+22)
#define v168	((void*)startLabel+26)
#define CT_v171	((void*)startLabel+56)
#define ST_v169	((void*)startLabel+68)
extern Node TM_Maybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v171)
,};
Node FN_Maybe_46isJust[] = {
  useLabel(TM_Maybe)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v167: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v168: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v169)
,	/* CT_v171: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46isJust[] = {
  CAPTAG(useLabel(FN_Maybe_46isJust),1)
,	/* ST_v169: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,105,115)
, bytes2word(74,117,115,116)
, bytes2word(0,0,0,0)
,};

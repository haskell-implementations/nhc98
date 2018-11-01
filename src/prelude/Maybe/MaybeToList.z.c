#include "newmacros.h"
#include "runtime.h"

#define v168	((void*)startLabel+22)
#define v169	((void*)startLabel+26)
#define CT_v172	((void*)startLabel+60)
#define ST_v170	((void*)startLabel+72)
extern Node TM_Maybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Maybe_46maybeToList[] = {
  useLabel(TM_Maybe)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v168: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v169: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,1)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_I1,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v170)
,	/* CT_v172: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46maybeToList[] = {
  CAPTAG(useLabel(FN_Maybe_46maybeToList),1)
,	/* ST_v170: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,109,97)
, bytes2word(121,98,101,84)
, bytes2word(111,76,105,115)
, bytes2word(116,0,0,0)
,};

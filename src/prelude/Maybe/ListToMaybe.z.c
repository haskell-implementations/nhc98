#include "newmacros.h"
#include "runtime.h"

#define v172	((void*)startLabel+22)
#define v173	((void*)startLabel+26)
#define CT_v176	((void*)startLabel+56)
#define ST_v174	((void*)startLabel+68)
extern Node TM_Maybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_Maybe_46listToMaybe[] = {
  useLabel(TM_Maybe)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v172: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v173: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46listToMaybe[] = {
  CAPTAG(useLabel(FN_Maybe_46listToMaybe),1)
,	/* ST_v174: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,108,105)
, bytes2word(115,116,84,111)
, bytes2word(77,97,121,98)
, bytes2word(101,0,0,0)
,};

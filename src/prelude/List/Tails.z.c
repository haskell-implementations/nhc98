#include "newmacros.h"
#include "runtime.h"

#define v174	((void*)startLabel+22)
#define v175	((void*)startLabel+33)
#define CT_v178	((void*)startLabel+68)
#define ST_v176	((void*)startLabel+84)
extern Node TM_List[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_List_46tails[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v174: (byte 2) */
  bytes2word(TOP(15),BOT(15),POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
,	/* v175: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v176)
,	/* CT_v178: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_List_46tails[] = {
  CAPTAG(useLabel(FN_List_46tails),1)
, VAPTAG(useLabel(FN_List_46tails))
,	/* ST_v176: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,116,97,105)
, bytes2word(108,115,0,0)
,};

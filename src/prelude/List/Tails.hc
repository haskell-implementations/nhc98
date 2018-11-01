#include "newmacros.h"
#include "runtime.h"

#define v174	((void*)startLabel+18)
#define v175	((void*)startLabel+31)
#define CT_v177	((void*)startLabel+56)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_List_46tails[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v174: (byte 2) */
  bytes2word(TOP(17),BOT(17),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,3)
,	/* v175: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v177: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_List_46tails[] = {
  CAPTAG(useLabel(FN_List_46tails),1)
, VAPTAG(useLabel(FN_List_46tails))
,};

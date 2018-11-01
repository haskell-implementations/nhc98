#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+28)
#define v185	((void*)startLabel+33)
#define CT_v190	((void*)startLabel+68)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_List_46unfoldr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v184: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v185: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_P1)
, bytes2word(0,ZAP_STACK_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I1,HEAP_OFF_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v190: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_List_46unfoldr[] = {
  CAPTAG(useLabel(FN_List_46unfoldr),2)
, VAPTAG(useLabel(FN_List_46unfoldr))
,};

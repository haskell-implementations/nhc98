#include "newmacros.h"
#include "runtime.h"

#define v186	((void*)startLabel+22)
#define v187	((void*)startLabel+33)
#define v193	((void*)startLabel+54)
#define v191	((void*)startLabel+58)
#define v188	((void*)startLabel+71)
#define CT_v194	((void*)startLabel+92)

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v194)
,};
Node FN_List_46insertBy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v186: (byte 2) */
  bytes2word(TOP(15),BOT(15),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,3)
,	/* v187: (byte 1) */
  bytes2word(RETURN,UNPACK,2,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,PUSH_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v193: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v191: (byte 2) */
  bytes2word(15,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_I1)
,	/* v188: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG_ARG,2)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v194: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_List_46insertBy[] = {
  CAPTAG(useLabel(FN_List_46insertBy),3)
, VAPTAG(useLabel(FN_List_46insertBy))
,};

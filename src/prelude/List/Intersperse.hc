#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+22)
#define v184	((void*)startLabel+27)
#define v190	((void*)startLabel+38)
#define v188	((void*)startLabel+42)
#define v185	((void*)startLabel+52)
#define CT_v191	((void*)startLabel+84)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_List_46intersperse[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v184: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v190: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v188: (byte 2) */
  bytes2word(12,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v185: (byte 4) */
  bytes2word(HEAP_I1,HEAP_OFF_N1,3,RETURN)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_I1,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v191: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_List_46intersperse[] = {
  CAPTAG(useLabel(FN_List_46intersperse),2)
, VAPTAG(useLabel(FN_List_46intersperse))
,};

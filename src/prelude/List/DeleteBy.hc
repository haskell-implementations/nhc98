#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+22)
#define v184	((void*)startLabel+27)
#define v185	((void*)startLabel+44)
#define CT_v188	((void*)startLabel+72)

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,};
Node FN_List_46deleteBy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v184: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(PUSH_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
,	/* v185: (byte 4) */
  bytes2word(4,0,PUSH_I1,RETURN_EVAL)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_I1,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v188: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_List_46deleteBy[] = {
  CAPTAG(useLabel(FN_List_46deleteBy),3)
, VAPTAG(useLabel(FN_List_46deleteBy))
,};

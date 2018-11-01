#include "newmacros.h"
#include "runtime.h"

#define v185	((void*)startLabel+22)
#define v186	((void*)startLabel+25)
#define CT_v188	((void*)startLabel+56)

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,};
Node FN_Prelude_46foldr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v185: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v186: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_I2,PUSH_P1,0,PUSH_P1)
, bytes2word(2,PUSH_ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46foldr[] = {
  CAPTAG(useLabel(FN_Prelude_46foldr),3)
, VAPTAG(useLabel(FN_Prelude_46foldr))
,};

#include "newmacros.h"
#include "runtime.h"

#define v169	((void*)startLabel+22)
#define v170	((void*)startLabel+27)
#define CT_v172	((void*)startLabel+44)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,};
Node FN_Prelude_46_38_38[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v169: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v170: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v172: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46_38_38[] = {
  CAPTAG(useLabel(FN_Prelude_46_38_38),2)
,};

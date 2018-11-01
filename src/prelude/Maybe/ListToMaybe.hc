#include "newmacros.h"
#include "runtime.h"

#define v172	((void*)startLabel+18)
#define v173	((void*)startLabel+23)
#define CT_v175	((void*)startLabel+44)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_Maybe_46listToMaybe[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v172: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v173: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
,	/* CT_v175: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46listToMaybe[] = {
  CAPTAG(useLabel(FN_Maybe_46listToMaybe),1)
,};

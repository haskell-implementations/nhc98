#include "newmacros.h"
#include "runtime.h"

#define v168	((void*)startLabel+18)
#define v169	((void*)startLabel+23)
#define CT_v171	((void*)startLabel+48)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v171)
,};
Node FN_Maybe_46maybeToList[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v168: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v169: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I1,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v171: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46maybeToList[] = {
  CAPTAG(useLabel(FN_Maybe_46maybeToList),1)
,};

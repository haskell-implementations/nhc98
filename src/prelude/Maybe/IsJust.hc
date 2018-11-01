#include "newmacros.h"
#include "runtime.h"

#define v167	((void*)startLabel+18)
#define v168	((void*)startLabel+23)
#define CT_v170	((void*)startLabel+44)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Maybe_46isJust[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v167: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v168: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
,	/* CT_v170: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46isJust[] = {
  CAPTAG(useLabel(FN_Maybe_46isJust),1)
,};

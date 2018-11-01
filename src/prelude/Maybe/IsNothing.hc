#include "newmacros.h"
#include "runtime.h"

#define v167	((void*)startLabel+18)
#define v166	((void*)startLabel+22)
#define v163	((void*)startLabel+27)
#define CT_v168	((void*)startLabel+44)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v168)
,};
Node FN_Maybe_46isNothing[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v167: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v166: (byte 2) */
  bytes2word(7,0,POP_I1,PUSH_HEAP)
,	/* v163: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v168: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46isNothing[] = {
  CAPTAG(useLabel(FN_Maybe_46isNothing),1)
,};

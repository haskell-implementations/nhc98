#include "newmacros.h"
#include "runtime.h"

#define v176	((void*)startLabel+22)
#define v175	((void*)startLabel+26)
#define v172	((void*)startLabel+32)
#define CT_v177	((void*)startLabel+52)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_IO_46isUserError[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(8),BOT(8))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v176: (byte 2) */
  bytes2word(TOP(12),BOT(12),POP_I1,JUMP)
,	/* v175: (byte 2) */
  bytes2word(8,0,UNPACK,2)
,	/* v172: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v177: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46isUserError[] = {
  CAPTAG(useLabel(FN_IO_46isUserError),1)
,};

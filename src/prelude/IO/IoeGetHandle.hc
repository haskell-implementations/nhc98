#include "newmacros.h"
#include "runtime.h"

#define v192	((void*)startLabel+22)
#define v190	((void*)startLabel+26)
#define v191	((void*)startLabel+31)
#define v187	((void*)startLabel+38)
#define CT_v193	((void*)startLabel+56)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v193)
,};
Node FN_IO_46ioeGetHandle[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(17),BOT(17),TOP(8),BOT(8))
,	/* v192: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v190: (byte 2) */
  bytes2word(14,0,UNPACK,4)
,	/* v191: (byte 3) */
  bytes2word(PUSH_P1,2,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v187: (byte 2) */
  bytes2word(HEAP_I2,RETURN,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
,	/* CT_v193: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46ioeGetHandle[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetHandle),1)
,};

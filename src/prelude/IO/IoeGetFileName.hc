#include "newmacros.h"
#include "runtime.h"

#define v201	((void*)startLabel+22)
#define v193	((void*)startLabel+26)
#define v202	((void*)startLabel+38)
#define v197	((void*)startLabel+42)
#define v194	((void*)startLabel+47)
#define v190	((void*)startLabel+52)
#define v199	((void*)startLabel+66)
#define v200	((void*)startLabel+71)
#define CT_v204	((void*)startLabel+92)
extern Node FN_IO_46ioeGetHandle[];
extern Node FN_IO_46hGetFileName[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v204)
,};
Node FN_IO_46ioeGetFileName[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v201: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v193: (byte 2) */
  bytes2word(28,0,UNPACK,4)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v202: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v197: (byte 2) */
  bytes2word(7,0,UNPACK,1)
,	/* v194: (byte 3) */
  bytes2word(PUSH_P1,2,RETURN,POP_P1)
,	/* v190: (byte 4) */
  bytes2word(4,JUMP,2,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v199: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v200: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v204: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46ioeGetFileName[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetFileName),1)
, VAPTAG(useLabel(FN_IO_46ioeGetHandle))
, VAPTAG(useLabel(FN_IO_46hGetFileName))
,};

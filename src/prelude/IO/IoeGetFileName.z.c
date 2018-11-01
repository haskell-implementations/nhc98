#include "newmacros.h"
#include "runtime.h"

#define v202	((void*)startLabel+26)
#define v193	((void*)startLabel+30)
#define v203	((void*)startLabel+42)
#define v197	((void*)startLabel+46)
#define v194	((void*)startLabel+51)
#define v190	((void*)startLabel+56)
#define v199	((void*)startLabel+70)
#define v200	((void*)startLabel+74)
#define CT_v205	((void*)startLabel+104)
#define ST_v201	((void*)startLabel+124)
extern Node TM_IO[];
extern Node FN_IO_46ioeGetHandle[];
extern Node FN_IO_46hGetFileName[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v205)
,};
Node FN_IO_46ioeGetFileName[] = {
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v202: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v193: (byte 2) */
  bytes2word(28,0,UNPACK,4)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v203: (byte 2) */
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
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v200: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 90001
, useLabel(ST_v201)
,	/* CT_v205: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46ioeGetFileName[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetFileName),1)
, VAPTAG(useLabel(FN_IO_46ioeGetHandle))
, VAPTAG(useLabel(FN_IO_46hGetFileName))
,	/* ST_v201: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(111,101,71,101)
, bytes2word(116,70,105,108)
, bytes2word(101,78,97,109)
, bytes2word(101,0,0,0)
,};

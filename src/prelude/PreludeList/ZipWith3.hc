#include "newmacros.h"
#include "runtime.h"

#define v215	((void*)startLabel+26)
#define v206	((void*)startLabel+30)
#define v216	((void*)startLabel+42)
#define v210	((void*)startLabel+46)
#define v217	((void*)startLabel+58)
#define v214	((void*)startLabel+62)
#define v211	((void*)startLabel+88)
#define v207	((void*)startLabel+93)
#define v203	((void*)startLabel+98)
#define CT_v218	((void*)startLabel+116)
extern Node FN_NHC_46Internal_46_95apply3[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v218)
,};
Node FN_Prelude_46zipWith3[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v215: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v206: (byte 2) */
  bytes2word(70,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v216: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v210: (byte 2) */
  bytes2word(49,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v217: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v214: (byte 2) */
  bytes2word(28,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_P1)
, bytes2word(4,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_P1)
, bytes2word(5,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
,	/* v211: (byte 4) */
  bytes2word(11,HEAP_OFF_N1,7,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v207: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v203: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v218: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46zipWith3[] = {
  CAPTAG(useLabel(FN_Prelude_46zipWith3),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46zipWith3))
,};

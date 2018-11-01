#include "newmacros.h"
#include "runtime.h"

#define v216	((void*)startLabel+30)
#define v206	((void*)startLabel+34)
#define v217	((void*)startLabel+46)
#define v210	((void*)startLabel+50)
#define v218	((void*)startLabel+62)
#define v214	((void*)startLabel+66)
#define v211	((void*)startLabel+91)
#define v207	((void*)startLabel+96)
#define v203	((void*)startLabel+101)
#define CT_v219	((void*)startLabel+128)
#define ST_v215	((void*)startLabel+148)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95apply3[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v219)
,};
Node FN_Prelude_46zipWith3[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v216: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v206: (byte 2) */
  bytes2word(69,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v217: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v210: (byte 2) */
  bytes2word(48,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v218: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v214: (byte 2) */
  bytes2word(27,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_P1)
, bytes2word(4,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_P1)
, bytes2word(5,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,11)
,	/* v211: (byte 3) */
  bytes2word(HEAP_OFF_N1,7,RETURN,POP_P1)
,	/* v207: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v203: (byte 1) */
  bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
, 40001
, useLabel(ST_v215)
,	/* CT_v219: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46zipWith3[] = {
  CAPTAG(useLabel(FN_Prelude_46zipWith3),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46zipWith3))
,	/* ST_v215: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(122,105,112,87)
, bytes2word(105,116,104,51)
, bytes2word(0,0,0,0)
,};

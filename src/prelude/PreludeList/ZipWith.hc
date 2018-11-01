#include "newmacros.h"
#include "runtime.h"

#define v199	((void*)startLabel+22)
#define v194	((void*)startLabel+26)
#define v200	((void*)startLabel+38)
#define v198	((void*)startLabel+42)
#define v195	((void*)startLabel+64)
#define v191	((void*)startLabel+69)
#define CT_v201	((void*)startLabel+88)
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v201)
,};
Node FN_Prelude_46zipWith[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v199: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v194: (byte 2) */
  bytes2word(45,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v200: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v198: (byte 2) */
  bytes2word(24,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
,	/* v195: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,6,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v191: (byte 1) */
  bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v201: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46zipWith[] = {
  CAPTAG(useLabel(FN_Prelude_46zipWith),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46zipWith))
,};

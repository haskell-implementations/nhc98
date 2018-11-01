#include "newmacros.h"
#include "runtime.h"

#define v200	((void*)startLabel+26)
#define v194	((void*)startLabel+30)
#define v201	((void*)startLabel+42)
#define v198	((void*)startLabel+46)
#define v195	((void*)startLabel+67)
#define v191	((void*)startLabel+72)
#define CT_v202	((void*)startLabel+100)
#define ST_v199	((void*)startLabel+120)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v202)
,};
Node FN_Prelude_46zipWith[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v200: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v194: (byte 2) */
  bytes2word(44,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v201: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v198: (byte 2) */
  bytes2word(23,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,9)
,	/* v195: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN,POP_P1)
,	/* v191: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
, 40001
, useLabel(ST_v199)
,	/* CT_v202: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46zipWith[] = {
  CAPTAG(useLabel(FN_Prelude_46zipWith),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46zipWith))
,	/* ST_v199: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(122,105,112,87)
, bytes2word(105,116,104,0)
,};

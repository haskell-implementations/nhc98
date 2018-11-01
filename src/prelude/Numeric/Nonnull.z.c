#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+60)
#define FN_LAMBDA191	((void*)startLabel+96)
#define v205	((void*)startLabel+116)
#define v202	((void*)startLabel+120)
#define v199	((void*)startLabel+134)
#define v195	((void*)startLabel+139)
#define CT_v206	((void*)startLabel+164)
#define F0_LAMBDA191	((void*)startLabel+172)
#define ST_v193	((void*)startLabel+176)
#define ST_v203	((void*)startLabel+192)
extern Node TM_Numeric[];
extern Node FN_Prelude_46span[];
extern Node FN_Prelude_46_95foldr[];
extern Node TMSUB_Numeric[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_Numeric_46nonnull[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 50001
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Numeric_46nonnull[] = {
  CAPTAG(useLabel(FN_Numeric_46nonnull),2)
, CAPTAG(useLabel(FN_LAMBDA191),2)
, VAPTAG(useLabel(FN_Prelude_46span))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v206)
,	/* FN_LAMBDA191: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v205: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v202: (byte 4) */
  bytes2word(POP_I1,JUMP,16,0)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v199: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v195: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 50028
, useLabel(ST_v203)
,	/* CT_v206: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),2)
,	/* ST_v193: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(110,111,110,110)
,	/* ST_v203: (byte 4) */
  bytes2word(117,108,108,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(110,111,110,110)
, bytes2word(117,108,108,58)
, bytes2word(53,58,50,56)
, bytes2word(45,53,58,54)
, bytes2word(52,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define v198	((void*)startLabel+18)
#define v197	((void*)startLabel+22)
#define v194	((void*)startLabel+27)
#define CT_v199	((void*)startLabel+76)
#define FN_LAMBDA192	((void*)startLabel+124)
#define v201	((void*)startLabel+134)
#define v202	((void*)startLabel+139)
#define CT_v204	((void*)startLabel+160)
#define F0_LAMBDA192	((void*)startLabel+168)
#define FN_LAMBDA191	((void*)startLabel+184)
#define CT_v205	((void*)startLabel+196)
#define F0_LAMBDA191	((void*)startLabel+204)
#define FN_LAMBDA190	((void*)startLabel+216)
#define CT_v206	((void*)startLabel+228)
#define F0_LAMBDA190	((void*)startLabel+236)
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46Eq_46Prelude_46Char_46_61_61[];
extern Node FN_Prelude_46break[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v199)
,};
Node FN_Prelude_46lines[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v198: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v197: (byte 2) */
  bytes2word(7,0,POP_I1,PUSH_HEAP)
,	/* v194: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CHAR_P1,10,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(9,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I2,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v199: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Prelude_46lines[] = {
  CAPTAG(useLabel(FN_Prelude_46lines),1)
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_61_61)
, VAPTAG(useLabel(FN_Prelude_46break))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA190))
, VAPTAG(useLabel(FN_LAMBDA191))
, VAPTAG(useLabel(FN_LAMBDA192))
, bytes2word(1,0,0,1)
, useLabel(CT_v204)
,	/* FN_LAMBDA192: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v201: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v202: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v204: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_Prelude_46lines))
, bytes2word(1,0,0,1)
, useLabel(CT_v205)
,	/* FN_LAMBDA191: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v205: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v206)
,	/* FN_LAMBDA190: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v206: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA190: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA190),1)
,};

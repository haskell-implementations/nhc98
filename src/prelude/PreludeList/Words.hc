#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+26)
#define v189	((void*)startLabel+30)
#define v186	((void*)startLabel+35)
#define CT_v191	((void*)startLabel+80)
#define FN_LAMBDA184	((void*)startLabel+128)
#define CT_v192	((void*)startLabel+140)
#define F0_LAMBDA184	((void*)startLabel+148)
#define FN_LAMBDA183	((void*)startLabel+160)
#define CT_v193	((void*)startLabel+172)
#define F0_LAMBDA183	((void*)startLabel+180)
extern Node FN_Prelude_46dropWhile[];
extern Node F0_Char_46isSpace[];
extern Node FN_Prelude_46break[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v191)
,};
Node FN_Prelude_46words[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_P1,0)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v190: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v189: (byte 2) */
  bytes2word(7,0,POP_I1,PUSH_HEAP)
,	/* v186: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_P1,9,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_I2,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v191: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Prelude_46words[] = {
  CAPTAG(useLabel(FN_Prelude_46words),1)
, VAPTAG(useLabel(FN_Prelude_46dropWhile))
, useLabel(F0_Char_46isSpace)
, VAPTAG(useLabel(FN_Prelude_46break))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA183))
, VAPTAG(useLabel(FN_LAMBDA184))
, VAPTAG(useLabel(FN_Prelude_46words))
, bytes2word(1,0,0,1)
, useLabel(CT_v192)
,	/* FN_LAMBDA184: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v192: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA184: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA184),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v193)
,	/* FN_LAMBDA183: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA183: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA183),1)
,};

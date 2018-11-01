#include "newmacros.h"
#include "runtime.h"

#define v191	((void*)startLabel+30)
#define v189	((void*)startLabel+34)
#define v186	((void*)startLabel+38)
#define CT_v192	((void*)startLabel+88)
#define FN_LAMBDA184	((void*)startLabel+136)
#define CT_v194	((void*)startLabel+160)
#define F0_LAMBDA184	((void*)startLabel+168)
#define FN_LAMBDA183	((void*)startLabel+180)
#define CT_v196	((void*)startLabel+204)
#define F0_LAMBDA183	((void*)startLabel+212)
#define ST_v190	((void*)startLabel+216)
#define ST_v195	((void*)startLabel+230)
#define ST_v193	((void*)startLabel+249)
extern Node TM_Prelude[];
extern Node FN_Prelude_46dropWhile[];
extern Node F0_Char_46isSpace[];
extern Node FN_Prelude_46break[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v192)
,};
Node FN_Prelude_46words[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_P1,0)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v191: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v189: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_HEAP)
,	/* v186: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,HEAP_CVAL_I5,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,9,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_I2)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
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
, useLabel(CT_v194)
,	/* FN_LAMBDA184: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90041
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA184: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA184),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v196)
,	/* FN_LAMBDA183: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90038
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA183: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA183),1)
,	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(119,111,114,100)
,	/* ST_v195: (byte 2) */
  bytes2word(115,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,119,111)
, bytes2word(114,100,115,58)
, bytes2word(57,58,51,56)
,	/* ST_v193: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,119,111,114)
, bytes2word(100,115,58,57)
, bytes2word(58,52,49,45)
, bytes2word(57,58,52,51)
, bytes2word(0,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v190	((void*)startLabel+24)
#define FN_LAMBDA188	((void*)startLabel+56)
#define v191	((void*)startLabel+72)
#define CT_v193	((void*)startLabel+88)
#define F0_LAMBDA188	((void*)startLabel+96)
#define FN_LAMBDA187	((void*)startLabel+132)
#define CT_v194	((void*)startLabel+156)
#define F0_LAMBDA187	((void*)startLabel+164)
#define FN_LAMBDA186	((void*)startLabel+180)
#define CT_v196	((void*)startLabel+200)
#define CF_LAMBDA186	((void*)startLabel+208)
#define ST_v195	((void*)startLabel+212)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v190)
,};
Node FN_Prelude_46getLine[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v190: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46getLine[] = {
  VAPTAG(useLabel(FN_Prelude_46getLine))
, CAPTAG(useLabel(FN_LAMBDA188),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getChar)
, bytes2word(1,0,0,1)
, useLabel(CT_v193)
,	/* FN_LAMBDA188: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,10,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,EQ_W,JUMPFALSE)
, bytes2word(8,0,HEAP_CVAL_I3,PUSH_HEAP)
,	/* v191: (byte 4) */
  bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA188: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA188),1)
, VAPTAG(useLabel(FN_LAMBDA186))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, CAPTAG(useLabel(FN_LAMBDA187),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getLine)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,	/* FN_LAMBDA187: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v194: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA187: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA187),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v196)
,	/* FN_LAMBDA186: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA186: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA186))
,	/* ST_v195: (byte 0) */
  bytes2word(0,0,0,0)
,};

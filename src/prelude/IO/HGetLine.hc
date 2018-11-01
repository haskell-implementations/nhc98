#include "newmacros.h"
#include "runtime.h"

#define CT_v195	((void*)startLabel+28)
#define FN_LAMBDA193	((void*)startLabel+64)
#define v200	((void*)startLabel+76)
#define v199	((void*)startLabel+80)
#define v196	((void*)startLabel+88)
#define CT_v201	((void*)startLabel+116)
#define F0_LAMBDA193	((void*)startLabel+124)
#define FN_LAMBDA192	((void*)startLabel+156)
#define CT_v202	((void*)startLabel+180)
#define F0_LAMBDA192	((void*)startLabel+188)
extern Node FN_IO_46hGetChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v195)
,};
Node FN_IO_46hGetLine[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v195: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_IO_46hGetLine[] = {
  CAPTAG(useLabel(FN_IO_46hGetLine),1)
, VAPTAG(useLabel(FN_IO_46hGetChar))
, CAPTAG(useLabel(FN_LAMBDA193),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v201)
,	/* FN_LAMBDA193: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(10),BOT(10))
,	/* v200: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v199: (byte 4) */
  bytes2word(POP_I1,JUMP,10,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,PUSH_HEAP)
,	/* v196: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v201: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA193: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA193),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_IO_46hGetLine))
, CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v202)
,	/* FN_LAMBDA192: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v202: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+40)
#define FN_LAMBDA193	((void*)startLabel+76)
#define v202	((void*)startLabel+92)
#define v200	((void*)startLabel+96)
#define v197	((void*)startLabel+103)
#define CT_v203	((void*)startLabel+140)
#define F0_LAMBDA193	((void*)startLabel+148)
#define FN_LAMBDA192	((void*)startLabel+180)
#define CT_v205	((void*)startLabel+216)
#define F0_LAMBDA192	((void*)startLabel+224)
#define ST_v195	((void*)startLabel+232)
#define ST_v204	((void*)startLabel+244)
#define ST_v201	((void*)startLabel+268)
extern Node TM_IO[];
extern Node FN_IO_46hGetChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_IO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v196)
,};
Node FN_IO_46hGetLine[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
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
, useLabel(CT_v203)
,	/* FN_LAMBDA193: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(10),BOT(10))
,	/* v202: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v200: (byte 4) */
  bytes2word(POP_I1,JUMP,9,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v197: (byte 3) */
  bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 70035
, useLabel(ST_v201)
,	/* CT_v203: (byte 0) */
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
, useLabel(CT_v205)
,	/* FN_LAMBDA192: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 100048
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v195: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,76)
,	/* ST_v204: (byte 4) */
  bytes2word(105,110,101,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,76)
, bytes2word(105,110,101,58)
, bytes2word(49,48,58,52)
, bytes2word(56,45,49,48)
,	/* ST_v201: (byte 4) */
  bytes2word(58,53,55,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,76)
, bytes2word(105,110,101,58)
, bytes2word(55,58,51,53)
, bytes2word(45,55,58,52)
, bytes2word(52,0,0,0)
,};

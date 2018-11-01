#include "newmacros.h"
#include "runtime.h"

#define v199	((void*)startLabel+22)
#define v198	((void*)startLabel+26)
#define v195	((void*)startLabel+29)
#define CT_v200	((void*)startLabel+36)
#define CT_v201	((void*)startLabel+76)
#define CT_v202	((void*)startLabel+120)
extern Node CF_Prelude_46Monad_46Prelude_46Maybe[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v200)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe_46mplus[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v199: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v198: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I2)
,	/* v195: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v200: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46Maybe_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe_46mplus),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v201)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe_46mzero[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v201: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46Maybe_46mzero[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe_46mzero))
, bytes2word(0,0,0,0)
, useLabel(CT_v202)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v202: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46Maybe[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe))
, useLabel(CF_Prelude_46Monad_46Prelude_46Maybe)
, useLabel(CF_Monad_46MonadPlus_46Prelude_46Maybe_46mzero)
, useLabel(F0_Monad_46MonadPlus_46Prelude_46Maybe_46mplus)
,};

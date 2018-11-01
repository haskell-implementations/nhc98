#include "newmacros.h"
#include "runtime.h"

#define v200	((void*)startLabel+26)
#define v198	((void*)startLabel+30)
#define v195	((void*)startLabel+33)
#define CT_v201	((void*)startLabel+48)
#define CT_v203	((void*)startLabel+100)
#define CT_v205	((void*)startLabel+152)
#define ST_v204	((void*)startLabel+176)
#define ST_v199	((void*)startLabel+206)
#define ST_v202	((void*)startLabel+242)
extern Node TM_Monad[];
extern Node CF_Prelude_46Monad_46Prelude_46Maybe[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v201)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe_46mplus[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v200: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v198: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I2)
,	/* v195: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 80005
, useLabel(ST_v199)
,	/* CT_v201: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46Maybe_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe_46mplus),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v203)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe_46mzero[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60005
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46Maybe_46mzero[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe_46mzero))
, bytes2word(0,0,0,0)
, useLabel(CT_v205)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, 50011
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46Maybe[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe))
, useLabel(CF_Prelude_46Monad_46Prelude_46Maybe)
, useLabel(CF_Monad_46MonadPlus_46Prelude_46Maybe_46mzero)
, useLabel(F0_Monad_46MonadPlus_46Prelude_46Maybe_46mplus)
,	/* ST_v204: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
,	/* ST_v199: (byte 2) */
  bytes2word(101,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(77,111,110,97)
, bytes2word(100,80,108,117)
, bytes2word(115,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
, bytes2word(109,112,108,117)
,	/* ST_v202: (byte 2) */
  bytes2word(115,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(77,111,110,97)
, bytes2word(100,80,108,117)
, bytes2word(115,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
, bytes2word(109,122,101,114)
, bytes2word(111,0,0,0)
,};

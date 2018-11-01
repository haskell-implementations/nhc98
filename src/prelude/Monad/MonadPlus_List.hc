#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+24)
#define CT_v195	((void*)startLabel+68)
#define CT_v196	((void*)startLabel+112)
extern Node FN_Prelude_46_43_43[];
extern Node CF_Prelude_46Monad_46Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93_46mplus[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v194: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46_91_93_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93_46mplus),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v195)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93_46mzero[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v195: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46_91_93_46mzero[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93_46mzero))
, bytes2word(0,0,0,0)
, useLabel(CT_v196)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v196: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46_91_93[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93))
, useLabel(CF_Prelude_46Monad_46Prelude_46_91_93)
, useLabel(CF_Monad_46MonadPlus_46Prelude_46_91_93_46mzero)
, useLabel(F0_Monad_46MonadPlus_46Prelude_46_91_93_46mplus)
,};

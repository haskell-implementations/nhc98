#include "newmacros.h"
#include "runtime.h"

#define v182	((void*)startLabel+33)
#define CT_v184	((void*)startLabel+44)
extern Node C0__40_41[];
extern Node FN_Monad_46MonadPlus_46Prelude_46Monad[];
extern Node FN_Prelude_46return[];
extern Node FN_Monad_46mzero[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Monad_46guard[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,16,0,PUSH_CVAL_P1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v182: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v184: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Monad_46guard[] = {
  CAPTAG(useLabel(FN_Monad_46guard),2)
, useLabel(C0__40_41)
, VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Monad))
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_Monad_46mzero))
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+20)
extern Node FN_Monad_46liftM2[];
extern Node F0_Prelude_46_36[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_Monad_46ap[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v182: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Monad_46ap[] = {
  CAPTAG(useLabel(FN_Monad_46ap),1)
, VAPTAG(useLabel(FN_Monad_46liftM2))
, useLabel(F0_Prelude_46_36)
,};

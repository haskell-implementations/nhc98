#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+36)
extern Node FN_Monad_46mplus[];
extern Node FN_Monad_46mzero[];
extern Node FN_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v186)
,};
Node FN_Monad_46msum[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v186: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Monad_46msum[] = {
  CAPTAG(useLabel(FN_Monad_46msum),2)
, VAPTAG(useLabel(FN_Monad_46mplus))
, VAPTAG(useLabel(FN_Monad_46mzero))
, VAPTAG(useLabel(FN_Prelude_46foldr))
,};

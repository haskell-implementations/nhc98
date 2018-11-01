#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+48)
#define ST_v186	((void*)startLabel+72)
extern Node TM_Monad[];
extern Node FN_Monad_46mplus[];
extern Node FN_Monad_46mzero[];
extern Node FN_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,};
Node FN_Monad_46msum[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v186)
,	/* CT_v187: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Monad_46msum[] = {
  CAPTAG(useLabel(FN_Monad_46msum),2)
, VAPTAG(useLabel(FN_Monad_46mplus))
, VAPTAG(useLabel(FN_Monad_46mzero))
, VAPTAG(useLabel(FN_Prelude_46foldr))
,	/* ST_v186: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,109,115)
, bytes2word(117,109,0,0)
,};

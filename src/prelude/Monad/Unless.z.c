#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+44)
#define ST_v179	((void*)startLabel+64)
extern Node TM_Monad[];
extern Node FN_Prelude_46not[];
extern Node FN_Monad_46when[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v180)
,};
Node FN_Monad_46unless[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Monad_46unless[] = {
  CAPTAG(useLabel(FN_Monad_46unless),3)
, VAPTAG(useLabel(FN_Prelude_46not))
, VAPTAG(useLabel(FN_Monad_46when))
,	/* ST_v179: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,117,110)
, bytes2word(108,101,115,115)
, bytes2word(0,0,0,0)
,};

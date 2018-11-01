#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+32)
extern Node FN_Prelude_46not[];
extern Node FN_Monad_46when[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v179)
,};
Node FN_Monad_46unless[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v179: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Monad_46unless[] = {
  CAPTAG(useLabel(FN_Monad_46unless),3)
, VAPTAG(useLabel(FN_Prelude_46not))
, VAPTAG(useLabel(FN_Monad_46when))
,};

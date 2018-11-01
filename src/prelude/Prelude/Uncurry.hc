#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+44)
extern Node FN_Prelude_46fst[];
extern Node FN_Prelude_46snd[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,};
Node FN_Prelude_46uncurry[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,PUSH_P1,0,PUSH_P1)
, bytes2word(2,PUSH_ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46uncurry[] = {
  CAPTAG(useLabel(FN_Prelude_46uncurry),2)
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_Prelude_46snd))
,};

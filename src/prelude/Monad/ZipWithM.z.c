#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+60)
#define ST_v192	((void*)startLabel+80)
extern Node TM_Monad[];
extern Node FN_Prelude_46zipWith[];
extern Node FN_Prelude_46sequence[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v193)
,};
Node FN_Monad_46zipWithM[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG,4)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Monad_46zipWithM[] = {
  CAPTAG(useLabel(FN_Monad_46zipWithM),4)
, VAPTAG(useLabel(FN_Prelude_46zipWith))
, VAPTAG(useLabel(FN_Prelude_46sequence))
,	/* ST_v192: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,122,105)
, bytes2word(112,87,105,116)
, bytes2word(104,77,0,0)
,};

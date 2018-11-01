#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+32)
extern Node F0_Prelude_46id[];
extern Node FN_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,};
Node FN_Monad_46join[] = {
  bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,3,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v179: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Monad_46join[] = {
  CAPTAG(useLabel(FN_Monad_46join),2)
, useLabel(F0_Prelude_46id)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
,};

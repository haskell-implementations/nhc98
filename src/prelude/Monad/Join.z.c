#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+44)
#define ST_v179	((void*)startLabel+64)
extern Node TM_Monad[];
extern Node F0_Prelude_46id[];
extern Node FN_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v180)
,};
Node FN_Monad_46join[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,3,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Monad_46join[] = {
  CAPTAG(useLabel(FN_Monad_46join),2)
, useLabel(F0_Prelude_46id)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
,	/* ST_v179: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,106,111)
, bytes2word(105,110,0,0)
,};

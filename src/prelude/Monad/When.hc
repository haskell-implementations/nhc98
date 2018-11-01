#include "newmacros.h"
#include "runtime.h"

#define v177	((void*)startLabel+21)
#define CT_v179	((void*)startLabel+40)
extern Node C0__40_41[];
extern Node FN_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v179)
,};
Node FN_Monad_46when[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,4,0,PUSH_ARG_I3)
,	/* v177: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_CVAL_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v179: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Monad_46when[] = {
  CAPTAG(useLabel(FN_Monad_46when),3)
, useLabel(C0__40_41)
, VAPTAG(useLabel(FN_Prelude_46return))
,};

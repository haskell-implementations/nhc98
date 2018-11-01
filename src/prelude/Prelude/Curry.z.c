#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+56)
#define ST_v181	((void*)startLabel+68)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v182)
,};
Node FN_Prelude_46curry[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_P1,0)
, bytes2word(PUSH_ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 40001
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46curry[] = {
  CAPTAG(useLabel(FN_Prelude_46curry),3)
,	/* ST_v181: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,117,114,114)
, bytes2word(121,0,0,0)
,};

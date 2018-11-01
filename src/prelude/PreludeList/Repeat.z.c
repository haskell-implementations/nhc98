#include "newmacros.h"
#include "runtime.h"

#define CT_v168	((void*)startLabel+44)
#define ST_v167	((void*)startLabel+56)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v168)
,};
Node FN_Prelude_46repeat[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,2,PUSH_P1)
, bytes2word(0,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 40001
, useLabel(ST_v167)
,	/* CT_v168: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46repeat[] = {
  CAPTAG(useLabel(FN_Prelude_46repeat),1)
,	/* ST_v167: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,112,101)
, bytes2word(97,116,0,0)
,};

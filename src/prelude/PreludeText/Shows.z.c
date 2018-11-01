#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+40)
#define ST_v168	((void*)startLabel+56)
extern Node TM_Prelude[];
extern Node FN_Prelude_46showsPrec[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Prelude_46shows[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46shows[] = {
  CAPTAG(useLabel(FN_Prelude_46shows),1)
, VAPTAG(useLabel(FN_Prelude_46showsPrec))
,	/* ST_v168: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(115,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+56)
#define ST_v168	((void*)startLabel+76)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v169)
,};
Node FN_Prelude_46iterate[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 40001
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46iterate[] = {
  CAPTAG(useLabel(FN_Prelude_46iterate),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46iterate))
,	/* ST_v168: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(105,116,101,114)
, bytes2word(97,116,101,0)
,};

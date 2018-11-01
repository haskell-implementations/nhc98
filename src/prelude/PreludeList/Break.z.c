#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+36)
#define ST_v170	((void*)startLabel+60)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46not[];
extern Node FN_Prelude_46span[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v171)
,};
Node FN_Prelude_46break[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v170)
,	/* CT_v171: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46break[] = {
  CAPTAG(useLabel(FN_Prelude_46break),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46not)
, CAPTAG(useLabel(FN_Prelude_46span),1)
,	/* ST_v170: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(98,114,101,97)
, bytes2word(107,0,0,0)
,};

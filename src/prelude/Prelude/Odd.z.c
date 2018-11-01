#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+36)
#define ST_v177	((void*)startLabel+60)
extern Node TM_Prelude[];
extern Node FN_Prelude_46even[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_Prelude_46odd[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46odd[] = {
  CAPTAG(useLabel(FN_Prelude_46odd),1)
, CAPTAG(useLabel(FN_Prelude_46even),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46not)
,	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(111,100,100,0)
,};

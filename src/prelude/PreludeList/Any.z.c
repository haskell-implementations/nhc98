#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+36)
#define ST_v171	((void*)startLabel+60)
extern Node TM_Prelude[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46or[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Prelude_46any[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v171)
,	/* CT_v172: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46any[] = {
  CAPTAG(useLabel(FN_Prelude_46any),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46or)
,	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(97,110,121,0)
,};

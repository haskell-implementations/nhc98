#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+36)
#define ST_v179	((void*)startLabel+60)
extern Node TM_Prelude[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46concat[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v180)
,};
Node FN_Prelude_46concatMap[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46concatMap[] = {
  CAPTAG(useLabel(FN_Prelude_46concatMap),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46concat)
,	/* ST_v179: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,111,110,99)
, bytes2word(97,116,77,97)
, bytes2word(112,0,0,0)
,};

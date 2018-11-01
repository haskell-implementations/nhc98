#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+44)
#define ST_v162	((void*)startLabel+64)
extern Node TM_Prelude[];
extern Node FN_Prelude_46foldr[];
extern Node F0_Prelude_46_124_124[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v163)
,};
Node FN_Prelude_46or[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v162)
,	/* CT_v163: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46or[] = {
  VAPTAG(useLabel(FN_Prelude_46or))
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, useLabel(F0_Prelude_46_124_124)
,	/* ST_v162: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(111,114,0,0)
,};

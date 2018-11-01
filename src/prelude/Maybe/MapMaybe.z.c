#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+36)
#define ST_v179	((void*)startLabel+60)
extern Node TM_Maybe[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_46[];
extern Node F0_Maybe_46catMaybes[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v180)
,};
Node FN_Maybe_46mapMaybe[] = {
  useLabel(TM_Maybe)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Maybe_46mapMaybe[] = {
  CAPTAG(useLabel(FN_Maybe_46mapMaybe),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Maybe_46catMaybes)
,	/* ST_v179: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,109,97)
, bytes2word(112,77,97,121)
, bytes2word(98,101,0,0)
,};

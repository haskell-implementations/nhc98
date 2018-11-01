#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+36)
#define ST_v176	((void*)startLabel+60)
extern Node TM_List[];
extern Node FN_Prelude_46filter[];
extern Node FN_Prelude_46_46[];
extern Node F0_Maybe_46listToMaybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_List_46find[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v176)
,	/* CT_v177: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46find[] = {
  CAPTAG(useLabel(FN_List_46find),1)
, CAPTAG(useLabel(FN_Prelude_46filter),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Maybe_46listToMaybe)
,	/* ST_v176: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,102,105,110)
, bytes2word(100,0,0,0)
,};

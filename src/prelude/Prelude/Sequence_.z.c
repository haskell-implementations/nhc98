#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+56)
#define ST_v181	((void*)startLabel+84)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_62_62[];
extern Node FN_Prelude_46return[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_Prelude_46sequence_95[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46sequence_95[] = {
  CAPTAG(useLabel(FN_Prelude_46sequence_95),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
,	/* ST_v181: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,101,113,117)
, bytes2word(101,110,99,101)
, bytes2word(95,0,0,0)
,};

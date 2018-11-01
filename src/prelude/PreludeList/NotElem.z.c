#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+44)
#define ST_v171	((void*)startLabel+68)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_47_61[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46all[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,};
Node FN_Prelude_46notElem[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v171)
,	/* CT_v172: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46notElem[] = {
  CAPTAG(useLabel(FN_Prelude_46notElem),2)
, VAPTAG(useLabel(FN_Prelude_46_47_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46all))
,	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(110,111,116,69)
, bytes2word(108,101,109,0)
,};

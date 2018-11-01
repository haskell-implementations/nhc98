#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+44)
#define ST_v170	((void*)startLabel+68)
extern Node TM_Prelude[];
extern Node FN_Prelude_46show[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46putStrLn[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v171)
,};
Node FN_Prelude_46print[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v170)
,	/* CT_v171: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46print[] = {
  CAPTAG(useLabel(FN_Prelude_46print),2)
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46putStrLn))
,	/* ST_v170: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,110)
, bytes2word(116,0,0,0)
,};

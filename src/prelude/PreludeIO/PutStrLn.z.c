#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+44)
#define ST_v172	((void*)startLabel+72)
extern Node TM_Prelude[];
extern Node FN_Prelude_46putStr[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46putChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_Prelude_46putStrLn[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CHAR_P1,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v172)
,	/* CT_v173: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46putStrLn[] = {
  CAPTAG(useLabel(FN_Prelude_46putStrLn),1)
, VAPTAG(useLabel(FN_Prelude_46putStr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46putChar))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v172: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,117,116,83)
, bytes2word(116,114,76,110)
, bytes2word(0,0,0,0)
,};

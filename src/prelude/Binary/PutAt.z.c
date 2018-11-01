#include "newmacros.h"
#include "runtime.h"

#define CT_v205	((void*)startLabel+76)
#define ST_v204	((void*)startLabel+108)
extern Node TM_NHC_46Binary[];
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_NHC_46Binary_46put[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v205)
,};
Node FN_NHC_46Binary_46putAt[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 110001
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(5,4)
, 0
,};
Node F0_NHC_46Binary_46putAt[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46putAt),4)
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46put))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v204: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,112)
, bytes2word(117,116,65,116)
, bytes2word(0,0,0,0)
,};

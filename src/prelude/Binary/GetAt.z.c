#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+52)
#define ST_v193	((void*)startLabel+80)
extern Node TM_NHC_46Binary[];
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_NHC_46Binary_46get[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v194)
,};
Node FN_NHC_46Binary_46getAt[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46Binary_46getAt[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getAt),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46get))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v193: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,65,116)
, bytes2word(0,0,0,0)
,};

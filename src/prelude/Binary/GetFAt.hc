#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+32)
extern Node FN_NHC_46Binary_46getF[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46fst[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v191)
,};
Node FN_NHC_46Binary_46getFAt[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v191: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_NHC_46Binary_46getFAt[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getFAt),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46getF))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46fst))
,};

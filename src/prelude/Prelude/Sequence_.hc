#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+44)
extern Node FN_Prelude_46_62_62[];
extern Node FN_Prelude_46return[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v181)
,};
Node FN_Prelude_46sequence_95[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v181: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46sequence_95[] = {
  CAPTAG(useLabel(FN_Prelude_46sequence_95),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
,};

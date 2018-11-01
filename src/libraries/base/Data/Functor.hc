#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+20)
#define CT_v197	((void*)startLabel+60)
extern Node FN_Prelude_46fmap[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46const[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v196)
,};
Node FN_Data_46Functor_46_60_36_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v196: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Data_46Functor_46_60_36_62[] = {
  CAPTAG(useLabel(FN_Data_46Functor_46_60_36_62),1)
, VAPTAG(useLabel(FN_Prelude_46fmap))
, bytes2word(1,0,0,1)
, useLabel(CT_v197)
,};
Node FN_Data_46Functor_46_60_36[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v197: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Data_46Functor_46_60_36[] = {
  CAPTAG(useLabel(FN_Data_46Functor_46_60_36),1)
, VAPTAG(useLabel(FN_Prelude_46fmap))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46const)
,};

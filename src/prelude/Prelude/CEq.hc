#include "newmacros.h"
#include "runtime.h"

#define CT_v199	((void*)startLabel+32)
#define CT_v200	((void*)startLabel+88)
#define CT_v201	((void*)startLabel+132)
#define CT_v202	((void*)startLabel+164)
extern Node FN_Prelude_46_47_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46not[];
extern Node FN_Prelude_46_61_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v199)
,};
Node FN_Prelude_46_95_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v199: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_61_61),3)
, VAPTAG(useLabel(FN_Prelude_46_47_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46not))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v200)
,};
Node FN_Prelude_46_95_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v200: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_47_61),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46not))
, bytes2word(1,0,0,1)
, useLabel(CT_v201)
,};
Node FN_Prelude_46_47_61[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v201: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_47_61),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v202)
,};
Node FN_Prelude_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v202: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_61_61),1)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v263	((void*)startLabel+76)
#define CT_v264	((void*)startLabel+136)
#define CT_v265	((void*)startLabel+204)
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46Eq_46Prelude_463[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v263)
,};
Node FN_Prelude_46Eq_46Prelude_463_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,3,PUSH_ZAP_ARG,5)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,4,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,5,HEAP_I2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(20,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v263: (byte 0) */
  HW(3,5)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_463_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463_46_61_61),5)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Eq_46Prelude_463_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v264: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_463_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463_46_47_61),5)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v265)
,};
Node FN_Prelude_46Eq_46Prelude_463[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v265: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463),3)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463_46_61_61),2)
,};

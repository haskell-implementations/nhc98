#include "newmacros.h"
#include "runtime.h"

#define CT_v238	((void*)startLabel+60)
#define CT_v239	((void*)startLabel+120)
#define CT_v240	((void*)startLabel+184)
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46Eq_46Prelude_462[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v238)
,};
Node FN_Prelude_46Eq_46Prelude_462_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v238: (byte 0) */
  HW(3,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_462_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_462_46_61_61),4)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v239)
,};
Node FN_Prelude_46Eq_46Prelude_462_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v239: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_462_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_462_46_47_61),4)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v240)
,};
Node FN_Prelude_46Eq_46Prelude_462[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v240: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_462),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_462_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_462_46_61_61),2)
,};

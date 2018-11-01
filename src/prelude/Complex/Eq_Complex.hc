#include "newmacros.h"
#include "runtime.h"

#define CT_v231	((void*)startLabel+84)
#define CT_v232	((void*)startLabel+152)
#define CT_v233	((void*)startLabel+208)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46Eq_46Complex_46Complex[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v231)
,};
Node FN_Prelude_46Eq_46Complex_46Complex_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v231: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_Prelude_46Eq_46Complex_46Complex_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_61_61),3)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v232)
,};
Node FN_Prelude_46Eq_46Complex_46Complex_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v232: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Eq_46Complex_46Complex_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_47_61),3)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v233)
,};
Node FN_Prelude_46Eq_46Complex_46Complex[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v233: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Eq_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex),1)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_61_61),2)
,};

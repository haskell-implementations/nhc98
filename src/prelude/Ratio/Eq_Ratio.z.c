#include "newmacros.h"
#include "runtime.h"

#define CT_v245	((void*)startLabel+88)
#define CT_v253	((void*)startLabel+212)
#define CT_v255	((void*)startLabel+296)
#define ST_v254	((void*)startLabel+316)
#define ST_v242	((void*)startLabel+339)
#define ST_v250	((void*)startLabel+365)
extern Node TM_Ratio[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_47_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_124_124[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46_38_38[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v245)
,};
Node FN_Prelude_46Eq_46Ratio_46Ratio_46_47_61[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80005
, useLabel(ST_v242)
,	/* CT_v245: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Eq_46Ratio_46Ratio_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_47_61),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_47_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v253)
,};
Node FN_Prelude_46Eq_46Ratio_46Ratio_46_61_61[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70005
, useLabel(ST_v250)
,	/* CT_v253: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Eq_46Ratio_46Ratio_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_61_61),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(1,0,0,1)
, useLabel(CT_v255)
,};
Node FN_Prelude_46Eq_46Ratio_46Ratio[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60028
, useLabel(ST_v254)
,	/* CT_v255: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Eq_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio),1)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_61_61),2)
,	/* ST_v254: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
,	/* ST_v242: (byte 3) */
  bytes2word(105,111,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,47,61)
,	/* ST_v250: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(61,61,0,0)
,};

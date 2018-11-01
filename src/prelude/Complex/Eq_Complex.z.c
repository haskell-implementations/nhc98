#include "newmacros.h"
#include "runtime.h"

#define CT_v232	((void*)startLabel+96)
#define CT_v234	((void*)startLabel+176)
#define CT_v236	((void*)startLabel+244)
#define ST_v235	((void*)startLabel+264)
#define ST_v233	((void*)startLabel+291)
#define ST_v229	((void*)startLabel+321)
extern Node TM_Complex[];
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
, useLabel(CT_v232)
,};
Node FN_Prelude_46Eq_46Complex_46Complex_46_61_61[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
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
, 60003
, useLabel(ST_v229)
,	/* CT_v232: (byte 0) */
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
, useLabel(CT_v234)
,};
Node FN_Prelude_46Eq_46Complex_46Complex_46_47_61[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 50027
, useLabel(ST_v233)
,	/* CT_v234: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Eq_46Complex_46Complex_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_47_61),3)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v236)
,};
Node FN_Prelude_46Eq_46Complex_46Complex[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50027
, useLabel(ST_v235)
,	/* CT_v236: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Eq_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex),1)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_61_61),2)
,	/* ST_v235: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
,	/* ST_v233: (byte 3) */
  bytes2word(101,120,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,47,61)
,	/* ST_v229: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(61,61,0,0)
,};

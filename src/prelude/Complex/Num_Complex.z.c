#include "newmacros.h"
#include "runtime.h"

#define CT_v417	((void*)startLabel+96)
#define v418	((void*)startLabel+191)
#define CT_v426	((void*)startLabel+292)
#define CT_v428	((void*)startLabel+428)
#define CT_v433	((void*)startLabel+564)
#define CT_v441	((void*)startLabel+792)
#define CT_v449	((void*)startLabel+944)
#define CT_v457	((void*)startLabel+1088)
#define CT_v459	((void*)startLabel+1216)
#define ST_v458	((void*)startLabel+1264)
#define ST_v438	((void*)startLabel+1292)
#define ST_v454	((void*)startLabel+1322)
#define ST_v446	((void*)startLabel+1352)
#define ST_v427	((void*)startLabel+1382)
#define ST_v416	((void*)startLabel+1414)
#define ST_v431	((void*)startLabel+1454)
#define ST_v424	((void*)startLabel+1489)
extern Node TM_Complex[];
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Complex_46Complex[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Complex_46magnitude[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Fractional[];
extern Node FN_Prelude_46_47[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46negate[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46Eq_46Complex_46Complex[];
extern Node FN_Prelude_46Show_46Complex_46Complex[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v417)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46fromInteger[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
, 160005
, useLabel(ST_v416)
,	/* CT_v417: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Num_46Complex_46Complex_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46fromInteger),2)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v426)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46signum[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,10,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
,	/* v418: (byte 3) */
  bytes2word(HEAP_CADR_N1,3,RETURN_EVAL,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_I1,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,5)
, bytes2word(HEAP_I2,PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,6,ZAP_STACK_P1,5)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
, 140005
, useLabel(ST_v424)
,	/* CT_v426: (byte 0) */
  HW(11,2)
, 0
,};
Node F0_Prelude_46Num_46Complex_46Complex_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46signum),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46fromInteger))
, VAPTAG(useLabel(FN_Complex_46magnitude))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46_47))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v428)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46abs[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,3,PUSH_I1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,POP_I1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
, 130005
, useLabel(ST_v427)
,	/* CT_v428: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_Prelude_46Num_46Complex_46Complex_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46abs),2)
, VAPTAG(useLabel(FN_Complex_46magnitude))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v433)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46negate[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(POP_I1,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 120005
, useLabel(ST_v431)
,	/* CT_v433: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Num_46Complex_46Complex_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46negate),2)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v441)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46_42[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(72,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,27,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,7,PUSH_I1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 110005
, useLabel(ST_v438)
,	/* CT_v441: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_Prelude_46Num_46Complex_46Complex_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46_42),3)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v449)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46_45[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,5,HEAP_P1)
, bytes2word(3,PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(POP_I1,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 100005
, useLabel(ST_v446)
,	/* CT_v449: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Prelude_46Num_46Complex_46Complex_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46_45),3)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v457)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46_43[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,5,HEAP_P1)
, bytes2word(3,PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(POP_I1,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 90005
, useLabel(ST_v454)
,	/* CT_v457: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Prelude_46Num_46Complex_46Complex_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46_43),3)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(1,0,0,1)
, useLabel(CT_v459)
,};
Node FN_Prelude_46Num_46Complex_46Complex[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_P1,9)
, bytes2word(HEAP_P1,8,HEAP_P1,7)
, bytes2word(HEAP_P1,6,HEAP_P1,5)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
, 80028
, useLabel(ST_v458)
,	/* CT_v459: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Num_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex),1)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex))
, CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46_42),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46_43),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46_45),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46negate),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46signum),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46fromInteger),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex_46abs),1)
,	/* ST_v458: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(67,111,109,112)
,	/* ST_v438: (byte 4) */
  bytes2word(108,101,120,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
,	/* ST_v454: (byte 2) */
  bytes2word(42,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,67,111)
, bytes2word(109,112,108,101)
,	/* ST_v446: (byte 4) */
  bytes2word(120,46,43,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
,	/* ST_v427: (byte 2) */
  bytes2word(45,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,97,98)
,	/* ST_v416: (byte 2) */
  bytes2word(115,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,102,114)
, bytes2word(111,109,73,110)
, bytes2word(116,101,103,101)
,	/* ST_v431: (byte 2) */
  bytes2word(114,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,110,101)
, bytes2word(103,97,116,101)
,	/* ST_v424: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,78,117,109)
, bytes2word(46,67,111,109)
, bytes2word(112,108,101,120)
, bytes2word(46,67,111,109)
, bytes2word(112,108,101,120)
, bytes2word(46,115,105,103)
, bytes2word(110,117,109,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v299	((void*)startLabel+92)
#define CT_v307	((void*)startLabel+508)
#define CT_v309	((void*)startLabel+616)
#define CT_v311	((void*)startLabel+696)
#define ST_v310	((void*)startLabel+724)
#define ST_v304	((void*)startLabel+759)
#define ST_v298	((void*)startLabel+796)
#define ST_v308	((void*)startLabel+844)
extern Node TM_Complex[];
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Fractional[];
extern Node FN_Prelude_46fromRational[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46exponent[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node FN_Prelude_46scaleFloat[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46_47[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46Fractional_46Complex_46Complex[];
extern Node FN_Prelude_46_95_46recip[];
extern Node FN_Prelude_46Num_46Complex_46Complex[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v299)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46fromRational[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,3,PUSH_I1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,POP_I1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
, 140005
, useLabel(ST_v298)
,	/* CT_v299: (byte 0) */
  HW(7,2)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46fromRational),2)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46fromRational))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v307)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46_47[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(146,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_I2,HEAP_P1)
, bytes2word(4,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,4,HEAP_P1)
, bytes2word(7,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,13)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,7)
, bytes2word(HEAP_P1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,8)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,15)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,10)
, bytes2word(HEAP_P1,4,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,13)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,11)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,39,HEAP_OFF_N1,6)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,16,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,12,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,11,HEAP_P1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,39,HEAP_OFF_N1,6)
, bytes2word(HEAP_I2,PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(14,ZAP_STACK_P1,13,ZAP_STACK_P1)
, bytes2word(12,ZAP_STACK_P1,11,ZAP_STACK_P1)
, bytes2word(10,ZAP_STACK_P1,9,ZAP_STACK_P1)
, bytes2word(8,ZAP_STACK_P1,7,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(POP_I1,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 80005
, useLabel(ST_v304)
,	/* CT_v307: (byte 0) */
  HW(14,3)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46_47),3)
, VAPTAG(useLabel(FN_Prelude_46exponent))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46max))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, VAPTAG(useLabel(FN_Prelude_46scaleFloat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46_47))
, VAPTAG(useLabel(FN_Prelude_46_45))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v309)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46recip[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 70028
, useLabel(ST_v308)
,	/* CT_v309: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46recip),2)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46recip))
, bytes2word(1,0,0,1)
, useLabel(CT_v311)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 70028
, useLabel(ST_v310)
,	/* CT_v311: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex))
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46_47),2)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46fromRational),1)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46recip),1)
,	/* ST_v310: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
,	/* ST_v304: (byte 3) */
  bytes2word(101,120,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,70)
, bytes2word(114,97,99,116)
, bytes2word(105,111,110,97)
, bytes2word(108,46,67,111)
, bytes2word(109,112,108,101)
, bytes2word(120,46,67,111)
, bytes2word(109,112,108,101)
,	/* ST_v298: (byte 4) */
  bytes2word(120,46,47,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,102)
, bytes2word(114,111,109,82)
, bytes2word(97,116,105,111)
,	/* ST_v308: (byte 4) */
  bytes2word(110,97,108,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,114)
, bytes2word(101,99,105,112)
, bytes2word(0,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v416	((void*)startLabel+84)
#define v417	((void*)startLabel+175)
#define CT_v424	((void*)startLabel+268)
#define CT_v425	((void*)startLabel+392)
#define CT_v429	((void*)startLabel+520)
#define CT_v436	((void*)startLabel+736)
#define CT_v443	((void*)startLabel+880)
#define CT_v450	((void*)startLabel+1016)
#define CT_v451	((void*)startLabel+1136)
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
, useLabel(CT_v416)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(1,PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
,	/* CT_v416: (byte 0) */
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
, useLabel(CT_v424)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46signum[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(1,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,10,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
,	/* v417: (byte 3) */
  bytes2word(HEAP_CADR_N1,1,RETURN_EVAL,PUSH_ARG_I2)
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
, bytes2word(HEAP_CVAL_N1,2,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
,	/* CT_v424: (byte 0) */
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
, useLabel(CT_v425)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46abs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,1,PUSH_I1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,POP_I1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
,	/* CT_v425: (byte 0) */
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
, useLabel(CT_v429)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46negate[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
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
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v429: (byte 0) */
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
, useLabel(CT_v436)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46_42[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
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
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v436: (byte 0) */
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
, useLabel(CT_v443)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46_45[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
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
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v443: (byte 0) */
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
, useLabel(CT_v450)
,};
Node FN_Prelude_46Num_46Complex_46Complex_46_43[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
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
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v450: (byte 0) */
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
, useLabel(CT_v451)
,};
Node FN_Prelude_46Num_46Complex_46Complex[] = {
  bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_I3)
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
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(9,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v451: (byte 0) */
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
,};

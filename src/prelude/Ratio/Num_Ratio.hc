#include "newmacros.h"
#include "runtime.h"

#define CT_v392	((void*)startLabel+84)
#define CT_v396	((void*)startLabel+204)
#define CT_v400	((void*)startLabel+304)
#define CT_v404	((void*)startLabel+400)
#define CT_v411	((void*)startLabel+500)
#define CT_v418	((void*)startLabel+640)
#define CT_v425	((void*)startLabel+784)
#define CT_v426	((void*)startLabel+908)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46signum[];
extern Node FN_Prelude_46abs[];
extern Node FN_Prelude_46negate[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Ratio_46reduce[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46Eq_46Ratio_46Ratio[];
extern Node FN_Prelude_46Show_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v392)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(2,PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTRW(1,0)
, 1
,	/* CT_v392: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v396)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46signum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,2,PUSH_I1,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTRW(1,0)
, 1
,	/* CT_v396: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46signum),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46signum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v400)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46abs[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,PUSH_P1,0,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,2,EVAL,POP_I1)
, bytes2word(PUSH_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v400: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46abs),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46abs))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v404)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46negate[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,PUSH_P1,0,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,2,EVAL,POP_I1)
, bytes2word(PUSH_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v404: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46negate),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v411)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(16,HEAP_OFF_N1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v411: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46reduce))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v418)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_45[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(44,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_I2,HEAP_I1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,0)
, bytes2word(HEAP_P1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v418: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_45),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46reduce))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v425)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_43[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(44,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_I2,HEAP_I1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,0)
, bytes2word(HEAP_P1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,7,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v425: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_43),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46reduce))
, bytes2word(1,0,0,1)
, useLabel(CT_v426)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio[] = {
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
,	/* CT_v426: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio),1)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_43),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_45),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46negate),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46signum),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46abs),1)
,};

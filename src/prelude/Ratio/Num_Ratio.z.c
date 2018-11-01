#include "newmacros.h"
#include "runtime.h"

#define CT_v393	((void*)startLabel+96)
#define CT_v398	((void*)startLabel+228)
#define CT_v403	((void*)startLabel+336)
#define CT_v408	((void*)startLabel+440)
#define CT_v416	((void*)startLabel+552)
#define CT_v424	((void*)startLabel+704)
#define CT_v432	((void*)startLabel+860)
#define CT_v434	((void*)startLabel+992)
#define ST_v433	((void*)startLabel+1040)
#define ST_v413	((void*)startLabel+1064)
#define ST_v429	((void*)startLabel+1090)
#define ST_v421	((void*)startLabel+1116)
#define ST_v401	((void*)startLabel+1142)
#define ST_v392	((void*)startLabel+1170)
#define ST_v406	((void*)startLabel+1206)
#define ST_v396	((void*)startLabel+1237)
extern Node TM_Ratio[];
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
, useLabel(CT_v393)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(4,PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTRW(1,0)
, 1
, 160005
, useLabel(ST_v392)
,	/* CT_v393: (byte 0) */
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
, useLabel(CT_v398)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46signum[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,4,PUSH_I1,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTRW(1,0)
, 1
, 150005
, useLabel(ST_v396)
,	/* CT_v398: (byte 0) */
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
, useLabel(CT_v403)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46abs[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,PUSH_P1,0,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,2,EVAL,POP_I1)
, bytes2word(PUSH_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I1)
, bytes2word(HEAP_P1,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 140005
, useLabel(ST_v401)
,	/* CT_v403: (byte 0) */
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
, useLabel(CT_v408)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46negate[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,PUSH_P1,0,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,2,EVAL,POP_I1)
, bytes2word(PUSH_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I1)
, bytes2word(HEAP_P1,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 130005
, useLabel(ST_v406)
,	/* CT_v408: (byte 0) */
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
, useLabel(CT_v416)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
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
, 120005
, useLabel(ST_v413)
,	/* CT_v416: (byte 0) */
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
, useLabel(CT_v424)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_45[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
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
, 110005
, useLabel(ST_v421)
,	/* CT_v424: (byte 0) */
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
, useLabel(CT_v432)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_43[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
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
, 100005
, useLabel(ST_v429)
,	/* CT_v432: (byte 0) */
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
, useLabel(CT_v434)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio[] = {
  useLabel(TM_Ratio)
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
, 90028
, useLabel(ST_v433)
,	/* CT_v434: (byte 0) */
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
,	/* ST_v433: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
,	/* ST_v413: (byte 4) */
  bytes2word(116,105,111,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
,	/* ST_v429: (byte 2) */
  bytes2word(42,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
,	/* ST_v421: (byte 4) */
  bytes2word(111,46,43,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
,	/* ST_v401: (byte 2) */
  bytes2word(45,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,97,98)
,	/* ST_v392: (byte 2) */
  bytes2word(115,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,102,114)
, bytes2word(111,109,73,110)
, bytes2word(116,101,103,101)
,	/* ST_v406: (byte 2) */
  bytes2word(114,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,78,117)
, bytes2word(109,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,110,101)
, bytes2word(103,97,116,101)
,	/* ST_v396: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,78,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,115,105,103)
, bytes2word(110,117,109,0)
,};

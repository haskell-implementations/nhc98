#include "newmacros.h"
#include "runtime.h"

#define CT_v390	((void*)startLabel+32)
#define FN_LAMBDA376	((void*)startLabel+60)
#define CT_v392	((void*)startLabel+80)
#define CF_LAMBDA376	((void*)startLabel+88)
#define v395	((void*)startLabel+209)
#define CT_v398	((void*)startLabel+236)
#define v401	((void*)startLabel+401)
#define CT_v404	((void*)startLabel+428)
#define v408	((void*)startLabel+612)
#define v409	((void*)startLabel+616)
#define v410	((void*)startLabel+631)
#define v412	((void*)startLabel+716)
#define v414	((void*)startLabel+755)
#define v415	((void*)startLabel+844)
#define CT_v419	((void*)startLabel+920)
#define CT_v423	((void*)startLabel+1044)
#define CT_v424	((void*)startLabel+1080)
#define CT_v425	((void*)startLabel+1112)
#define CT_v426	((void*)startLabel+1144)
#define CT_v427	((void*)startLabel+1176)
#define CT_v428	((void*)startLabel+1208)
#define CT_v429	((void*)startLabel+1240)
#define CT_v430	((void*)startLabel+1272)
#define ST_v391	((void*)startLabel+1284)
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node FN_Prelude_46properFraction[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46_62[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46abs[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Fractional[];
extern Node FN_Prelude_46fromRational[];
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46even[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v390)
,};
Node FN_Prelude_46_95_46properFraction[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_ARG_I3)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v390: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46_95_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46properFraction),3)
, VAPTAG(useLabel(FN_LAMBDA376))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v392)
,	/* FN_LAMBDA376: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v391)
,	/* CT_v392: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA376: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA376))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v398)
,};
Node FN_Prelude_46_95_46floor[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(1,PUSH_P1,0,PUSH_P1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(3,ZAP_ARG_I1,ZAP_STACK_P1,5)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,44,0,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_P1,0,PUSH_P1)
, bytes2word(2,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,ZAP_ARG_I2,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
,	/* v395: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTRW(0,0)
,	/* CT_v398: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Prelude_46_95_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46floor),3)
, VAPTAG(useLabel(FN_Prelude_46properFraction))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46_45))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v404)
,};
Node FN_Prelude_46_95_46ceiling[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(1,PUSH_P1,0,PUSH_P1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(3,ZAP_ARG_I1,ZAP_STACK_P1,5)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,44,0,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_P1,0,PUSH_P1)
, bytes2word(2,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,ZAP_ARG_I2,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
,	/* v401: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTRW(0,0)
,	/* CT_v404: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Prelude_46_95_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46ceiling),3)
, VAPTAG(useLabel(FN_Prelude_46properFraction))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_62))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v419)
,};
Node FN_Prelude_46_95_46round[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_P1,45,UNPACK)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CADR_N1,2)
, bytes2word(HEAP_CADR_N1,4,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(23,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,5,PUSH_P1,0)
, bytes2word(PUSH_P1,2,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,16)
, bytes2word(HEAP_OFF_N1,3,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v408: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(149),BOT(149))
,	/* v409: (byte 4) */
  bytes2word(POP_I1,PUSH_P1,0,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,17)
, bytes2word(HEAP_ARG,2,HEAP_I1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,5,0)
,	/* v410: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,5)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,18,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,43,0,HEAP_CVAL_P1)
, bytes2word(19,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(2,PUSH_P1,0,PUSH_P1)
, bytes2word(2,HEAP_CVAL_P1,19,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,ZAP_STACK_P1,3,EVAL)
,	/* v412: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,19,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,2,PUSH_P1,0)
, bytes2word(PUSH_P1,2,HEAP_CVAL_P1,19)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,20)
, bytes2word(HEAP_OFF_N1,3,EVAL,NEEDHEAP_I32)
,	/* v414: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(5,PUSH_P1,0,PUSH_P1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,18,HEAP_OFF_N1)
, bytes2word(3,ZAP_ARG_I1,ZAP_STACK_P1,5)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,43,0,HEAP_CVAL_P1)
, bytes2word(19,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(2,PUSH_P1,0,PUSH_P1)
, bytes2word(2,HEAP_CVAL_P1,19,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,ZAP_STACK_P1,3,EVAL)
,	/* v415: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,19,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,2,PUSH_P1,0)
, bytes2word(PUSH_P1,2,HEAP_CVAL_P1,19)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,20)
, bytes2word(HEAP_OFF_N1,3,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, CONSTRW(1,0)
, 2
, CONSTRW(1,0)
, 1
,	/* CT_v419: (byte 0) */
  HW(18,3)
, 0
,};
Node F0_Prelude_46_95_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46round),3)
, VAPTAG(useLabel(FN_Prelude_46properFraction))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_Prelude_46abs))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46fromRational))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_Prelude_46even))
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v423)
,};
Node FN_Prelude_46_95_46truncate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v423: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46_95_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46truncate),3)
, VAPTAG(useLabel(FN_Prelude_46properFraction))
, bytes2word(1,0,0,1)
, useLabel(CT_v424)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Real[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v424: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Real[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v425)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Fractional[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v425: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Fractional[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v426)
,};
Node FN_Prelude_46round[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v426: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46round),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v427)
,};
Node FN_Prelude_46truncate[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v427: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46truncate),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v428)
,};
Node FN_Prelude_46ceiling[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v428: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46ceiling),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v429)
,};
Node FN_Prelude_46properFraction[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v429: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46properFraction),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v430)
,};
Node FN_Prelude_46floor[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v430: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46floor),1)
,	/* ST_v391: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,112)
, bytes2word(114,111,112,101)
, bytes2word(114,70,114,97)
, bytes2word(99,116,105,111)
, bytes2word(110,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v391	((void*)startLabel+44)
#define FN_LAMBDA376	((void*)startLabel+72)
#define CT_v394	((void*)startLabel+104)
#define CF_LAMBDA376	((void*)startLabel+112)
#define v397	((void*)startLabel+237)
#define CT_v401	((void*)startLabel+272)
#define v404	((void*)startLabel+441)
#define CT_v408	((void*)startLabel+476)
#define v412	((void*)startLabel+664)
#define v413	((void*)startLabel+668)
#define v414	((void*)startLabel+683)
#define v416	((void*)startLabel+768)
#define v418	((void*)startLabel+807)
#define v419	((void*)startLabel+896)
#define CT_v424	((void*)startLabel+980)
#define CT_v429	((void*)startLabel+1116)
#define CT_v431	((void*)startLabel+1164)
#define CT_v433	((void*)startLabel+1208)
#define CT_v435	((void*)startLabel+1252)
#define CT_v437	((void*)startLabel+1296)
#define CT_v439	((void*)startLabel+1340)
#define CT_v441	((void*)startLabel+1384)
#define CT_v443	((void*)startLabel+1428)
#define ST_v393	((void*)startLabel+1440)
#define ST_v432	((void*)startLabel+1494)
#define ST_v430	((void*)startLabel+1530)
#define ST_v406	((void*)startLabel+1560)
#define ST_v399	((void*)startLabel+1578)
#define ST_v390	((void*)startLabel+1594)
#define ST_v392	((void*)startLabel+1619)
#define ST_v421	((void*)startLabel+1650)
#define ST_v427	((void*)startLabel+1666)
#define ST_v438	((void*)startLabel+1685)
#define ST_v442	((void*)startLabel+1701)
#define ST_v440	((void*)startLabel+1715)
#define ST_v434	((void*)startLabel+1738)
#define ST_v436	((void*)startLabel+1752)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node TMSUB_Prelude[];
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
, useLabel(CT_v391)
,};
Node FN_Prelude_46_95_46properFraction[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_ARG_I3)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v390)
,	/* CT_v391: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46_95_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46properFraction),3)
, VAPTAG(useLabel(FN_LAMBDA376))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v394)
,	/* FN_LAMBDA376: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v393)
, 0
, useLabel(ST_v392)
,	/* CT_v394: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA376: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA376))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v401)
,};
Node FN_Prelude_46_95_46floor[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_P1,0,PUSH_P1)
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
, bytes2word(5,PUSH_P1,0,PUSH_P1)
, bytes2word(2,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,ZAP_ARG_I2,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
,	/* v397: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTRW(0,0)
, 180005
, useLabel(ST_v399)
,	/* CT_v401: (byte 0) */
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
, useLabel(CT_v408)
,};
Node FN_Prelude_46_95_46ceiling[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_P1,0,PUSH_P1)
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
, bytes2word(5,PUSH_P1,0,PUSH_P1)
, bytes2word(2,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,ZAP_ARG_I2,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
,	/* v404: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTRW(0,0)
, 170005
, useLabel(ST_v406)
,	/* CT_v408: (byte 0) */
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
, useLabel(CT_v424)
,};
Node FN_Prelude_46_95_46round[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
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
, bytes2word(HEAP_CVAL_P1,12,HEAP_CADR_N1,4)
, bytes2word(HEAP_CADR_N1,6,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(23,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,7,PUSH_P1,0)
, bytes2word(PUSH_P1,2,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,16)
, bytes2word(HEAP_OFF_N1,3,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v412: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(149),BOT(149))
,	/* v413: (byte 4) */
  bytes2word(POP_I1,PUSH_P1,0,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,17)
, bytes2word(HEAP_ARG,2,HEAP_I1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,5,0)
,	/* v414: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,7)
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
, bytes2word(4,PUSH_P1,0,PUSH_P1)
, bytes2word(2,HEAP_CVAL_P1,19,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,ZAP_STACK_P1,3,EVAL)
,	/* v416: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,19,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,4,PUSH_P1,0)
, bytes2word(PUSH_P1,2,HEAP_CVAL_P1,19)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,20)
, bytes2word(HEAP_OFF_N1,3,EVAL,NEEDHEAP_I32)
,	/* v418: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,POP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(7,PUSH_P1,0,PUSH_P1)
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
, bytes2word(4,PUSH_P1,0,PUSH_P1)
, bytes2word(2,HEAP_CVAL_P1,19,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,ZAP_STACK_P1,3,EVAL)
,	/* v419: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,19,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,4,PUSH_P1,0)
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
, 110005
, useLabel(ST_v421)
,	/* CT_v424: (byte 0) */
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
, useLabel(CT_v429)
,};
Node FN_Prelude_46_95_46truncate[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100005
, useLabel(ST_v427)
,	/* CT_v429: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46_95_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46truncate),3)
, VAPTAG(useLabel(FN_Prelude_46properFraction))
, bytes2word(1,0,0,1)
, useLabel(CT_v431)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Real[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50034
, useLabel(ST_v430)
,	/* CT_v431: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Real[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v433)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Fractional[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50034
, useLabel(ST_v432)
,	/* CT_v433: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Fractional[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v435)
,};
Node FN_Prelude_46round[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50034
, useLabel(ST_v434)
,	/* CT_v435: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46round),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v437)
,};
Node FN_Prelude_46truncate[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50034
, useLabel(ST_v436)
,	/* CT_v437: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46truncate),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v439)
,};
Node FN_Prelude_46ceiling[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50034
, useLabel(ST_v438)
,	/* CT_v439: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46ceiling),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v441)
,};
Node FN_Prelude_46properFraction[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50034
, useLabel(ST_v440)
,	/* CT_v441: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46properFraction),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v443)
,};
Node FN_Prelude_46floor[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50034
, useLabel(ST_v442)
,	/* CT_v443: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46floor),1)
,	/* ST_v393: (byte 0) */
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
,	/* ST_v432: (byte 2) */
  bytes2word(110,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,108,70,114)
, bytes2word(97,99,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,70)
, bytes2word(114,97,99,116)
, bytes2word(105,111,110,97)
,	/* ST_v430: (byte 2) */
  bytes2word(108,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,108,70,114)
, bytes2word(97,99,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
,	/* ST_v406: (byte 4) */
  bytes2word(101,97,108,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,99,101)
, bytes2word(105,108,105,110)
,	/* ST_v399: (byte 2) */
  bytes2word(103,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(102,108,111,111)
,	/* ST_v390: (byte 2) */
  bytes2word(114,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(112,114,111,112)
, bytes2word(101,114,70,114)
, bytes2word(97,99,116,105)
,	/* ST_v392: (byte 3) */
  bytes2word(111,110,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,95)
, bytes2word(46,112,114,111)
, bytes2word(112,101,114,70)
, bytes2word(114,97,99,116)
, bytes2word(105,111,110,58)
, bytes2word(110,111,112,111)
,	/* ST_v421: (byte 2) */
  bytes2word(115,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(114,111,117,110)
,	/* ST_v427: (byte 2) */
  bytes2word(100,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(116,114,117,110)
, bytes2word(99,97,116,101)
,	/* ST_v438: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,99,101,105)
, bytes2word(108,105,110,103)
,	/* ST_v442: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,102,108,111)
,	/* ST_v440: (byte 3) */
  bytes2word(111,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,112)
, bytes2word(114,111,112,101)
, bytes2word(114,70,114,97)
, bytes2word(99,116,105,111)
,	/* ST_v434: (byte 2) */
  bytes2word(110,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,114,111)
,	/* ST_v436: (byte 4) */
  bytes2word(117,110,100,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(116,114,117,110)
, bytes2word(99,97,116,101)
, bytes2word(0,0,0,0)
,};

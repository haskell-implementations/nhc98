#include "newmacros.h"
#include "runtime.h"

#define CT_v361	((void*)startLabel+76)
#define FN_Ratio_46Prelude_46164_46simplest	((void*)startLabel+124)
#define v362	((void*)startLabel+213)
#define v364	((void*)startLabel+240)
#define v366	((void*)startLabel+292)
#define v368	((void*)startLabel+365)
#define v370	((void*)startLabel+379)
#define CT_v373	((void*)startLabel+424)
#define F0_Ratio_46Prelude_46164_46simplest	((void*)startLabel+432)
#define FN_LAMBDA351	((void*)startLabel+532)
#define CT_v375	((void*)startLabel+564)
#define CF_LAMBDA351	((void*)startLabel+572)
#define FN_LAMBDA350	((void*)startLabel+584)
#define CT_v377	((void*)startLabel+608)
#define F0_LAMBDA350	((void*)startLabel+616)
#define FN_LAMBDA349	((void*)startLabel+628)
#define CT_v379	((void*)startLabel+652)
#define F0_LAMBDA349	((void*)startLabel+660)
#define FN_LAMBDA348	((void*)startLabel+672)
#define CT_v381	((void*)startLabel+696)
#define F0_LAMBDA348	((void*)startLabel+704)
#define FN_LAMBDA347	((void*)startLabel+716)
#define CT_v383	((void*)startLabel+740)
#define F0_LAMBDA347	((void*)startLabel+748)
#define FN_Ratio_46Prelude_46165_46simplest_39	((void*)startLabel+768)
#define v384	((void*)startLabel+959)
#define v386	((void*)startLabel+1062)
#define v388	((void*)startLabel+1124)
#define CT_v391	((void*)startLabel+1172)
#define F0_Ratio_46Prelude_46165_46simplest_39	((void*)startLabel+1180)
#define FN_LAMBDA346	((void*)startLabel+1276)
#define CT_v393	((void*)startLabel+1308)
#define CF_LAMBDA346	((void*)startLabel+1316)
#define FN_LAMBDA345	((void*)startLabel+1328)
#define CT_v395	((void*)startLabel+1352)
#define F0_LAMBDA345	((void*)startLabel+1360)
#define FN_LAMBDA344	((void*)startLabel+1372)
#define CT_v397	((void*)startLabel+1396)
#define F0_LAMBDA344	((void*)startLabel+1404)
#define FN_LAMBDA343	((void*)startLabel+1416)
#define CT_v399	((void*)startLabel+1440)
#define F0_LAMBDA343	((void*)startLabel+1448)
#define FN_LAMBDA342	((void*)startLabel+1460)
#define CT_v401	((void*)startLabel+1484)
#define F0_LAMBDA342	((void*)startLabel+1492)
#define FN_LAMBDA341	((void*)startLabel+1504)
#define CT_v403	((void*)startLabel+1528)
#define F0_LAMBDA341	((void*)startLabel+1536)
#define FN_LAMBDA340	((void*)startLabel+1548)
#define CT_v405	((void*)startLabel+1572)
#define F0_LAMBDA340	((void*)startLabel+1580)
#define ST_v360	((void*)startLabel+1584)
#define ST_v372	((void*)startLabel+1605)
#define ST_v378	((void*)startLabel+1638)
#define ST_v376	((void*)startLabel+1665)
#define ST_v382	((void*)startLabel+1692)
#define ST_v380	((void*)startLabel+1725)
#define ST_v390	((void*)startLabel+1758)
#define ST_v400	((void*)startLabel+1791)
#define ST_v398	((void*)startLabel+1818)
#define ST_v404	((void*)startLabel+1845)
#define ST_v402	((void*)startLabel+1878)
#define ST_v396	((void*)startLabel+1911)
#define ST_v394	((void*)startLabel+1944)
#define ST_v374	((void*)startLabel+1977)
#define ST_v392	((void*)startLabel+2034)
extern Node TM_Ratio[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_45[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_43[];
extern Node TMSUB_Ratio[];
extern Node FN_Prelude_46toRational[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46_62[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46negate[];
extern Node FN_NHC_46Internal_46_95apply4[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46negate[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46quotRem[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46_47_61[];
extern Node FN_Prelude_46_42[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v361)
,};
Node FN_Ratio_46approxRational[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG_ARG,2)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 190001
, useLabel(ST_v360)
,	/* CT_v361: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Ratio_46approxRational[] = {
  CAPTAG(useLabel(FN_Ratio_46approxRational),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Ratio_46Prelude_46164_46simplest))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v373)
,	/* FN_Ratio_46Prelude_46164_46simplest: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,4)
, bytes2word(PUSH_ARG_I2,PUSH_ARG_I3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,3,ZAP_STACK_P1)
, bytes2word(11,ZAP_STACK_P1,10,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,5,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,11,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_ARG_ARG)
, bytes2word(1,3,HEAP_ARG,2)
,	/* v362: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I3,PUSH_ARG_I2,HEAP_CVAL_P1)
, bytes2word(12,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,5)
,	/* v364: (byte 4) */
  bytes2word(0,PUSH_P1,3,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,12,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,16)
, bytes2word(HEAP_OFF_N1,3,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(7,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,SLIDE_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,14,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,17,HEAP_CVAL_P1)
, bytes2word(18,HEAP_I2,HEAP_I1,HEAP_P1)
,	/* v366: (byte 4) */
  bytes2word(7,HEAP_P1,6,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,12,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I3,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,ZAP_ARG_I1,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(SLIDE_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,36,0,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_P1,20,HEAP_P1)
, bytes2word(6,HEAP_CVAL_P1,20,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,21,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,18,HEAP_OFF_N1,7)
, bytes2word(HEAP_P1,5,HEAP_OFF_N1,7)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_P1,18,HEAP_OFF_N1,5)
,	/* v368: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(JUMPFALSE,10,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_CADR_N1,3)
,	/* v370: (byte 3) */
  bytes2word(HEAP_CADR_N1,7,RETURN,HEAP_CVAL_P1)
, bytes2word(23,PUSH_HEAP,HEAP_CVAL_P1,24)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTR(0,2,0)
, CONSTR(1,0,0)
, CONSTRW(0,0)
, 200015
, useLabel(ST_v372)
,	/* CT_v373: (byte 0) */
  HW(22,3)
, 0
,	/* F0_Ratio_46Prelude_46164_46simplest: (byte 0) */
  CAPTAG(useLabel(FN_Ratio_46Prelude_46164_46simplest),3)
, VAPTAG(useLabel(FN_Prelude_46toRational))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA347))
, VAPTAG(useLabel(FN_LAMBDA348))
, VAPTAG(useLabel(FN_LAMBDA349))
, VAPTAG(useLabel(FN_LAMBDA350))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Ratio_46Prelude_46164_46simplest))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46_62))
, VAPTAG(useLabel(FN_Ratio_46Prelude_46165_46simplest_39))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, CAPTAG(useLabel(FN_Ratio_46Prelude_46165_46simplest_39),5)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46negate))
, VAPTAG(useLabel(FN_LAMBDA351))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v375)
,	/* FN_LAMBDA351: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v374)
, 200015
, useLabel(ST_v372)
,	/* CT_v375: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA351: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA351))
, bytes2word(1,0,0,1)
, useLabel(CT_v377)
,	/* FN_LAMBDA350: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 250056
, useLabel(ST_v376)
,	/* CT_v377: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA350: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA350),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v379)
,	/* FN_LAMBDA349: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 250051
, useLabel(ST_v378)
,	/* CT_v379: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA349: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA349),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v381)
,	/* FN_LAMBDA348: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 260054
, useLabel(ST_v380)
,	/* CT_v381: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA348: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA348),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v383)
,	/* FN_LAMBDA347: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 260048
, useLabel(ST_v382)
,	/* CT_v383: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA347: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA347),1)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v391)
,	/* FN_Ratio_46Prelude_46165_46simplest_39: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDHEAP_P1,70,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG,4,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(PUSH_HEAP,HEAP_ARG,1,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG_ARG,2)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,PUSH_HEAP)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG_ARG,1,5,HEAP_P1)
, bytes2word(5,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,7)
, bytes2word(HEAP_I2,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(16,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,3,PUSH_P1,0)
, bytes2word(PUSH_P1,6,HEAP_CVAL_P1,14)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,15)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,17)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(18,HEAP_OFF_N1,3,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_ARG)
, bytes2word(5,ZAP_STACK_P1,15,ZAP_STACK_P1)
, bytes2word(14,ZAP_STACK_P1,12,ZAP_STACK_P1)
, bytes2word(11,ZAP_STACK_P1,10,ZAP_STACK_P1)
, bytes2word(8,ZAP_STACK_P1,7,ZAP_STACK_P1)
, bytes2word(6,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,SLIDE_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,37,0)
, bytes2word(HEAP_CVAL_P1,14,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,16,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,5,PUSH_P1)
, bytes2word(6,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,6,HEAP_P1)
,	/* v384: (byte 3) */
  bytes2word(7,HEAP_I1,RETURN,PUSH_P1)
, bytes2word(9,PUSH_P1,6,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(17,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,19,HEAP_OFF_N1,3)
, bytes2word(ZAP_STACK_P1,12,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,73,0,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(20,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(16,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(12,HEAP_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_P1,14,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,16,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,5)
, bytes2word(PUSH_I1,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,6,HEAP_I2)
,	/* v386: (byte 2) */
  bytes2word(HEAP_I1,RETURN,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(7,JUMPFALSE,58,0)
, bytes2word(HEAP_CVAL_P1,14,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,20,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,14,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,21,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(5,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,6)
, bytes2word(HEAP_I1,PUSH_P1,0,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,7,EVAL,POP_I1)
, bytes2word(PUSH_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,6)
,	/* v388: (byte 4) */
  bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(HEAP_CVAL_P1,22,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(23,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, CONSTR(0,2,0)
, CONSTRW(1,0)
, 1
, CONSTRW(0,0)
, 280015
, useLabel(ST_v390)
,	/* CT_v391: (byte 0) */
  HW(21,5)
, 0
,	/* F0_Ratio_46Prelude_46165_46simplest_39: (byte 0) */
  CAPTAG(useLabel(FN_Ratio_46Prelude_46165_46simplest_39),5)
, VAPTAG(useLabel(FN_Prelude_46quotRem))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_LAMBDA340))
, VAPTAG(useLabel(FN_LAMBDA341))
, VAPTAG(useLabel(FN_LAMBDA342))
, VAPTAG(useLabel(FN_LAMBDA343))
, CAPTAG(useLabel(FN_Ratio_46Prelude_46165_46simplest_39),5)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA344))
, VAPTAG(useLabel(FN_LAMBDA345))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_47_61))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_LAMBDA346))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v393)
,	/* FN_LAMBDA346: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v392)
, 280015
, useLabel(ST_v390)
,	/* CT_v393: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA346: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA346))
, bytes2word(1,0,0,1)
, useLabel(CT_v395)
,	/* FN_LAMBDA345: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 340052
, useLabel(ST_v394)
,	/* CT_v395: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA345: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA345),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v397)
,	/* FN_LAMBDA344: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 340045
, useLabel(ST_v396)
,	/* CT_v397: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA344: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA344),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v399)
,	/* FN_LAMBDA343: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 320047
, useLabel(ST_v398)
,	/* CT_v399: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA343: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA343),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v401)
,	/* FN_LAMBDA342: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 320045
, useLabel(ST_v400)
,	/* CT_v401: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA342: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA342),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v403)
,	/* FN_LAMBDA341: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 330048
, useLabel(ST_v402)
,	/* CT_v403: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA341: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA341),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v405)
,	/* FN_LAMBDA340: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 330045
, useLabel(ST_v404)
,	/* CT_v405: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA340: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA340),1)
,	/* ST_v360: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,97,112)
, bytes2word(112,114,111,120)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
,	/* ST_v372: (byte 1) */
  bytes2word(0,82,97,116)
, bytes2word(105,111,46,97)
, bytes2word(112,112,114,111)
, bytes2word(120,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,58,50,48)
, bytes2word(58,49,53,45)
, bytes2word(50,54,58,55)
,	/* ST_v378: (byte 2) */
  bytes2word(50,0,82,97)
, bytes2word(116,105,111,46)
, bytes2word(97,112,112,114)
, bytes2word(111,120,82,97)
, bytes2word(116,105,111,110)
, bytes2word(97,108,58,50)
, bytes2word(53,58,53,49)
,	/* ST_v376: (byte 1) */
  bytes2word(0,82,97,116)
, bytes2word(105,111,46,97)
, bytes2word(112,112,114,111)
, bytes2word(120,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,58,50,53)
,	/* ST_v382: (byte 4) */
  bytes2word(58,53,54,0)
, bytes2word(82,97,116,105)
, bytes2word(111,46,97,112)
, bytes2word(112,114,111,120)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
, bytes2word(58,50,54,58)
, bytes2word(52,56,45,50)
, bytes2word(54,58,52,57)
,	/* ST_v380: (byte 1) */
  bytes2word(0,82,97,116)
, bytes2word(105,111,46,97)
, bytes2word(112,112,114,111)
, bytes2word(120,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,58,50,54)
, bytes2word(58,53,52,45)
, bytes2word(50,54,58,53)
,	/* ST_v390: (byte 2) */
  bytes2word(53,0,82,97)
, bytes2word(116,105,111,46)
, bytes2word(97,112,112,114)
, bytes2word(111,120,82,97)
, bytes2word(116,105,111,110)
, bytes2word(97,108,58,50)
, bytes2word(56,58,49,53)
, bytes2word(45,51,52,58)
,	/* ST_v400: (byte 3) */
  bytes2word(55,55,0,82)
, bytes2word(97,116,105,111)
, bytes2word(46,97,112,112)
, bytes2word(114,111,120,82)
, bytes2word(97,116,105,111)
, bytes2word(110,97,108,58)
, bytes2word(51,50,58,52)
,	/* ST_v398: (byte 2) */
  bytes2word(53,0,82,97)
, bytes2word(116,105,111,46)
, bytes2word(97,112,112,114)
, bytes2word(111,120,82,97)
, bytes2word(116,105,111,110)
, bytes2word(97,108,58,51)
, bytes2word(50,58,52,55)
,	/* ST_v404: (byte 1) */
  bytes2word(0,82,97,116)
, bytes2word(105,111,46,97)
, bytes2word(112,112,114,111)
, bytes2word(120,82,97,116)
, bytes2word(105,111,110,97)
, bytes2word(108,58,51,51)
, bytes2word(58,52,53,45)
, bytes2word(51,51,58,52)
,	/* ST_v402: (byte 2) */
  bytes2word(54,0,82,97)
, bytes2word(116,105,111,46)
, bytes2word(97,112,112,114)
, bytes2word(111,120,82,97)
, bytes2word(116,105,111,110)
, bytes2word(97,108,58,51)
, bytes2word(51,58,52,56)
, bytes2word(45,51,51,58)
,	/* ST_v396: (byte 3) */
  bytes2word(52,57,0,82)
, bytes2word(97,116,105,111)
, bytes2word(46,97,112,112)
, bytes2word(114,111,120,82)
, bytes2word(97,116,105,111)
, bytes2word(110,97,108,58)
, bytes2word(51,52,58,52)
, bytes2word(53,45,51,52)
,	/* ST_v394: (byte 4) */
  bytes2word(58,52,55,0)
, bytes2word(82,97,116,105)
, bytes2word(111,46,97,112)
, bytes2word(112,114,111,120)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
, bytes2word(58,51,52,58)
, bytes2word(53,50,45,51)
, bytes2word(52,58,53,52)
,	/* ST_v374: (byte 1) */
  bytes2word(0,82,97,116)
, bytes2word(105,111,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,50,48,58)
, bytes2word(49,53,45,50)
, bytes2word(54,58,55,50)
,	/* ST_v392: (byte 2) */
  bytes2word(46,0,82,97)
, bytes2word(116,105,111,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,50,56)
, bytes2word(58,49,53,45)
, bytes2word(51,52,58,55)
, bytes2word(55,46,0,0)
,};
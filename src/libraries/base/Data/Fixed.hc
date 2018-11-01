#include "newmacros.h"
#include "runtime.h"

#define C0_Data_46Fixed_46E0	((void*)startLabel+4)
#define C0_Data_46Fixed_46E1	((void*)startLabel+8)
#define C0_Data_46Fixed_46E2	((void*)startLabel+12)
#define C0_Data_46Fixed_46E3	((void*)startLabel+16)
#define C0_Data_46Fixed_46E6	((void*)startLabel+20)
#define C0_Data_46Fixed_46E9	((void*)startLabel+24)
#define C0_Data_46Fixed_46E12	((void*)startLabel+28)
#define CT_v1490	((void*)startLabel+68)
#define CT_v1491	((void*)startLabel+108)
#define CT_v1492	((void*)startLabel+148)
#define CT_v1493	((void*)startLabel+188)
#define CT_v1494	((void*)startLabel+228)
#define CT_v1495	((void*)startLabel+268)
#define CT_v1496	((void*)startLabel+308)
#define FN_Data_46Fixed_46withDot	((void*)startLabel+328)
#define v1501	((void*)startLabel+338)
#define v1500	((void*)startLabel+342)
#define v1497	((void*)startLabel+346)
#define CT_v1502	((void*)startLabel+368)
#define F0_Data_46Fixed_46withDot	((void*)startLabel+376)
#define FN_LAMBDA1453	((void*)startLabel+392)
#define CT_v1504	((void*)startLabel+412)
#define CF_LAMBDA1453	((void*)startLabel+420)
#define FN_Data_46Fixed_46chopZeros	((void*)startLabel+432)
#define v1505	((void*)startLabel+447)
#define v1509	((void*)startLabel+476)
#define CT_v1513	((void*)startLabel+504)
#define F0_Data_46Fixed_46chopZeros	((void*)startLabel+512)
#define FN_LAMBDA1454	((void*)startLabel+552)
#define CT_v1514	((void*)startLabel+572)
#define CF_LAMBDA1454	((void*)startLabel+580)
#define FN_Data_46Fixed_46showIntegerZeros	((void*)startLabel+596)
#define v1523	((void*)startLabel+606)
#define v1518	((void*)startLabel+610)
#define v1515	((void*)startLabel+625)
#define CT_v1524	((void*)startLabel+672)
#define F0_Data_46Fixed_46showIntegerZeros	((void*)startLabel+680)
#define FN_LAMBDA1456	((void*)startLabel+728)
#define v1525	((void*)startLabel+740)
#define CT_v1527	((void*)startLabel+748)
#define F0_LAMBDA1456	((void*)startLabel+756)
#define FN_LAMBDA1455	((void*)startLabel+772)
#define CT_v1528	((void*)startLabel+792)
#define CF_LAMBDA1455	((void*)startLabel+800)
#define v1529	((void*)startLabel+858)
#define CT_v1533	((void*)startLabel+960)
#define FN_Data_46Fixed_46Prelude_46292_46maxnum	((void*)startLabel+1068)
#define CT_v1534	((void*)startLabel+1112)
#define F0_Data_46Fixed_46Prelude_46292_46maxnum	((void*)startLabel+1120)
#define FN_Data_46Fixed_46Prelude_46291_46digits	((void*)startLabel+1156)
#define CT_v1535	((void*)startLabel+1196)
#define F0_Data_46Fixed_46Prelude_46291_46digits	((void*)startLabel+1204)
#define FN_LAMBDA1459	((void*)startLabel+1228)
#define CT_v1536	((void*)startLabel+1240)
#define F0_LAMBDA1459	((void*)startLabel+1248)
#define FN_LAMBDA1458	((void*)startLabel+1260)
#define CT_v1537	((void*)startLabel+1272)
#define F0_LAMBDA1458	((void*)startLabel+1280)
#define FN_LAMBDA1457	((void*)startLabel+1292)
#define CT_v1539	((void*)startLabel+1312)
#define CF_LAMBDA1457	((void*)startLabel+1320)
#define CT_v1540	((void*)startLabel+1364)
#define CT_v1541	((void*)startLabel+1408)
#define CT_v1542	((void*)startLabel+1456)
#define CT_v1543	((void*)startLabel+1504)
#define CT_v1544	((void*)startLabel+1556)
#define CT_v1545	((void*)startLabel+1612)
#define CT_v1546	((void*)startLabel+1668)
#define CT_v1547	((void*)startLabel+1724)
#define CT_v1548	((void*)startLabel+1828)
#define FN_Data_46Fixed_46Prelude_46265_46i	((void*)startLabel+1876)
#define CT_v1549	((void*)startLabel+1892)
#define F0_Data_46Fixed_46Prelude_46265_46i	((void*)startLabel+1900)
#define FN_Data_46Fixed_46withType	((void*)startLabel+1916)
#define CT_v1550	((void*)startLabel+1932)
#define F0_Data_46Fixed_46withType	((void*)startLabel+1940)
#define FN_Data_46Fixed_46withResolution	((void*)startLabel+1960)
#define CT_v1551	((void*)startLabel+1980)
#define F0_Data_46Fixed_46withResolution	((void*)startLabel+1988)
#define CT_v1552	((void*)startLabel+2032)
#define FN_LAMBDA1460	((void*)startLabel+2064)
#define CT_v1553	((void*)startLabel+2088)
#define F0_LAMBDA1460	((void*)startLabel+2096)
#define CT_v1554	((void*)startLabel+2160)
#define CT_v1555	((void*)startLabel+2228)
#define CT_v1556	((void*)startLabel+2300)
#define CT_v1557	((void*)startLabel+2360)
#define FN_LAMBDA1461	((void*)startLabel+2392)
#define CT_v1558	((void*)startLabel+2404)
#define F0_LAMBDA1461	((void*)startLabel+2412)
#define CT_v1559	((void*)startLabel+2448)
#define CT_v1560	((void*)startLabel+2492)
#define CT_v1561	((void*)startLabel+2532)
#define CT_v1562	((void*)startLabel+2588)
#define CT_v1563	((void*)startLabel+2640)
#define CT_v1564	((void*)startLabel+2680)
#define CT_v1565	((void*)startLabel+2728)
#define CT_v1566	((void*)startLabel+2780)
#define CT_v1567	((void*)startLabel+2832)
#define CT_v1568	((void*)startLabel+2880)
#define CT_v1569	((void*)startLabel+2924)
#define CT_v1570	((void*)startLabel+2968)
#define CT_v1571	((void*)startLabel+3012)
#define CT_v1572	((void*)startLabel+3048)
#define CT_v1573	((void*)startLabel+3096)
#define FN_LAMBDA1462	((void*)startLabel+3124)
#define CT_v1575	((void*)startLabel+3144)
#define CF_LAMBDA1462	((void*)startLabel+3152)
#define CT_v1576	((void*)startLabel+3212)
#define CT_v1577	((void*)startLabel+3328)
#define FN_Data_46Fixed_46Prelude_46207_46f	((void*)startLabel+3388)
#define CT_v1578	((void*)startLabel+3404)
#define F0_Data_46Fixed_46Prelude_46207_46f	((void*)startLabel+3412)
#define CT_v1579	((void*)startLabel+3532)
#define FN_Data_46Fixed_46Prelude_46204_46f	((void*)startLabel+3592)
#define CT_v1580	((void*)startLabel+3608)
#define F0_Data_46Fixed_46Prelude_46204_46f	((void*)startLabel+3616)
#define CT_v1581	((void*)startLabel+3648)
#define CT_v1582	((void*)startLabel+3688)
#define CT_v1583	((void*)startLabel+3728)
#define CT_v1584	((void*)startLabel+3772)
#define CT_v1585	((void*)startLabel+3816)
#define CT_v1586	((void*)startLabel+3860)
#define CT_v1587	((void*)startLabel+3904)
#define CT_v1588	((void*)startLabel+3948)
#define CT_v1589	((void*)startLabel+3988)
#define CT_v1590	((void*)startLabel+4036)
#define CT_v1591	((void*)startLabel+4096)
#define CT_v1592	((void*)startLabel+4160)
#define CT_v1593	((void*)startLabel+4212)
#define CT_v1594	((void*)startLabel+4336)
#define CT_v1595	((void*)startLabel+4424)
#define CT_v1596	((void*)startLabel+4500)
#define CT_v1597	((void*)startLabel+4600)
#define CT_v1598	((void*)startLabel+4692)
#define CT_v1599	((void*)startLabel+4748)
#define CT_v1600	((void*)startLabel+4792)
#define CT_v1601	((void*)startLabel+4836)
#define CT_v1602	((void*)startLabel+4880)
#define CT_v1603	((void*)startLabel+4924)
#define CT_v1604	((void*)startLabel+4968)
#define CT_v1605	((void*)startLabel+5012)
#define ST_v1503	((void*)startLabel+5028)
#define ST_v1538	((void*)startLabel+5029)
#define ST_v1574	((void*)startLabel+5031)
extern Node FN_NHC_46Internal_46_95eqInteger[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46mod[];
extern Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46div[];
extern Node FN_Prelude_46Show_46Prelude_46Integer_46show[];
extern Node FN_Prelude_46length[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46replicate[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node FN_Prelude_46asTypeOf[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46negate[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Data_46Fixed_46resolution[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46divMod[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46_94[];
extern Node FN_Prelude_46Num_46Prelude_46Double_46fromInteger[];
extern Node FN_Prelude_46Floating_46Prelude_46Double_46logBase[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Double_46ceiling[];
extern Node FN_Prelude_46Show_46Data_46Fixed_46Fixed[];
extern Node FN_Prelude_46_95_46showsType[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46_95_46showsPrec[];
extern Node FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46round[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[];
extern Node FN_Prelude_46Num_46Data_46Fixed_46Fixed[];
extern Node FN_Prelude_46fromIntegral[];
extern Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45[];
extern Node CF_Prelude_46undefined[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46Real_46Prelude_46Integer_46toRational[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio_46_47[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46signum[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46abs[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_45[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_43[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo[];
extern Node FN_Prelude_46Functor_46Prelude_46_91_93_46fmap[];
extern Node F0_NHC_46Internal_46_95id[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromTo[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThen[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFrom[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46fromEnum[];
extern Node F0_Prelude_46Enum_46Prelude_46Integer_46toEnum[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46pred[];
extern Node FN_Prelude_46Enum_46Prelude_46Integer_46succ[];
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node FN_Prelude_46toRational[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46_60_61[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Data_46Fixed_46Fixed[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Data_46Fixed_46Fixed[];

static Node startLabel[] = {
  42
,	/* C0_Data_46Fixed_46E0: (byte 0) */
  CONSTR(0,0,0)
,	/* C0_Data_46Fixed_46E1: (byte 0) */
  CONSTR(0,0,0)
,	/* C0_Data_46Fixed_46E2: (byte 0) */
  CONSTR(0,0,0)
,	/* C0_Data_46Fixed_46E3: (byte 0) */
  CONSTR(0,0,0)
,	/* C0_Data_46Fixed_46E6: (byte 0) */
  CONSTR(0,0,0)
,	/* C0_Data_46Fixed_46E9: (byte 0) */
  CONSTR(0,0,0)
,	/* C0_Data_46Fixed_46E12: (byte 0) */
  CONSTR(0,0,0)
, bytes2word(1,0,0,1)
, useLabel(CT_v1490)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(2,0)
, -727379968
, 232
,	/* CT_v1490: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1491)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1000000000
,	/* CT_v1491: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1492)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1000000
,	/* CT_v1492: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1493)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1000
,	/* CT_v1493: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1494)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 100
,	/* CT_v1494: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1495)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 10
,	/* CT_v1495: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1496)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_CADR_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v1496: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1502)
,	/* FN_Data_46Fixed_46withDot: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v1501: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v1500: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_HEAP)
,	/* v1497: (byte 2) */
  bytes2word(HEAP_CVAL_I3,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CHAR_P1,46,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v1502: (byte 0) */
  HW(1,1)
, 0
,	/* F0_Data_46Fixed_46withDot: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46withDot),1)
, VAPTAG(useLabel(FN_LAMBDA1453))
, bytes2word(0,0,0,0)
, useLabel(CT_v1504)
,	/* FN_LAMBDA1453: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1503)
,	/* CT_v1504: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1453: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1453))
, bytes2word(1,0,0,1)
, useLabel(CT_v1513)
,	/* FN_Data_46Fixed_46chopZeros: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CADR_N1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,5,0)
,	/* v1505: (byte 3) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_I4,RETURN_EVAL,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CADR_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CADR_N1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,14,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(HEAP_CADR_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v1509: (byte 4) */
  bytes2word(8,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 10
, CONSTRW(0,0)
,	/* CT_v1513: (byte 0) */
  HW(7,1)
, 0
,	/* F0_Data_46Fixed_46chopZeros: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46chopZeros),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95eqInteger))
, VAPTAG(useLabel(FN_LAMBDA1454))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46mod))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, VAPTAG(useLabel(FN_Data_46Fixed_46chopZeros))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show))
, bytes2word(0,0,0,0)
, useLabel(CT_v1514)
,	/* FN_LAMBDA1454: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1503)
,	/* CT_v1514: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1454: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1454))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1524)
,	/* FN_Data_46Fixed_46showIntegerZeros: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v1523: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v1518: (byte 2) */
  bytes2word(17,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CADR_N1)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(5,0,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v1515: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,1,3,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(4,HEAP_CHAR_P1,48,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1524: (byte 0) */
  HW(8,3)
, 0
,	/* F0_Data_46Fixed_46showIntegerZeros: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46showIntegerZeros),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95eqInteger))
, VAPTAG(useLabel(FN_LAMBDA1455))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show))
, VAPTAG(useLabel(FN_LAMBDA1456))
, VAPTAG(useLabel(FN_Prelude_46length))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46replicate))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1527)
,	/* FN_LAMBDA1456: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,7,0,PUSH_HEAP)
,	/* v1525: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1527: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA1456: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1456),3)
, VAPTAG(useLabel(FN_Data_46Fixed_46chopZeros))
, bytes2word(0,0,0,0)
, useLabel(CT_v1528)
,	/* FN_LAMBDA1455: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1503)
,	/* CT_v1528: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1455: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1455))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1533)
,};
Node FN_Data_46Fixed_46showFixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(3,HEAP_CADR_N1,1,EVAL)
, bytes2word(NEEDHEAP_P1,40,JUMPFALSE,31)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,13,HEAP_OFF_N1)
,	/* v1529: (byte 2) */
  bytes2word(6,RETURN_EVAL,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_ARG)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,15,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_P1,17)
, bytes2word(HEAP_P1,0,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,18,HEAP_OFF_N1)
, bytes2word(4,HEAP_P1,4,HEAP_CVAL_P1)
, bytes2word(19,HEAP_I2,HEAP_CVAL_P1,20)
, bytes2word(HEAP_P1,4,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_P1,22,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,5,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,23,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(14,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v1533: (byte 0) */
  HW(21,3)
, 0
,};
Node F0_Data_46Fixed_46showFixed[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46showFixed),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60))
, VAPTAG(useLabel(FN_LAMBDA1457))
, VAPTAG(useLabel(FN_Prelude_46asTypeOf))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Data_46Fixed_46showFixed))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46divMod))
, VAPTAG(useLabel(FN_LAMBDA1458))
, VAPTAG(useLabel(FN_LAMBDA1459))
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46292_46maxnum),1)
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show))
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46291_46digits),1)
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Data_46Fixed_46showIntegerZeros))
, VAPTAG(useLabel(FN_Data_46Fixed_46withDot))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1534)
,	/* FN_Data_46Fixed_46Prelude_46292_46maxnum: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,2,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(2,HEAP_I1,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 10
,	/* CT_v1534: (byte 0) */
  HW(5,2)
, 0
,	/* F0_Data_46Fixed_46Prelude_46292_46maxnum: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46292_46maxnum),2)
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46291_46digits),1)
, VAPTAG(useLabel(FN_Prelude_46_94))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1535)
,	/* FN_Data_46Fixed_46Prelude_46291_46digits: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,3,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(2,0)
, 0
, 1076101120
,	/* CT_v1535: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Data_46Fixed_46Prelude_46291_46digits: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46291_46digits),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Double_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Floating_46Prelude_46Double_46logBase))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46ceiling))
, bytes2word(1,0,0,1)
, useLabel(CT_v1536)
,	/* FN_LAMBDA1459: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1536: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1459: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1459),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1537)
,	/* FN_LAMBDA1458: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1537: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA1458: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1458),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1539)
,	/* FN_LAMBDA1457: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1538)
,	/* CT_v1539: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1457: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1457))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1540)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed_46show[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v1540: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46show),2)
, VAPTAG(useLabel(FN_Data_46Fixed_46showFixed))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1541)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1541: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1542)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1542: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showList),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1543)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1543: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46_95_46showsPrec))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1544)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1544: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor),3)
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1545)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1545: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling),3)
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1546)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1546: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round),3)
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1547)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1547: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate),3)
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1548)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(0,HEAP_ARG,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_I1,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I4,HEAP_P1,0)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_I1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,1,3)
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,22,HEAP_OFF_N1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1548: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction),3)
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46265_46i),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1549)
,	/* FN_Data_46Fixed_46Prelude_46265_46i: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1549: (byte 0) */
  HW(1,3)
, 0
,	/* F0_Data_46Fixed_46Prelude_46265_46i: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46265_46i),3)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate))
, bytes2word(1,0,0,1)
, useLabel(CT_v1550)
,	/* FN_Data_46Fixed_46withType: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1550: (byte 0) */
  HW(1,1)
, 0
,	/* F0_Data_46Fixed_46withType: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46withType),1)
, useLabel(CF_Prelude_46undefined)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1551)
,	/* FN_Data_46Fixed_46withResolution: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1551: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Data_46Fixed_46withResolution: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46withResolution),2)
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Data_46Fixed_46withType))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1552)
,};
Node FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1552: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational),2)
, CAPTAG(useLabel(FN_LAMBDA1460),1)
, VAPTAG(useLabel(FN_Data_46Fixed_46withResolution))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1553)
,	/* FN_LAMBDA1460: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_I5,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1553: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA1460: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1460),2)
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer_46toRational))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1554)
,};
Node FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_P1,0)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1554: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip),2)
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1555)
,};
Node FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1555: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47),3)
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1556)
,};
Node FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1556: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational),2)
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer_46toRational))
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1557)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1557: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger),2)
, CAPTAG(useLabel(FN_LAMBDA1461),1)
, VAPTAG(useLabel(FN_Data_46Fixed_46withResolution))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1558)
,	/* FN_LAMBDA1461: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1558: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA1461: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA1461),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1559)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46signum[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1559: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46signum),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46signum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1560)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46abs[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1560: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46abs),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46abs))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1561)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46negate[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1561: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46negate),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1562)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_42[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1562: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_42),3)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Data_46Fixed_46resolution))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1563)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1563: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45),3)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_45))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1564)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_43[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1564: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_43),3)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1565)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1565: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo))
, VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1566)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1566: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromTo))
, VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1567)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1567: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThen))
, VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(1,0,0,1)
, useLabel(CT_v1568)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1568: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFrom))
, VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(1,0,0,1)
, useLabel(CT_v1569)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1569: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46fromEnum))
, bytes2word(1,0,0,1)
, useLabel(CT_v1570)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1570: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46Internal_46_95id)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46toEnum)
, bytes2word(1,0,0,1)
, useLabel(CT_v1571)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1571: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46pred))
, bytes2word(1,0,0,1)
, useLabel(CT_v1572)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1572: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46succ))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1573)
,};
Node FN_Data_46Fixed_46_95_46resolution[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1573: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Data_46Fixed_46_95_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46_95_46resolution),2)
, VAPTAG(useLabel(FN_LAMBDA1462))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v1575)
,	/* FN_LAMBDA1462: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v1574)
,	/* CT_v1575: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA1462: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA1462))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1576)
,};
Node FN_Data_46Fixed_46div_39[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(7,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1576: (byte 0) */
  HW(5,4)
, 0
,};
Node F0_Data_46Fixed_46div_39[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46div_39),4)
, VAPTAG(useLabel(FN_Prelude_46toRational))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v1577)
,};
Node FN_Data_46Fixed_46mod_39[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,3)
, bytes2word(PUSH_P1,0,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,3,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1577: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_Data_46Fixed_46mod_39[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46mod_39),3)
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46207_46f),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_45))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1578)
,	/* FN_Data_46Fixed_46Prelude_46207_46f: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,4,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1578: (byte 0) */
  HW(1,4)
, 0
,	/* F0_Data_46Fixed_46Prelude_46207_46f: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46207_46f),4)
, VAPTAG(useLabel(FN_Data_46Fixed_46div_39))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1579)
,};
Node FN_Data_46Fixed_46divMod_39[] = {
  bytes2word(NEEDHEAP_P1,46,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_I1,HEAP_OFF_N1,4,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_I1,HEAP_CVAL_I5,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,26,HEAP_ARG,3)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,35,HEAP_OFF_N1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1579: (byte 0) */
  HW(8,4)
, 0
,};
Node F0_Data_46Fixed_46divMod_39[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46divMod_39),4)
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46204_46f),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v1580)
,	/* FN_Data_46Fixed_46Prelude_46204_46f: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,4,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1580: (byte 0) */
  HW(1,4)
, 0
,	/* F0_Data_46Fixed_46Prelude_46204_46f: (byte 0) */
  CAPTAG(useLabel(FN_Data_46Fixed_46Prelude_46204_46f),4)
, VAPTAG(useLabel(FN_Data_46Fixed_46div_39))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1581)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1581: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1582)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1582: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1583)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1583: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1584)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1584: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1585)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1585: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1586)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1586: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1587)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1587: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1588)
,};
Node FN_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1588: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v1589)
,};
Node FN_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v1589: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Data_46Fixed_46Fixed)
, bytes2word(0,0,0,0)
, useLabel(CT_v1590)
,};
Node FN_Prelude_46Eq_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1590: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Data_46Fixed_46Fixed[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Data_46Fixed_46Fixed))
, useLabel(F0_Prelude_46Eq_46Data_46Fixed_46Fixed_46_47_61)
, useLabel(F0_Prelude_46Eq_46Data_46Fixed_46Fixed_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v1591)
,};
Node FN_Prelude_46Ord_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v1591: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Data_46Fixed_46Fixed[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Data_46Fixed_46Fixed))
, useLabel(CF_Prelude_46Eq_46Data_46Fixed_46Fixed)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_60_61)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62_61)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46_62)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46compare)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46min)
, useLabel(F0_Prelude_46Ord_46Data_46Fixed_46Fixed_46max)
, bytes2word(1,0,0,1)
, useLabel(CT_v1592)
,};
Node FN_Data_46Fixed_46resolution[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1592: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Fixed_46resolution[] = {
  CAPTAG(useLabel(FN_Data_46Fixed_46resolution),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1593)
,};
Node FN_Prelude_46Enum_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v1593: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46Data_46Fixed_46Fixed[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46Data_46Fixed_46Fixed))
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46succ)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46pred)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFrom)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46fromEnum)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46toEnum)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46Data_46Fixed_46Fixed_46enumFromThenTo)
, bytes2word(1,0,0,1)
, useLabel(CT_v1594)
,};
Node FN_Prelude_46Num_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_P1,35,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_P1,11)
, bytes2word(HEAP_P1,8,HEAP_P1,7)
, bytes2word(HEAP_P1,6,HEAP_P1,5)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v1594: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Num_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed),1)
, VAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed))
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_42),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_43),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46_45),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46negate),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46signum),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46fromInteger),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed_46abs),1)
, useLabel(CF_Prelude_46Eq_46Data_46Fixed_46Fixed)
, bytes2word(1,0,0,1)
, useLabel(CT_v1595)
,};
Node FN_Prelude_46Real_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_CVAL_I5,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v1595: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed))
, CAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed_46toRational),1)
, useLabel(CF_Prelude_46Ord_46Data_46Fixed_46Fixed)
, bytes2word(1,0,0,1)
, useLabel(CT_v1596)
,};
Node FN_Prelude_46Fractional_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v1596: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Fractional_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Data_46Fixed_46Fixed))
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46_47),2)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46fromRational),1)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed_46recip),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v1597)
,};
Node FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
,	/* CT_v1597: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed),1)
, VAPTAG(useLabel(FN_Prelude_46Real_46Data_46Fixed_46Fixed))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Data_46Fixed_46Fixed))
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46round),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46truncate),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46ceiling),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46properFraction),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Data_46Fixed_46Fixed_46floor),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v1598)
,};
Node FN_Prelude_46Show_46Data_46Fixed_46Fixed[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v1598: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Show_46Data_46Fixed_46Fixed[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Data_46Fixed_46Fixed_46show),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v1599)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1599: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0))
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E0_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1600)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1600: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1))
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E1_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1601)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1601: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2))
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E2_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1602)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1602: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3))
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E3_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1603)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1603: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6))
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E6_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1604)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1604: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9))
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E9_46resolution)
, bytes2word(0,0,0,0)
, useLabel(CT_v1605)
,};
Node FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v1605: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12[] = {
  VAPTAG(useLabel(FN_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12))
, useLabel(F0_Data_46Fixed_46HasResolution_46Data_46Fixed_46E12_46resolution)
,	/* ST_v1503: (byte 0) */
 	/* ST_v1538: (byte 1) */
 	/* ST_v1574: (byte 3) */
  bytes2word(0,45,0,78)
, bytes2word(111,32,100,101)
, bytes2word(102,97,117,108)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,105)
, bytes2word(116,105,111,110)
, bytes2word(32,102,111,114)
, bytes2word(32,99,108,97)
, bytes2word(115,115,32,109)
, bytes2word(101,116,104,111)
, bytes2word(100,32,114,101)
, bytes2word(115,111,108,117)
, bytes2word(116,105,111,110)
, bytes2word(0,0,0,0)
,};

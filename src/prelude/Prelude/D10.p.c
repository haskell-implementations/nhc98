#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_4610	((void*)startLabel+16)
#define CT_v1389	((void*)startLabel+256)
#define CT_v1394	((void*)startLabel+516)
#define v1400	((void*)startLabel+624)
#define v1401	((void*)startLabel+634)
#define v1403	((void*)startLabel+668)
#define v1404	((void*)startLabel+678)
#define v1406	((void*)startLabel+712)
#define v1407	((void*)startLabel+722)
#define v1409	((void*)startLabel+758)
#define v1410	((void*)startLabel+768)
#define v1412	((void*)startLabel+804)
#define v1413	((void*)startLabel+814)
#define v1415	((void*)startLabel+850)
#define v1416	((void*)startLabel+860)
#define v1418	((void*)startLabel+896)
#define v1419	((void*)startLabel+906)
#define v1421	((void*)startLabel+942)
#define v1422	((void*)startLabel+952)
#define v1424	((void*)startLabel+988)
#define v1425	((void*)startLabel+998)
#define v1426	((void*)startLabel+1024)
#define v1427	((void*)startLabel+1034)
#define v1428	((void*)startLabel+1044)
#define v1429	((void*)startLabel+1054)
#define v1430	((void*)startLabel+1064)
#define v1431	((void*)startLabel+1074)
#define v1432	((void*)startLabel+1084)
#define v1433	((void*)startLabel+1094)
#define v1434	((void*)startLabel+1104)
#define CT_v1451	((void*)startLabel+1232)
#define CT_v1467	((void*)startLabel+2172)
#define CT_v1472	((void*)startLabel+2352)
#define CT_v1477	((void*)startLabel+2512)
#define CT_v1482	((void*)startLabel+2672)
#define CT_v1487	((void*)startLabel+2832)
#define CT_v1492	((void*)startLabel+2992)
#define CT_v1504	((void*)startLabel+3472)
#define CT_v1509	((void*)startLabel+3636)
#define CT_v1515	((void*)startLabel+3852)
#define CT_v1528	((void*)startLabel+4460)
#define CT_v1534	((void*)startLabel+4704)
#define ST_v1530	((void*)startLabel+4740)
#define ST_v1386	((void*)startLabel+4768)
#define ST_v1391	((void*)startLabel+4804)
#define ST_v1511	((void*)startLabel+4840)
#define ST_v1506	((void*)startLabel+4864)
#define ST_v1498	((void*)startLabel+4892)
#define ST_v1517	((void*)startLabel+4920)
#define ST_v1489	((void*)startLabel+4944)
#define ST_v1457	((void*)startLabel+4972)
#define ST_v1479	((void*)startLabel+5000)
#define ST_v1484	((void*)startLabel+5028)
#define ST_v1436	((void*)startLabel+5056)
#define ST_v1474	((void*)startLabel+5088)
#define ST_v1469	((void*)startLabel+5116)
#define PS_v1502	((void*)startLabel+5144)
#define PS_v1503	((void*)startLabel+5156)
#define PS_v1501	((void*)startLabel+5168)
#define PS_v1497	((void*)startLabel+5180)
#define PS_v1508	((void*)startLabel+5192)
#define PS_v1505	((void*)startLabel+5204)
#define PS_v1507	((void*)startLabel+5216)
#define PS_v1461	((void*)startLabel+5228)
#define PS_v1466	((void*)startLabel+5240)
#define PS_v1465	((void*)startLabel+5252)
#define PS_v1464	((void*)startLabel+5264)
#define PS_v1460	((void*)startLabel+5276)
#define PS_v1463	((void*)startLabel+5288)
#define PS_v1456	((void*)startLabel+5300)
#define PS_v1462	((void*)startLabel+5312)
#define PS_v1439	((void*)startLabel+5324)
#define PS_v1441	((void*)startLabel+5336)
#define PS_v1450	((void*)startLabel+5348)
#define PS_v1435	((void*)startLabel+5360)
#define PS_v1491	((void*)startLabel+5372)
#define PS_v1488	((void*)startLabel+5384)
#define PS_v1490	((void*)startLabel+5396)
#define PS_v1486	((void*)startLabel+5408)
#define PS_v1483	((void*)startLabel+5420)
#define PS_v1485	((void*)startLabel+5432)
#define PS_v1481	((void*)startLabel+5444)
#define PS_v1478	((void*)startLabel+5456)
#define PS_v1480	((void*)startLabel+5468)
#define PS_v1476	((void*)startLabel+5480)
#define PS_v1473	((void*)startLabel+5492)
#define PS_v1475	((void*)startLabel+5504)
#define PS_v1471	((void*)startLabel+5516)
#define PS_v1468	((void*)startLabel+5528)
#define PS_v1470	((void*)startLabel+5540)
#define PS_v1392	((void*)startLabel+5552)
#define PS_v1393	((void*)startLabel+5564)
#define PS_v1390	((void*)startLabel+5576)
#define PS_v1387	((void*)startLabel+5588)
#define PS_v1388	((void*)startLabel+5600)
#define PS_v1385	((void*)startLabel+5612)
#define PS_v1521	((void*)startLabel+5624)
#define PS_v1524	((void*)startLabel+5636)
#define PS_v1520	((void*)startLabel+5648)
#define PS_v1522	((void*)startLabel+5660)
#define PS_v1523	((void*)startLabel+5672)
#define PS_v1526	((void*)startLabel+5684)
#define PS_v1525	((void*)startLabel+5696)
#define PS_v1518	((void*)startLabel+5708)
#define PS_v1516	((void*)startLabel+5720)
#define PS_v1519	((void*)startLabel+5732)
#define PS_v1527	((void*)startLabel+5744)
#define PS_v1513	((void*)startLabel+5756)
#define PS_v1512	((void*)startLabel+5768)
#define PS_v1510	((void*)startLabel+5780)
#define PS_v1514	((void*)startLabel+5792)
#define PS_v1531	((void*)startLabel+5804)
#define PS_v1532	((void*)startLabel+5816)
#define PS_v1533	((void*)startLabel+5828)
#define PS_v1529	((void*)startLabel+5840)
extern Node FN_Prelude_46maxBound[];
extern Node FN_Prelude_46minBound[];
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46_60[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_124_124[];
extern Node FN_Prelude_46Ord_46Prelude_4610[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46Eq_46Prelude_4610[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_46_124_124[];
extern Node PC_Prelude_46_60_61[];
extern Node PC_Prelude_46_60[];
extern Node PC_Prelude_46Ord_46Prelude_46Eq[];
extern Node PC_Prelude_46compare[];
extern Node PC_Prelude_46LT[];
extern Node PC_Prelude_46GT[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_46minBound[];
extern Node PC_Prelude_46maxBound[];
extern Node PC_Prelude_468[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  42
,};
Node PP_Prelude_4610[] = {
 };
Node PC_Prelude_4610[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,0,0)
,	/* PS_Prelude_4610: (byte 0) */
  useLabel(PP_Prelude_4610)
, useLabel(PP_Prelude_4610)
, useLabel(PC_Prelude_4610)
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v1389)
,};
Node FN_Prelude_46Bounded_46Prelude_4610_46maxBound[] = {
  bytes2word(NEEDHEAP_P1,76,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,9,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,65,HEAP_OFF_N1,60)
, bytes2word(HEAP_OFF_N1,55,HEAP_OFF_N1,50)
, bytes2word(HEAP_OFF_N1,45,HEAP_OFF_N1,40)
, bytes2word(HEAP_OFF_N1,35,HEAP_OFF_N1,30)
, bytes2word(HEAP_OFF_N1,25,HEAP_OFF_N1,20)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1388)
, 0
, 0
, 0
, 0
, CONSTR(0,10,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1387)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v1386)
,	/* CT_v1389: (byte 0) */
  HW(1,10)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4610_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4610_46maxBound),10)
, useLabel(PS_v1385)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v1394)
,};
Node FN_Prelude_46Bounded_46Prelude_4610_46minBound[] = {
  bytes2word(NEEDHEAP_P1,76,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,9,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,12,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,65,HEAP_OFF_N1,60)
, bytes2word(HEAP_OFF_N1,55,HEAP_OFF_N1,50)
, bytes2word(HEAP_OFF_N1,45,HEAP_OFF_N1,40)
, bytes2word(HEAP_OFF_N1,35,HEAP_OFF_N1,30)
, bytes2word(HEAP_OFF_N1,25,HEAP_OFF_N1,20)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1393)
, 0
, 0
, 0
, 0
, CONSTR(0,10,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1392)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v1391)
,	/* CT_v1394: (byte 0) */
  HW(1,10)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4610_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4610_46minBound),10)
, useLabel(PS_v1390)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1451)
,};
Node FN_Prelude_46Ord_46Prelude_4610_46compare[] = {
  bytes2word(NEEDSTACK_P1,23,PUSH_ZAP_ARG,11)
, bytes2word(EVAL,UNPACK,10,PUSH_ZAP_ARG)
, bytes2word(12,EVAL,NEEDHEAP_I32,UNPACK)
, bytes2word(10,PUSH_P1,0,PUSH_P1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,13,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1400: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(486),BOT(486))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1401: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_I1)
, bytes2word(PUSH_P1,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,14,ZAP_STACK_P1)
, bytes2word(4,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1403: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(432),BOT(432))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1404: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(2,PUSH_P1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,ZAP_ARG_I3,ZAP_STACK_P1,15)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1406: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(378),BOT(378))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1407: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(3,PUSH_P1,14,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(4,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(16,ZAP_STACK_P1,6,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1409: (byte 2) */
  bytes2word(TOP(322),BOT(322),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1410: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,4,PUSH_P1)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,5,ZAP_ARG)
, bytes2word(5,ZAP_STACK_P1,17,ZAP_STACK_P1)
, bytes2word(7,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1412: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(266),BOT(266))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1413: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(5,PUSH_P1,16,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(6,ZAP_ARG,6,ZAP_STACK_P1)
, bytes2word(18,ZAP_STACK_P1,8,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1415: (byte 2) */
  bytes2word(TOP(210),BOT(210),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1416: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,6,PUSH_P1)
, bytes2word(17,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,7,ZAP_ARG)
, bytes2word(7,ZAP_STACK_P1,19,ZAP_STACK_P1)
, bytes2word(9,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1418: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(154),BOT(154))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1419: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(7,PUSH_P1,18,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(8,ZAP_ARG,8,ZAP_STACK_P1)
, bytes2word(20,ZAP_STACK_P1,10,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1421: (byte 2) */
  bytes2word(TOP(98),BOT(98),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1422: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,8,PUSH_P1)
, bytes2word(19,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,9,ZAP_ARG)
, bytes2word(9,ZAP_STACK_P1,21,ZAP_STACK_P1)
, bytes2word(11,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1424: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(42),BOT(42))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1425: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(9,PUSH_P1,20,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(10,ZAP_ARG,10,ZAP_STACK_P1)
, bytes2word(22,ZAP_STACK_P1,12,EVAL)
,	/* v1426: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1427: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1428: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1429: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1430: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1431: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1432: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1433: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1434: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1450)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1441)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1439)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1436)
,	/* CT_v1451: (byte 0) */
  HW(1,12)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4610_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46compare),12)
, useLabel(PS_v1435)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1467)
,};
Node FN_Prelude_46Ord_46Prelude_4610_46_60_61[] = {
  bytes2word(NEEDSTACK_P1,21,PUSH_ZAP_ARG,11)
, bytes2word(EVAL,UNPACK,10,PUSH_ZAP_ARG)
, bytes2word(12,EVAL,NEEDHEAP_P2,190)
, bytes2word(1,UNPACK,10,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,10,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,11)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,11,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,12,HEAP_I2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(12,HEAP_I2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,13,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(13,HEAP_P1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,14,HEAP_P1)
, bytes2word(4,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,14,HEAP_P1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,15)
, bytes2word(HEAP_P1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,6,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,15,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(16,HEAP_P1,6,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,7)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,16)
, bytes2word(HEAP_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,8,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,17,HEAP_P1,7)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(8,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(17,HEAP_P1,7,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,9)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,18,HEAP_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,18,HEAP_P1,8)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(10,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,19)
, bytes2word(HEAP_P1,9,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,27,HEAP_OFF_N1)
, bytes2word(14,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,54,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(75,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,102)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,123,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,150,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(171,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,198)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,219,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,246,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(11,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(38,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(59,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(86,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(107,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(134,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(155,1,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,182,1,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1466)
, 0
, 0
, 0
, 0
, useLabel(PS_v1465)
, 0
, 0
, 0
, 0
, useLabel(PS_v1464)
, 0
, 0
, 0
, 0
, useLabel(PS_v1463)
, 0
, 0
, 0
, 0
, useLabel(PS_v1462)
, 0
, 0
, 0
, 0
, useLabel(PS_v1461)
, 0
, 0
, 0
, 0
, useLabel(PS_v1460)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1457)
,	/* CT_v1467: (byte 0) */
  HW(7,12)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4610_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46_60_61),12)
, useLabel(PS_v1456)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1472)
,};
Node FN_Prelude_46Ord_46Prelude_4610_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(20,HEAP_ARG_ARG_RET_EVAL,11,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1471)
, 0
, 0
, 0
, 0
, useLabel(PS_v1470)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1469)
,	/* CT_v1472: (byte 0) */
  HW(2,12)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4610_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46min),12)
, useLabel(PS_v1468)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1477)
,};
Node FN_Prelude_46Ord_46Prelude_4610_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(20,HEAP_ARG_ARG_RET_EVAL,11,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1476)
, 0
, 0
, 0
, 0
, useLabel(PS_v1475)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1474)
,	/* CT_v1477: (byte 0) */
  HW(2,12)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4610_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46max),12)
, useLabel(PS_v1473)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1482)
,};
Node FN_Prelude_46Ord_46Prelude_4610_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(20,HEAP_ARG_ARG_RET_EVAL,11,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1481)
, 0
, 0
, 0
, 0
, useLabel(PS_v1480)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1479)
,	/* CT_v1482: (byte 0) */
  HW(2,12)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4610_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46_62),12)
, useLabel(PS_v1478)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1487)
,};
Node FN_Prelude_46Ord_46Prelude_4610_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(20,HEAP_ARG_ARG_RET_EVAL,11,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1486)
, 0
, 0
, 0
, 0
, useLabel(PS_v1485)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1484)
,	/* CT_v1487: (byte 0) */
  HW(2,12)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4610_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46_62_61),12)
, useLabel(PS_v1483)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1492)
,};
Node FN_Prelude_46Ord_46Prelude_4610_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(20,HEAP_ARG_ARG_RET_EVAL,11,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1491)
, 0
, 0
, 0
, 0
, useLabel(PS_v1490)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1489)
,	/* CT_v1492: (byte 0) */
  HW(2,12)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4610_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46_60),12)
, useLabel(PS_v1488)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1504)
,};
Node FN_Prelude_46Eq_46Prelude_4610_46_61_61[] = {
  bytes2word(NEEDSTACK_P1,21,PUSH_ZAP_ARG,11)
, bytes2word(EVAL,UNPACK,10,PUSH_ZAP_ARG)
, bytes2word(12,EVAL,NEEDHEAP_P1,203)
, bytes2word(UNPACK,10,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,11)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(12,HEAP_I2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,13,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,14)
, bytes2word(HEAP_P1,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,6,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,15,HEAP_P1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,16)
, bytes2word(HEAP_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,8,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,17,HEAP_P1,7)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(9,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,18)
, bytes2word(HEAP_P1,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,10,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,19,HEAP_P1,9)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,14,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,48)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,69,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,90,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(111,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,132)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,153,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,174,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,195,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1503)
, 0
, 0
, 0
, 0
, useLabel(PS_v1502)
, 0
, 0
, 0
, 0
, useLabel(PS_v1501)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v1498)
,	/* CT_v1504: (byte 0) */
  HW(3,12)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4610_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4610_46_61_61),12)
, useLabel(PS_v1497)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1509)
,};
Node FN_Prelude_46Eq_46Prelude_4610_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(20,HEAP_ARG_ARG_RET_EVAL,11,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1508)
, 0
, 0
, 0
, 0
, useLabel(PS_v1507)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v1506)
,	/* CT_v1509: (byte 0) */
  HW(2,12)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4610_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4610_46_47_61),12)
, useLabel(PS_v1505)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4610))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v1515)
,};
Node FN_Prelude_46Eq_46Prelude_4610[] = {
  bytes2word(NEEDHEAP_P1,40,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1514)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1513)
, 0
, 0
, 0
, 0
, useLabel(PS_v1512)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v1511)
,	/* CT_v1515: (byte 0) */
  HW(2,10)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4610[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4610),10)
, useLabel(PS_v1510)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4610_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4610_46_61_61),2)
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v1528)
,};
Node FN_Prelude_46Ord_46Prelude_4610[] = {
  bytes2word(NEEDHEAP_P1,202,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,9,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,65,HEAP_OFF_N1,60)
, bytes2word(HEAP_OFF_N1,55,HEAP_OFF_N1,50)
, bytes2word(HEAP_OFF_N1,45,HEAP_OFF_N1,40)
, bytes2word(HEAP_OFF_N1,35,HEAP_OFF_N1,30)
, bytes2word(HEAP_OFF_N1,25,HEAP_OFF_N1,20)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,HEAP_ARG_ARG)
, bytes2word(9,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,HEAP_ARG_ARG)
, bytes2word(9,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,PUSH_HEAP,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1527)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1526)
, 0
, 0
, 0
, 0
, useLabel(PS_v1525)
, 0
, 0
, 0
, 0
, useLabel(PS_v1524)
, 0
, 0
, 0
, 0
, useLabel(PS_v1523)
, 0
, 0
, 0
, 0
, useLabel(PS_v1522)
, 0
, 0
, 0
, 0
, useLabel(PS_v1521)
, 0
, 0
, 0
, 0
, useLabel(PS_v1520)
, 0
, 0
, 0
, 0
, useLabel(PS_v1519)
, 0
, 0
, 0
, 0
, useLabel(PS_v1518)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1517)
,	/* CT_v1528: (byte 0) */
  HW(9,10)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4610[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610),10)
, useLabel(PS_v1516)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4610))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4610_46max),2)
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v1534)
,};
Node FN_Prelude_46Bounded_46Prelude_4610[] = {
  bytes2word(NEEDHEAP_P1,40,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1533)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1532)
, 0
, 0
, 0
, 0
, useLabel(PS_v1531)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v1530)
,	/* CT_v1534: (byte 0) */
  HW(2,10)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4610[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4610),10)
, useLabel(PS_v1529)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4610_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4610_46maxBound))
,};
Node PP_Prelude_46Bounded_46Prelude_4610[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4610[] = {
 	/* ST_v1530: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,0,0)
,};
Node PP_Prelude_46Bounded_46Prelude_4610_46maxBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4610_46maxBound[] = {
 	/* ST_v1386: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,109)
, bytes2word(97,120,66,111)
, bytes2word(117,110,100,0)
,};
Node PP_Prelude_46Bounded_46Prelude_4610_46minBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4610_46minBound[] = {
 	/* ST_v1391: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,109)
, bytes2word(105,110,66,111)
, bytes2word(117,110,100,0)
,};
Node PP_Prelude_46Eq_46Prelude_4610[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4610[] = {
 	/* ST_v1511: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(48,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_4610_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4610_46_47_61[] = {
 	/* ST_v1506: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(48,46,47,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_4610_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4610_46_61_61[] = {
 	/* ST_v1498: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(48,46,61,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4610[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4610[] = {
 	/* ST_v1517: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4610_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4610_46_60[] = {
 	/* ST_v1489: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,60)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4610_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4610_46_60_61[] = {
 	/* ST_v1457: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,60)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4610_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4610_46_62[] = {
 	/* ST_v1479: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,62)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4610_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4610_46_62_61[] = {
 	/* ST_v1484: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,62)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4610_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4610_46compare[] = {
 	/* ST_v1436: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4610_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4610_46max[] = {
 	/* ST_v1474: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,109)
, bytes2word(97,120,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4610_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4610_46min[] = {
 	/* ST_v1469: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,48,46,109)
, bytes2word(105,110,0,0)
,	/* PS_v1502: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610_46_61_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v1503: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610_46_61_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v1501: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610_46_61_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v1497: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4610_46_61_61)
,	/* PS_v1508: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v1505: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4610_46_47_61)
,	/* PS_v1507: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4610)
,	/* PS_v1461: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v1466: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60_61)
, useLabel(PC_Prelude_46_124_124)
,	/* PS_v1465: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v1464: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60_61)
, useLabel(PC_Prelude_46_60_61)
,	/* PS_v1460: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60_61)
, useLabel(PC_Prelude_46_60)
,	/* PS_v1463: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v1456: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46_60_61)
,	/* PS_v1462: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,	/* PS_v1439: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v1441: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v1450: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v1435: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46compare)
,	/* PS_v1491: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v1488: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46_60)
,	/* PS_v1490: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_4610)
,	/* PS_v1486: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v1483: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46_62_61)
,	/* PS_v1485: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4610)
,	/* PS_v1481: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v1478: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46_62)
,	/* PS_v1480: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_4610)
,	/* PS_v1476: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v1473: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46max)
,	/* PS_v1475: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_4610)
,	/* PS_v1471: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v1468: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46min)
,	/* PS_v1470: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_4610)
,	/* PS_v1392: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610_46minBound)
, useLabel(PC_Prelude_46minBound)
,	/* PS_v1393: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610_46minBound)
, useLabel(PC_Prelude_4610)
,	/* PS_v1390: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610_46minBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_4610_46minBound)
,	/* PS_v1387: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610_46maxBound)
, useLabel(PC_Prelude_46maxBound)
,	/* PS_v1388: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610_46maxBound)
, useLabel(PC_Prelude_4610)
,	/* PS_v1385: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610_46maxBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_4610_46maxBound)
,	/* PS_v1521: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46_60_61)
,	/* PS_v1524: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46compare)
,	/* PS_v1520: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46_60)
,	/* PS_v1522: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46_62_61)
,	/* PS_v1523: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46_62)
,	/* PS_v1526: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46max)
,	/* PS_v1525: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_4610_46min)
,	/* PS_v1518: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,	/* PS_v1516: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Ord_46Prelude_4610)
,	/* PS_v1519: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_46Eq_46Prelude_4610)
,	/* PS_v1527: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4610)
, useLabel(PC_Prelude_468)
,	/* PS_v1513: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610)
, useLabel(PC_Prelude_46Eq_46Prelude_4610_46_61_61)
,	/* PS_v1512: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610)
, useLabel(PC_Prelude_46Eq_46Prelude_4610_46_47_61)
,	/* PS_v1510: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610)
, useLabel(PC_Prelude_46Eq_46Prelude_4610)
,	/* PS_v1514: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4610)
, useLabel(PC_Prelude_462)
,	/* PS_v1531: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610)
, useLabel(PC_Prelude_46Bounded_46Prelude_4610_46minBound)
,	/* PS_v1532: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610)
, useLabel(PC_Prelude_46Bounded_46Prelude_4610_46maxBound)
,	/* PS_v1533: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610)
, useLabel(PC_Prelude_462)
,	/* PS_v1529: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4610)
, useLabel(PC_Prelude_46Bounded_46Prelude_4610)
,};

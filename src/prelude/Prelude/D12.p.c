#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_4612	((void*)startLabel+16)
#define CT_v1603	((void*)startLabel+280)
#define CT_v1608	((void*)startLabel+564)
#define v1614	((void*)startLabel+676)
#define v1615	((void*)startLabel+686)
#define v1617	((void*)startLabel+720)
#define v1618	((void*)startLabel+730)
#define v1620	((void*)startLabel+764)
#define v1621	((void*)startLabel+774)
#define v1623	((void*)startLabel+810)
#define v1624	((void*)startLabel+820)
#define v1626	((void*)startLabel+856)
#define v1627	((void*)startLabel+866)
#define v1629	((void*)startLabel+902)
#define v1630	((void*)startLabel+912)
#define v1632	((void*)startLabel+948)
#define v1633	((void*)startLabel+958)
#define v1635	((void*)startLabel+994)
#define v1636	((void*)startLabel+1004)
#define v1638	((void*)startLabel+1040)
#define v1639	((void*)startLabel+1050)
#define v1641	((void*)startLabel+1086)
#define v1642	((void*)startLabel+1096)
#define v1644	((void*)startLabel+1132)
#define v1645	((void*)startLabel+1142)
#define v1646	((void*)startLabel+1168)
#define v1647	((void*)startLabel+1178)
#define v1648	((void*)startLabel+1188)
#define v1649	((void*)startLabel+1198)
#define v1650	((void*)startLabel+1208)
#define v1651	((void*)startLabel+1218)
#define v1652	((void*)startLabel+1228)
#define v1653	((void*)startLabel+1238)
#define v1654	((void*)startLabel+1248)
#define v1655	((void*)startLabel+1258)
#define v1656	((void*)startLabel+1268)
#define CT_v1675	((void*)startLabel+1396)
#define CT_v1691	((void*)startLabel+2496)
#define CT_v1696	((void*)startLabel+2680)
#define CT_v1701	((void*)startLabel+2844)
#define CT_v1706	((void*)startLabel+3008)
#define CT_v1711	((void*)startLabel+3172)
#define CT_v1716	((void*)startLabel+3336)
#define CT_v1728	((void*)startLabel+3884)
#define CT_v1733	((void*)startLabel+4052)
#define CT_v1739	((void*)startLabel+4280)
#define CT_v1752	((void*)startLabel+4932)
#define CT_v1758	((void*)startLabel+5188)
#define ST_v1754	((void*)startLabel+5224)
#define ST_v1600	((void*)startLabel+5252)
#define ST_v1605	((void*)startLabel+5288)
#define ST_v1735	((void*)startLabel+5324)
#define ST_v1730	((void*)startLabel+5348)
#define ST_v1722	((void*)startLabel+5376)
#define ST_v1741	((void*)startLabel+5404)
#define ST_v1713	((void*)startLabel+5428)
#define ST_v1681	((void*)startLabel+5456)
#define ST_v1703	((void*)startLabel+5484)
#define ST_v1708	((void*)startLabel+5512)
#define ST_v1658	((void*)startLabel+5540)
#define ST_v1698	((void*)startLabel+5572)
#define ST_v1693	((void*)startLabel+5600)
#define PS_v1726	((void*)startLabel+5628)
#define PS_v1727	((void*)startLabel+5640)
#define PS_v1725	((void*)startLabel+5652)
#define PS_v1721	((void*)startLabel+5664)
#define PS_v1732	((void*)startLabel+5676)
#define PS_v1729	((void*)startLabel+5688)
#define PS_v1731	((void*)startLabel+5700)
#define PS_v1685	((void*)startLabel+5712)
#define PS_v1690	((void*)startLabel+5724)
#define PS_v1689	((void*)startLabel+5736)
#define PS_v1688	((void*)startLabel+5748)
#define PS_v1684	((void*)startLabel+5760)
#define PS_v1687	((void*)startLabel+5772)
#define PS_v1680	((void*)startLabel+5784)
#define PS_v1686	((void*)startLabel+5796)
#define PS_v1661	((void*)startLabel+5808)
#define PS_v1663	((void*)startLabel+5820)
#define PS_v1674	((void*)startLabel+5832)
#define PS_v1657	((void*)startLabel+5844)
#define PS_v1715	((void*)startLabel+5856)
#define PS_v1712	((void*)startLabel+5868)
#define PS_v1714	((void*)startLabel+5880)
#define PS_v1710	((void*)startLabel+5892)
#define PS_v1707	((void*)startLabel+5904)
#define PS_v1709	((void*)startLabel+5916)
#define PS_v1705	((void*)startLabel+5928)
#define PS_v1702	((void*)startLabel+5940)
#define PS_v1704	((void*)startLabel+5952)
#define PS_v1700	((void*)startLabel+5964)
#define PS_v1697	((void*)startLabel+5976)
#define PS_v1699	((void*)startLabel+5988)
#define PS_v1695	((void*)startLabel+6000)
#define PS_v1692	((void*)startLabel+6012)
#define PS_v1694	((void*)startLabel+6024)
#define PS_v1606	((void*)startLabel+6036)
#define PS_v1607	((void*)startLabel+6048)
#define PS_v1604	((void*)startLabel+6060)
#define PS_v1601	((void*)startLabel+6072)
#define PS_v1602	((void*)startLabel+6084)
#define PS_v1599	((void*)startLabel+6096)
#define PS_v1745	((void*)startLabel+6108)
#define PS_v1748	((void*)startLabel+6120)
#define PS_v1744	((void*)startLabel+6132)
#define PS_v1746	((void*)startLabel+6144)
#define PS_v1747	((void*)startLabel+6156)
#define PS_v1750	((void*)startLabel+6168)
#define PS_v1749	((void*)startLabel+6180)
#define PS_v1742	((void*)startLabel+6192)
#define PS_v1740	((void*)startLabel+6204)
#define PS_v1743	((void*)startLabel+6216)
#define PS_v1751	((void*)startLabel+6228)
#define PS_v1737	((void*)startLabel+6240)
#define PS_v1736	((void*)startLabel+6252)
#define PS_v1734	((void*)startLabel+6264)
#define PS_v1738	((void*)startLabel+6276)
#define PS_v1755	((void*)startLabel+6288)
#define PS_v1756	((void*)startLabel+6300)
#define PS_v1757	((void*)startLabel+6312)
#define PS_v1753	((void*)startLabel+6324)
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
extern Node FN_Prelude_46Ord_46Prelude_4612[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46Eq_46Prelude_4612[];
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
Node PP_Prelude_4612[] = {
 };
Node PC_Prelude_4612[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,0,0)
,	/* PS_Prelude_4612: (byte 0) */
  useLabel(PP_Prelude_4612)
, useLabel(PP_Prelude_4612)
, useLabel(PC_Prelude_4612)
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1603)
,};
Node FN_Prelude_46Bounded_46Prelude_4612_46maxBound[] = {
  bytes2word(NEEDHEAP_P1,90,HEAP_CVAL_P1,7)
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
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(11,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,12,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,77)
, bytes2word(HEAP_OFF_N1,72,HEAP_OFF_N1,67)
, bytes2word(HEAP_OFF_N1,62,HEAP_OFF_N1,57)
, bytes2word(HEAP_OFF_N1,52,HEAP_OFF_N1,47)
, bytes2word(HEAP_OFF_N1,42,HEAP_OFF_N1,37)
, bytes2word(HEAP_OFF_N1,32,HEAP_OFF_N1,27)
, bytes2word(HEAP_OFF_N1,22,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1602)
, 0
, 0
, 0
, 0
, CONSTR(0,12,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1601)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v1600)
,	/* CT_v1603: (byte 0) */
  HW(1,12)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4612_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4612_46maxBound),12)
, useLabel(PS_v1599)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1608)
,};
Node FN_Prelude_46Bounded_46Prelude_4612_46minBound[] = {
  bytes2word(NEEDHEAP_P1,90,HEAP_CVAL_P1,7)
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
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(11,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,12,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,77)
, bytes2word(HEAP_OFF_N1,72,HEAP_OFF_N1,67)
, bytes2word(HEAP_OFF_N1,62,HEAP_OFF_N1,57)
, bytes2word(HEAP_OFF_N1,52,HEAP_OFF_N1,47)
, bytes2word(HEAP_OFF_N1,42,HEAP_OFF_N1,37)
, bytes2word(HEAP_OFF_N1,32,HEAP_OFF_N1,27)
, bytes2word(HEAP_OFF_N1,22,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1607)
, 0
, 0
, 0
, 0
, CONSTR(0,12,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1606)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v1605)
,	/* CT_v1608: (byte 0) */
  HW(1,12)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4612_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4612_46minBound),12)
, useLabel(PS_v1604)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1675)
,};
Node FN_Prelude_46Ord_46Prelude_4612_46compare[] = {
  bytes2word(NEEDSTACK_P1,27,PUSH_ZAP_ARG,13)
, bytes2word(EVAL,UNPACK,12,PUSH_ZAP_ARG)
, bytes2word(14,EVAL,NEEDHEAP_I32,UNPACK)
, bytes2word(12,PUSH_P1,0,PUSH_P1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,15,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1614: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(598),BOT(598))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1615: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_I1)
, bytes2word(PUSH_P1,14,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,16,ZAP_STACK_P1)
, bytes2word(4,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1617: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(544),BOT(544))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1618: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(2,PUSH_P1,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,ZAP_ARG_I3,ZAP_STACK_P1,17)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1620: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(490),BOT(490))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1621: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(3,PUSH_P1,16,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(4,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(18,ZAP_STACK_P1,6,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1623: (byte 2) */
  bytes2word(TOP(434),BOT(434),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1624: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,4,PUSH_P1)
, bytes2word(17,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,5,ZAP_ARG)
, bytes2word(5,ZAP_STACK_P1,19,ZAP_STACK_P1)
, bytes2word(7,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1626: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(378),BOT(378))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1627: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(5,PUSH_P1,18,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(6,ZAP_ARG,6,ZAP_STACK_P1)
, bytes2word(20,ZAP_STACK_P1,8,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1629: (byte 2) */
  bytes2word(TOP(322),BOT(322),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1630: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,6,PUSH_P1)
, bytes2word(19,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,7,ZAP_ARG)
, bytes2word(7,ZAP_STACK_P1,21,ZAP_STACK_P1)
, bytes2word(9,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1632: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(266),BOT(266))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1633: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(7,PUSH_P1,20,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(8,ZAP_ARG,8,ZAP_STACK_P1)
, bytes2word(22,ZAP_STACK_P1,10,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1635: (byte 2) */
  bytes2word(TOP(210),BOT(210),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1636: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,8,PUSH_P1)
, bytes2word(21,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,9,ZAP_ARG)
, bytes2word(9,ZAP_STACK_P1,23,ZAP_STACK_P1)
, bytes2word(11,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1638: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(154),BOT(154))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1639: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(9,PUSH_P1,22,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(10,ZAP_ARG,10,ZAP_STACK_P1)
, bytes2word(24,ZAP_STACK_P1,12,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1641: (byte 2) */
  bytes2word(TOP(98),BOT(98),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1642: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,10,PUSH_P1)
, bytes2word(23,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,11,ZAP_ARG)
, bytes2word(11,ZAP_STACK_P1,25,ZAP_STACK_P1)
, bytes2word(13,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1644: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(42),BOT(42))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1645: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(11,PUSH_P1,24,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(12,ZAP_ARG,12,ZAP_STACK_P1)
, bytes2word(26,ZAP_STACK_P1,14,EVAL)
,	/* v1646: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1647: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1648: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1649: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1650: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1651: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1652: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1653: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1654: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1655: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1656: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1674)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1663)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1661)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1658)
,	/* CT_v1675: (byte 0) */
  HW(1,14)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4612_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46compare),14)
, useLabel(PS_v1657)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1691)
,};
Node FN_Prelude_46Ord_46Prelude_4612_46_60_61[] = {
  bytes2word(NEEDSTACK_P1,25,PUSH_ZAP_ARG,13)
, bytes2word(EVAL,UNPACK,12,PUSH_ZAP_ARG)
, bytes2word(14,EVAL,NEEDHEAP_P2,30)
, bytes2word(2,UNPACK,12,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,12,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,12,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,13)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,13,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,14,HEAP_I2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(14,HEAP_I2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,15,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(15,HEAP_P1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,16,HEAP_P1)
, bytes2word(4,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,16,HEAP_P1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,17)
, bytes2word(HEAP_P1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,6,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,17,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(18,HEAP_P1,6,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,7)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,18)
, bytes2word(HEAP_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,8,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,19,HEAP_P1,7)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(8,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(19,HEAP_P1,7,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,9)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,20,HEAP_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,20,HEAP_P1,8)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(10,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,21)
, bytes2word(HEAP_P1,9,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,10,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,21,HEAP_P1)
, bytes2word(9,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(22,HEAP_P1,10,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,11)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,22)
, bytes2word(HEAP_P1,10,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,12,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,23,HEAP_P1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,14,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,54)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,75,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,102,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(123,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,150)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,171,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,198,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(219,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,246)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,11,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,38,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,59,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,86,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,107,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,134,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,155,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,182,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,203,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,230,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,251,1)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2,22)
, bytes2word(2,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1690)
, 0
, 0
, 0
, 0
, useLabel(PS_v1689)
, 0
, 0
, 0
, 0
, useLabel(PS_v1688)
, 0
, 0
, 0
, 0
, useLabel(PS_v1687)
, 0
, 0
, 0
, 0
, useLabel(PS_v1686)
, 0
, 0
, 0
, 0
, useLabel(PS_v1685)
, 0
, 0
, 0
, 0
, useLabel(PS_v1684)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1681)
,	/* CT_v1691: (byte 0) */
  HW(7,14)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4612_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46_60_61),14)
, useLabel(PS_v1680)
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
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1696)
,};
Node FN_Prelude_46Ord_46Prelude_4612_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,13,14,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1695)
, 0
, 0
, 0
, 0
, useLabel(PS_v1694)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1693)
,	/* CT_v1696: (byte 0) */
  HW(2,14)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4612_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46min),14)
, useLabel(PS_v1692)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1701)
,};
Node FN_Prelude_46Ord_46Prelude_4612_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,13,14,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1700)
, 0
, 0
, 0
, 0
, useLabel(PS_v1699)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1698)
,	/* CT_v1701: (byte 0) */
  HW(2,14)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4612_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46max),14)
, useLabel(PS_v1697)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1706)
,};
Node FN_Prelude_46Ord_46Prelude_4612_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,13,14,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1705)
, 0
, 0
, 0
, 0
, useLabel(PS_v1704)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1703)
,	/* CT_v1706: (byte 0) */
  HW(2,14)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4612_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46_62),14)
, useLabel(PS_v1702)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1711)
,};
Node FN_Prelude_46Ord_46Prelude_4612_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,13,14,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1710)
, 0
, 0
, 0
, 0
, useLabel(PS_v1709)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1708)
,	/* CT_v1711: (byte 0) */
  HW(2,14)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4612_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46_62_61),14)
, useLabel(PS_v1707)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1716)
,};
Node FN_Prelude_46Ord_46Prelude_4612_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,13,14,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1715)
, 0
, 0
, 0
, 0
, useLabel(PS_v1714)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1713)
,	/* CT_v1716: (byte 0) */
  HW(2,14)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4612_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46_60),14)
, useLabel(PS_v1712)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1728)
,};
Node FN_Prelude_46Eq_46Prelude_4612_46_61_61[] = {
  bytes2word(NEEDSTACK_P1,25,PUSH_ZAP_ARG,13)
, bytes2word(EVAL,UNPACK,12,PUSH_ZAP_ARG)
, bytes2word(14,EVAL,NEEDHEAP_P1,245)
, bytes2word(UNPACK,12,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,12,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,13)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(14,HEAP_I2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,15,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,16)
, bytes2word(HEAP_P1,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,6,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,17,HEAP_P1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,18)
, bytes2word(HEAP_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,8,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,19,HEAP_P1,7)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(9,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,20)
, bytes2word(HEAP_P1,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,10,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,21,HEAP_P1,9)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(11,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,22)
, bytes2word(HEAP_P1,10,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,12,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,23,HEAP_P1,11)
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
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(195,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,216)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,237)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1727)
, 0
, 0
, 0
, 0
, useLabel(PS_v1726)
, 0
, 0
, 0
, 0
, useLabel(PS_v1725)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v1722)
,	/* CT_v1728: (byte 0) */
  HW(3,14)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4612_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4612_46_61_61),14)
, useLabel(PS_v1721)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1733)
,};
Node FN_Prelude_46Eq_46Prelude_4612_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,13,14,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1732)
, 0
, 0
, 0
, 0
, useLabel(PS_v1731)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v1730)
,	/* CT_v1733: (byte 0) */
  HW(2,14)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4612_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4612_46_47_61),14)
, useLabel(PS_v1729)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4612))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1739)
,};
Node FN_Prelude_46Eq_46Prelude_4612[] = {
  bytes2word(NEEDHEAP_P1,44,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1738)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1737)
, 0
, 0
, 0
, 0
, useLabel(PS_v1736)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v1735)
,	/* CT_v1739: (byte 0) */
  HW(2,12)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4612[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4612),12)
, useLabel(PS_v1734)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4612_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4612_46_61_61),2)
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1752)
,};
Node FN_Prelude_46Ord_46Prelude_4612[] = {
  bytes2word(NEEDHEAP_P1,230,HEAP_CVAL_P1,7)
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
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(11,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,77)
, bytes2word(HEAP_OFF_N1,72,HEAP_OFF_N1,67)
, bytes2word(HEAP_OFF_N1,62,HEAP_OFF_N1,57)
, bytes2word(HEAP_OFF_N1,52,HEAP_OFF_N1,47)
, bytes2word(HEAP_OFF_N1,42,HEAP_OFF_N1,37)
, bytes2word(HEAP_OFF_N1,32,HEAP_OFF_N1,27)
, bytes2word(HEAP_OFF_N1,22,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,52,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,8,HEAP_P1,7)
, bytes2word(HEAP_P1,6,HEAP_P1,5)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1751)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1750)
, 0
, 0
, 0
, 0
, useLabel(PS_v1749)
, 0
, 0
, 0
, 0
, useLabel(PS_v1748)
, 0
, 0
, 0
, 0
, useLabel(PS_v1747)
, 0
, 0
, 0
, 0
, useLabel(PS_v1746)
, 0
, 0
, 0
, 0
, useLabel(PS_v1745)
, 0
, 0
, 0
, 0
, useLabel(PS_v1744)
, 0
, 0
, 0
, 0
, useLabel(PS_v1743)
, 0
, 0
, 0
, 0
, useLabel(PS_v1742)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1741)
,	/* CT_v1752: (byte 0) */
  HW(9,12)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4612[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612),12)
, useLabel(PS_v1740)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4612))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4612_46max),2)
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1758)
,};
Node FN_Prelude_46Bounded_46Prelude_4612[] = {
  bytes2word(NEEDHEAP_P1,44,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1757)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1756)
, 0
, 0
, 0
, 0
, useLabel(PS_v1755)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v1754)
,	/* CT_v1758: (byte 0) */
  HW(2,12)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4612[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4612),12)
, useLabel(PS_v1753)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4612_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4612_46maxBound))
,};
Node PP_Prelude_46Bounded_46Prelude_4612[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4612[] = {
 	/* ST_v1754: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,0,0)
,};
Node PP_Prelude_46Bounded_46Prelude_4612_46maxBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4612_46maxBound[] = {
 	/* ST_v1600: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,109)
, bytes2word(97,120,66,111)
, bytes2word(117,110,100,0)
,};
Node PP_Prelude_46Bounded_46Prelude_4612_46minBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4612_46minBound[] = {
 	/* ST_v1605: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,109)
, bytes2word(105,110,66,111)
, bytes2word(117,110,100,0)
,};
Node PP_Prelude_46Eq_46Prelude_4612[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4612[] = {
 	/* ST_v1735: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_4612_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4612_46_47_61[] = {
 	/* ST_v1730: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,47,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_4612_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4612_46_61_61[] = {
 	/* ST_v1722: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,61,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4612[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4612[] = {
 	/* ST_v1741: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4612_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4612_46_60[] = {
 	/* ST_v1713: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,60)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4612_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4612_46_60_61[] = {
 	/* ST_v1681: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,60)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4612_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4612_46_62[] = {
 	/* ST_v1703: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,62)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4612_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4612_46_62_61[] = {
 	/* ST_v1708: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,62)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4612_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4612_46compare[] = {
 	/* ST_v1658: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4612_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4612_46max[] = {
 	/* ST_v1698: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,109)
, bytes2word(97,120,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4612_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4612_46min[] = {
 	/* ST_v1693: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,50,46,109)
, bytes2word(105,110,0,0)
,	/* PS_v1726: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612_46_61_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v1727: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612_46_61_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v1725: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612_46_61_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v1721: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4612_46_61_61)
,	/* PS_v1732: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v1729: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4612_46_47_61)
,	/* PS_v1731: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4612)
,	/* PS_v1685: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v1690: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60_61)
, useLabel(PC_Prelude_46_124_124)
,	/* PS_v1689: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v1688: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60_61)
, useLabel(PC_Prelude_46_60_61)
,	/* PS_v1684: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60_61)
, useLabel(PC_Prelude_46_60)
,	/* PS_v1687: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v1680: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46_60_61)
,	/* PS_v1686: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,	/* PS_v1661: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v1663: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v1674: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v1657: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46compare)
,	/* PS_v1715: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v1712: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46_60)
,	/* PS_v1714: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_4612)
,	/* PS_v1710: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v1707: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46_62_61)
,	/* PS_v1709: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4612)
,	/* PS_v1705: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v1702: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46_62)
,	/* PS_v1704: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_4612)
,	/* PS_v1700: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v1697: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46max)
,	/* PS_v1699: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_4612)
,	/* PS_v1695: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v1692: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46min)
,	/* PS_v1694: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_4612)
,	/* PS_v1606: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612_46minBound)
, useLabel(PC_Prelude_46minBound)
,	/* PS_v1607: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612_46minBound)
, useLabel(PC_Prelude_4612)
,	/* PS_v1604: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612_46minBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_4612_46minBound)
,	/* PS_v1601: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612_46maxBound)
, useLabel(PC_Prelude_46maxBound)
,	/* PS_v1602: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612_46maxBound)
, useLabel(PC_Prelude_4612)
,	/* PS_v1599: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612_46maxBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_4612_46maxBound)
,	/* PS_v1745: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46_60_61)
,	/* PS_v1748: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46compare)
,	/* PS_v1744: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46_60)
,	/* PS_v1746: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46_62_61)
,	/* PS_v1747: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46_62)
,	/* PS_v1750: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46max)
,	/* PS_v1749: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_4612_46min)
,	/* PS_v1742: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,	/* PS_v1740: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Ord_46Prelude_4612)
,	/* PS_v1743: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_46Eq_46Prelude_4612)
,	/* PS_v1751: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4612)
, useLabel(PC_Prelude_468)
,	/* PS_v1737: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612)
, useLabel(PC_Prelude_46Eq_46Prelude_4612_46_61_61)
,	/* PS_v1736: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612)
, useLabel(PC_Prelude_46Eq_46Prelude_4612_46_47_61)
,	/* PS_v1734: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612)
, useLabel(PC_Prelude_46Eq_46Prelude_4612)
,	/* PS_v1738: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4612)
, useLabel(PC_Prelude_462)
,	/* PS_v1755: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612)
, useLabel(PC_Prelude_46Bounded_46Prelude_4612_46minBound)
,	/* PS_v1756: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612)
, useLabel(PC_Prelude_46Bounded_46Prelude_4612_46maxBound)
,	/* PS_v1757: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612)
, useLabel(PC_Prelude_462)
,	/* PS_v1753: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4612)
, useLabel(PC_Prelude_46Bounded_46Prelude_4612)
,};

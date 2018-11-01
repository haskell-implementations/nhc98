#include "newmacros.h"
#include "runtime.h"

#define CT_v426	((void*)startLabel+32)
#define CT_v450	((void*)startLabel+668)
#define FN_LAMBDA422	((void*)startLabel+772)
#define CT_v453	((void*)startLabel+792)
#define F0_LAMBDA422	((void*)startLabel+800)
#define FN_LAMBDA421	((void*)startLabel+828)
#define CT_v456	((void*)startLabel+848)
#define F0_LAMBDA421	((void*)startLabel+856)
#define FN_LAMBDA420	((void*)startLabel+884)
#define CT_v459	((void*)startLabel+904)
#define F0_LAMBDA420	((void*)startLabel+912)
#define FN_LAMBDA419	((void*)startLabel+940)
#define CT_v462	((void*)startLabel+960)
#define F0_LAMBDA419	((void*)startLabel+968)
#define FN_LAMBDA418	((void*)startLabel+996)
#define CT_v465	((void*)startLabel+1016)
#define F0_LAMBDA418	((void*)startLabel+1024)
#define FN_LAMBDA417	((void*)startLabel+1052)
#define CT_v468	((void*)startLabel+1072)
#define F0_LAMBDA417	((void*)startLabel+1080)
#define FN_LAMBDA416	((void*)startLabel+1108)
#define CT_v471	((void*)startLabel+1128)
#define F0_LAMBDA416	((void*)startLabel+1136)
#define FN_LAMBDA415	((void*)startLabel+1164)
#define CT_v474	((void*)startLabel+1184)
#define F0_LAMBDA415	((void*)startLabel+1192)
#define FN_LAMBDA414	((void*)startLabel+1220)
#define CT_v477	((void*)startLabel+1240)
#define F0_LAMBDA414	((void*)startLabel+1248)
#define FN_LAMBDA413	((void*)startLabel+1276)
#define CT_v480	((void*)startLabel+1296)
#define F0_LAMBDA413	((void*)startLabel+1304)
#define FN_LAMBDA412	((void*)startLabel+1332)
#define CT_v483	((void*)startLabel+1352)
#define F0_LAMBDA412	((void*)startLabel+1360)
#define FN_LAMBDA411	((void*)startLabel+1388)
#define CT_v486	((void*)startLabel+1408)
#define F0_LAMBDA411	((void*)startLabel+1416)
#define ST_v425	((void*)startLabel+1436)
#define ST_v430	((void*)startLabel+1456)
#define PP_LAMBDA412	((void*)startLabel+1471)
#define PC_LAMBDA412	((void*)startLabel+1471)
#define ST_v482	((void*)startLabel+1471)
#define PP_LAMBDA413	((void*)startLabel+1498)
#define PC_LAMBDA413	((void*)startLabel+1498)
#define ST_v479	((void*)startLabel+1498)
#define PP_LAMBDA414	((void*)startLabel+1525)
#define PC_LAMBDA414	((void*)startLabel+1525)
#define ST_v476	((void*)startLabel+1525)
#define PP_LAMBDA415	((void*)startLabel+1552)
#define PC_LAMBDA415	((void*)startLabel+1552)
#define ST_v473	((void*)startLabel+1552)
#define PP_LAMBDA416	((void*)startLabel+1579)
#define PC_LAMBDA416	((void*)startLabel+1579)
#define ST_v470	((void*)startLabel+1579)
#define PP_LAMBDA417	((void*)startLabel+1606)
#define PC_LAMBDA417	((void*)startLabel+1606)
#define ST_v467	((void*)startLabel+1606)
#define PP_LAMBDA418	((void*)startLabel+1633)
#define PC_LAMBDA418	((void*)startLabel+1633)
#define ST_v464	((void*)startLabel+1633)
#define PP_LAMBDA419	((void*)startLabel+1660)
#define PC_LAMBDA419	((void*)startLabel+1660)
#define ST_v461	((void*)startLabel+1660)
#define PP_LAMBDA420	((void*)startLabel+1687)
#define PC_LAMBDA420	((void*)startLabel+1687)
#define ST_v458	((void*)startLabel+1687)
#define PP_LAMBDA421	((void*)startLabel+1714)
#define PC_LAMBDA421	((void*)startLabel+1714)
#define ST_v455	((void*)startLabel+1714)
#define PP_LAMBDA422	((void*)startLabel+1741)
#define PC_LAMBDA422	((void*)startLabel+1741)
#define ST_v452	((void*)startLabel+1741)
#define PP_LAMBDA411	((void*)startLabel+1768)
#define PC_LAMBDA411	((void*)startLabel+1768)
#define ST_v485	((void*)startLabel+1768)
#define PS_v424	((void*)startLabel+1796)
#define PS_v448	((void*)startLabel+1808)
#define PS_v449	((void*)startLabel+1820)
#define PS_v432	((void*)startLabel+1832)
#define PS_v429	((void*)startLabel+1844)
#define PS_v445	((void*)startLabel+1856)
#define PS_v446	((void*)startLabel+1868)
#define PS_v447	((void*)startLabel+1880)
#define PS_v433	((void*)startLabel+1892)
#define PS_v434	((void*)startLabel+1904)
#define PS_v435	((void*)startLabel+1916)
#define PS_v436	((void*)startLabel+1928)
#define PS_v437	((void*)startLabel+1940)
#define PS_v438	((void*)startLabel+1952)
#define PS_v439	((void*)startLabel+1964)
#define PS_v440	((void*)startLabel+1976)
#define PS_v441	((void*)startLabel+1988)
#define PS_v442	((void*)startLabel+2000)
#define PS_v443	((void*)startLabel+2012)
#define PS_v444	((void*)startLabel+2024)
#define PS_v484	((void*)startLabel+2036)
#define PS_v481	((void*)startLabel+2048)
#define PS_v478	((void*)startLabel+2060)
#define PS_v475	((void*)startLabel+2072)
#define PS_v472	((void*)startLabel+2084)
#define PS_v469	((void*)startLabel+2096)
#define PS_v466	((void*)startLabel+2108)
#define PS_v463	((void*)startLabel+2120)
#define PS_v460	((void*)startLabel+2132)
#define PS_v457	((void*)startLabel+2144)
#define PS_v454	((void*)startLabel+2156)
#define PS_v451	((void*)startLabel+2168)
void FR_Time_46hs_95toUTCTime(void);
extern Node FN_Prelude_46Enum_46Time_46Month_46toEnum[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46Enum_46Time_46Day_46toEnum[];
extern Node FN_CString_46fromCString[];
extern Node PM_Time[];
extern Node PC_CString_46fromCString[];
extern Node PC_Time_46CalendarTime[];
extern Node PC_Prelude_46Enum_46Time_46Month_46toEnum[];
extern Node PC_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node PC_Prelude_46Enum_46Time_46Day_46toEnum[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v426)
,};
Node FN_Time_46hs_95toUTCTime[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Time_46hs_95toUTCTime)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v425)
,	/* CT_v426: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Time_46hs_95toUTCTime[] = {
  CAPTAG(useLabel(FN_Time_46hs_95toUTCTime),1)
, useLabel(PS_v424)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v450)
,};
Node FN_Time_46toUTCTime[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(119,UNPACK,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,23,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,29)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,35,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,41)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,47,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,53)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,59,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,65)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,18,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,71,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_N1,67,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,77)
, bytes2word(HEAP_CVAL_P1,20,HEAP_CVAL_N1,72)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(10,HEAP_CVAL_P1,21,HEAP_CVAL_N1)
, bytes2word(77,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,5,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_N1,82,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,4,HEAP_CVAL_P1)
, bytes2word(23,HEAP_CVAL_N1,87,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,92,HEAP_CVAL_N1,97)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(12,HEAP_OFF_N1,30,HEAP_P1)
, bytes2word(10,HEAP_P1,9,HEAP_P1)
, bytes2word(8,HEAP_P1,7,HEAP_OFF_N1)
, bytes2word(29,HEAP_OFF_N1,24,HEAP_P1)
, bytes2word(4,HEAP_OFF_N1,20,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v449)
, 0
, 0
, 0
, 0
, CONSTR(0,12,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v448)
, 0
, 0
, 0
, 0
, useLabel(PS_v447)
, 0
, 0
, 0
, 0
, useLabel(PS_v446)
, 0
, 0
, 0
, 0
, useLabel(PS_v445)
, 0
, 0
, 0
, 0
, useLabel(PS_v444)
, 0
, 0
, 0
, 0
, useLabel(PS_v443)
, 0
, 0
, 0
, 0
, useLabel(PS_v442)
, 0
, 0
, 0
, 0
, useLabel(PS_v441)
, 0
, 0
, 0
, 0
, useLabel(PS_v440)
, 0
, 0
, 0
, 0
, useLabel(PS_v439)
, 0
, 0
, 0
, 0
, useLabel(PS_v438)
, 0
, 0
, 0
, 0
, useLabel(PS_v437)
, 0
, 0
, 0
, 0
, useLabel(PS_v436)
, 0
, 0
, 0
, 0
, useLabel(PS_v435)
, 0
, 0
, 0
, 0
, useLabel(PS_v434)
, 0
, 0
, 0
, 0
, useLabel(PS_v433)
, 0
, 0
, 0
, 0
, useLabel(PS_v432)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v430)
,	/* CT_v450: (byte 0) */
  HW(17,1)
, 0
,};
Node F0_Time_46toUTCTime[] = {
  CAPTAG(useLabel(FN_Time_46toUTCTime),1)
, useLabel(PS_v429)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Time_46hs_95toUTCTime))
, VAPTAG(useLabel(FN_LAMBDA411))
, VAPTAG(useLabel(FN_LAMBDA412))
, VAPTAG(useLabel(FN_LAMBDA413))
, VAPTAG(useLabel(FN_LAMBDA414))
, VAPTAG(useLabel(FN_LAMBDA415))
, VAPTAG(useLabel(FN_LAMBDA416))
, VAPTAG(useLabel(FN_LAMBDA417))
, VAPTAG(useLabel(FN_LAMBDA418))
, VAPTAG(useLabel(FN_LAMBDA419))
, VAPTAG(useLabel(FN_LAMBDA420))
, VAPTAG(useLabel(FN_LAMBDA421))
, VAPTAG(useLabel(FN_LAMBDA422))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Month_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Time_46Day_46toEnum))
, VAPTAG(useLabel(FN_CString_46fromCString))
, bytes2word(1,0,0,1)
, useLabel(CT_v453)
,	/* FN_LAMBDA422: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110065
, useLabel(ST_v452)
,	/* CT_v453: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA422: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA422),1)
, useLabel(PS_v451)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v456)
,	/* FN_LAMBDA421: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,11)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110059
, useLabel(ST_v455)
,	/* CT_v456: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA421: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA421),1)
, useLabel(PS_v454)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v459)
,	/* FN_LAMBDA420: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,10)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110053
, useLabel(ST_v458)
,	/* CT_v459: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA420: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA420),1)
, useLabel(PS_v457)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v462)
,	/* FN_LAMBDA419: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110048
, useLabel(ST_v461)
,	/* CT_v462: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA419: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA419),1)
, useLabel(PS_v460)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v465)
,	/* FN_LAMBDA418: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,8)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110043
, useLabel(ST_v464)
,	/* CT_v465: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA418: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA418),1)
, useLabel(PS_v463)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v468)
,	/* FN_LAMBDA417: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110038
, useLabel(ST_v467)
,	/* CT_v468: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA417: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA417),1)
, useLabel(PS_v466)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v471)
,	/* FN_LAMBDA416: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110033
, useLabel(ST_v470)
,	/* CT_v471: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA416: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA416),1)
, useLabel(PS_v469)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v474)
,	/* FN_LAMBDA415: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110028
, useLabel(ST_v473)
,	/* CT_v474: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA415: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA415),1)
, useLabel(PS_v472)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v477)
,	/* FN_LAMBDA414: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110023
, useLabel(ST_v476)
,	/* CT_v477: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA414: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA414),1)
, useLabel(PS_v475)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v480)
,	/* FN_LAMBDA413: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110018
, useLabel(ST_v479)
,	/* CT_v480: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA413: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA413),1)
, useLabel(PS_v478)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v483)
,	/* FN_LAMBDA412: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110013
, useLabel(ST_v482)
,	/* CT_v483: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA412: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA412),1)
, useLabel(PS_v481)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v486)
,	/* FN_LAMBDA411: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110008
, useLabel(ST_v485)
,	/* CT_v486: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA411: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA411),1)
, useLabel(PS_v484)
, 0
, 0
, 0
,};
Node PP_Time_46hs_95toUTCTime[] = {
 };
Node PC_Time_46hs_95toUTCTime[] = {
 	/* ST_v425: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,104,115,95)
, bytes2word(116,111,85,84)
, bytes2word(67,84,105,109)
, bytes2word(101,0,0,0)
,};
Node PP_Time_46toUTCTime[] = {
 };
Node PC_Time_46toUTCTime[] = {
 	/* ST_v430: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,116,111,85)
, bytes2word(84,67,84,105)
,	/* PP_LAMBDA412: (byte 3) */
 	/* PC_LAMBDA412: (byte 3) */
 	/* ST_v482: (byte 3) */
  bytes2word(109,101,0,84)
, bytes2word(105,109,101,46)
, bytes2word(116,111,85,84)
, bytes2word(67,84,105,109)
, bytes2word(101,58,49,49)
, bytes2word(58,49,51,45)
, bytes2word(49,49,58,49)
,	/* PP_LAMBDA413: (byte 2) */
 	/* PC_LAMBDA413: (byte 2) */
 	/* ST_v479: (byte 2) */
  bytes2word(54,0,84,105)
, bytes2word(109,101,46,116)
, bytes2word(111,85,84,67)
, bytes2word(84,105,109,101)
, bytes2word(58,49,49,58)
, bytes2word(49,56,45,49)
, bytes2word(49,58,50,49)
,	/* PP_LAMBDA414: (byte 1) */
 	/* PC_LAMBDA414: (byte 1) */
 	/* ST_v476: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,116,111)
, bytes2word(85,84,67,84)
, bytes2word(105,109,101,58)
, bytes2word(49,49,58,50)
, bytes2word(51,45,49,49)
,	/* PP_LAMBDA415: (byte 4) */
 	/* PC_LAMBDA415: (byte 4) */
 	/* ST_v473: (byte 4) */
  bytes2word(58,50,54,0)
, bytes2word(84,105,109,101)
, bytes2word(46,116,111,85)
, bytes2word(84,67,84,105)
, bytes2word(109,101,58,49)
, bytes2word(49,58,50,56)
, bytes2word(45,49,49,58)
,	/* PP_LAMBDA416: (byte 3) */
 	/* PC_LAMBDA416: (byte 3) */
 	/* ST_v470: (byte 3) */
  bytes2word(51,49,0,84)
, bytes2word(105,109,101,46)
, bytes2word(116,111,85,84)
, bytes2word(67,84,105,109)
, bytes2word(101,58,49,49)
, bytes2word(58,51,51,45)
, bytes2word(49,49,58,51)
,	/* PP_LAMBDA417: (byte 2) */
 	/* PC_LAMBDA417: (byte 2) */
 	/* ST_v467: (byte 2) */
  bytes2word(54,0,84,105)
, bytes2word(109,101,46,116)
, bytes2word(111,85,84,67)
, bytes2word(84,105,109,101)
, bytes2word(58,49,49,58)
, bytes2word(51,56,45,49)
, bytes2word(49,58,52,49)
,	/* PP_LAMBDA418: (byte 1) */
 	/* PC_LAMBDA418: (byte 1) */
 	/* ST_v464: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,116,111)
, bytes2word(85,84,67,84)
, bytes2word(105,109,101,58)
, bytes2word(49,49,58,52)
, bytes2word(51,45,49,49)
,	/* PP_LAMBDA419: (byte 4) */
 	/* PC_LAMBDA419: (byte 4) */
 	/* ST_v461: (byte 4) */
  bytes2word(58,52,54,0)
, bytes2word(84,105,109,101)
, bytes2word(46,116,111,85)
, bytes2word(84,67,84,105)
, bytes2word(109,101,58,49)
, bytes2word(49,58,52,56)
, bytes2word(45,49,49,58)
,	/* PP_LAMBDA420: (byte 3) */
 	/* PC_LAMBDA420: (byte 3) */
 	/* ST_v458: (byte 3) */
  bytes2word(53,49,0,84)
, bytes2word(105,109,101,46)
, bytes2word(116,111,85,84)
, bytes2word(67,84,105,109)
, bytes2word(101,58,49,49)
, bytes2word(58,53,51,45)
, bytes2word(49,49,58,53)
,	/* PP_LAMBDA421: (byte 2) */
 	/* PC_LAMBDA421: (byte 2) */
 	/* ST_v455: (byte 2) */
  bytes2word(55,0,84,105)
, bytes2word(109,101,46,116)
, bytes2word(111,85,84,67)
, bytes2word(84,105,109,101)
, bytes2word(58,49,49,58)
, bytes2word(53,57,45,49)
, bytes2word(49,58,54,51)
,	/* PP_LAMBDA422: (byte 1) */
 	/* PC_LAMBDA422: (byte 1) */
 	/* ST_v452: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,116,111)
, bytes2word(85,84,67,84)
, bytes2word(105,109,101,58)
, bytes2word(49,49,58,54)
, bytes2word(53,45,49,49)
,	/* PP_LAMBDA411: (byte 4) */
 	/* PC_LAMBDA411: (byte 4) */
 	/* ST_v485: (byte 4) */
  bytes2word(58,54,57,0)
, bytes2word(84,105,109,101)
, bytes2word(46,116,111,85)
, bytes2word(84,67,84,105)
, bytes2word(109,101,58,49)
, bytes2word(49,58,56,45)
, bytes2word(49,49,58,49)
, bytes2word(49,0,0,0)
,	/* PS_v424: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46hs_95toUTCTime)
, useLabel(PC_Time_46hs_95toUTCTime)
,	/* PS_v448: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_CString_46fromCString)
,	/* PS_v449: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_Time_46CalendarTime)
,	/* PS_v432: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_Time_46hs_95toUTCTime)
,	/* PS_v429: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_Time_46toUTCTime)
,	/* PS_v445: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_Prelude_46Enum_46Time_46Month_46toEnum)
,	/* PS_v446: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46toInteger)
,	/* PS_v447: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_Prelude_46Enum_46Time_46Day_46toEnum)
,	/* PS_v433: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA411)
,	/* PS_v434: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA412)
,	/* PS_v435: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA413)
,	/* PS_v436: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA414)
,	/* PS_v437: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA415)
,	/* PS_v438: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA416)
,	/* PS_v439: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA417)
,	/* PS_v440: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA418)
,	/* PS_v441: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA419)
,	/* PS_v442: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA420)
,	/* PS_v443: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA421)
,	/* PS_v444: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46toUTCTime)
, useLabel(PC_LAMBDA422)
,	/* PS_v484: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA411)
, useLabel(PC_LAMBDA411)
,	/* PS_v481: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA412)
, useLabel(PC_LAMBDA412)
,	/* PS_v478: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA413)
, useLabel(PC_LAMBDA413)
,	/* PS_v475: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA414)
, useLabel(PC_LAMBDA414)
,	/* PS_v472: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA415)
, useLabel(PC_LAMBDA415)
,	/* PS_v469: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA416)
, useLabel(PC_LAMBDA416)
,	/* PS_v466: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA417)
, useLabel(PC_LAMBDA417)
,	/* PS_v463: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA418)
, useLabel(PC_LAMBDA418)
,	/* PS_v460: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA419)
, useLabel(PC_LAMBDA419)
,	/* PS_v457: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA420)
, useLabel(PC_LAMBDA420)
,	/* PS_v454: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA421)
, useLabel(PC_LAMBDA421)
,	/* PS_v451: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA422)
, useLabel(PC_LAMBDA422)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_toUTCTime" Time.hs_toUTCTime 1 :: Prelude.Int -> Prelude.12 */
extern Node* hs_toUTCTime(HsInt);
#ifdef PROFILE
static SInfo pf_Time_46hs_95toUTCTime = {"Time","Time.hs_toUTCTime","Prelude.12"};
#endif
C_HEADER(FR_Time_46hs_95toUTCTime) {
  NodePtr nodeptr;
  Node* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_toUTCTime(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Time_46hs_95toUTCTime);
  C_RETURN(nodeptr);
}

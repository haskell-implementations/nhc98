#include "newmacros.h"
#include "runtime.h"

#define CT_v303	((void*)startLabel+64)
#define FN_LAMBDA296	((void*)startLabel+108)
#define CT_v313	((void*)startLabel+376)
#define F0_LAMBDA296	((void*)startLabel+384)
#define FN_LAMBDA295	((void*)startLabel+440)
#define CT_v320	((void*)startLabel+600)
#define F0_LAMBDA295	((void*)startLabel+608)
#define FN_LAMBDA294	((void*)startLabel+652)
#define v364	((void*)startLabel+666)
#define v328	((void*)startLabel+670)
#define v365	((void*)startLabel+684)
#define v332	((void*)startLabel+688)
#define v366	((void*)startLabel+698)
#define v336	((void*)startLabel+702)
#define v367	((void*)startLabel+716)
#define v340	((void*)startLabel+720)
#define v368	((void*)startLabel+730)
#define v344	((void*)startLabel+734)
#define v369	((void*)startLabel+748)
#define v348	((void*)startLabel+752)
#define v370	((void*)startLabel+762)
#define v352	((void*)startLabel+766)
#define v371	((void*)startLabel+780)
#define v356	((void*)startLabel+784)
#define v372	((void*)startLabel+794)
#define v360	((void*)startLabel+798)
#define v353	((void*)startLabel+843)
#define v345	((void*)startLabel+848)
#define v337	((void*)startLabel+853)
#define v329	((void*)startLabel+858)
#define v325	((void*)startLabel+863)
#define v321	((void*)startLabel+868)
#define CT_v377	((void*)startLabel+964)
#define F0_LAMBDA294	((void*)startLabel+972)
#define FN_LAMBDA293	((void*)startLabel+1020)
#define CT_v385	((void*)startLabel+1192)
#define F0_LAMBDA293	((void*)startLabel+1200)
#define FN_LAMBDA292	((void*)startLabel+1228)
#define CT_v392	((void*)startLabel+1384)
#define F0_LAMBDA292	((void*)startLabel+1392)
#define FN_LAMBDA291	((void*)startLabel+1436)
#define v460	((void*)startLabel+1452)
#define v400	((void*)startLabel+1456)
#define v461	((void*)startLabel+1470)
#define v404	((void*)startLabel+1474)
#define v462	((void*)startLabel+1484)
#define v408	((void*)startLabel+1488)
#define v463	((void*)startLabel+1502)
#define v412	((void*)startLabel+1506)
#define v464	((void*)startLabel+1516)
#define v416	((void*)startLabel+1520)
#define v465	((void*)startLabel+1534)
#define v420	((void*)startLabel+1538)
#define v466	((void*)startLabel+1548)
#define v424	((void*)startLabel+1552)
#define v467	((void*)startLabel+1566)
#define v428	((void*)startLabel+1570)
#define v468	((void*)startLabel+1580)
#define v432	((void*)startLabel+1584)
#define v469	((void*)startLabel+1598)
#define v436	((void*)startLabel+1602)
#define v470	((void*)startLabel+1612)
#define v440	((void*)startLabel+1616)
#define v471	((void*)startLabel+1630)
#define v444	((void*)startLabel+1634)
#define v472	((void*)startLabel+1644)
#define v448	((void*)startLabel+1648)
#define v473	((void*)startLabel+1662)
#define v452	((void*)startLabel+1666)
#define v474	((void*)startLabel+1676)
#define v456	((void*)startLabel+1680)
#define v449	((void*)startLabel+1712)
#define v441	((void*)startLabel+1717)
#define v433	((void*)startLabel+1722)
#define v425	((void*)startLabel+1727)
#define v417	((void*)startLabel+1732)
#define v409	((void*)startLabel+1737)
#define v401	((void*)startLabel+1742)
#define v397	((void*)startLabel+1747)
#define v393	((void*)startLabel+1752)
#define CT_v478	((void*)startLabel+1888)
#define F0_LAMBDA291	((void*)startLabel+1896)
#define CT_v483	((void*)startLabel+2000)
#define CT_v489	((void*)startLabel+2172)
#define ST_v485	((void*)startLabel+2208)
#define ST_v480	((void*)startLabel+2236)
#define ST_v301	((void*)startLabel+2272)
#define PP_LAMBDA296	((void*)startLabel+2309)
#define PC_LAMBDA296	((void*)startLabel+2309)
#define ST_v305	((void*)startLabel+2309)
#define PP_LAMBDA292	((void*)startLabel+2356)
#define PC_LAMBDA292	((void*)startLabel+2356)
#define ST_v387	((void*)startLabel+2356)
#define PP_LAMBDA291	((void*)startLabel+2403)
#define PC_LAMBDA291	((void*)startLabel+2403)
#define ST_v458	((void*)startLabel+2403)
#define PP_LAMBDA295	((void*)startLabel+2450)
#define PC_LAMBDA295	((void*)startLabel+2450)
#define ST_v315	((void*)startLabel+2450)
#define PP_LAMBDA293	((void*)startLabel+2497)
#define PC_LAMBDA293	((void*)startLabel+2497)
#define PP_LAMBDA294	((void*)startLabel+2497)
#define PC_LAMBDA294	((void*)startLabel+2497)
#define ST_v362	((void*)startLabel+2497)
#define PS_v300	((void*)startLabel+2544)
#define PS_v302	((void*)startLabel+2556)
#define PS_v482	((void*)startLabel+2568)
#define PS_v479	((void*)startLabel+2580)
#define PS_v481	((void*)startLabel+2592)
#define PS_v486	((void*)startLabel+2604)
#define PS_v487	((void*)startLabel+2616)
#define PS_v484	((void*)startLabel+2628)
#define PS_v488	((void*)startLabel+2640)
#define PS_v475	((void*)startLabel+2652)
#define PS_v476	((void*)startLabel+2664)
#define PS_v477	((void*)startLabel+2676)
#define PS_v457	((void*)startLabel+2688)
#define PS_v389	((void*)startLabel+2700)
#define PS_v391	((void*)startLabel+2712)
#define PS_v390	((void*)startLabel+2724)
#define PS_v388	((void*)startLabel+2736)
#define PS_v386	((void*)startLabel+2748)
#define PS_v382	((void*)startLabel+2760)
#define PS_v383	((void*)startLabel+2772)
#define PS_v384	((void*)startLabel+2784)
#define PS_v380	((void*)startLabel+2796)
#define PS_v375	((void*)startLabel+2808)
#define PS_v376	((void*)startLabel+2820)
#define PS_v374	((void*)startLabel+2832)
#define PS_v373	((void*)startLabel+2844)
#define PS_v361	((void*)startLabel+2856)
#define PS_v317	((void*)startLabel+2868)
#define PS_v319	((void*)startLabel+2880)
#define PS_v318	((void*)startLabel+2892)
#define PS_v316	((void*)startLabel+2904)
#define PS_v314	((void*)startLabel+2916)
#define PS_v309	((void*)startLabel+2928)
#define PS_v308	((void*)startLabel+2940)
#define PS_v312	((void*)startLabel+2952)
#define PS_v306	((void*)startLabel+2964)
#define PS_v310	((void*)startLabel+2976)
#define PS_v307	((void*)startLabel+2988)
#define PS_v311	((void*)startLabel+3000)
#define PS_v304	((void*)startLabel+3012)
extern Node FN_Prelude_46readParen[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Read_46Prelude_46Maybe[];
extern Node FN_Prelude_46_95_46readList[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46lex[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46Just[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46readsPrec[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46readParen[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v303)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v302)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v301)
,	/* CT_v303: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec),2)
, useLabel(PS_v300)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA296),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v313)
,	/* FN_LAMBDA296: (byte 0) */
  bytes2word(NEEDHEAP_P1,59,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(15,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_INT_P1)
, bytes2word(9,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,39,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v312)
, 0
, 0
, 0
, 0
, useLabel(PS_v311)
, 0
, 0
, 0
, 0
, useLabel(PS_v310)
, 0
, 0
, 0
, 0
, useLabel(PS_v309)
, 0
, 0
, 0
, 0
, useLabel(PS_v308)
, 0
, 0
, 0
, 0
, useLabel(PS_v307)
, 0
, 0
, 0
, 0
, useLabel(PS_v306)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40018
, useLabel(ST_v305)
,	/* CT_v313: (byte 0) */
  HW(6,3)
, 0
,	/* F0_LAMBDA296: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA296),3)
, useLabel(PS_v304)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA292),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, CAPTAG(useLabel(FN_LAMBDA295),1)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v320)
,	/* FN_LAMBDA295: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v319)
, 0
, 0
, 0
, 0
, useLabel(PS_v318)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v317)
, 0
, 0
, 0
, 0
, useLabel(PS_v316)
, 0
, 0
, 0
, 0
, 60045
, useLabel(ST_v315)
,	/* CT_v320: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA295: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA295),2)
, useLabel(PS_v314)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA294),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v377)
,	/* FN_LAMBDA294: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v364: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v328: (byte 2) */
  bytes2word(195,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(74),BOT(74))
,	/* v365: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v332: (byte 4) */
  bytes2word(POP_I1,JUMP,172,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v366: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v336: (byte 2) */
  bytes2word(158,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(117),BOT(117))
,	/* v367: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v340: (byte 4) */
  bytes2word(POP_I1,JUMP,135,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v368: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v344: (byte 2) */
  bytes2word(121,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(115),BOT(115))
,	/* v369: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v348: (byte 4) */
  bytes2word(POP_I1,JUMP,98,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v370: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v352: (byte 2) */
  bytes2word(84,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v371: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v356: (byte 4) */
  bytes2word(POP_I1,JUMP,61,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v372: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v360: (byte 2) */
  bytes2word(47,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_INT_P1,10,HEAP_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,14)
,	/* v353: (byte 3) */
  bytes2word(HEAP_ARG,3,RETURN_EVAL,POP_P1)
,	/* v345: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v337: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v329: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v325: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v321: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v376)
, 0
, 0
, 0
, 0
, useLabel(PS_v375)
, 0
, 0
, 0
, 0
, useLabel(PS_v374)
, 0
, 0
, 0
, 0
, useLabel(PS_v373)
, 0
, 0
, 0
, 0
, 60051
, useLabel(ST_v362)
,	/* CT_v377: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA294: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA294),3)
, useLabel(PS_v361)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA293),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v385)
,	/* FN_LAMBDA293: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v384)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v383)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v382)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, 60051
, useLabel(ST_v362)
,	/* CT_v385: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA293: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA293),2)
, useLabel(PS_v380)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v392)
,	/* FN_LAMBDA292: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v391)
, 0
, 0
, 0
, 0
, useLabel(PS_v390)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v389)
, 0
, 0
, 0
, 0
, useLabel(PS_v388)
, 0
, 0
, 0
, 0
, 40045
, useLabel(ST_v387)
,	/* CT_v392: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA292: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA292),1)
, useLabel(PS_v386)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA291),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v478)
,	/* FN_LAMBDA291: (byte 0) */
  bytes2word(NEEDSTACK_P1,17,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v460: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v400: (byte 4) */
  bytes2word(POP_I1,JUMP,37,1)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(78),BOT(78),TOP(10),BOT(10))
,	/* v461: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v404: (byte 2) */
  bytes2word(14,1,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v462: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v408: (byte 4) */
  bytes2word(POP_I1,JUMP,0,1)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(111),BOT(111),TOP(10),BOT(10))
,	/* v463: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v412: (byte 2) */
  bytes2word(233,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v464: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v416: (byte 4) */
  bytes2word(POP_I1,JUMP,219,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(116),BOT(116),TOP(10),BOT(10))
,	/* v465: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v420: (byte 2) */
  bytes2word(196,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v466: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v424: (byte 4) */
  bytes2word(POP_I1,JUMP,182,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(104),BOT(104),TOP(10),BOT(10))
,	/* v467: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v428: (byte 2) */
  bytes2word(159,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v468: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v432: (byte 4) */
  bytes2word(POP_I1,JUMP,145,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(105),BOT(105),TOP(10),BOT(10))
,	/* v469: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v436: (byte 2) */
  bytes2word(122,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v470: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v440: (byte 4) */
  bytes2word(POP_I1,JUMP,108,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(110),BOT(110),TOP(10),BOT(10))
,	/* v471: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v444: (byte 2) */
  bytes2word(85,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v472: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v448: (byte 4) */
  bytes2word(POP_I1,JUMP,71,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(103),BOT(103),TOP(10),BOT(10))
,	/* v473: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v452: (byte 2) */
  bytes2word(48,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v474: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v456: (byte 4) */
  bytes2word(POP_I1,JUMP,34,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_P1,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
,	/* v449: (byte 4) */
  bytes2word(12,HEAP_ARG,2,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v441: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v433: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v425: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v417: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v409: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v401: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v397: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v393: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v477)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v476)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v475)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40051
, useLabel(ST_v458)
,	/* CT_v478: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA291),2)
, useLabel(PS_v457)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v483)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v482)
, 0
, 0
, 0
, 0
, useLabel(PS_v481)
, 0
, 0
, 0
, 0
, 30022
, useLabel(ST_v480)
,	/* CT_v483: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readList),1)
, useLabel(PS_v479)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v489)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v488)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v487)
, 0
, 0
, 0
, 0
, useLabel(PS_v486)
, 0
, 0
, 0
, 0
, 30022
, useLabel(ST_v485)
,	/* CT_v489: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe),1)
, useLabel(PS_v484)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readList))
,};
Node PP_Prelude_46Read_46Prelude_46Maybe[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Maybe[] = {
 	/* ST_v485: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,0,0)
,};
Node PP_Prelude_46Read_46Prelude_46Maybe_46readList[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Maybe_46readList[] = {
 	/* ST_v480: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,115,116,0)
,};
Node PP_Prelude_46Read_46Prelude_46Maybe_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Maybe_46readsPrec[] = {
 	/* ST_v301: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
,	/* PP_LAMBDA296: (byte 1) */
 	/* PC_LAMBDA296: (byte 1) */
 	/* ST_v305: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,52,58)
, bytes2word(49,56,45,55)
,	/* PP_LAMBDA292: (byte 4) */
 	/* PC_LAMBDA292: (byte 4) */
 	/* ST_v387: (byte 4) */
  bytes2word(58,57,49,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,52,58,52)
, bytes2word(53,45,52,58)
,	/* PP_LAMBDA291: (byte 3) */
 	/* PC_LAMBDA291: (byte 3) */
 	/* ST_v458: (byte 3) */
  bytes2word(56,56,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(52,58,53,49)
, bytes2word(45,52,58,56)
,	/* PP_LAMBDA295: (byte 2) */
 	/* PC_LAMBDA295: (byte 2) */
 	/* ST_v315: (byte 2) */
  bytes2word(56,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(97,121,98,101)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,58,54)
, bytes2word(58,52,53,45)
, bytes2word(55,58,56,56)
,	/* PP_LAMBDA293: (byte 1) */
 	/* PC_LAMBDA293: (byte 1) */
 	/* PP_LAMBDA294: (byte 1) */
 	/* PC_LAMBDA294: (byte 1) */
 	/* ST_v362: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,54,58)
, bytes2word(53,49,45,55)
, bytes2word(58,56,56,0)
,	/* PS_v300: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe_46readsPrec)
, useLabel(PC_Prelude_46Read_46Prelude_46Maybe_46readsPrec)
,	/* PS_v302: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe_46readsPrec)
, useLabel(PC_LAMBDA296)
,	/* PS_v482: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v479: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46Maybe_46readList)
,	/* PS_v481: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46Maybe)
,	/* PS_v486: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Read_46Prelude_46Maybe_46readsPrec)
,	/* PS_v487: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Read_46Prelude_46Maybe_46readList)
,	/* PS_v484: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Read_46Prelude_46Maybe)
,	/* PS_v488: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Maybe)
, useLabel(PC_Prelude_462)
,	/* PS_v475: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA291)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v476: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA291)
, useLabel(PC_Prelude_462)
,	/* PS_v477: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA291)
, useLabel(PC_Prelude_46_58)
,	/* PS_v457: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA291)
, useLabel(PC_LAMBDA291)
,	/* PS_v389: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA292)
, useLabel(PC_Prelude_46lex)
,	/* PS_v391: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA292)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v390: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA292)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v388: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA292)
, useLabel(PC_LAMBDA291)
,	/* PS_v386: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA292)
, useLabel(PC_LAMBDA292)
,	/* PS_v382: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA293)
, useLabel(PC_Prelude_46Just)
,	/* PS_v383: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA293)
, useLabel(PC_Prelude_462)
,	/* PS_v384: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA293)
, useLabel(PC_Prelude_46_58)
,	/* PS_v380: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA293)
, useLabel(PC_LAMBDA293)
,	/* PS_v375: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA294)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v376: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA294)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v374: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA294)
, useLabel(PC_Prelude_46readsPrec)
,	/* PS_v373: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA294)
, useLabel(PC_LAMBDA293)
,	/* PS_v361: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA294)
, useLabel(PC_LAMBDA294)
,	/* PS_v317: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA295)
, useLabel(PC_Prelude_46lex)
,	/* PS_v319: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA295)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v318: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA295)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v316: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA295)
, useLabel(PC_LAMBDA294)
,	/* PS_v314: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA295)
, useLabel(PC_LAMBDA295)
,	/* PS_v309: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA296)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v308: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA296)
, useLabel(PC_Prelude_46readParen)
,	/* PS_v312: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA296)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v306: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA296)
, useLabel(PC_Prelude_46False)
,	/* PS_v310: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA296)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46_62)
,	/* PS_v307: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA296)
, useLabel(PC_LAMBDA292)
,	/* PS_v311: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA296)
, useLabel(PC_LAMBDA295)
,	/* PS_v304: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA296)
, useLabel(PC_LAMBDA296)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v369	((void*)startLabel+144)
#define FN_LAMBDA360	((void*)startLabel+196)
#define CT_v376	((void*)startLabel+360)
#define F0_LAMBDA360	((void*)startLabel+368)
#define FN_LAMBDA359	((void*)startLabel+416)
#define v396	((void*)startLabel+432)
#define v384	((void*)startLabel+436)
#define v397	((void*)startLabel+450)
#define v388	((void*)startLabel+454)
#define v398	((void*)startLabel+464)
#define v392	((void*)startLabel+468)
#define v385	((void*)startLabel+514)
#define v381	((void*)startLabel+519)
#define v377	((void*)startLabel+524)
#define CT_v403	((void*)startLabel+620)
#define F0_LAMBDA359	((void*)startLabel+628)
#define FN_LAMBDA358	((void*)startLabel+680)
#define CT_v411	((void*)startLabel+800)
#define F0_LAMBDA358	((void*)startLabel+808)
#define FN_LAMBDA357	((void*)startLabel+856)
#define v430	((void*)startLabel+872)
#define v419	((void*)startLabel+876)
#define v431	((void*)startLabel+890)
#define v423	((void*)startLabel+894)
#define v432	((void*)startLabel+904)
#define v427	((void*)startLabel+908)
#define v420	((void*)startLabel+954)
#define v416	((void*)startLabel+959)
#define v412	((void*)startLabel+964)
#define CT_v437	((void*)startLabel+1060)
#define F0_LAMBDA357	((void*)startLabel+1068)
#define FN_LAMBDA356	((void*)startLabel+1120)
#define CT_v445	((void*)startLabel+1240)
#define F0_LAMBDA356	((void*)startLabel+1248)
#define FN_LAMBDA355	((void*)startLabel+1296)
#define v464	((void*)startLabel+1312)
#define v453	((void*)startLabel+1316)
#define v465	((void*)startLabel+1330)
#define v457	((void*)startLabel+1334)
#define v466	((void*)startLabel+1344)
#define v461	((void*)startLabel+1348)
#define v454	((void*)startLabel+1394)
#define v450	((void*)startLabel+1399)
#define v446	((void*)startLabel+1404)
#define CT_v471	((void*)startLabel+1500)
#define F0_LAMBDA355	((void*)startLabel+1508)
#define FN_LAMBDA354	((void*)startLabel+1560)
#define CT_v479	((void*)startLabel+1680)
#define F0_LAMBDA354	((void*)startLabel+1688)
#define FN_LAMBDA353	((void*)startLabel+1736)
#define v498	((void*)startLabel+1752)
#define v487	((void*)startLabel+1756)
#define v499	((void*)startLabel+1770)
#define v491	((void*)startLabel+1774)
#define v500	((void*)startLabel+1784)
#define v495	((void*)startLabel+1788)
#define v488	((void*)startLabel+1825)
#define v484	((void*)startLabel+1830)
#define v480	((void*)startLabel+1835)
#define CT_v504	((void*)startLabel+1972)
#define F0_LAMBDA353	((void*)startLabel+1980)
#define CT_v509	((void*)startLabel+2092)
#define CT_v515	((void*)startLabel+2272)
#define ST_v511	((void*)startLabel+2308)
#define ST_v506	((void*)startLabel+2332)
#define ST_v365	((void*)startLabel+2364)
#define PP_LAMBDA360	((void*)startLabel+2397)
#define PC_LAMBDA360	((void*)startLabel+2397)
#define ST_v371	((void*)startLabel+2397)
#define PP_LAMBDA353	((void*)startLabel+2441)
#define PC_LAMBDA353	((void*)startLabel+2441)
#define PP_LAMBDA354	((void*)startLabel+2441)
#define PC_LAMBDA354	((void*)startLabel+2441)
#define PP_LAMBDA355	((void*)startLabel+2441)
#define PC_LAMBDA355	((void*)startLabel+2441)
#define PP_LAMBDA356	((void*)startLabel+2441)
#define PC_LAMBDA356	((void*)startLabel+2441)
#define PP_LAMBDA357	((void*)startLabel+2441)
#define PC_LAMBDA357	((void*)startLabel+2441)
#define PP_LAMBDA358	((void*)startLabel+2441)
#define PC_LAMBDA358	((void*)startLabel+2441)
#define PP_LAMBDA359	((void*)startLabel+2441)
#define PC_LAMBDA359	((void*)startLabel+2441)
#define ST_v394	((void*)startLabel+2441)
#define PS_v368	((void*)startLabel+2488)
#define PS_v366	((void*)startLabel+2500)
#define PS_v364	((void*)startLabel+2512)
#define PS_v367	((void*)startLabel+2524)
#define PS_v508	((void*)startLabel+2536)
#define PS_v505	((void*)startLabel+2548)
#define PS_v507	((void*)startLabel+2560)
#define PS_v512	((void*)startLabel+2572)
#define PS_v513	((void*)startLabel+2584)
#define PS_v510	((void*)startLabel+2596)
#define PS_v514	((void*)startLabel+2608)
#define PS_v501	((void*)startLabel+2620)
#define PS_v502	((void*)startLabel+2632)
#define PS_v503	((void*)startLabel+2644)
#define PS_v496	((void*)startLabel+2656)
#define PS_v477	((void*)startLabel+2668)
#define PS_v478	((void*)startLabel+2680)
#define PS_v476	((void*)startLabel+2692)
#define PS_v474	((void*)startLabel+2704)
#define PS_v469	((void*)startLabel+2716)
#define PS_v468	((void*)startLabel+2728)
#define PS_v470	((void*)startLabel+2740)
#define PS_v467	((void*)startLabel+2752)
#define PS_v462	((void*)startLabel+2764)
#define PS_v443	((void*)startLabel+2776)
#define PS_v444	((void*)startLabel+2788)
#define PS_v442	((void*)startLabel+2800)
#define PS_v440	((void*)startLabel+2812)
#define PS_v435	((void*)startLabel+2824)
#define PS_v434	((void*)startLabel+2836)
#define PS_v436	((void*)startLabel+2848)
#define PS_v433	((void*)startLabel+2860)
#define PS_v428	((void*)startLabel+2872)
#define PS_v409	((void*)startLabel+2884)
#define PS_v410	((void*)startLabel+2896)
#define PS_v408	((void*)startLabel+2908)
#define PS_v406	((void*)startLabel+2920)
#define PS_v401	((void*)startLabel+2932)
#define PS_v400	((void*)startLabel+2944)
#define PS_v402	((void*)startLabel+2956)
#define PS_v399	((void*)startLabel+2968)
#define PS_v393	((void*)startLabel+2980)
#define PS_v373	((void*)startLabel+2992)
#define PS_v375	((void*)startLabel+3004)
#define PS_v374	((void*)startLabel+3016)
#define PS_v372	((void*)startLabel+3028)
#define PS_v370	((void*)startLabel+3040)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_463[];
extern Node FN_Prelude_46_95_46readList[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46readParen[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_463[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46lex[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46reads[];
extern Node PC_Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v369)
,};
Node FN_Prelude_46Read_46Prelude_463_46readsPrec[] = {
  bytes2word(ZAP_ARG,4,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,3,2)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,14,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v368)
, 0
, 0
, 0
, 0
, useLabel(PS_v367)
, 0
, 0
, 0
, 0
, useLabel(PS_v366)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40005
, useLabel(ST_v365)
,	/* CT_v369: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Read_46Prelude_463_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readsPrec),4)
, useLabel(PS_v364)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA360),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v376)
,	/* FN_LAMBDA360: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,24,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v373)
, 0
, 0
, 0
, 0
, useLabel(PS_v372)
, 0
, 0
, 0
, 0
, 50030
, useLabel(ST_v371)
,	/* CT_v376: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA360: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA360),4)
, useLabel(PS_v370)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA359),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v403)
,	/* FN_LAMBDA359: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v396: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v384: (byte 4) */
  bytes2word(POP_I1,JUMP,85,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v397: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v388: (byte 2) */
  bytes2word(62,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v398: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v392: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_OFF_N1,13,HEAP_ARG)
,	/* v385: (byte 2) */
  bytes2word(5,RETURN_EVAL,POP_P1,2)
,	/* v381: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v377: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v402)
, 0
, 0
, 0
, 0
, useLabel(PS_v401)
, 0
, 0
, 0
, 0
, useLabel(PS_v400)
, 0
, 0
, 0
, 0
, useLabel(PS_v399)
, 0
, 0
, 0
, 0
, 50037
, useLabel(ST_v394)
,	/* CT_v403: (byte 0) */
  HW(4,5)
, 0
,	/* F0_LAMBDA359: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA359),5)
, useLabel(PS_v393)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA358),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v411)
,	/* FN_LAMBDA358: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v410)
, 0
, 0
, 0
, 0
, useLabel(PS_v409)
, 0
, 0
, 0
, 0
, useLabel(PS_v408)
, 0
, 0
, 0
, 0
, 50037
, useLabel(ST_v394)
,	/* CT_v411: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA358: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA358),4)
, useLabel(PS_v406)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA357),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v437)
,	/* FN_LAMBDA357: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v430: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v419: (byte 4) */
  bytes2word(POP_I1,JUMP,85,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v431: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v423: (byte 2) */
  bytes2word(62,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v432: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v427: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_OFF_N1,13,HEAP_ARG)
,	/* v420: (byte 2) */
  bytes2word(5,RETURN_EVAL,POP_P1,2)
,	/* v416: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v412: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, 50037
, useLabel(ST_v394)
,	/* CT_v437: (byte 0) */
  HW(4,5)
, 0
,	/* F0_LAMBDA357: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA357),5)
, useLabel(PS_v428)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA356),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v445)
,	/* FN_LAMBDA356: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(19,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, 50037
, useLabel(ST_v394)
,	/* CT_v445: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA356: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA356),4)
, useLabel(PS_v440)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA355),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v471)
,	/* FN_LAMBDA355: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v464: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v453: (byte 4) */
  bytes2word(POP_I1,JUMP,85,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v465: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v457: (byte 2) */
  bytes2word(62,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v466: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v461: (byte 4) */
  bytes2word(POP_I1,JUMP,48,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_OFF_N1,13,HEAP_ARG)
,	/* v454: (byte 2) */
  bytes2word(5,RETURN_EVAL,POP_P1,2)
,	/* v450: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v446: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v470)
, 0
, 0
, 0
, 0
, useLabel(PS_v469)
, 0
, 0
, 0
, 0
, useLabel(PS_v468)
, 0
, 0
, 0
, 0
, useLabel(PS_v467)
, 0
, 0
, 0
, 0
, 50037
, useLabel(ST_v394)
,	/* CT_v471: (byte 0) */
  HW(4,5)
, 0
,	/* F0_LAMBDA355: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA355),5)
, useLabel(PS_v462)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA354),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v479)
,	/* FN_LAMBDA354: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v478)
, 0
, 0
, 0
, 0
, useLabel(PS_v477)
, 0
, 0
, 0
, 0
, useLabel(PS_v476)
, 0
, 0
, 0
, 0
, 50037
, useLabel(ST_v394)
,	/* CT_v479: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA354: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA354),4)
, useLabel(PS_v474)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA353),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v504)
,	/* FN_LAMBDA353: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v498: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v487: (byte 4) */
  bytes2word(POP_I1,JUMP,76,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v499: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v491: (byte 2) */
  bytes2word(53,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v500: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v495: (byte 4) */
  bytes2word(POP_I1,JUMP,39,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,13,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,5)
,	/* v488: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v484: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v480: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v503)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v502)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v501)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, 50037
, useLabel(ST_v394)
,	/* CT_v504: (byte 0) */
  HW(0,5)
, 0
,	/* F0_LAMBDA353: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA353),5)
, useLabel(PS_v496)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v509)
,};
Node FN_Prelude_46Read_46Prelude_463_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v508)
, 0
, 0
, 0
, 0
, useLabel(PS_v507)
, 0
, 0
, 0
, 0
, 30039
, useLabel(ST_v506)
,	/* CT_v509: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_463_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readList),3)
, useLabel(PS_v505)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v515)
,};
Node FN_Prelude_46Read_46Prelude_463[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v514)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v513)
, 0
, 0
, 0
, 0
, useLabel(PS_v512)
, 0
, 0
, 0
, 0
, 30039
, useLabel(ST_v511)
,	/* CT_v515: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463),3)
, useLabel(PS_v510)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readList))
,};
Node PP_Prelude_46Read_46Prelude_463[] = {
 };
Node PC_Prelude_46Read_46Prelude_463[] = {
 	/* ST_v511: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,0,0)
,};
Node PP_Prelude_46Read_46Prelude_463_46readList[] = {
 };
Node PC_Prelude_46Read_46Prelude_463_46readList[] = {
 	/* ST_v506: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,115,116,0)
,};
Node PP_Prelude_46Read_46Prelude_463_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46Prelude_463_46readsPrec[] = {
 	/* ST_v365: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
,	/* PP_LAMBDA360: (byte 1) */
 	/* PC_LAMBDA360: (byte 1) */
 	/* ST_v371: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,51,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,53,58)
, bytes2word(51,48,45,49)
, bytes2word(50,58,54,48)
,	/* PP_LAMBDA353: (byte 1) */
 	/* PC_LAMBDA353: (byte 1) */
 	/* PP_LAMBDA354: (byte 1) */
 	/* PC_LAMBDA354: (byte 1) */
 	/* PP_LAMBDA355: (byte 1) */
 	/* PC_LAMBDA355: (byte 1) */
 	/* PP_LAMBDA356: (byte 1) */
 	/* PC_LAMBDA356: (byte 1) */
 	/* PP_LAMBDA357: (byte 1) */
 	/* PC_LAMBDA357: (byte 1) */
 	/* PP_LAMBDA358: (byte 1) */
 	/* PC_LAMBDA358: (byte 1) */
 	/* PP_LAMBDA359: (byte 1) */
 	/* PC_LAMBDA359: (byte 1) */
 	/* ST_v394: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,51,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
, bytes2word(99,58,53,58)
, bytes2word(51,55,45,49)
, bytes2word(50,58,54,48)
, bytes2word(0,0,0,0)
,	/* PS_v368: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463_46readsPrec)
, useLabel(PC_Prelude_46readParen)
,	/* PS_v366: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463_46readsPrec)
, useLabel(PC_Prelude_46False)
,	/* PS_v364: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463_46readsPrec)
, useLabel(PC_Prelude_46Read_46Prelude_463_46readsPrec)
,	/* PS_v367: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463_46readsPrec)
, useLabel(PC_LAMBDA360)
,	/* PS_v508: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v505: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_463_46readList)
,	/* PS_v507: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_463)
,	/* PS_v512: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463)
, useLabel(PC_Prelude_46Read_46Prelude_463_46readsPrec)
,	/* PS_v513: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463)
, useLabel(PC_Prelude_46Read_46Prelude_463_46readList)
,	/* PS_v510: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463)
, useLabel(PC_Prelude_46Read_46Prelude_463)
,	/* PS_v514: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_463)
, useLabel(PC_Prelude_462)
,	/* PS_v501: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA353)
, useLabel(PC_Prelude_463)
,	/* PS_v502: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA353)
, useLabel(PC_Prelude_462)
,	/* PS_v503: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA353)
, useLabel(PC_Prelude_46_58)
,	/* PS_v496: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA353)
, useLabel(PC_LAMBDA353)
,	/* PS_v477: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA354)
, useLabel(PC_Prelude_46lex)
,	/* PS_v478: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA354)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v476: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA354)
, useLabel(PC_LAMBDA353)
,	/* PS_v474: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA354)
, useLabel(PC_LAMBDA354)
,	/* PS_v469: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA355)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v468: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA355)
, useLabel(PC_Prelude_46reads)
,	/* PS_v470: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA355)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v467: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA355)
, useLabel(PC_LAMBDA354)
,	/* PS_v462: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA355)
, useLabel(PC_LAMBDA355)
,	/* PS_v443: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA356)
, useLabel(PC_Prelude_46lex)
,	/* PS_v444: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA356)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v442: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA356)
, useLabel(PC_LAMBDA355)
,	/* PS_v440: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA356)
, useLabel(PC_LAMBDA356)
,	/* PS_v435: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA357)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v434: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA357)
, useLabel(PC_Prelude_46reads)
,	/* PS_v436: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA357)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v433: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA357)
, useLabel(PC_LAMBDA356)
,	/* PS_v428: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA357)
, useLabel(PC_LAMBDA357)
,	/* PS_v409: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA358)
, useLabel(PC_Prelude_46lex)
,	/* PS_v410: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA358)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v408: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA358)
, useLabel(PC_LAMBDA357)
,	/* PS_v406: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA358)
, useLabel(PC_LAMBDA358)
,	/* PS_v401: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA359)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v400: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA359)
, useLabel(PC_Prelude_46reads)
,	/* PS_v402: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA359)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v399: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA359)
, useLabel(PC_LAMBDA358)
,	/* PS_v393: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA359)
, useLabel(PC_LAMBDA359)
,	/* PS_v373: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA360)
, useLabel(PC_Prelude_46lex)
,	/* PS_v375: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA360)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v374: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA360)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v372: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA360)
, useLabel(PC_LAMBDA359)
,	/* PS_v370: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA360)
, useLabel(PC_LAMBDA360)
,};

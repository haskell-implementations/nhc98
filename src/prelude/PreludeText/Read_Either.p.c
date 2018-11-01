#include "newmacros.h"
#include "runtime.h"

#define CT_v327	((void*)startLabel+124)
#define FN_LAMBDA318	((void*)startLabel+176)
#define CT_v336	((void*)startLabel+424)
#define F0_LAMBDA318	((void*)startLabel+432)
#define FN_LAMBDA317	((void*)startLabel+484)
#define v388	((void*)startLabel+498)
#define v344	((void*)startLabel+502)
#define v389	((void*)startLabel+516)
#define v348	((void*)startLabel+520)
#define v390	((void*)startLabel+530)
#define v352	((void*)startLabel+534)
#define v391	((void*)startLabel+548)
#define v356	((void*)startLabel+552)
#define v392	((void*)startLabel+562)
#define v360	((void*)startLabel+566)
#define v393	((void*)startLabel+580)
#define v364	((void*)startLabel+584)
#define v394	((void*)startLabel+594)
#define v368	((void*)startLabel+598)
#define v395	((void*)startLabel+612)
#define v372	((void*)startLabel+616)
#define v396	((void*)startLabel+626)
#define v376	((void*)startLabel+630)
#define v397	((void*)startLabel+644)
#define v380	((void*)startLabel+648)
#define v398	((void*)startLabel+658)
#define v384	((void*)startLabel+662)
#define v377	((void*)startLabel+707)
#define v369	((void*)startLabel+712)
#define v361	((void*)startLabel+717)
#define v353	((void*)startLabel+722)
#define v345	((void*)startLabel+727)
#define v341	((void*)startLabel+732)
#define v337	((void*)startLabel+737)
#define CT_v403	((void*)startLabel+832)
#define F0_LAMBDA317	((void*)startLabel+840)
#define FN_LAMBDA316	((void*)startLabel+888)
#define CT_v411	((void*)startLabel+1060)
#define F0_LAMBDA316	((void*)startLabel+1068)
#define FN_LAMBDA315	((void*)startLabel+1100)
#define v455	((void*)startLabel+1114)
#define v419	((void*)startLabel+1118)
#define v456	((void*)startLabel+1132)
#define v423	((void*)startLabel+1136)
#define v457	((void*)startLabel+1146)
#define v427	((void*)startLabel+1150)
#define v458	((void*)startLabel+1164)
#define v431	((void*)startLabel+1168)
#define v459	((void*)startLabel+1178)
#define v435	((void*)startLabel+1182)
#define v460	((void*)startLabel+1196)
#define v439	((void*)startLabel+1200)
#define v461	((void*)startLabel+1210)
#define v443	((void*)startLabel+1214)
#define v462	((void*)startLabel+1228)
#define v447	((void*)startLabel+1232)
#define v463	((void*)startLabel+1242)
#define v451	((void*)startLabel+1246)
#define v444	((void*)startLabel+1291)
#define v436	((void*)startLabel+1296)
#define v428	((void*)startLabel+1301)
#define v420	((void*)startLabel+1306)
#define v416	((void*)startLabel+1311)
#define v412	((void*)startLabel+1316)
#define CT_v468	((void*)startLabel+1412)
#define F0_LAMBDA315	((void*)startLabel+1420)
#define FN_LAMBDA314	((void*)startLabel+1468)
#define CT_v476	((void*)startLabel+1640)
#define F0_LAMBDA314	((void*)startLabel+1648)
#define CT_v481	((void*)startLabel+1756)
#define CT_v487	((void*)startLabel+1932)
#define ST_v483	((void*)startLabel+1968)
#define ST_v478	((void*)startLabel+1996)
#define ST_v323	((void*)startLabel+2036)
#define PP_LAMBDA318	((void*)startLabel+2074)
#define PC_LAMBDA318	((void*)startLabel+2074)
#define ST_v329	((void*)startLabel+2074)
#define PP_LAMBDA314	((void*)startLabel+2122)
#define PC_LAMBDA314	((void*)startLabel+2122)
#define PP_LAMBDA315	((void*)startLabel+2122)
#define PC_LAMBDA315	((void*)startLabel+2122)
#define ST_v453	((void*)startLabel+2122)
#define PP_LAMBDA316	((void*)startLabel+2170)
#define PC_LAMBDA316	((void*)startLabel+2170)
#define PP_LAMBDA317	((void*)startLabel+2170)
#define PC_LAMBDA317	((void*)startLabel+2170)
#define ST_v386	((void*)startLabel+2170)
#define PS_v326	((void*)startLabel+2220)
#define PS_v322	((void*)startLabel+2232)
#define PS_v324	((void*)startLabel+2244)
#define PS_v325	((void*)startLabel+2256)
#define PS_v480	((void*)startLabel+2268)
#define PS_v477	((void*)startLabel+2280)
#define PS_v479	((void*)startLabel+2292)
#define PS_v484	((void*)startLabel+2304)
#define PS_v485	((void*)startLabel+2316)
#define PS_v482	((void*)startLabel+2328)
#define PS_v486	((void*)startLabel+2340)
#define PS_v473	((void*)startLabel+2352)
#define PS_v474	((void*)startLabel+2364)
#define PS_v475	((void*)startLabel+2376)
#define PS_v471	((void*)startLabel+2388)
#define PS_v466	((void*)startLabel+2400)
#define PS_v467	((void*)startLabel+2412)
#define PS_v465	((void*)startLabel+2424)
#define PS_v464	((void*)startLabel+2436)
#define PS_v452	((void*)startLabel+2448)
#define PS_v408	((void*)startLabel+2460)
#define PS_v409	((void*)startLabel+2472)
#define PS_v410	((void*)startLabel+2484)
#define PS_v406	((void*)startLabel+2496)
#define PS_v401	((void*)startLabel+2508)
#define PS_v402	((void*)startLabel+2520)
#define PS_v400	((void*)startLabel+2532)
#define PS_v399	((void*)startLabel+2544)
#define PS_v385	((void*)startLabel+2556)
#define PS_v331	((void*)startLabel+2568)
#define PS_v335	((void*)startLabel+2580)
#define PS_v333	((void*)startLabel+2592)
#define PS_v332	((void*)startLabel+2604)
#define PS_v330	((void*)startLabel+2616)
#define PS_v334	((void*)startLabel+2628)
#define PS_v328	((void*)startLabel+2640)
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Read_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46readList[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46readParen[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node PC_Prelude_46_95_46readList[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46Left[];
extern Node PC_Prelude_46_58[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46readsPrec[];
extern Node PC_Prelude_46Right[];
extern Node PC_Prelude_46lex[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v327)
,};
Node FN_Prelude_46Read_46Prelude_46Either_46readsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_INT_P1,9)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v326)
, 0
, 0
, 0
, 0
, useLabel(PS_v325)
, 0
, 0
, 0
, 0
, useLabel(PS_v324)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v323)
,	/* CT_v327: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readsPrec),3)
, useLabel(PS_v322)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, CAPTAG(useLabel(FN_LAMBDA318),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v336)
,	/* FN_LAMBDA318: (byte 0) */
  bytes2word(NEEDHEAP_P1,58,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,38)
, bytes2word(HEAP_OFF_N1,14,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v335)
, 0
, 0
, 0
, 0
, useLabel(PS_v334)
, 0
, 0
, 0
, 0
, useLabel(PS_v333)
, 0
, 0
, 0
, 0
, useLabel(PS_v332)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v331)
, 0
, 0
, 0
, 0
, useLabel(PS_v330)
, 0
, 0
, 0
, 0
, 50022
, useLabel(ST_v329)
,	/* CT_v336: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA318: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA318),3)
, useLabel(PS_v328)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA315),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA317),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v403)
,	/* FN_LAMBDA317: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v388: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v344: (byte 2) */
  bytes2word(232,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(82),BOT(82))
,	/* v389: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v348: (byte 4) */
  bytes2word(POP_I1,JUMP,209,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v390: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v352: (byte 2) */
  bytes2word(195,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(105),BOT(105))
,	/* v391: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v356: (byte 4) */
  bytes2word(POP_I1,JUMP,172,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v392: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v360: (byte 2) */
  bytes2word(158,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(103),BOT(103))
,	/* v393: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v364: (byte 4) */
  bytes2word(POP_I1,JUMP,135,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v394: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v368: (byte 2) */
  bytes2word(121,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(104),BOT(104))
,	/* v395: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v372: (byte 4) */
  bytes2word(POP_I1,JUMP,98,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v396: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v376: (byte 2) */
  bytes2word(84,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v397: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v380: (byte 4) */
  bytes2word(POP_I1,JUMP,61,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v398: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v384: (byte 2) */
  bytes2word(47,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_INT_P1,10,HEAP_P1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,14)
,	/* v377: (byte 3) */
  bytes2word(HEAP_ARG,3,RETURN_EVAL,POP_P1)
,	/* v369: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v361: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v353: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v345: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v341: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v337: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
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
, 80028
, useLabel(ST_v386)
,	/* CT_v403: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA317: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA317),3)
, useLabel(PS_v385)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA316),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v411)
,	/* FN_LAMBDA316: (byte 0) */
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
, useLabel(PS_v410)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v409)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v408)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, 80028
, useLabel(ST_v386)
,	/* CT_v411: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA316: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA316),2)
, useLabel(PS_v406)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v468)
,	/* FN_LAMBDA315: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v455: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v419: (byte 2) */
  bytes2word(195,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(76),BOT(76))
,	/* v456: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v423: (byte 4) */
  bytes2word(POP_I1,JUMP,172,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v457: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v427: (byte 2) */
  bytes2word(158,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(101),BOT(101))
,	/* v458: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v431: (byte 4) */
  bytes2word(POP_I1,JUMP,135,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v459: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v435: (byte 2) */
  bytes2word(121,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(102),BOT(102))
,	/* v460: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v439: (byte 4) */
  bytes2word(POP_I1,JUMP,98,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v461: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v443: (byte 2) */
  bytes2word(84,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v462: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v447: (byte 4) */
  bytes2word(POP_I1,JUMP,61,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v463: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v451: (byte 2) */
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
,	/* v444: (byte 3) */
  bytes2word(HEAP_ARG,3,RETURN_EVAL,POP_P1)
,	/* v436: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v428: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v420: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v416: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v412: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v467)
, 0
, 0
, 0
, 0
, useLabel(PS_v466)
, 0
, 0
, 0
, 0
, useLabel(PS_v465)
, 0
, 0
, 0
, 0
, useLabel(PS_v464)
, 0
, 0
, 0
, 0
, 50028
, useLabel(ST_v453)
,	/* CT_v468: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA315: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA315),3)
, useLabel(PS_v452)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA314),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v476)
,	/* FN_LAMBDA314: (byte 0) */
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
, useLabel(PS_v475)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v474)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v473)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 50028
, useLabel(ST_v453)
,	/* CT_v476: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA314: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA314),2)
, useLabel(PS_v471)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v481)
,};
Node FN_Prelude_46Read_46Prelude_46Either_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v480)
, 0
, 0
, 0
, 0
, useLabel(PS_v479)
, 0
, 0
, 0
, 0
, 30030
, useLabel(ST_v478)
,	/* CT_v481: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readList),2)
, useLabel(PS_v477)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v487)
,};
Node FN_Prelude_46Read_46Prelude_46Either[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v486)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v485)
, 0
, 0
, 0
, 0
, useLabel(PS_v484)
, 0
, 0
, 0
, 0
, 30030
, useLabel(ST_v483)
,	/* CT_v487: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either),2)
, useLabel(PS_v482)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readList))
,};
Node PP_Prelude_46Read_46Prelude_46Either[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Either[] = {
 	/* ST_v483: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,105,116)
, bytes2word(104,101,114,0)
,};
Node PP_Prelude_46Read_46Prelude_46Either_46readList[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Either_46readList[] = {
 	/* ST_v478: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,105,116)
, bytes2word(104,101,114,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Read_46Prelude_46Either_46readsPrec[] = {
 };
Node PC_Prelude_46Read_46Prelude_46Either_46readsPrec[] = {
 	/* ST_v323: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,105,116)
, bytes2word(104,101,114,46)
, bytes2word(114,101,97,100)
, bytes2word(115,80,114,101)
,	/* PP_LAMBDA318: (byte 2) */
 	/* PC_LAMBDA318: (byte 2) */
 	/* ST_v329: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
, bytes2word(114,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(53,58,50,50)
, bytes2word(45,57,58,54)
,	/* PP_LAMBDA314: (byte 2) */
 	/* PC_LAMBDA314: (byte 2) */
 	/* PP_LAMBDA315: (byte 2) */
 	/* PC_LAMBDA315: (byte 2) */
 	/* ST_v453: (byte 2) */
  bytes2word(54,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
, bytes2word(114,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(53,58,50,56)
, bytes2word(45,54,58,54)
,	/* PP_LAMBDA316: (byte 2) */
 	/* PC_LAMBDA316: (byte 2) */
 	/* PP_LAMBDA317: (byte 2) */
 	/* PC_LAMBDA317: (byte 2) */
 	/* ST_v386: (byte 2) */
  bytes2word(53,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
, bytes2word(114,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(56,58,50,56)
, bytes2word(45,57,58,54)
, bytes2word(54,0,0,0)
,	/* PS_v326: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either_46readsPrec)
, useLabel(PC_Prelude_46readParen)
,	/* PS_v322: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either_46readsPrec)
, useLabel(PC_Prelude_46Read_46Prelude_46Either_46readsPrec)
,	/* PS_v324: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either_46readsPrec)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46_62)
,	/* PS_v325: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either_46readsPrec)
, useLabel(PC_LAMBDA318)
,	/* PS_v480: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either_46readList)
, useLabel(PC_Prelude_46_95_46readList)
,	/* PS_v477: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46Either_46readList)
,	/* PS_v479: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either_46readList)
, useLabel(PC_Prelude_46Read_46Prelude_46Either)
,	/* PS_v484: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either)
, useLabel(PC_Prelude_46Read_46Prelude_46Either_46readsPrec)
,	/* PS_v485: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either)
, useLabel(PC_Prelude_46Read_46Prelude_46Either_46readList)
,	/* PS_v482: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either)
, useLabel(PC_Prelude_46Read_46Prelude_46Either)
,	/* PS_v486: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Read_46Prelude_46Either)
, useLabel(PC_Prelude_462)
,	/* PS_v473: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA314)
, useLabel(PC_Prelude_46Left)
,	/* PS_v474: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA314)
, useLabel(PC_Prelude_462)
,	/* PS_v475: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA314)
, useLabel(PC_Prelude_46_58)
,	/* PS_v471: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA314)
, useLabel(PC_LAMBDA314)
,	/* PS_v466: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA315)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v467: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA315)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v465: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA315)
, useLabel(PC_Prelude_46readsPrec)
,	/* PS_v464: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA315)
, useLabel(PC_LAMBDA314)
,	/* PS_v452: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA315)
, useLabel(PC_LAMBDA315)
,	/* PS_v408: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA316)
, useLabel(PC_Prelude_46Right)
,	/* PS_v409: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA316)
, useLabel(PC_Prelude_462)
,	/* PS_v410: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA316)
, useLabel(PC_Prelude_46_58)
,	/* PS_v406: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA316)
, useLabel(PC_LAMBDA316)
,	/* PS_v401: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA317)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v402: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA317)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v400: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA317)
, useLabel(PC_Prelude_46readsPrec)
,	/* PS_v399: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA317)
, useLabel(PC_LAMBDA316)
,	/* PS_v385: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA317)
, useLabel(PC_LAMBDA317)
,	/* PS_v331: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA318)
, useLabel(PC_Prelude_46lex)
,	/* PS_v335: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA318)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v333: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA318)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v332: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA318)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v330: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA318)
, useLabel(PC_LAMBDA315)
,	/* PS_v334: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA318)
, useLabel(PC_LAMBDA317)
,	/* PS_v328: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA318)
, useLabel(PC_LAMBDA318)
,};

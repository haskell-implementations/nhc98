#include "newmacros.h"
#include "runtime.h"

#define CT_v323	((void*)startLabel+48)
#define FN_LAMBDA318	((void*)startLabel+84)
#define CT_v325	((void*)startLabel+148)
#define F0_LAMBDA318	((void*)startLabel+156)
#define FN_LAMBDA317	((void*)startLabel+192)
#define v376	((void*)startLabel+210)
#define v333	((void*)startLabel+214)
#define v377	((void*)startLabel+228)
#define v337	((void*)startLabel+232)
#define v378	((void*)startLabel+242)
#define v341	((void*)startLabel+246)
#define v379	((void*)startLabel+260)
#define v345	((void*)startLabel+264)
#define v380	((void*)startLabel+274)
#define v349	((void*)startLabel+278)
#define v381	((void*)startLabel+292)
#define v353	((void*)startLabel+296)
#define v382	((void*)startLabel+306)
#define v357	((void*)startLabel+310)
#define v383	((void*)startLabel+324)
#define v361	((void*)startLabel+328)
#define v384	((void*)startLabel+338)
#define v365	((void*)startLabel+342)
#define v385	((void*)startLabel+356)
#define v369	((void*)startLabel+360)
#define v386	((void*)startLabel+370)
#define v373	((void*)startLabel+374)
#define v366	((void*)startLabel+396)
#define v358	((void*)startLabel+401)
#define v350	((void*)startLabel+406)
#define v342	((void*)startLabel+411)
#define v334	((void*)startLabel+416)
#define v330	((void*)startLabel+421)
#define v326	((void*)startLabel+426)
#define CT_v387	((void*)startLabel+444)
#define F0_LAMBDA317	((void*)startLabel+452)
#define FN_LAMBDA316	((void*)startLabel+484)
#define CT_v391	((void*)startLabel+540)
#define F0_LAMBDA316	((void*)startLabel+548)
#define FN_LAMBDA315	((void*)startLabel+564)
#define v434	((void*)startLabel+582)
#define v399	((void*)startLabel+586)
#define v435	((void*)startLabel+600)
#define v403	((void*)startLabel+604)
#define v436	((void*)startLabel+614)
#define v407	((void*)startLabel+618)
#define v437	((void*)startLabel+632)
#define v411	((void*)startLabel+636)
#define v438	((void*)startLabel+646)
#define v415	((void*)startLabel+650)
#define v439	((void*)startLabel+664)
#define v419	((void*)startLabel+668)
#define v440	((void*)startLabel+678)
#define v423	((void*)startLabel+682)
#define v441	((void*)startLabel+696)
#define v427	((void*)startLabel+700)
#define v442	((void*)startLabel+710)
#define v431	((void*)startLabel+714)
#define v424	((void*)startLabel+736)
#define v416	((void*)startLabel+741)
#define v408	((void*)startLabel+746)
#define v400	((void*)startLabel+751)
#define v396	((void*)startLabel+756)
#define v392	((void*)startLabel+761)
#define CT_v443	((void*)startLabel+776)
#define F0_LAMBDA315	((void*)startLabel+784)
#define FN_LAMBDA314	((void*)startLabel+816)
#define CT_v447	((void*)startLabel+872)
#define F0_LAMBDA314	((void*)startLabel+880)
#define CT_v449	((void*)startLabel+924)
#define CT_v451	((void*)startLabel+1000)
#define ST_v450	((void*)startLabel+1020)
#define ST_v448	((void*)startLabel+1048)
#define ST_v322	((void*)startLabel+1085)
#define ST_v324	((void*)startLabel+1123)
#define ST_v432	((void*)startLabel+1171)
#define ST_v374	((void*)startLabel+1219)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Read_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v323)
,};
Node FN_Prelude_46Read_46Prelude_46Either_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_INT_P1,9,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v322)
,	/* CT_v323: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, CAPTAG(useLabel(FN_LAMBDA318),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v325)
,	/* FN_LAMBDA318: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,3,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,2,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_IN3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50022
, useLabel(ST_v324)
,	/* CT_v325: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA318: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA318),3)
, CAPTAG(useLabel(FN_LAMBDA315),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA317),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v387)
,	/* FN_LAMBDA317: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v376: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v333: (byte 2) */
  bytes2word(209,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(82),BOT(82))
,	/* v377: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v337: (byte 4) */
  bytes2word(POP_I1,JUMP,186,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v378: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v341: (byte 2) */
  bytes2word(172,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(105),BOT(105))
,	/* v379: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v345: (byte 4) */
  bytes2word(POP_I1,JUMP,149,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v380: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v349: (byte 2) */
  bytes2word(135,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(103),BOT(103))
,	/* v381: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v353: (byte 4) */
  bytes2word(POP_I1,JUMP,112,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v382: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v357: (byte 2) */
  bytes2word(98,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(104),BOT(104))
,	/* v383: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v361: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v384: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v365: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v385: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v369: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v386: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v373: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,10)
, bytes2word(HEAP_P1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v366: (byte 4) */
  bytes2word(6,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v358: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v350: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v342: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v334: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v330: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v326: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80028
, useLabel(ST_v374)
,	/* CT_v387: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA317: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA317),3)
, CAPTAG(useLabel(FN_LAMBDA316),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v391)
,	/* FN_LAMBDA316: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,1,0)
, 80028
, useLabel(ST_v374)
,	/* CT_v391: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA316: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA316),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v443)
,	/* FN_LAMBDA315: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v434: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v399: (byte 2) */
  bytes2word(172,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(76),BOT(76))
,	/* v435: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v403: (byte 4) */
  bytes2word(POP_I1,JUMP,149,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v436: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v407: (byte 2) */
  bytes2word(135,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(101),BOT(101))
,	/* v437: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v411: (byte 4) */
  bytes2word(POP_I1,JUMP,112,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v438: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v415: (byte 2) */
  bytes2word(98,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(102),BOT(102))
,	/* v439: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v419: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v440: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v423: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v441: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v427: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v442: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v431: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,10)
, bytes2word(HEAP_P1,9,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v424: (byte 4) */
  bytes2word(6,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v416: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v408: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v400: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v396: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v392: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50028
, useLabel(ST_v432)
,	/* CT_v443: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA315: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA315),3)
, CAPTAG(useLabel(FN_LAMBDA314),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v447)
,	/* FN_LAMBDA314: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,1,0)
, 50028
, useLabel(ST_v432)
,	/* CT_v447: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA314: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA314),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v449)
,};
Node FN_Prelude_46Read_46Prelude_46Either_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30030
, useLabel(ST_v448)
,	/* CT_v449: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readList),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v451)
,};
Node FN_Prelude_46Read_46Prelude_46Either[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30030
, useLabel(ST_v450)
,	/* CT_v451: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either),2)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readList))
,	/* ST_v450: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,105,116)
,	/* ST_v448: (byte 4) */
  bytes2word(104,101,114,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,105,116)
, bytes2word(104,101,114,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
,	/* ST_v322: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,105)
, bytes2word(116,104,101,114)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
,	/* ST_v324: (byte 3) */
  bytes2word(101,99,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,50)
, bytes2word(50,45,57,58)
,	/* ST_v432: (byte 3) */
  bytes2word(54,54,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,50)
, bytes2word(56,45,54,58)
,	/* ST_v374: (byte 3) */
  bytes2word(54,53,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,56,58,50)
, bytes2word(56,45,57,58)
, bytes2word(54,54,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v301	((void*)startLabel+36)
#define FN_LAMBDA296	((void*)startLabel+64)
#define CT_v303	((void*)startLabel+132)
#define F0_LAMBDA296	((void*)startLabel+140)
#define FN_LAMBDA295	((void*)startLabel+180)
#define CT_v305	((void*)startLabel+224)
#define F0_LAMBDA295	((void*)startLabel+232)
#define FN_LAMBDA294	((void*)startLabel+260)
#define v348	((void*)startLabel+278)
#define v313	((void*)startLabel+282)
#define v349	((void*)startLabel+296)
#define v317	((void*)startLabel+300)
#define v350	((void*)startLabel+310)
#define v321	((void*)startLabel+314)
#define v351	((void*)startLabel+328)
#define v325	((void*)startLabel+332)
#define v352	((void*)startLabel+342)
#define v329	((void*)startLabel+346)
#define v353	((void*)startLabel+360)
#define v333	((void*)startLabel+364)
#define v354	((void*)startLabel+374)
#define v337	((void*)startLabel+378)
#define v355	((void*)startLabel+392)
#define v341	((void*)startLabel+396)
#define v356	((void*)startLabel+406)
#define v345	((void*)startLabel+410)
#define v338	((void*)startLabel+432)
#define v330	((void*)startLabel+437)
#define v322	((void*)startLabel+442)
#define v314	((void*)startLabel+447)
#define v310	((void*)startLabel+452)
#define v306	((void*)startLabel+457)
#define CT_v357	((void*)startLabel+472)
#define F0_LAMBDA294	((void*)startLabel+480)
#define FN_LAMBDA293	((void*)startLabel+512)
#define CT_v361	((void*)startLabel+568)
#define F0_LAMBDA293	((void*)startLabel+576)
#define FN_LAMBDA292	((void*)startLabel+588)
#define CT_v363	((void*)startLabel+628)
#define F0_LAMBDA292	((void*)startLabel+636)
#define FN_LAMBDA291	((void*)startLabel+664)
#define v430	((void*)startLabel+684)
#define v371	((void*)startLabel+688)
#define v431	((void*)startLabel+702)
#define v375	((void*)startLabel+706)
#define v432	((void*)startLabel+716)
#define v379	((void*)startLabel+720)
#define v433	((void*)startLabel+734)
#define v383	((void*)startLabel+738)
#define v434	((void*)startLabel+748)
#define v387	((void*)startLabel+752)
#define v435	((void*)startLabel+766)
#define v391	((void*)startLabel+770)
#define v436	((void*)startLabel+780)
#define v395	((void*)startLabel+784)
#define v437	((void*)startLabel+798)
#define v399	((void*)startLabel+802)
#define v438	((void*)startLabel+812)
#define v403	((void*)startLabel+816)
#define v439	((void*)startLabel+830)
#define v407	((void*)startLabel+834)
#define v440	((void*)startLabel+844)
#define v411	((void*)startLabel+848)
#define v441	((void*)startLabel+862)
#define v415	((void*)startLabel+866)
#define v442	((void*)startLabel+876)
#define v419	((void*)startLabel+880)
#define v443	((void*)startLabel+894)
#define v423	((void*)startLabel+898)
#define v444	((void*)startLabel+908)
#define v427	((void*)startLabel+912)
#define v420	((void*)startLabel+928)
#define v412	((void*)startLabel+933)
#define v404	((void*)startLabel+938)
#define v396	((void*)startLabel+943)
#define v388	((void*)startLabel+948)
#define v380	((void*)startLabel+953)
#define v372	((void*)startLabel+958)
#define v368	((void*)startLabel+963)
#define v364	((void*)startLabel+968)
#define CT_v445	((void*)startLabel+1000)
#define F0_LAMBDA291	((void*)startLabel+1008)
#define CT_v447	((void*)startLabel+1048)
#define CT_v449	((void*)startLabel+1116)
#define ST_v448	((void*)startLabel+1136)
#define ST_v446	((void*)startLabel+1163)
#define ST_v300	((void*)startLabel+1199)
#define ST_v302	((void*)startLabel+1236)
#define ST_v362	((void*)startLabel+1283)
#define ST_v428	((void*)startLabel+1330)
#define ST_v304	((void*)startLabel+1377)
#define ST_v346	((void*)startLabel+1424)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];
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

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v301)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v300)
,	/* CT_v301: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec),2)
, CAPTAG(useLabel(FN_LAMBDA296),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v303)
,	/* FN_LAMBDA296: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,9,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40018
, useLabel(ST_v302)
,	/* CT_v303: (byte 0) */
  HW(6,3)
, 0
,	/* F0_LAMBDA296: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA296),3)
, CAPTAG(useLabel(FN_LAMBDA292),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, CAPTAG(useLabel(FN_LAMBDA295),1)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v305)
,	/* FN_LAMBDA295: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60045
, useLabel(ST_v304)
,	/* CT_v305: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA295: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA295),2)
, CAPTAG(useLabel(FN_LAMBDA294),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v357)
,	/* FN_LAMBDA294: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v348: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v313: (byte 2) */
  bytes2word(172,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(74),BOT(74))
,	/* v349: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v317: (byte 4) */
  bytes2word(POP_I1,JUMP,149,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v350: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v321: (byte 2) */
  bytes2word(135,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(117),BOT(117))
,	/* v351: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v325: (byte 4) */
  bytes2word(POP_I1,JUMP,112,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v352: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v329: (byte 2) */
  bytes2word(98,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(115),BOT(115))
,	/* v353: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v333: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v354: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v337: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v355: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v341: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v356: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v345: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,10)
, bytes2word(HEAP_P1,9,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v338: (byte 4) */
  bytes2word(6,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v330: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v322: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v314: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v310: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v306: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60051
, useLabel(ST_v346)
,	/* CT_v357: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA294: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA294),3)
, CAPTAG(useLabel(FN_LAMBDA293),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v361)
,	/* FN_LAMBDA293: (byte 0) */
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
, 60051
, useLabel(ST_v346)
,	/* CT_v361: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA293: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA293),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v363)
,	/* FN_LAMBDA292: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40045
, useLabel(ST_v362)
,	/* CT_v363: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA292: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA292),1)
, CAPTAG(useLabel(FN_LAMBDA291),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v445)
,	/* FN_LAMBDA291: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_P1,17,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v430: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v371: (byte 4) */
  bytes2word(POP_I1,JUMP,21,1)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(78),BOT(78),TOP(10),BOT(10))
,	/* v431: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v375: (byte 2) */
  bytes2word(254,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v432: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v379: (byte 4) */
  bytes2word(POP_I1,JUMP,240,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(111),BOT(111),TOP(10),BOT(10))
,	/* v433: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v383: (byte 2) */
  bytes2word(217,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v434: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v387: (byte 4) */
  bytes2word(POP_I1,JUMP,203,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(116),BOT(116),TOP(10),BOT(10))
,	/* v435: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v391: (byte 2) */
  bytes2word(180,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v436: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v395: (byte 4) */
  bytes2word(POP_I1,JUMP,166,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(104),BOT(104),TOP(10),BOT(10))
,	/* v437: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v399: (byte 2) */
  bytes2word(143,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v438: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v403: (byte 4) */
  bytes2word(POP_I1,JUMP,129,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(105),BOT(105),TOP(10),BOT(10))
,	/* v439: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v407: (byte 2) */
  bytes2word(106,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v440: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v411: (byte 4) */
  bytes2word(POP_I1,JUMP,92,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(110),BOT(110),TOP(10),BOT(10))
,	/* v441: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v415: (byte 2) */
  bytes2word(69,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v442: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v419: (byte 4) */
  bytes2word(POP_I1,JUMP,55,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(103),BOT(103),TOP(10),BOT(10))
,	/* v443: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v423: (byte 2) */
  bytes2word(32,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v444: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v427: (byte 4) */
  bytes2word(POP_I1,JUMP,18,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,5,HEAP_OFF_N1)
,	/* v420: (byte 4) */
  bytes2word(4,HEAP_ARG,2,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v412: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v404: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v396: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v388: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v380: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v372: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v368: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v364: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, 40051
, useLabel(ST_v428)
,	/* CT_v445: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA291),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v447)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30022
, useLabel(ST_v446)
,	/* CT_v447: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readList),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v449)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30022
, useLabel(ST_v448)
,	/* CT_v449: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe),1)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readList))
,	/* ST_v448: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
,	/* ST_v446: (byte 3) */
  bytes2word(98,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v300: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v302: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,52,58,49)
, bytes2word(56,45,55,58)
,	/* ST_v362: (byte 3) */
  bytes2word(57,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(52,58,52,53)
, bytes2word(45,52,58,56)
,	/* ST_v428: (byte 2) */
  bytes2word(56,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(97,121,98,101)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,58,52)
, bytes2word(58,53,49,45)
, bytes2word(52,58,56,56)
,	/* ST_v304: (byte 1) */
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
, bytes2word(52,53,45,55)
,	/* ST_v346: (byte 4) */
  bytes2word(58,56,56,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,54,58,53)
, bytes2word(49,45,55,58)
, bytes2word(56,56,0,0)
,};

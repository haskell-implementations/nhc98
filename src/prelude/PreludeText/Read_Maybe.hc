#include "newmacros.h"
#include "runtime.h"

#define CT_v300	((void*)startLabel+24)
#define FN_LAMBDA296	((void*)startLabel+52)
#define CT_v301	((void*)startLabel+108)
#define F0_LAMBDA296	((void*)startLabel+116)
#define FN_LAMBDA295	((void*)startLabel+156)
#define CT_v302	((void*)startLabel+188)
#define F0_LAMBDA295	((void*)startLabel+196)
#define FN_LAMBDA294	((void*)startLabel+224)
#define v344	((void*)startLabel+238)
#define v310	((void*)startLabel+242)
#define v345	((void*)startLabel+256)
#define v314	((void*)startLabel+260)
#define v346	((void*)startLabel+270)
#define v318	((void*)startLabel+274)
#define v347	((void*)startLabel+288)
#define v322	((void*)startLabel+292)
#define v348	((void*)startLabel+302)
#define v326	((void*)startLabel+306)
#define v349	((void*)startLabel+320)
#define v330	((void*)startLabel+324)
#define v350	((void*)startLabel+334)
#define v334	((void*)startLabel+338)
#define v351	((void*)startLabel+352)
#define v338	((void*)startLabel+356)
#define v352	((void*)startLabel+366)
#define v342	((void*)startLabel+370)
#define v335	((void*)startLabel+392)
#define v327	((void*)startLabel+397)
#define v319	((void*)startLabel+402)
#define v311	((void*)startLabel+407)
#define v307	((void*)startLabel+412)
#define v303	((void*)startLabel+417)
#define CT_v353	((void*)startLabel+424)
#define F0_LAMBDA294	((void*)startLabel+432)
#define FN_LAMBDA293	((void*)startLabel+464)
#define CT_v357	((void*)startLabel+508)
#define F0_LAMBDA293	((void*)startLabel+516)
#define FN_LAMBDA292	((void*)startLabel+528)
#define CT_v358	((void*)startLabel+560)
#define F0_LAMBDA292	((void*)startLabel+568)
#define FN_LAMBDA291	((void*)startLabel+596)
#define v424	((void*)startLabel+612)
#define v366	((void*)startLabel+616)
#define v425	((void*)startLabel+630)
#define v370	((void*)startLabel+634)
#define v426	((void*)startLabel+644)
#define v374	((void*)startLabel+648)
#define v427	((void*)startLabel+662)
#define v378	((void*)startLabel+666)
#define v428	((void*)startLabel+676)
#define v382	((void*)startLabel+680)
#define v429	((void*)startLabel+694)
#define v386	((void*)startLabel+698)
#define v430	((void*)startLabel+708)
#define v390	((void*)startLabel+712)
#define v431	((void*)startLabel+726)
#define v394	((void*)startLabel+730)
#define v432	((void*)startLabel+740)
#define v398	((void*)startLabel+744)
#define v433	((void*)startLabel+758)
#define v402	((void*)startLabel+762)
#define v434	((void*)startLabel+772)
#define v406	((void*)startLabel+776)
#define v435	((void*)startLabel+790)
#define v410	((void*)startLabel+794)
#define v436	((void*)startLabel+804)
#define v414	((void*)startLabel+808)
#define v437	((void*)startLabel+822)
#define v418	((void*)startLabel+826)
#define v438	((void*)startLabel+836)
#define v422	((void*)startLabel+840)
#define v415	((void*)startLabel+856)
#define v407	((void*)startLabel+861)
#define v399	((void*)startLabel+866)
#define v391	((void*)startLabel+871)
#define v383	((void*)startLabel+876)
#define v375	((void*)startLabel+881)
#define v367	((void*)startLabel+886)
#define v363	((void*)startLabel+891)
#define v359	((void*)startLabel+896)
#define CT_v439	((void*)startLabel+920)
#define F0_LAMBDA291	((void*)startLabel+928)
#define CT_v440	((void*)startLabel+956)
#define CT_v441	((void*)startLabel+1012)
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
, useLabel(CT_v300)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v300: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec),2)
, CAPTAG(useLabel(FN_LAMBDA296),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v301)
,	/* FN_LAMBDA296: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,9)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,15,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v301: (byte 0) */
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
, useLabel(CT_v302)
,	/* FN_LAMBDA295: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v302: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA295: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA295),2)
, CAPTAG(useLabel(FN_LAMBDA294),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v353)
,	/* FN_LAMBDA294: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v344: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v310: (byte 2) */
  bytes2word(172,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(74),BOT(74))
,	/* v345: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v314: (byte 4) */
  bytes2word(POP_I1,JUMP,149,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v346: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v318: (byte 2) */
  bytes2word(135,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(117),BOT(117))
,	/* v347: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v322: (byte 4) */
  bytes2word(POP_I1,JUMP,112,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v348: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v326: (byte 2) */
  bytes2word(98,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(115),BOT(115))
,	/* v349: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v330: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v350: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v334: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v351: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v338: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v352: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v342: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,10)
, bytes2word(HEAP_P1,9,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v335: (byte 4) */
  bytes2word(6,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v327: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v319: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v311: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v307: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v303: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v353: (byte 0) */
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
, useLabel(CT_v357)
,	/* FN_LAMBDA293: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,1,0)
,	/* CT_v357: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA293: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA293),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v358)
,	/* FN_LAMBDA292: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v358: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA292: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA292),1)
, CAPTAG(useLabel(FN_LAMBDA291),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v439)
,	/* FN_LAMBDA291: (byte 0) */
  bytes2word(NEEDSTACK_P1,17,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v424: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v366: (byte 4) */
  bytes2word(POP_I1,JUMP,21,1)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(78),BOT(78),TOP(10),BOT(10))
,	/* v425: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v370: (byte 2) */
  bytes2word(254,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v426: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v374: (byte 4) */
  bytes2word(POP_I1,JUMP,240,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(111),BOT(111),TOP(10),BOT(10))
,	/* v427: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v378: (byte 2) */
  bytes2word(217,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v428: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v382: (byte 4) */
  bytes2word(POP_I1,JUMP,203,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(116),BOT(116),TOP(10),BOT(10))
,	/* v429: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v386: (byte 2) */
  bytes2word(180,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v430: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v390: (byte 4) */
  bytes2word(POP_I1,JUMP,166,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(104),BOT(104),TOP(10),BOT(10))
,	/* v431: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v394: (byte 2) */
  bytes2word(143,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v432: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v398: (byte 4) */
  bytes2word(POP_I1,JUMP,129,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(105),BOT(105),TOP(10),BOT(10))
,	/* v433: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v402: (byte 2) */
  bytes2word(106,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v434: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v406: (byte 4) */
  bytes2word(POP_I1,JUMP,92,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(110),BOT(110),TOP(10),BOT(10))
,	/* v435: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v410: (byte 2) */
  bytes2word(69,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v436: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v414: (byte 4) */
  bytes2word(POP_I1,JUMP,55,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(103),BOT(103),TOP(10),BOT(10))
,	/* v437: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v418: (byte 2) */
  bytes2word(32,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v438: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v422: (byte 4) */
  bytes2word(POP_I1,JUMP,18,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,2,HEAP_P1)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
,	/* v415: (byte 4) */
  bytes2word(4,HEAP_ARG,2,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v407: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v399: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v391: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v383: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v375: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v367: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v363: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v359: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v439: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA291),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v440)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v440: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readList),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(1,0,0,1)
, useLabel(CT_v441)
,};
Node FN_Prelude_46Read_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v441: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe),1)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Maybe_46readList))
,};

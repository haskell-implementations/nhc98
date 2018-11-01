#include "newmacros.h"
#include "runtime.h"

#define CT_v364	((void*)startLabel+48)
#define FN_LAMBDA360	((void*)startLabel+84)
#define CT_v365	((void*)startLabel+120)
#define F0_LAMBDA360	((void*)startLabel+128)
#define FN_LAMBDA359	((void*)startLabel+160)
#define v383	((void*)startLabel+176)
#define v373	((void*)startLabel+180)
#define v384	((void*)startLabel+194)
#define v377	((void*)startLabel+198)
#define v385	((void*)startLabel+208)
#define v381	((void*)startLabel+212)
#define v374	((void*)startLabel+235)
#define v370	((void*)startLabel+240)
#define v366	((void*)startLabel+245)
#define CT_v386	((void*)startLabel+256)
#define F0_LAMBDA359	((void*)startLabel+264)
#define FN_LAMBDA358	((void*)startLabel+300)
#define CT_v390	((void*)startLabel+328)
#define F0_LAMBDA358	((void*)startLabel+336)
#define FN_LAMBDA357	((void*)startLabel+368)
#define v408	((void*)startLabel+384)
#define v398	((void*)startLabel+388)
#define v409	((void*)startLabel+402)
#define v402	((void*)startLabel+406)
#define v410	((void*)startLabel+416)
#define v406	((void*)startLabel+420)
#define v399	((void*)startLabel+443)
#define v395	((void*)startLabel+448)
#define v391	((void*)startLabel+453)
#define CT_v411	((void*)startLabel+464)
#define F0_LAMBDA357	((void*)startLabel+472)
#define FN_LAMBDA356	((void*)startLabel+508)
#define CT_v415	((void*)startLabel+540)
#define F0_LAMBDA356	((void*)startLabel+548)
#define FN_LAMBDA355	((void*)startLabel+580)
#define v433	((void*)startLabel+596)
#define v423	((void*)startLabel+600)
#define v434	((void*)startLabel+614)
#define v427	((void*)startLabel+618)
#define v435	((void*)startLabel+628)
#define v431	((void*)startLabel+632)
#define v424	((void*)startLabel+655)
#define v420	((void*)startLabel+660)
#define v416	((void*)startLabel+665)
#define CT_v436	((void*)startLabel+676)
#define F0_LAMBDA355	((void*)startLabel+684)
#define FN_LAMBDA354	((void*)startLabel+720)
#define CT_v440	((void*)startLabel+748)
#define F0_LAMBDA354	((void*)startLabel+756)
#define FN_LAMBDA353	((void*)startLabel+788)
#define v458	((void*)startLabel+804)
#define v448	((void*)startLabel+808)
#define v459	((void*)startLabel+822)
#define v452	((void*)startLabel+826)
#define v460	((void*)startLabel+836)
#define v456	((void*)startLabel+840)
#define v449	((void*)startLabel+861)
#define v445	((void*)startLabel+866)
#define v441	((void*)startLabel+871)
#define CT_v461	((void*)startLabel+896)
#define F0_LAMBDA353	((void*)startLabel+904)
#define CT_v462	((void*)startLabel+940)
#define CT_v463	((void*)startLabel+1008)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_463[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v364)
,};
Node FN_Prelude_46Read_46Prelude_463_46readsPrec[] = {
  bytes2word(ZAP_ARG,4,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG_ARG,3)
, bytes2word(2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v364: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Read_46Prelude_463_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readsPrec),4)
, CAPTAG(useLabel(FN_LAMBDA360),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v365)
,	/* FN_LAMBDA360: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v365: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA360: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA360),4)
, CAPTAG(useLabel(FN_LAMBDA359),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v386)
,	/* FN_LAMBDA359: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v383: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v373: (byte 4) */
  bytes2word(POP_I1,JUMP,62,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v384: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v377: (byte 2) */
  bytes2word(39,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v385: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v381: (byte 4) */
  bytes2word(POP_I1,JUMP,25,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
,	/* v374: (byte 3) */
  bytes2word(HEAP_ARG,5,RETURN_EVAL,POP_P1)
,	/* v370: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v366: (byte 1) */
  bytes2word(0,PUSH_ARG,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v386: (byte 0) */
  HW(4,5)
, 0
,	/* F0_LAMBDA359: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA359),5)
, CAPTAG(useLabel(FN_LAMBDA358),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v390)
,	/* FN_LAMBDA358: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v390: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA358: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA358),4)
, CAPTAG(useLabel(FN_LAMBDA357),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v411)
,	/* FN_LAMBDA357: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v408: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v398: (byte 4) */
  bytes2word(POP_I1,JUMP,62,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v409: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v402: (byte 2) */
  bytes2word(39,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v410: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v406: (byte 4) */
  bytes2word(POP_I1,JUMP,25,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
,	/* v399: (byte 3) */
  bytes2word(HEAP_ARG,5,RETURN_EVAL,POP_P1)
,	/* v395: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v391: (byte 1) */
  bytes2word(0,PUSH_ARG,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v411: (byte 0) */
  HW(4,5)
, 0
,	/* F0_LAMBDA357: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA357),5)
, CAPTAG(useLabel(FN_LAMBDA356),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v415)
,	/* FN_LAMBDA356: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v415: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA356: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA356),4)
, CAPTAG(useLabel(FN_LAMBDA355),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v436)
,	/* FN_LAMBDA355: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v433: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v423: (byte 4) */
  bytes2word(POP_I1,JUMP,62,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v434: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v427: (byte 2) */
  bytes2word(39,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v435: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v431: (byte 4) */
  bytes2word(POP_I1,JUMP,25,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
,	/* v424: (byte 3) */
  bytes2word(HEAP_ARG,5,RETURN_EVAL,POP_P1)
,	/* v420: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v416: (byte 1) */
  bytes2word(0,PUSH_ARG,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v436: (byte 0) */
  HW(4,5)
, 0
,	/* F0_LAMBDA355: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA355),5)
, CAPTAG(useLabel(FN_LAMBDA354),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v440)
,	/* FN_LAMBDA354: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v440: (byte 0) */
  HW(3,4)
, 0
,	/* F0_LAMBDA354: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA354),4)
, CAPTAG(useLabel(FN_LAMBDA353),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v461)
,	/* FN_LAMBDA353: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v458: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v448: (byte 4) */
  bytes2word(POP_I1,JUMP,60,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v459: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v452: (byte 2) */
  bytes2word(37,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v460: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v456: (byte 4) */
  bytes2word(POP_I1,JUMP,23,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,5)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,5)
,	/* v449: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v445: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v441: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,3,0)
,	/* CT_v461: (byte 0) */
  HW(0,5)
, 0
,	/* F0_LAMBDA353: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA353),5)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v462)
,};
Node FN_Prelude_46Read_46Prelude_463_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v462: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_463_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readList),3)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v463)
,};
Node FN_Prelude_46Read_46Prelude_463[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v463: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463),3)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readList))
,};

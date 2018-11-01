#include "newmacros.h"
#include "runtime.h"

#define v451	((void*)startLabel+18)
#define v446	((void*)startLabel+22)
#define v452	((void*)startLabel+36)
#define v450	((void*)startLabel+40)
#define v447	((void*)startLabel+45)
#define v443	((void*)startLabel+59)
#define CT_v453	((void*)startLabel+88)
#define FN_LAMBDA441	((void*)startLabel+120)
#define CT_v455	((void*)startLabel+140)
#define CF_LAMBDA441	((void*)startLabel+148)
#define FN_Char_46Prelude_46173_46readEsc	((void*)startLabel+160)
#define v492	((void*)startLabel+170)
#define v459	((void*)startLabel+174)
#define v493	((void*)startLabel+228)
#define v463	((void*)startLabel+232)
#define v464	((void*)startLabel+247)
#define v465	((void*)startLabel+262)
#define v466	((void*)startLabel+277)
#define v494	((void*)startLabel+288)
#define v470	((void*)startLabel+292)
#define v471	((void*)startLabel+359)
#define v473	((void*)startLabel+364)
#define v474	((void*)startLabel+379)
#define v475	((void*)startLabel+394)
#define v476	((void*)startLabel+409)
#define v477	((void*)startLabel+424)
#define v478	((void*)startLabel+439)
#define v479	((void*)startLabel+454)
#define v460	((void*)startLabel+469)
#define v480	((void*)startLabel+502)
#define v495	((void*)startLabel+516)
#define v485	((void*)startLabel+520)
#define v486	((void*)startLabel+544)
#define v482	((void*)startLabel+568)
#define v490	((void*)startLabel+614)
#define v491	((void*)startLabel+619)
#define v487	((void*)startLabel+629)
#define v456	((void*)startLabel+634)
#define CT_v497	((void*)startLabel+660)
#define F0_Char_46Prelude_46173_46readEsc	((void*)startLabel+668)
#define FN_LAMBDA440	((void*)startLabel+764)
#define CT_v501	((void*)startLabel+816)
#define F0_LAMBDA440	((void*)startLabel+824)
#define FN_LAMBDA439	((void*)startLabel+860)
#define v511	((void*)startLabel+876)
#define v509	((void*)startLabel+880)
#define v506	((void*)startLabel+894)
#define v502	((void*)startLabel+899)
#define CT_v512	((void*)startLabel+916)
#define F0_LAMBDA439	((void*)startLabel+924)
#define FN_LAMBDA438	((void*)startLabel+936)
#define CT_v514	((void*)startLabel+956)
#define CF_LAMBDA438	((void*)startLabel+964)
#define FN_LAMBDA437	((void*)startLabel+980)
#define CT_v518	((void*)startLabel+1020)
#define F0_LAMBDA437	((void*)startLabel+1028)
#define FN_LAMBDA436	((void*)startLabel+1052)
#define CT_v522	((void*)startLabel+1092)
#define F0_LAMBDA436	((void*)startLabel+1100)
#define FN_LAMBDA435	((void*)startLabel+1124)
#define CT_v526	((void*)startLabel+1164)
#define F0_LAMBDA435	((void*)startLabel+1172)
#define FN_Char_46Prelude_46174_46match	((void*)startLabel+1196)
#define v537	((void*)startLabel+1206)
#define v530	((void*)startLabel+1210)
#define v538	((void*)startLabel+1222)
#define v534	((void*)startLabel+1226)
#define v535	((void*)startLabel+1253)
#define v531	((void*)startLabel+1258)
#define v527	((void*)startLabel+1263)
#define CT_v539	((void*)startLabel+1284)
#define F0_Char_46Prelude_46174_46match	((void*)startLabel+1292)
#define ST_v454	((void*)startLabel+1304)
#define ST_v513	((void*)startLabel+1359)
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Char_46chr[];
extern Node FN_Char_46ord[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Char_46isDigit[];
extern Node FN_Numeric_46readDec[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Numeric_46readOct[];
extern Node FN_Numeric_46readHex[];
extern Node FN_Char_46isUpper[];
extern Node CF_Char_46asciiTab[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46_61_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v453)
,};
Node FN_Char_46readLitChar[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v451: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v446: (byte 2) */
  bytes2word(39,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(92),BOT(92))
,	/* v452: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v450: (byte 4) */
  bytes2word(POP_I1,JUMP,7,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_I2)
,	/* v447: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(0,HEAP_I1,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,5)
,	/* v443: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v453: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46readLitChar[] = {
  CAPTAG(useLabel(FN_Char_46readLitChar),1)
, VAPTAG(useLabel(FN_Char_46Prelude_46173_46readEsc))
, VAPTAG(useLabel(FN_LAMBDA441))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v455)
,	/* FN_LAMBDA441: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v454)
,	/* CT_v455: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA441: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA441))
, bytes2word(1,0,0,1)
, useLabel(CT_v497)
,	/* FN_Char_46Prelude_46173_46readEsc: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v492: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v459: (byte 2) */
  bytes2word(206,1,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,11,TOP(34),BOT(34))
, bytes2word(TOP(50),BOT(50),TOP(39),BOT(39))
, bytes2word(TOP(65),BOT(65),TOP(92),BOT(92))
, bytes2word(TOP(80),BOT(80),TOP(94),BOT(94))
, bytes2word(TOP(95),BOT(95),TOP(97),BOT(97))
, bytes2word(TOP(182),BOT(182),TOP(98),BOT(98))
, bytes2word(TOP(197),BOT(197),TOP(102),BOT(102))
, bytes2word(TOP(212),BOT(212),TOP(110),BOT(110))
, bytes2word(TOP(227),BOT(227),TOP(114),BOT(114))
, bytes2word(TOP(242),BOT(242),TOP(116),BOT(116))
, bytes2word(TOP(257),BOT(257),TOP(118),BOT(118))
,	/* v493: (byte 4) */
  bytes2word(TOP(272),BOT(272),TOP(46),BOT(46))
,	/* v463: (byte 4) */
  bytes2word(POP_I1,JUMP,239,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_CHAR_P1)
, bytes2word(34,HEAP_I1,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,5)
,	/* v464: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CHAR_P1,39)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v465: (byte 2) */
  bytes2word(3,RETURN,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CHAR_P1,92,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v466: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v494: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v470: (byte 4) */
  bytes2word(POP_I1,JUMP,179,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CHAR_P1,64,HEAP_CVAL_I4)
, bytes2word(HEAP_P1,0,HEAP_CHAR_P1,95)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,46,0,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,2,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,2,HEAP_CHAR_P1)
, bytes2word(64,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_I1,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,5)
,	/* v471: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_P1)
,	/* v473: (byte 4) */
  bytes2word(2,JUMP,107,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_CHAR_P1)
, bytes2word(7,HEAP_I1,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,5)
,	/* v474: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CHAR_P1,8)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v475: (byte 2) */
  bytes2word(3,RETURN,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CHAR_P1,12,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v476: (byte 1) */
  bytes2word(RETURN,POP_I1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CHAR_P1,10,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
,	/* v477: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_CHAR_P1)
, bytes2word(13,HEAP_I1,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,5)
,	/* v478: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CHAR_P1,9)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v479: (byte 2) */
  bytes2word(3,RETURN,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CHAR_P1,11,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v460: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_I1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(26,0,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_OFF_N1)
,	/* v480: (byte 2) */
  bytes2word(4,RETURN_EVAL,PUSH_P1,0)
, bytes2word(LOOKUPSWITCH,2,TOP(111),BOT(111))
, bytes2word(TOP(14),BOT(14),TOP(120),BOT(120))
,	/* v495: (byte 4) */
  bytes2word(TOP(38),BOT(38),TOP(10),BOT(10))
,	/* v485: (byte 4) */
  bytes2word(POP_I1,JUMP,50,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,15,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v486: (byte 4) */
  bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_P1,17,HEAP_CVAL_P1)
, bytes2word(18,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v482: (byte 4) */
  bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,19,HEAP_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,54)
, bytes2word(0,HEAP_CVAL_P1,20,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CHAR_P1,127,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,21,HEAP_CVAL_P1)
, bytes2word(22,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,HEAP_OFF_N1)
, bytes2word(4,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v490: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v491: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I1,HEAP_OFF_N1,3)
,	/* v487: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v456: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v497: (byte 0) */
  HW(20,1)
, 0
,	/* F0_Char_46Prelude_46173_46readEsc: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46173_46readEsc),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_Char_46ord))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Char_46isDigit))
, CAPTAG(useLabel(FN_LAMBDA435),2)
, VAPTAG(useLabel(FN_Numeric_46readDec))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA436),2)
, VAPTAG(useLabel(FN_Numeric_46readOct))
, CAPTAG(useLabel(FN_LAMBDA437),2)
, VAPTAG(useLabel(FN_Numeric_46readHex))
, VAPTAG(useLabel(FN_Char_46isUpper))
, VAPTAG(useLabel(FN_LAMBDA438))
, useLabel(CF_Char_46asciiTab)
, CAPTAG(useLabel(FN_LAMBDA440),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v501)
,	/* FN_LAMBDA440: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_I1)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v501: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA440: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA440),3)
, CAPTAG(useLabel(FN_LAMBDA439),2)
, CAPTAG(useLabel(FN_Char_46Prelude_46174_46match),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v512)
,	/* FN_LAMBDA439: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v511: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v509: (byte 4) */
  bytes2word(POP_I1,JUMP,16,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v506: (byte 2) */
  bytes2word(3,RETURN,POP_P1,2)
,	/* v502: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG_I3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v512: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA439: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA439),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v514)
,	/* FN_LAMBDA438: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v513)
,	/* CT_v514: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA438: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA438))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v518)
,	/* FN_LAMBDA437: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v518: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA437: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA437),2)
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v522)
,	/* FN_LAMBDA436: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v522: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA436: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA436),2)
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v526)
,	/* FN_LAMBDA435: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v526: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA435: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA435),2)
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v539)
,	/* FN_Char_46Prelude_46174_46match: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v537: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v530: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v538: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v534: (byte 2) */
  bytes2word(34,0,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,10)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,4,HEAP_I2)
,	/* v535: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v531: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v527: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v539: (byte 0) */
  HW(2,3)
, 0
,	/* F0_Char_46Prelude_46174_46match: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46174_46match),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Char_46Prelude_46174_46match))
,	/* ST_v454: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,49)
, bytes2word(52,58,49,45)
, bytes2word(52,52,58,51)
,	/* ST_v513: (byte 3) */
  bytes2word(52,46,0,68)
, bytes2word(69,76,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define v452	((void*)startLabel+22)
#define v446	((void*)startLabel+26)
#define v453	((void*)startLabel+40)
#define v450	((void*)startLabel+44)
#define v447	((void*)startLabel+49)
#define v443	((void*)startLabel+63)
#define CT_v454	((void*)startLabel+100)
#define FN_LAMBDA441	((void*)startLabel+132)
#define CT_v457	((void*)startLabel+164)
#define CF_LAMBDA441	((void*)startLabel+172)
#define FN_Char_46Prelude_46173_46readEsc	((void*)startLabel+184)
#define v495	((void*)startLabel+198)
#define v461	((void*)startLabel+202)
#define v496	((void*)startLabel+256)
#define v465	((void*)startLabel+260)
#define v466	((void*)startLabel+275)
#define v467	((void*)startLabel+290)
#define v468	((void*)startLabel+305)
#define v497	((void*)startLabel+316)
#define v472	((void*)startLabel+320)
#define v473	((void*)startLabel+387)
#define v475	((void*)startLabel+392)
#define v476	((void*)startLabel+407)
#define v477	((void*)startLabel+422)
#define v478	((void*)startLabel+437)
#define v479	((void*)startLabel+452)
#define v480	((void*)startLabel+467)
#define v481	((void*)startLabel+482)
#define v462	((void*)startLabel+497)
#define v482	((void*)startLabel+530)
#define v498	((void*)startLabel+544)
#define v487	((void*)startLabel+548)
#define v488	((void*)startLabel+572)
#define v484	((void*)startLabel+596)
#define v492	((void*)startLabel+642)
#define v493	((void*)startLabel+647)
#define v489	((void*)startLabel+658)
#define v458	((void*)startLabel+663)
#define CT_v500	((void*)startLabel+696)
#define F0_Char_46Prelude_46173_46readEsc	((void*)startLabel+704)
#define FN_LAMBDA440	((void*)startLabel+800)
#define CT_v505	((void*)startLabel+860)
#define F0_LAMBDA440	((void*)startLabel+868)
#define FN_LAMBDA439	((void*)startLabel+904)
#define v515	((void*)startLabel+924)
#define v513	((void*)startLabel+928)
#define v510	((void*)startLabel+941)
#define v506	((void*)startLabel+946)
#define CT_v516	((void*)startLabel+972)
#define F0_LAMBDA439	((void*)startLabel+980)
#define FN_LAMBDA438	((void*)startLabel+992)
#define CT_v519	((void*)startLabel+1024)
#define CF_LAMBDA438	((void*)startLabel+1032)
#define FN_LAMBDA437	((void*)startLabel+1048)
#define CT_v524	((void*)startLabel+1100)
#define F0_LAMBDA437	((void*)startLabel+1108)
#define FN_LAMBDA436	((void*)startLabel+1132)
#define CT_v529	((void*)startLabel+1184)
#define F0_LAMBDA436	((void*)startLabel+1192)
#define FN_LAMBDA435	((void*)startLabel+1216)
#define CT_v534	((void*)startLabel+1268)
#define F0_LAMBDA435	((void*)startLabel+1276)
#define FN_Char_46Prelude_46174_46match	((void*)startLabel+1300)
#define v546	((void*)startLabel+1314)
#define v538	((void*)startLabel+1318)
#define v547	((void*)startLabel+1330)
#define v542	((void*)startLabel+1334)
#define v543	((void*)startLabel+1361)
#define v539	((void*)startLabel+1366)
#define v535	((void*)startLabel+1371)
#define CT_v548	((void*)startLabel+1400)
#define F0_Char_46Prelude_46174_46match	((void*)startLabel+1408)
#define ST_v451	((void*)startLabel+1420)
#define ST_v455	((void*)startLabel+1437)
#define ST_v494	((void*)startLabel+1465)
#define ST_v532	((void*)startLabel+1493)
#define ST_v527	((void*)startLabel+1522)
#define ST_v522	((void*)startLabel+1551)
#define ST_v517	((void*)startLabel+1580)
#define ST_v503	((void*)startLabel+1609)
#define ST_v545	((void*)startLabel+1638)
#define ST_v456	((void*)startLabel+1666)
#define ST_v518	((void*)startLabel+1721)
extern Node TM_Char[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Char[];
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
, useLabel(CT_v454)
,};
Node FN_Char_46readLitChar[] = {
  useLabel(TM_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v452: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v446: (byte 2) */
  bytes2word(39,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(92),BOT(92))
,	/* v453: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v450: (byte 4) */
  bytes2word(POP_I1,JUMP,7,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_I2)
,	/* v447: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_IN3,HEAP_P1,0)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,5)
,	/* v443: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
, 140001
, useLabel(ST_v451)
,	/* CT_v454: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46readLitChar[] = {
  CAPTAG(useLabel(FN_Char_46readLitChar),1)
, VAPTAG(useLabel(FN_Char_46Prelude_46173_46readEsc))
, VAPTAG(useLabel(FN_LAMBDA441))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v457)
,	/* FN_LAMBDA441: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v456)
, 140001
, useLabel(ST_v455)
,	/* CT_v457: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA441: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA441))
, bytes2word(1,0,0,1)
, useLabel(CT_v500)
,	/* FN_Char_46Prelude_46173_46readEsc: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v495: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v461: (byte 2) */
  bytes2word(207,1,UNPACK,2)
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
,	/* v496: (byte 4) */
  bytes2word(TOP(272),BOT(272),TOP(46),BOT(46))
,	/* v465: (byte 4) */
  bytes2word(POP_I1,JUMP,239,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_CHAR_P1,34)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,5)
,	/* v466: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_IN3,HEAP_CHAR_P1,39,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v467: (byte 2) */
  bytes2word(3,RETURN,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CHAR_P1,92,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v468: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v497: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v472: (byte 4) */
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
, bytes2word(5,HEAP_CVAL_IN3,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,5)
,	/* v473: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_P1)
,	/* v475: (byte 4) */
  bytes2word(2,JUMP,107,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_CHAR_P1,7)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,5)
,	/* v476: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_IN3,HEAP_CHAR_P1,8,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v477: (byte 2) */
  bytes2word(3,RETURN,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CHAR_P1,12,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v478: (byte 1) */
  bytes2word(RETURN,POP_I1,HEAP_CVAL_IN3,HEAP_CHAR_P1)
, bytes2word(10,HEAP_I1,HEAP_CVAL_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,5,HEAP_OFF_N1)
,	/* v479: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_CHAR_P1,13)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,5)
,	/* v480: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_IN3,HEAP_CHAR_P1,9,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v481: (byte 2) */
  bytes2word(3,RETURN,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CHAR_P1,11,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v462: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_I1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(26,0,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_OFF_N1)
,	/* v482: (byte 2) */
  bytes2word(4,RETURN_EVAL,PUSH_P1,0)
, bytes2word(LOOKUPSWITCH,2,TOP(111),BOT(111))
, bytes2word(TOP(14),BOT(14),TOP(120),BOT(120))
,	/* v498: (byte 4) */
  bytes2word(TOP(38),BOT(38),TOP(10),BOT(10))
,	/* v487: (byte 4) */
  bytes2word(POP_I1,JUMP,50,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,15,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v488: (byte 4) */
  bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_P1,17,HEAP_CVAL_P1)
, bytes2word(18,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v484: (byte 4) */
  bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,19,HEAP_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,55)
, bytes2word(0,HEAP_CVAL_P1,20,HEAP_CVAL_IN3)
, bytes2word(HEAP_CHAR_P1,127,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,21,HEAP_CVAL_P1)
, bytes2word(22,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,HEAP_OFF_N1)
, bytes2word(4,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v492: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v493: (byte 3) */
  bytes2word(HEAP_CVAL_N1,4,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_I1,HEAP_OFF_N1)
,	/* v489: (byte 2) */
  bytes2word(3,RETURN,POP_P1,2)
,	/* v458: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
, 160009
, useLabel(ST_v494)
,	/* CT_v500: (byte 0) */
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
, useLabel(CT_v505)
,	/* FN_LAMBDA440: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_I1)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 340036
, useLabel(ST_v503)
,	/* CT_v505: (byte 0) */
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
, useLabel(CT_v516)
,	/* FN_LAMBDA439: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v515: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v513: (byte 4) */
  bytes2word(POP_I1,JUMP,15,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
,	/* v510: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v506: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 340036
, useLabel(ST_v503)
,	/* CT_v516: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA439: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA439),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v519)
,	/* FN_LAMBDA438: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v518)
, 330049
, useLabel(ST_v517)
,	/* CT_v519: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA438: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA438))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v524)
,	/* FN_LAMBDA437: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 310028
, useLabel(ST_v522)
,	/* CT_v524: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA437: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA437),2)
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v529)
,	/* FN_LAMBDA436: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 300028
, useLabel(ST_v527)
,	/* CT_v529: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA436: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA436),2)
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v534)
,	/* FN_LAMBDA435: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 290028
, useLabel(ST_v532)
,	/* CT_v534: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA435: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA435),2)
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v548)
,	/* FN_Char_46Prelude_46174_46match: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v546: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v538: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v547: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v542: (byte 2) */
  bytes2word(34,0,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,10)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,4,HEAP_I2)
,	/* v543: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v539: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v535: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG_ARG_RET_EVAL,2,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 410009
, useLabel(ST_v545)
,	/* CT_v548: (byte 0) */
  HW(2,3)
, 0
,	/* F0_Char_46Prelude_46174_46match: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46174_46match),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Char_46Prelude_46174_46match))
,	/* ST_v451: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,116)
, bytes2word(67,104,97,114)
,	/* ST_v455: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,49,52)
, bytes2word(58,49,45,52)
, bytes2word(52,58,51,52)
,	/* ST_v494: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,49,54)
, bytes2word(58,57,45,51)
, bytes2word(56,58,50,57)
,	/* ST_v532: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,50,57)
, bytes2word(58,50,56,45)
, bytes2word(50,57,58,54)
,	/* ST_v527: (byte 2) */
  bytes2word(48,0,67,104)
, bytes2word(97,114,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,116,67,104)
, bytes2word(97,114,58,51)
, bytes2word(48,58,50,56)
, bytes2word(45,51,48,58)
,	/* ST_v522: (byte 3) */
  bytes2word(54,48,0,67)
, bytes2word(104,97,114,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,116,67)
, bytes2word(104,97,114,58)
, bytes2word(51,49,58,50)
, bytes2word(56,45,51,49)
,	/* ST_v517: (byte 4) */
  bytes2word(58,54,48,0)
, bytes2word(67,104,97,114)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,116)
, bytes2word(67,104,97,114)
, bytes2word(58,51,51,58)
, bytes2word(52,57,45,51)
, bytes2word(51,58,53,51)
,	/* ST_v503: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,51,52)
, bytes2word(58,51,54,45)
, bytes2word(51,53,58,55)
,	/* ST_v545: (byte 2) */
  bytes2word(48,0,67,104)
, bytes2word(97,114,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,116,67,104)
, bytes2word(97,114,58,52)
, bytes2word(49,58,57,45)
, bytes2word(52,50,58,52)
,	/* ST_v456: (byte 2) */
  bytes2word(56,0,67,104)
, bytes2word(97,114,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,49,52,58)
, bytes2word(49,45,52,52)
, bytes2word(58,51,52,46)
,	/* ST_v518: (byte 1) */
  bytes2word(0,68,69,76)
, bytes2word(0,0,0,0)
,};

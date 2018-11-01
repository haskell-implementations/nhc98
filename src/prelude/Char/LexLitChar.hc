#include "newmacros.h"
#include "runtime.h"

#define v351	((void*)startLabel+18)
#define v352	((void*)startLabel+23)
#define v358	((void*)startLabel+38)
#define v356	((void*)startLabel+42)
#define v353	((void*)startLabel+62)
#define CT_v359	((void*)startLabel+108)
#define FN_Char_46Prelude_46175_46lexEsc	((void*)startLabel+144)
#define v387	((void*)startLabel+154)
#define v363	((void*)startLabel+158)
#define v364	((void*)startLabel+197)
#define v388	((void*)startLabel+218)
#define v369	((void*)startLabel+222)
#define v389	((void*)startLabel+232)
#define v373	((void*)startLabel+236)
#define v374	((void*)startLabel+290)
#define v376	((void*)startLabel+295)
#define v377	((void*)startLabel+321)
#define v366	((void*)startLabel+347)
#define v378	((void*)startLabel+372)
#define v385	((void*)startLabel+420)
#define v386	((void*)startLabel+425)
#define v382	((void*)startLabel+436)
#define v360	((void*)startLabel+441)
#define CT_v391	((void*)startLabel+468)
#define F0_Char_46Prelude_46175_46lexEsc	((void*)startLabel+476)
#define FN_LAMBDA348	((void*)startLabel+568)
#define CT_v393	((void*)startLabel+588)
#define CF_LAMBDA348	((void*)startLabel+596)
#define FN_LAMBDA347	((void*)startLabel+612)
#define CT_v394	((void*)startLabel+656)
#define F0_LAMBDA347	((void*)startLabel+664)
#define FN_LAMBDA346	((void*)startLabel+700)
#define v404	((void*)startLabel+716)
#define v402	((void*)startLabel+720)
#define v399	((void*)startLabel+734)
#define v395	((void*)startLabel+739)
#define CT_v405	((void*)startLabel+756)
#define F0_LAMBDA346	((void*)startLabel+764)
#define FN_LAMBDA345	((void*)startLabel+776)
#define CT_v407	((void*)startLabel+796)
#define CF_LAMBDA345	((void*)startLabel+804)
#define FN_Char_46Prelude_46174_46prefix	((void*)startLabel+820)
#define CT_v411	((void*)startLabel+852)
#define F0_Char_46Prelude_46174_46prefix	((void*)startLabel+860)
#define FN_Char_46Prelude_46176_46match	((void*)startLabel+876)
#define v422	((void*)startLabel+886)
#define v415	((void*)startLabel+890)
#define v423	((void*)startLabel+902)
#define v419	((void*)startLabel+906)
#define v420	((void*)startLabel+933)
#define v416	((void*)startLabel+938)
#define v412	((void*)startLabel+943)
#define CT_v424	((void*)startLabel+964)
#define F0_Char_46Prelude_46176_46match	((void*)startLabel+972)
#define ST_v392	((void*)startLabel+984)
#define ST_v406	((void*)startLabel+988)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46elem[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46span[];
extern Node F0_Char_46isOctDigit[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node F0_Char_46isHexDigit[];
extern Node FN_Char_46isDigit[];
extern Node F0_Char_46isDigit[];
extern Node FN_Char_46isUpper[];
extern Node F0_Prelude_46snd[];
extern Node CF_Char_46asciiTab[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46_61_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v359)
,};
Node FN_Char_46lexLitChar[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v351: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v352: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(92),BOT(92),TOP(10),BOT(10))
,	/* v358: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v356: (byte 2) */
  bytes2word(22,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,HEAP_CHAR_P1)
, bytes2word(92,HEAP_CVAL_I5,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v353: (byte 2) */
  bytes2word(5,RETURN_EVAL,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(4,HEAP_I1,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v359: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Char_46lexLitChar[] = {
  CAPTAG(useLabel(FN_Char_46lexLitChar),1)
, CAPTAG(useLabel(FN_Char_46Prelude_46174_46prefix),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Char_46Prelude_46175_46lexEsc),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(1,0,0,1)
, useLabel(CT_v391)
,	/* FN_Char_46Prelude_46175_46lexEsc: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v387: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v363: (byte 2) */
  bytes2word(29,1,UNPACK,2)
, bytes2word(PUSH_CVAL_P1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_I2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,24,0,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_P1)
, bytes2word(0,HEAP_OFF_N1,3,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v364: (byte 1) */
  bytes2word(RETURN,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,LOOKUPSWITCH,3,NOP)
, bytes2word(TOP(94),BOT(94),TOP(18),BOT(18))
, bytes2word(TOP(111),BOT(111),TOP(91),BOT(91))
, bytes2word(TOP(120),BOT(120),TOP(117),BOT(117))
,	/* v388: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,JUMP)
,	/* v369: (byte 2) */
  bytes2word(127,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v389: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v373: (byte 4) */
  bytes2word(POP_I1,JUMP,113,0)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,6)
, bytes2word(HEAP_P1,0,HEAP_CHAR_P1,64)
, bytes2word(HEAP_CVAL_P1,7,HEAP_P1,0)
, bytes2word(HEAP_CHAR_P1,95,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(30,0,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CHAR_P1,94,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v374: (byte 2) */
  bytes2word(3,RETURN,POP_P1,2)
,	/* v376: (byte 3) */
  bytes2word(JUMP,54,0,POP_I1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,5,HEAP_CHAR_P1)
, bytes2word(111,HEAP_OFF_N1,6,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,3)
,	/* v377: (byte 1) */
  bytes2word(RETURN,POP_I1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_P1,13)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(5,HEAP_CHAR_P1,120,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,6)
,	/* v366: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_I1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,18,0)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_P1,15)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
,	/* v378: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,16,HEAP_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,57)
, bytes2word(0,HEAP_CVAL_P1,17,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,18,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_P1,20,HEAP_CVAL_P1)
, bytes2word(21,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,22)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v385: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v386: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v382: (byte 4) */
  bytes2word(HEAP_I1,HEAP_OFF_N1,3,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v360: (byte 1) */
  bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v391: (byte 0) */
  HW(20,1)
, 0
,	/* F0_Char_46Prelude_46175_46lexEsc: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46175_46lexEsc),1)
, useLabel(CF_LAMBDA345)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, CAPTAG(useLabel(FN_Char_46Prelude_46174_46prefix),2)
, VAPTAG(useLabel(FN_Prelude_46span))
, useLabel(F0_Char_46isOctDigit)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(F0_Char_46isHexDigit)
, VAPTAG(useLabel(FN_Char_46isDigit))
, useLabel(F0_Char_46isDigit)
, VAPTAG(useLabel(FN_Char_46isUpper))
, CAPTAG(useLabel(FN_LAMBDA347),2)
, VAPTAG(useLabel(FN_LAMBDA348))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Prelude_46snd)
, useLabel(CF_Char_46asciiTab)
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,0,0)
, useLabel(CT_v393)
,	/* FN_LAMBDA348: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v392)
,	/* CT_v393: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA348: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA348))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v394)
,	/* FN_LAMBDA347: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v394: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA347: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA347),3)
, CAPTAG(useLabel(FN_LAMBDA346),2)
, CAPTAG(useLabel(FN_Char_46Prelude_46176_46match),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v405)
,	/* FN_LAMBDA346: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v404: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v402: (byte 4) */
  bytes2word(POP_I1,JUMP,16,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v399: (byte 2) */
  bytes2word(3,RETURN,POP_P1,2)
,	/* v395: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG_I3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v405: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA346: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA346),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v407)
,	/* FN_LAMBDA345: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v406)
,	/* CT_v407: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA345: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA345))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v411)
,	/* FN_Char_46Prelude_46174_46prefix: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(4,HEAP_I2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v411: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Char_46Prelude_46174_46prefix: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46174_46prefix),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v424)
,	/* FN_Char_46Prelude_46176_46match: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v422: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v415: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v423: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v419: (byte 2) */
  bytes2word(34,0,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,10)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,4,HEAP_I2)
,	/* v420: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v416: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v412: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v424: (byte 0) */
  HW(2,3)
, 0
,	/* F0_Char_46Prelude_46176_46match: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46176_46match),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Char_46Prelude_46176_46match))
,	/* ST_v392: (byte 0) */
 	/* ST_v406: (byte 4) */
  bytes2word(68,69,76,0)
, bytes2word(97,98,102,110)
, bytes2word(114,116,118,92)
, bytes2word(92,34,39,0)
,};

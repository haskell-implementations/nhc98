#include "newmacros.h"
#include "runtime.h"

#define v351	((void*)startLabel+22)
#define v352	((void*)startLabel+26)
#define v359	((void*)startLabel+40)
#define v356	((void*)startLabel+44)
#define v353	((void*)startLabel+64)
#define CT_v360	((void*)startLabel+116)
#define FN_Char_46Prelude_46175_46lexEsc	((void*)startLabel+152)
#define v389	((void*)startLabel+166)
#define v364	((void*)startLabel+170)
#define v365	((void*)startLabel+208)
#define v390	((void*)startLabel+228)
#define v370	((void*)startLabel+232)
#define v391	((void*)startLabel+242)
#define v374	((void*)startLabel+246)
#define v375	((void*)startLabel+299)
#define v377	((void*)startLabel+304)
#define v378	((void*)startLabel+329)
#define v367	((void*)startLabel+354)
#define v379	((void*)startLabel+378)
#define v386	((void*)startLabel+424)
#define v387	((void*)startLabel+428)
#define v383	((void*)startLabel+438)
#define v361	((void*)startLabel+443)
#define CT_v393	((void*)startLabel+476)
#define F0_Char_46Prelude_46175_46lexEsc	((void*)startLabel+484)
#define FN_LAMBDA348	((void*)startLabel+576)
#define CT_v396	((void*)startLabel+608)
#define CF_LAMBDA348	((void*)startLabel+616)
#define FN_LAMBDA347	((void*)startLabel+632)
#define CT_v398	((void*)startLabel+688)
#define F0_LAMBDA347	((void*)startLabel+696)
#define FN_LAMBDA346	((void*)startLabel+732)
#define v408	((void*)startLabel+752)
#define v406	((void*)startLabel+756)
#define v403	((void*)startLabel+769)
#define v399	((void*)startLabel+774)
#define CT_v409	((void*)startLabel+800)
#define F0_LAMBDA346	((void*)startLabel+808)
#define FN_LAMBDA345	((void*)startLabel+820)
#define CT_v412	((void*)startLabel+852)
#define CF_LAMBDA345	((void*)startLabel+860)
#define FN_Char_46Prelude_46174_46prefix	((void*)startLabel+876)
#define CT_v417	((void*)startLabel+920)
#define F0_Char_46Prelude_46174_46prefix	((void*)startLabel+928)
#define FN_Char_46Prelude_46176_46match	((void*)startLabel+944)
#define v429	((void*)startLabel+958)
#define v421	((void*)startLabel+962)
#define v430	((void*)startLabel+974)
#define v425	((void*)startLabel+978)
#define v426	((void*)startLabel+1005)
#define v422	((void*)startLabel+1010)
#define v418	((void*)startLabel+1015)
#define CT_v431	((void*)startLabel+1044)
#define F0_Char_46Prelude_46176_46match	((void*)startLabel+1052)
#define ST_v357	((void*)startLabel+1064)
#define ST_v415	((void*)startLabel+1080)
#define ST_v410	((void*)startLabel+1107)
#define ST_v388	((void*)startLabel+1135)
#define ST_v397	((void*)startLabel+1162)
#define ST_v394	((void*)startLabel+1190)
#define ST_v428	((void*)startLabel+1218)
#define ST_v395	((void*)startLabel+1245)
#define ST_v411	((void*)startLabel+1249)
extern Node TM_Char[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46map[];
extern Node TMSUB_Char[];
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
, useLabel(CT_v360)
,};
Node FN_Char_46lexLitChar[] = {
  useLabel(TM_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v351: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v352: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(92),BOT(92))
,	/* v359: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v356: (byte 4) */
  bytes2word(POP_I1,JUMP,22,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,92,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v353: (byte 4) */
  bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_N1,4,HEAP_P1)
, bytes2word(0,HEAP_OFF_N1,3,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 100001
, useLabel(ST_v357)
,	/* CT_v360: (byte 0) */
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
, useLabel(CT_v393)
,	/* FN_Char_46Prelude_46175_46lexEsc: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v389: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v364: (byte 2) */
  bytes2word(19,1,UNPACK,2)
, bytes2word(PUSH_CVAL_P1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_I2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,23,0,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
,	/* v365: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,3,TOP(94),BOT(94))
, bytes2word(TOP(18),BOT(18),TOP(111),BOT(111))
, bytes2word(TOP(90),BOT(90),TOP(120),BOT(120))
,	/* v390: (byte 4) */
  bytes2word(TOP(115),BOT(115),TOP(14),BOT(14))
,	/* v370: (byte 4) */
  bytes2word(POP_I1,JUMP,124,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v391: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v374: (byte 2) */
  bytes2word(110,0,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_P1,0)
, bytes2word(HEAP_CHAR_P1,64,HEAP_CVAL_P1,7)
, bytes2word(HEAP_P1,0,HEAP_CHAR_P1,95)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,29,0)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_N1,4,HEAP_P1)
, bytes2word(0,HEAP_OFF_N1,3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_CHAR_P1,94,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_I1,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,5)
,	/* v375: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,POP_P1)
,	/* v377: (byte 4) */
  bytes2word(2,JUMP,52,0)
, bytes2word(POP_I1,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,5)
, bytes2word(HEAP_CHAR_P1,111,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,3)
,	/* v378: (byte 1) */
  bytes2word(RETURN,POP_I1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_P1,13)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(5,HEAP_CHAR_P1,120,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,6,HEAP_OFF_N1)
,	/* v367: (byte 2) */
  bytes2word(3,RETURN,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,17,0,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,15,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v379: (byte 2) */
  bytes2word(3,RETURN,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(16,HEAP_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,53,0,HEAP_CVAL_P1)
, bytes2word(17,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(18,HEAP_CVAL_P1,19,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_P1,21,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(22,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v386: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v387: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_I1,HEAP_OFF_N1)
,	/* v383: (byte 2) */
  bytes2word(3,RETURN,POP_P1,2)
,	/* v361: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 140009
, useLabel(ST_v388)
,	/* CT_v393: (byte 0) */
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
, useLabel(CT_v396)
,	/* FN_LAMBDA348: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v395)
, 270052
, useLabel(ST_v394)
,	/* CT_v396: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA348: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA348))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v398)
,	/* FN_LAMBDA347: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_IN3,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(13,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 270033
, useLabel(ST_v397)
,	/* CT_v398: (byte 0) */
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
, useLabel(CT_v409)
,	/* FN_LAMBDA346: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v408: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v406: (byte 4) */
  bytes2word(POP_I1,JUMP,15,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
,	/* v403: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v399: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 270033
, useLabel(ST_v397)
,	/* CT_v409: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA346: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA346),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v412)
,	/* FN_LAMBDA345: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v411)
, 140037
, useLabel(ST_v410)
,	/* CT_v412: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA345: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA345))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v417)
,	/* FN_Char_46Prelude_46174_46prefix: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,4)
, bytes2word(HEAP_I2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, 120009
, useLabel(ST_v415)
,	/* CT_v417: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Char_46Prelude_46174_46prefix: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46174_46prefix),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v431)
,	/* FN_Char_46Prelude_46176_46match: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v429: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v421: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v430: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v425: (byte 2) */
  bytes2word(34,0,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,10)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,4,HEAP_I2)
,	/* v426: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v422: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v418: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG_ARG_RET_EVAL,2,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 340009
, useLabel(ST_v428)
,	/* CT_v431: (byte 0) */
  HW(2,3)
, 0
,	/* F0_Char_46Prelude_46176_46match: (byte 0) */
  CAPTAG(useLabel(FN_Char_46Prelude_46176_46match),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Char_46Prelude_46176_46match))
,	/* ST_v357: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,108,101,120)
, bytes2word(76,105,116,67)
,	/* ST_v415: (byte 4) */
  bytes2word(104,97,114,0)
, bytes2word(67,104,97,114)
, bytes2word(46,108,101,120)
, bytes2word(76,105,116,67)
, bytes2word(104,97,114,58)
, bytes2word(49,50,58,57)
, bytes2word(45,49,50,58)
,	/* ST_v410: (byte 3) */
  bytes2word(51,51,0,67)
, bytes2word(104,97,114,46)
, bytes2word(108,101,120,76)
, bytes2word(105,116,67,104)
, bytes2word(97,114,58,49)
, bytes2word(52,58,51,55)
, bytes2word(45,49,52,58)
,	/* ST_v388: (byte 3) */
  bytes2word(53,48,0,67)
, bytes2word(104,97,114,46)
, bytes2word(108,101,120,76)
, bytes2word(105,116,67,104)
, bytes2word(97,114,58,49)
, bytes2word(52,58,57,45)
, bytes2word(51,49,58,50)
,	/* ST_v397: (byte 2) */
  bytes2word(57,0,67,104)
, bytes2word(97,114,46,108)
, bytes2word(101,120,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,50,55)
, bytes2word(58,51,51,45)
, bytes2word(50,56,58,55)
,	/* ST_v394: (byte 2) */
  bytes2word(53,0,67,104)
, bytes2word(97,114,46,108)
, bytes2word(101,120,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,50,55)
, bytes2word(58,53,50,45)
, bytes2word(50,55,58,53)
,	/* ST_v428: (byte 2) */
  bytes2word(54,0,67,104)
, bytes2word(97,114,46,108)
, bytes2word(101,120,76,105)
, bytes2word(116,67,104,97)
, bytes2word(114,58,51,52)
, bytes2word(58,57,45,51)
, bytes2word(53,58,52,56)
,	/* ST_v395: (byte 1) */
  bytes2word(0,68,69,76)
,	/* ST_v411: (byte 1) */
  bytes2word(0,97,98,102)
, bytes2word(110,114,116,118)
, bytes2word(92,92,34,39)
, bytes2word(0,0,0,0)
,};

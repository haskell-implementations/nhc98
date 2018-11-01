#include "newmacros.h"
#include "runtime.h"

#define CT_v332	((void*)startLabel+44)
#define FN_LAMBDA326	((void*)startLabel+72)
#define CT_v334	((void*)startLabel+112)
#define F0_LAMBDA326	((void*)startLabel+120)
#define FN_LAMBDA325	((void*)startLabel+148)
#define v349	((void*)startLabel+166)
#define v342	((void*)startLabel+170)
#define v350	((void*)startLabel+184)
#define v346	((void*)startLabel+188)
#define v343	((void*)startLabel+207)
#define v339	((void*)startLabel+212)
#define v335	((void*)startLabel+217)
#define CT_v351	((void*)startLabel+232)
#define F0_LAMBDA325	((void*)startLabel+240)
#define FN_LAMBDA324	((void*)startLabel+272)
#define CT_v355	((void*)startLabel+316)
#define F0_LAMBDA324	((void*)startLabel+324)
#define FN_Prelude_46Prelude_46176_46readl	((void*)startLabel+336)
#define v374	((void*)startLabel+350)
#define v359	((void*)startLabel+354)
#define v375	((void*)startLabel+372)
#define v363	((void*)startLabel+376)
#define v364	((void*)startLabel+392)
#define v376	((void*)startLabel+402)
#define v368	((void*)startLabel+406)
#define v377	((void*)startLabel+420)
#define v372	((void*)startLabel+424)
#define v369	((void*)startLabel+429)
#define v360	((void*)startLabel+434)
#define v356	((void*)startLabel+439)
#define CT_v378	((void*)startLabel+488)
#define F0_Prelude_46Prelude_46176_46readl	((void*)startLabel+496)
#define FN_LAMBDA323	((void*)startLabel+532)
#define CT_v383	((void*)startLabel+576)
#define F0_LAMBDA323	((void*)startLabel+584)
#define FN_LAMBDA322	((void*)startLabel+616)
#define CT_v387	((void*)startLabel+664)
#define F0_LAMBDA322	((void*)startLabel+672)
#define FN_LAMBDA321	((void*)startLabel+684)
#define CT_v390	((void*)startLabel+716)
#define CF_LAMBDA321	((void*)startLabel+724)
#define CT_v392	((void*)startLabel+772)
#define FN_LAMBDA329	((void*)startLabel+800)
#define CT_v394	((void*)startLabel+840)
#define F0_LAMBDA329	((void*)startLabel+848)
#define FN_LAMBDA328	((void*)startLabel+876)
#define v409	((void*)startLabel+894)
#define v402	((void*)startLabel+898)
#define v410	((void*)startLabel+912)
#define v406	((void*)startLabel+916)
#define v403	((void*)startLabel+931)
#define v399	((void*)startLabel+936)
#define v395	((void*)startLabel+941)
#define CT_v411	((void*)startLabel+956)
#define F0_LAMBDA328	((void*)startLabel+964)
#define FN_LAMBDA327	((void*)startLabel+992)
#define v429	((void*)startLabel+1010)
#define v419	((void*)startLabel+1014)
#define v430	((void*)startLabel+1028)
#define v423	((void*)startLabel+1032)
#define v431	((void*)startLabel+1042)
#define v427	((void*)startLabel+1046)
#define v420	((void*)startLabel+1059)
#define v416	((void*)startLabel+1064)
#define v412	((void*)startLabel+1069)
#define CT_v432	((void*)startLabel+1092)
#define F0_LAMBDA327	((void*)startLabel+1100)
#define CT_v434	((void*)startLabel+1144)
#define ST_v389	((void*)startLabel+1164)
#define ST_v433	((void*)startLabel+1165)
#define ST_v331	((void*)startLabel+1191)
#define ST_v333	((void*)startLabel+1226)
#define ST_v347	((void*)startLabel+1273)
#define ST_v373	((void*)startLabel+1320)
#define ST_v388	((void*)startLabel+1367)
#define ST_v381	((void*)startLabel+1414)
#define ST_v391	((void*)startLabel+1461)
#define ST_v393	((void*)startLabel+1497)
#define ST_v407	((void*)startLabel+1543)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Char_46readLitChar[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v332)
,};
Node FN_Prelude_46Read_46Prelude_46Char_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 100005
, useLabel(ST_v331)
,	/* CT_v332: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Char_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Char_46readList))
, CAPTAG(useLabel(FN_LAMBDA326),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v334)
,	/* FN_LAMBDA326: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 100033
, useLabel(ST_v333)
,	/* CT_v334: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA326: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA326),1)
, CAPTAG(useLabel(FN_LAMBDA325),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v351)
,	/* FN_LAMBDA325: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v349: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v342: (byte 2) */
  bytes2word(44,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(34),BOT(34))
,	/* v350: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v346: (byte 4) */
  bytes2word(POP_I1,JUMP,21,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_P1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
,	/* v343: (byte 3) */
  bytes2word(HEAP_ARG,2,RETURN_EVAL,POP_P1)
,	/* v339: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v335: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 100039
, useLabel(ST_v347)
,	/* CT_v351: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA325: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA325),2)
, CAPTAG(useLabel(FN_LAMBDA324),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46176_46readl),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v355)
,	/* FN_LAMBDA324: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_P1)
, bytes2word(0,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 100039
, useLabel(ST_v347)
,	/* CT_v355: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA324),3)
, bytes2word(1,0,0,1)
, useLabel(CT_v378)
,	/* FN_Prelude_46Prelude_46176_46readl: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v374: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v359: (byte 2) */
  bytes2word(87,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,2,TOP(34),BOT(34))
, bytes2word(TOP(14),BOT(14),TOP(92),BOT(92))
,	/* v375: (byte 4) */
  bytes2word(TOP(30),BOT(30),TOP(10),BOT(10))
,	/* v363: (byte 4) */
  bytes2word(POP_I1,JUMP,60,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(2,HEAP_I1,HEAP_CVAL_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,5,HEAP_OFF_N1)
,	/* v364: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v376: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v368: (byte 2) */
  bytes2word(30,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(38),BOT(38))
,	/* v377: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v372: (byte 4) */
  bytes2word(POP_I1,JUMP,7,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_I2)
,	/* v369: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v360: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v356: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
, 120022
, useLabel(ST_v373)
,	/* CT_v378: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Prelude_46Prelude_46176_46readl: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46176_46readl),1)
, VAPTAG(useLabel(FN_LAMBDA321))
, VAPTAG(useLabel(FN_Prelude_46Prelude_46176_46readl))
, CAPTAG(useLabel(FN_LAMBDA323),2)
, VAPTAG(useLabel(FN_Char_46readLitChar))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v383)
,	/* FN_LAMBDA323: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 140043
, useLabel(ST_v381)
,	/* CT_v383: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA323: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA323),2)
, CAPTAG(useLabel(FN_LAMBDA322),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46176_46readl),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v387)
,	/* FN_LAMBDA322: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, 140043
, useLabel(ST_v381)
,	/* CT_v387: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA322: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA322),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v390)
,	/* FN_LAMBDA321: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v389)
, 120045
, useLabel(ST_v388)
,	/* CT_v390: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA321: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA321))
, bytes2word(1,0,0,1)
, useLabel(CT_v392)
,};
Node FN_Prelude_46Read_46Prelude_46Char_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60005
, useLabel(ST_v391)
,	/* CT_v392: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Char_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Char_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA329),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v394)
,	/* FN_LAMBDA329: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 70030
, useLabel(ST_v393)
,	/* CT_v394: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA329: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA329),1)
, CAPTAG(useLabel(FN_LAMBDA328),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v411)
,	/* FN_LAMBDA328: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v409: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v402: (byte 2) */
  bytes2word(40,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(39),BOT(39))
,	/* v410: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v406: (byte 4) */
  bytes2word(POP_I1,JUMP,17,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_P1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
,	/* v403: (byte 3) */
  bytes2word(HEAP_ARG,2,RETURN_EVAL,POP_P1)
,	/* v399: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v395: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 70036
, useLabel(ST_v407)
,	/* CT_v411: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA328: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA328),2)
, CAPTAG(useLabel(FN_LAMBDA327),2)
, VAPTAG(useLabel(FN_Char_46readLitChar))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v432)
,	/* FN_LAMBDA327: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v429: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v419: (byte 2) */
  bytes2word(52,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(39),BOT(39))
,	/* v430: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v423: (byte 4) */
  bytes2word(POP_I1,JUMP,29,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v431: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v427: (byte 2) */
  bytes2word(15,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_I2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,4)
,	/* v420: (byte 3) */
  bytes2word(HEAP_ARG,3,RETURN,POP_P1)
,	/* v416: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v412: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 70036
, useLabel(ST_v407)
,	/* CT_v432: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA327: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA327),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v434)
,};
Node FN_Prelude_46Read_46Prelude_46Char[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50010
, useLabel(ST_v433)
,	/* CT_v434: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Char))
, useLabel(F0_Prelude_46Read_46Prelude_46Char_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Char_46readList)
,	/* ST_v389: (byte 0) */
 	/* ST_v433: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,67,104)
,	/* ST_v331: (byte 3) */
  bytes2word(97,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,115)
,	/* ST_v333: (byte 2) */
  bytes2word(116,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
, bytes2word(58,49,48,58)
, bytes2word(51,51,45,49)
, bytes2word(49,58,55,51)
,	/* ST_v347: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,67,104)
, bytes2word(97,114,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,115,116,58)
, bytes2word(49,48,58,51)
, bytes2word(57,45,49,49)
,	/* ST_v373: (byte 4) */
  bytes2word(58,55,51,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(115,116,58,49)
, bytes2word(50,58,50,50)
, bytes2word(45,49,53,58)
,	/* ST_v388: (byte 3) */
  bytes2word(55,57,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,115)
, bytes2word(116,58,49,50)
, bytes2word(58,52,53,45)
, bytes2word(49,50,58,52)
,	/* ST_v381: (byte 2) */
  bytes2word(54,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
, bytes2word(58,49,52,58)
, bytes2word(52,51,45,49)
, bytes2word(53,58,55,57)
,	/* ST_v391: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,67,104)
, bytes2word(97,114,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
,	/* ST_v393: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,67,104)
, bytes2word(97,114,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,55,58,51)
, bytes2word(48,45,56,58)
,	/* ST_v407: (byte 3) */
  bytes2word(55,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,114,101,97)
, bytes2word(100,115,80,114)
, bytes2word(101,99,58,55)
, bytes2word(58,51,54,45)
, bytes2word(56,58,55,49)
, bytes2word(0,0,0,0)
,};

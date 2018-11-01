#include "newmacros.h"
#include "runtime.h"

#define CT_v365	((void*)startLabel+60)
#define FN_LAMBDA360	((void*)startLabel+96)
#define CT_v367	((void*)startLabel+144)
#define F0_LAMBDA360	((void*)startLabel+152)
#define FN_LAMBDA359	((void*)startLabel+184)
#define v386	((void*)startLabel+204)
#define v375	((void*)startLabel+208)
#define v387	((void*)startLabel+222)
#define v379	((void*)startLabel+226)
#define v388	((void*)startLabel+236)
#define v383	((void*)startLabel+240)
#define v376	((void*)startLabel+263)
#define v372	((void*)startLabel+268)
#define v368	((void*)startLabel+273)
#define CT_v389	((void*)startLabel+292)
#define F0_LAMBDA359	((void*)startLabel+300)
#define FN_LAMBDA358	((void*)startLabel+336)
#define CT_v393	((void*)startLabel+376)
#define F0_LAMBDA358	((void*)startLabel+384)
#define FN_LAMBDA357	((void*)startLabel+416)
#define v411	((void*)startLabel+436)
#define v401	((void*)startLabel+440)
#define v412	((void*)startLabel+454)
#define v405	((void*)startLabel+458)
#define v413	((void*)startLabel+468)
#define v409	((void*)startLabel+472)
#define v402	((void*)startLabel+495)
#define v398	((void*)startLabel+500)
#define v394	((void*)startLabel+505)
#define CT_v414	((void*)startLabel+524)
#define F0_LAMBDA357	((void*)startLabel+532)
#define FN_LAMBDA356	((void*)startLabel+568)
#define CT_v418	((void*)startLabel+612)
#define F0_LAMBDA356	((void*)startLabel+620)
#define FN_LAMBDA355	((void*)startLabel+652)
#define v436	((void*)startLabel+672)
#define v426	((void*)startLabel+676)
#define v437	((void*)startLabel+690)
#define v430	((void*)startLabel+694)
#define v438	((void*)startLabel+704)
#define v434	((void*)startLabel+708)
#define v427	((void*)startLabel+731)
#define v423	((void*)startLabel+736)
#define v419	((void*)startLabel+741)
#define CT_v439	((void*)startLabel+760)
#define F0_LAMBDA355	((void*)startLabel+768)
#define FN_LAMBDA354	((void*)startLabel+804)
#define CT_v443	((void*)startLabel+844)
#define F0_LAMBDA354	((void*)startLabel+852)
#define FN_LAMBDA353	((void*)startLabel+884)
#define v461	((void*)startLabel+904)
#define v451	((void*)startLabel+908)
#define v462	((void*)startLabel+922)
#define v455	((void*)startLabel+926)
#define v463	((void*)startLabel+936)
#define v459	((void*)startLabel+940)
#define v452	((void*)startLabel+961)
#define v448	((void*)startLabel+966)
#define v444	((void*)startLabel+971)
#define CT_v464	((void*)startLabel+1004)
#define F0_LAMBDA353	((void*)startLabel+1012)
#define CT_v466	((void*)startLabel+1060)
#define CT_v468	((void*)startLabel+1140)
#define ST_v467	((void*)startLabel+1160)
#define ST_v465	((void*)startLabel+1183)
#define ST_v364	((void*)startLabel+1215)
#define ST_v366	((void*)startLabel+1248)
#define ST_v384	((void*)startLabel+1292)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
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
, useLabel(CT_v365)
,};
Node FN_Prelude_46Read_46Prelude_463_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG,4,NEEDHEAP_I32,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,3,2)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40005
, useLabel(ST_v364)
,	/* CT_v365: (byte 0) */
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
, useLabel(CT_v367)
,	/* FN_LAMBDA360: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50030
, useLabel(ST_v366)
,	/* CT_v367: (byte 0) */
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
, useLabel(CT_v389)
,	/* FN_LAMBDA359: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v386: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v375: (byte 4) */
  bytes2word(POP_I1,JUMP,62,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v387: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v379: (byte 2) */
  bytes2word(39,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v388: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v383: (byte 4) */
  bytes2word(POP_I1,JUMP,25,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
,	/* v376: (byte 3) */
  bytes2word(HEAP_ARG,5,RETURN_EVAL,POP_P1)
,	/* v372: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v368: (byte 1) */
  bytes2word(0,PUSH_ARG,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v384)
,	/* CT_v389: (byte 0) */
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
, useLabel(CT_v393)
,	/* FN_LAMBDA358: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v384)
,	/* CT_v393: (byte 0) */
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
, useLabel(CT_v414)
,	/* FN_LAMBDA357: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v411: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v401: (byte 4) */
  bytes2word(POP_I1,JUMP,62,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v412: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v405: (byte 2) */
  bytes2word(39,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v413: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v409: (byte 4) */
  bytes2word(POP_I1,JUMP,25,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
,	/* v402: (byte 3) */
  bytes2word(HEAP_ARG,5,RETURN_EVAL,POP_P1)
,	/* v398: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v394: (byte 1) */
  bytes2word(0,PUSH_ARG,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v384)
,	/* CT_v414: (byte 0) */
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
, useLabel(CT_v418)
,	/* FN_LAMBDA356: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v384)
,	/* CT_v418: (byte 0) */
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
, useLabel(CT_v439)
,	/* FN_LAMBDA355: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v436: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v426: (byte 4) */
  bytes2word(POP_I1,JUMP,62,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v437: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v430: (byte 2) */
  bytes2word(39,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v438: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v434: (byte 4) */
  bytes2word(POP_I1,JUMP,25,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
,	/* v427: (byte 3) */
  bytes2word(HEAP_ARG,5,RETURN_EVAL,POP_P1)
,	/* v423: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v419: (byte 1) */
  bytes2word(0,PUSH_ARG,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v384)
,	/* CT_v439: (byte 0) */
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
, useLabel(CT_v443)
,	/* FN_LAMBDA354: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v384)
,	/* CT_v443: (byte 0) */
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
, useLabel(CT_v464)
,	/* FN_LAMBDA353: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v461: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v451: (byte 4) */
  bytes2word(POP_I1,JUMP,60,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v462: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v455: (byte 2) */
  bytes2word(37,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v463: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v459: (byte 4) */
  bytes2word(POP_I1,JUMP,23,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,5,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,5)
,	/* v452: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v448: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v444: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,3,0)
, 50037
, useLabel(ST_v384)
,	/* CT_v464: (byte 0) */
  HW(0,5)
, 0
,	/* F0_LAMBDA353: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA353),5)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v466)
,};
Node FN_Prelude_46Read_46Prelude_463_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30039
, useLabel(ST_v465)
,	/* CT_v466: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_463_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readList),3)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v468)
,};
Node FN_Prelude_46Read_46Prelude_463[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30039
, useLabel(ST_v467)
,	/* CT_v468: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463),3)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_463_46readList))
,	/* ST_v467: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v465: (byte 3) */
  bytes2word(46,51,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v364: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v366: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,51)
, bytes2word(48,45,49,50)
,	/* ST_v384: (byte 4) */
  bytes2word(58,54,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,51)
, bytes2word(55,45,49,50)
, bytes2word(58,54,48,0)
,};

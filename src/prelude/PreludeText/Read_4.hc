#include "newmacros.h"
#include "runtime.h"

#define CT_v416	((void*)startLabel+48)
#define FN_LAMBDA412	((void*)startLabel+84)
#define CT_v417	((void*)startLabel+120)
#define F0_LAMBDA412	((void*)startLabel+128)
#define FN_LAMBDA411	((void*)startLabel+164)
#define v435	((void*)startLabel+180)
#define v425	((void*)startLabel+184)
#define v436	((void*)startLabel+198)
#define v429	((void*)startLabel+202)
#define v437	((void*)startLabel+212)
#define v433	((void*)startLabel+216)
#define v426	((void*)startLabel+241)
#define v422	((void*)startLabel+246)
#define v418	((void*)startLabel+251)
#define CT_v438	((void*)startLabel+260)
#define F0_LAMBDA411	((void*)startLabel+268)
#define FN_LAMBDA410	((void*)startLabel+304)
#define CT_v442	((void*)startLabel+336)
#define F0_LAMBDA410	((void*)startLabel+344)
#define FN_LAMBDA409	((void*)startLabel+380)
#define v460	((void*)startLabel+396)
#define v450	((void*)startLabel+400)
#define v461	((void*)startLabel+414)
#define v454	((void*)startLabel+418)
#define v462	((void*)startLabel+428)
#define v458	((void*)startLabel+432)
#define v451	((void*)startLabel+457)
#define v447	((void*)startLabel+462)
#define v443	((void*)startLabel+467)
#define CT_v463	((void*)startLabel+476)
#define F0_LAMBDA409	((void*)startLabel+484)
#define FN_LAMBDA408	((void*)startLabel+520)
#define CT_v467	((void*)startLabel+552)
#define F0_LAMBDA408	((void*)startLabel+560)
#define FN_LAMBDA407	((void*)startLabel+596)
#define v485	((void*)startLabel+612)
#define v475	((void*)startLabel+616)
#define v486	((void*)startLabel+630)
#define v479	((void*)startLabel+634)
#define v487	((void*)startLabel+644)
#define v483	((void*)startLabel+648)
#define v476	((void*)startLabel+673)
#define v472	((void*)startLabel+678)
#define v468	((void*)startLabel+683)
#define CT_v488	((void*)startLabel+692)
#define F0_LAMBDA407	((void*)startLabel+700)
#define FN_LAMBDA406	((void*)startLabel+736)
#define CT_v492	((void*)startLabel+768)
#define F0_LAMBDA406	((void*)startLabel+776)
#define FN_LAMBDA405	((void*)startLabel+812)
#define v510	((void*)startLabel+828)
#define v500	((void*)startLabel+832)
#define v511	((void*)startLabel+846)
#define v504	((void*)startLabel+850)
#define v512	((void*)startLabel+860)
#define v508	((void*)startLabel+864)
#define v501	((void*)startLabel+889)
#define v497	((void*)startLabel+894)
#define v493	((void*)startLabel+899)
#define CT_v513	((void*)startLabel+908)
#define F0_LAMBDA405	((void*)startLabel+916)
#define FN_LAMBDA404	((void*)startLabel+952)
#define CT_v517	((void*)startLabel+984)
#define F0_LAMBDA404	((void*)startLabel+992)
#define FN_LAMBDA403	((void*)startLabel+1028)
#define v535	((void*)startLabel+1044)
#define v525	((void*)startLabel+1048)
#define v536	((void*)startLabel+1062)
#define v529	((void*)startLabel+1066)
#define v537	((void*)startLabel+1076)
#define v533	((void*)startLabel+1080)
#define v526	((void*)startLabel+1102)
#define v522	((void*)startLabel+1107)
#define v518	((void*)startLabel+1112)
#define CT_v538	((void*)startLabel+1136)
#define F0_LAMBDA403	((void*)startLabel+1144)
#define CT_v539	((void*)startLabel+1184)
#define CT_v540	((void*)startLabel+1256)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_464[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v416)
,};
Node FN_Prelude_46Read_46Prelude_464_46readsPrec[] = {
  bytes2word(ZAP_ARG,5,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG_ARG,4)
, bytes2word(3,HEAP_ARG_ARG,2,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v416: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Read_46Prelude_464_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464_46readsPrec),5)
, CAPTAG(useLabel(FN_LAMBDA412),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v417)
,	/* FN_LAMBDA412: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v417: (byte 0) */
  HW(3,5)
, 0
,	/* F0_LAMBDA412: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA412),5)
, CAPTAG(useLabel(FN_LAMBDA411),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v438)
,	/* FN_LAMBDA411: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v435: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v425: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v436: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v429: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v437: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v433: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,6)
,	/* v426: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v422: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v418: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v438: (byte 0) */
  HW(4,6)
, 0
,	/* F0_LAMBDA411: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA411),6)
, CAPTAG(useLabel(FN_LAMBDA410),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v442)
,	/* FN_LAMBDA410: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v442: (byte 0) */
  HW(3,5)
, 0
,	/* F0_LAMBDA410: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA410),5)
, CAPTAG(useLabel(FN_LAMBDA409),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v463)
,	/* FN_LAMBDA409: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v460: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v450: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v461: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v454: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v462: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v458: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,6)
,	/* v451: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v447: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v443: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v463: (byte 0) */
  HW(4,6)
, 0
,	/* F0_LAMBDA409: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA409),6)
, CAPTAG(useLabel(FN_LAMBDA408),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v467)
,	/* FN_LAMBDA408: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v467: (byte 0) */
  HW(3,5)
, 0
,	/* F0_LAMBDA408: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA408),5)
, CAPTAG(useLabel(FN_LAMBDA407),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v488)
,	/* FN_LAMBDA407: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v485: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v475: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v486: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v479: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v487: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v483: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,6)
,	/* v476: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v472: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v468: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v488: (byte 0) */
  HW(4,6)
, 0
,	/* F0_LAMBDA407: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA407),6)
, CAPTAG(useLabel(FN_LAMBDA406),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v492)
,	/* FN_LAMBDA406: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v492: (byte 0) */
  HW(3,5)
, 0
,	/* F0_LAMBDA406: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA406),5)
, CAPTAG(useLabel(FN_LAMBDA405),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v513)
,	/* FN_LAMBDA405: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v510: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v500: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v511: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v504: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v512: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v508: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,6)
,	/* v501: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v497: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v493: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v513: (byte 0) */
  HW(4,6)
, 0
,	/* F0_LAMBDA405: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA405),6)
, CAPTAG(useLabel(FN_LAMBDA404),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v517)
,	/* FN_LAMBDA404: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v517: (byte 0) */
  HW(3,5)
, 0
,	/* F0_LAMBDA404: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA404),5)
, CAPTAG(useLabel(FN_LAMBDA403),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v538)
,	/* FN_LAMBDA403: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v535: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v525: (byte 4) */
  bytes2word(POP_I1,JUMP,61,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v536: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v529: (byte 2) */
  bytes2word(38,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v537: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v533: (byte 4) */
  bytes2word(POP_I1,JUMP,24,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(6,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v526: (byte 2) */
  bytes2word(6,RETURN,POP_P1,2)
,	/* v522: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v518: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,4,0)
,	/* CT_v538: (byte 0) */
  HW(0,6)
, 0
,	/* F0_LAMBDA403: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA403),6)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v539)
,};
Node FN_Prelude_46Read_46Prelude_464_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v539: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Read_46Prelude_464_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464_46readList),4)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v540)
,};
Node FN_Prelude_46Read_46Prelude_464[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v540: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Read_46Prelude_464[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464),4)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464_46readList))
,};

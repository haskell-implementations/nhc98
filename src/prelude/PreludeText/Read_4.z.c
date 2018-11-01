#include "newmacros.h"
#include "runtime.h"

#define CT_v417	((void*)startLabel+60)
#define FN_LAMBDA412	((void*)startLabel+96)
#define CT_v419	((void*)startLabel+144)
#define F0_LAMBDA412	((void*)startLabel+152)
#define FN_LAMBDA411	((void*)startLabel+188)
#define v438	((void*)startLabel+208)
#define v427	((void*)startLabel+212)
#define v439	((void*)startLabel+226)
#define v431	((void*)startLabel+230)
#define v440	((void*)startLabel+240)
#define v435	((void*)startLabel+244)
#define v428	((void*)startLabel+269)
#define v424	((void*)startLabel+274)
#define v420	((void*)startLabel+279)
#define CT_v441	((void*)startLabel+296)
#define F0_LAMBDA411	((void*)startLabel+304)
#define FN_LAMBDA410	((void*)startLabel+340)
#define CT_v445	((void*)startLabel+384)
#define F0_LAMBDA410	((void*)startLabel+392)
#define FN_LAMBDA409	((void*)startLabel+428)
#define v463	((void*)startLabel+448)
#define v453	((void*)startLabel+452)
#define v464	((void*)startLabel+466)
#define v457	((void*)startLabel+470)
#define v465	((void*)startLabel+480)
#define v461	((void*)startLabel+484)
#define v454	((void*)startLabel+509)
#define v450	((void*)startLabel+514)
#define v446	((void*)startLabel+519)
#define CT_v466	((void*)startLabel+536)
#define F0_LAMBDA409	((void*)startLabel+544)
#define FN_LAMBDA408	((void*)startLabel+580)
#define CT_v470	((void*)startLabel+624)
#define F0_LAMBDA408	((void*)startLabel+632)
#define FN_LAMBDA407	((void*)startLabel+668)
#define v488	((void*)startLabel+688)
#define v478	((void*)startLabel+692)
#define v489	((void*)startLabel+706)
#define v482	((void*)startLabel+710)
#define v490	((void*)startLabel+720)
#define v486	((void*)startLabel+724)
#define v479	((void*)startLabel+749)
#define v475	((void*)startLabel+754)
#define v471	((void*)startLabel+759)
#define CT_v491	((void*)startLabel+776)
#define F0_LAMBDA407	((void*)startLabel+784)
#define FN_LAMBDA406	((void*)startLabel+820)
#define CT_v495	((void*)startLabel+864)
#define F0_LAMBDA406	((void*)startLabel+872)
#define FN_LAMBDA405	((void*)startLabel+908)
#define v513	((void*)startLabel+928)
#define v503	((void*)startLabel+932)
#define v514	((void*)startLabel+946)
#define v507	((void*)startLabel+950)
#define v515	((void*)startLabel+960)
#define v511	((void*)startLabel+964)
#define v504	((void*)startLabel+989)
#define v500	((void*)startLabel+994)
#define v496	((void*)startLabel+999)
#define CT_v516	((void*)startLabel+1016)
#define F0_LAMBDA405	((void*)startLabel+1024)
#define FN_LAMBDA404	((void*)startLabel+1060)
#define CT_v520	((void*)startLabel+1104)
#define F0_LAMBDA404	((void*)startLabel+1112)
#define FN_LAMBDA403	((void*)startLabel+1148)
#define v538	((void*)startLabel+1168)
#define v528	((void*)startLabel+1172)
#define v539	((void*)startLabel+1186)
#define v532	((void*)startLabel+1190)
#define v540	((void*)startLabel+1200)
#define v536	((void*)startLabel+1204)
#define v529	((void*)startLabel+1226)
#define v525	((void*)startLabel+1231)
#define v521	((void*)startLabel+1236)
#define CT_v541	((void*)startLabel+1268)
#define F0_LAMBDA403	((void*)startLabel+1276)
#define CT_v543	((void*)startLabel+1328)
#define CT_v545	((void*)startLabel+1412)
#define ST_v544	((void*)startLabel+1432)
#define ST_v542	((void*)startLabel+1455)
#define ST_v416	((void*)startLabel+1487)
#define ST_v418	((void*)startLabel+1520)
#define ST_v436	((void*)startLabel+1564)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
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
, useLabel(CT_v417)
,};
Node FN_Prelude_46Read_46Prelude_464_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG,5,NEEDHEAP_I32,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,4,3)
, bytes2word(HEAP_ARG_ARG,2,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(7,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40005
, useLabel(ST_v416)
,	/* CT_v417: (byte 0) */
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
, useLabel(CT_v419)
,	/* FN_LAMBDA412: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50030
, useLabel(ST_v418)
,	/* CT_v419: (byte 0) */
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
, useLabel(CT_v441)
,	/* FN_LAMBDA411: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v438: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v427: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v439: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v431: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v440: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v435: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,6)
,	/* v428: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v424: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v420: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v441: (byte 0) */
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
, useLabel(CT_v445)
,	/* FN_LAMBDA410: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v445: (byte 0) */
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
, useLabel(CT_v466)
,	/* FN_LAMBDA409: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v463: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v453: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v464: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v457: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v465: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v461: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,6)
,	/* v454: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v450: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v446: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v466: (byte 0) */
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
, useLabel(CT_v470)
,	/* FN_LAMBDA408: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v470: (byte 0) */
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
, useLabel(CT_v491)
,	/* FN_LAMBDA407: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v488: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v478: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v489: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v482: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v490: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v486: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,6)
,	/* v479: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v475: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v471: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v491: (byte 0) */
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
, useLabel(CT_v495)
,	/* FN_LAMBDA406: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v495: (byte 0) */
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
, useLabel(CT_v516)
,	/* FN_LAMBDA405: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v513: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v503: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v514: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v507: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v515: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v511: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,6)
,	/* v504: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v500: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v496: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v516: (byte 0) */
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
, useLabel(CT_v520)
,	/* FN_LAMBDA404: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v520: (byte 0) */
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
, useLabel(CT_v541)
,	/* FN_LAMBDA403: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v538: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v528: (byte 4) */
  bytes2word(POP_I1,JUMP,61,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v539: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v532: (byte 2) */
  bytes2word(38,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v540: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v536: (byte 4) */
  bytes2word(POP_I1,JUMP,24,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,6)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v529: (byte 2) */
  bytes2word(6,RETURN,POP_P1,2)
,	/* v525: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v521: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,4,0)
, 50037
, useLabel(ST_v436)
,	/* CT_v541: (byte 0) */
  HW(0,6)
, 0
,	/* F0_LAMBDA403: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA403),6)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v543)
,};
Node FN_Prelude_46Read_46Prelude_464_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 30047
, useLabel(ST_v542)
,	/* CT_v543: (byte 0) */
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
, useLabel(CT_v545)
,};
Node FN_Prelude_46Read_46Prelude_464[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30047
, useLabel(ST_v544)
,	/* CT_v545: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Read_46Prelude_464[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464),4)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_464_46readList))
,	/* ST_v544: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v542: (byte 3) */
  bytes2word(46,52,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(52,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v416: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(52,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v418: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,51)
, bytes2word(48,45,49,52)
,	/* ST_v436: (byte 4) */
  bytes2word(58,54,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,51)
, bytes2word(55,45,49,52)
, bytes2word(58,54,48,0)
,};

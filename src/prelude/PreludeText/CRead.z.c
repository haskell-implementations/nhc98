#include "newmacros.h"
#include "runtime.h"

#define CT_v401	((void*)startLabel+44)
#define FN_LAMBDA388	((void*)startLabel+72)
#define CT_v404	((void*)startLabel+104)
#define CF_LAMBDA388	((void*)startLabel+112)
#define CT_v406	((void*)startLabel+164)
#define FN_LAMBDA398	((void*)startLabel+196)
#define CT_v408	((void*)startLabel+240)
#define F0_LAMBDA398	((void*)startLabel+248)
#define FN_LAMBDA397	((void*)startLabel+276)
#define v427	((void*)startLabel+294)
#define v416	((void*)startLabel+298)
#define v428	((void*)startLabel+312)
#define v420	((void*)startLabel+316)
#define v429	((void*)startLabel+326)
#define v424	((void*)startLabel+330)
#define v417	((void*)startLabel+350)
#define v413	((void*)startLabel+355)
#define v409	((void*)startLabel+360)
#define CT_v430	((void*)startLabel+376)
#define F0_LAMBDA397	((void*)startLabel+384)
#define FN_LAMBDA396	((void*)startLabel+416)
#define CT_v431	((void*)startLabel+448)
#define F0_LAMBDA396	((void*)startLabel+456)
#define FN_Prelude_46Prelude_46166_46readl	((void*)startLabel+472)
#define CT_v433	((void*)startLabel+544)
#define F0_Prelude_46Prelude_46166_46readl	((void*)startLabel+552)
#define FN_LAMBDA395	((void*)startLabel+596)
#define CT_v438	((void*)startLabel+640)
#define F0_LAMBDA395	((void*)startLabel+648)
#define FN_LAMBDA394	((void*)startLabel+680)
#define CT_v442	((void*)startLabel+728)
#define F0_LAMBDA394	((void*)startLabel+736)
#define FN_LAMBDA393	((void*)startLabel+752)
#define v461	((void*)startLabel+770)
#define v450	((void*)startLabel+774)
#define v462	((void*)startLabel+788)
#define v454	((void*)startLabel+792)
#define v463	((void*)startLabel+802)
#define v458	((void*)startLabel+806)
#define v451	((void*)startLabel+822)
#define v447	((void*)startLabel+827)
#define v443	((void*)startLabel+832)
#define CT_v464	((void*)startLabel+864)
#define F0_LAMBDA393	((void*)startLabel+872)
#define FN_Prelude_46Prelude_46167_46readl_39	((void*)startLabel+888)
#define CT_v466	((void*)startLabel+952)
#define F0_Prelude_46Prelude_46167_46readl_39	((void*)startLabel+960)
#define FN_LAMBDA392	((void*)startLabel+996)
#define v485	((void*)startLabel+1014)
#define v474	((void*)startLabel+1018)
#define v486	((void*)startLabel+1032)
#define v478	((void*)startLabel+1036)
#define v487	((void*)startLabel+1046)
#define v482	((void*)startLabel+1050)
#define v475	((void*)startLabel+1074)
#define v471	((void*)startLabel+1079)
#define v467	((void*)startLabel+1084)
#define CT_v488	((void*)startLabel+1100)
#define F0_LAMBDA392	((void*)startLabel+1108)
#define FN_LAMBDA391	((void*)startLabel+1140)
#define CT_v492	((void*)startLabel+1184)
#define F0_LAMBDA391	((void*)startLabel+1192)
#define FN_LAMBDA390	((void*)startLabel+1224)
#define CT_v496	((void*)startLabel+1272)
#define F0_LAMBDA390	((void*)startLabel+1280)
#define FN_LAMBDA389	((void*)startLabel+1296)
#define v515	((void*)startLabel+1314)
#define v504	((void*)startLabel+1318)
#define v516	((void*)startLabel+1332)
#define v508	((void*)startLabel+1336)
#define v517	((void*)startLabel+1346)
#define v512	((void*)startLabel+1350)
#define v505	((void*)startLabel+1366)
#define v501	((void*)startLabel+1371)
#define v497	((void*)startLabel+1376)
#define CT_v518	((void*)startLabel+1408)
#define F0_LAMBDA389	((void*)startLabel+1416)
#define CT_v520	((void*)startLabel+1452)
#define CT_v522	((void*)startLabel+1496)
#define ST_v403	((void*)startLabel+1508)
#define ST_v405	((void*)startLabel+1557)
#define ST_v407	((void*)startLabel+1576)
#define ST_v425	((void*)startLabel+1607)
#define ST_v432	((void*)startLabel+1638)
#define ST_v459	((void*)startLabel+1669)
#define ST_v436	((void*)startLabel+1700)
#define ST_v465	((void*)startLabel+1731)
#define ST_v513	((void*)startLabel+1762)
#define ST_v483	((void*)startLabel+1793)
#define ST_v400	((void*)startLabel+1824)
#define ST_v402	((void*)startLabel+1844)
#define ST_v521	((void*)startLabel+1870)
#define ST_v519	((void*)startLabel+1887)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v401)
,};
Node FN_Prelude_46_95_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v400)
,	/* CT_v401: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46readsPrec),2)
, VAPTAG(useLabel(FN_LAMBDA388))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v404)
,	/* FN_LAMBDA388: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v403)
, 0
, useLabel(ST_v402)
,	/* CT_v404: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA388: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA388))
, bytes2word(1,0,0,1)
, useLabel(CT_v406)
,};
Node FN_Prelude_46_95_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 110005
, useLabel(ST_v405)
,	/* CT_v406: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46_95_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46readList),1)
, CAPTAG(useLabel(FN_LAMBDA398),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v408)
,	/* FN_LAMBDA398: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 110033
, useLabel(ST_v407)
,	/* CT_v408: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA398: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA398),2)
, CAPTAG(useLabel(FN_LAMBDA397),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v430)
,	/* FN_LAMBDA397: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v427: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v416: (byte 2) */
  bytes2word(59,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(91),BOT(91))
,	/* v428: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v420: (byte 4) */
  bytes2word(POP_I1,JUMP,36,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v429: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v424: (byte 2) */
  bytes2word(22,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,1,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_ARG)
,	/* v417: (byte 2) */
  bytes2word(3,RETURN_EVAL,POP_P1,2)
,	/* v413: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v409: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 110039
, useLabel(ST_v425)
,	/* CT_v430: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA397: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA397),3)
, CAPTAG(useLabel(FN_LAMBDA396),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46166_46readl),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v431)
,	/* FN_LAMBDA396: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 110039
, useLabel(ST_v425)
,	/* CT_v431: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA396: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA396),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v433)
,	/* FN_Prelude_46Prelude_46166_46readl: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_IN3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_INT_P1,0,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_IN3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 130013
, useLabel(ST_v432)
,	/* CT_v433: (byte 0) */
  HW(7,2)
, 0
,	/* F0_Prelude_46Prelude_46166_46readl: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46166_46readl),2)
, CAPTAG(useLabel(FN_LAMBDA393),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA395),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v438)
,	/* FN_LAMBDA395: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 140024
, useLabel(ST_v436)
,	/* CT_v438: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA395: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA395),3)
, CAPTAG(useLabel(FN_LAMBDA394),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46readl_39),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v442)
,	/* FN_LAMBDA394: (byte 0) */
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
, 140024
, useLabel(ST_v436)
,	/* CT_v442: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA394: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA394),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v464)
,	/* FN_LAMBDA393: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v461: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v450: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(93),BOT(93))
,	/* v462: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v454: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v463: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v458: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v451: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v447: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v443: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, 130024
, useLabel(ST_v459)
,	/* CT_v464: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA393: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA393),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v466)
,	/* FN_Prelude_46Prelude_46167_46readl_39: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_IN3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_IN3,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(14,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 160013
, useLabel(ST_v465)
,	/* CT_v466: (byte 0) */
  HW(5,2)
, 0
,	/* F0_Prelude_46Prelude_46167_46readl_39: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46readl_39),2)
, CAPTAG(useLabel(FN_LAMBDA389),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA392),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v488)
,	/* FN_LAMBDA392: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v485: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v474: (byte 2) */
  bytes2word(63,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(44),BOT(44))
,	/* v486: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v478: (byte 4) */
  bytes2word(POP_I1,JUMP,40,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v487: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v482: (byte 2) */
  bytes2word(26,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_INT_P1,0,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,6,HEAP_ARG)
,	/* v475: (byte 2) */
  bytes2word(3,RETURN_EVAL,POP_P1,2)
,	/* v471: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v467: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 170024
, useLabel(ST_v483)
,	/* CT_v488: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA392: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA392),3)
, CAPTAG(useLabel(FN_LAMBDA391),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v492)
,	/* FN_LAMBDA391: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 170024
, useLabel(ST_v483)
,	/* CT_v492: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA391: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA391),3)
, CAPTAG(useLabel(FN_LAMBDA390),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46readl_39),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v496)
,	/* FN_LAMBDA390: (byte 0) */
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
, 170024
, useLabel(ST_v483)
,	/* CT_v496: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA390: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA390),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v518)
,	/* FN_LAMBDA389: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v515: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v504: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(93),BOT(93))
,	/* v516: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v508: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v517: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v512: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_N1,4,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v505: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v501: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v497: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
, 160024
, useLabel(ST_v513)
,	/* CT_v518: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA389: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA389),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v520)
,};
Node FN_Prelude_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70008
, useLabel(ST_v519)
,	/* CT_v520: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46readsPrec),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v522)
,};
Node FN_Prelude_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70008
, useLabel(ST_v521)
,	/* CT_v522: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46readList),1)
,	/* ST_v403: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
,	/* ST_v405: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,95,46,114)
, bytes2word(101,97,100,76)
,	/* ST_v407: (byte 4) */
  bytes2word(105,115,116,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(115,116,58,49)
, bytes2word(49,58,51,51)
, bytes2word(45,49,50,58)
,	/* ST_v425: (byte 3) */
  bytes2word(53,57,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,95)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,115)
, bytes2word(116,58,49,49)
, bytes2word(58,51,57,45)
, bytes2word(49,50,58,53)
,	/* ST_v432: (byte 2) */
  bytes2word(57,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
, bytes2word(58,49,51,58)
, bytes2word(49,51,45,49)
, bytes2word(53,58,53,52)
,	/* ST_v459: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,95,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,115,116,58)
, bytes2word(49,51,58,50)
, bytes2word(52,45,49,51)
,	/* ST_v436: (byte 4) */
  bytes2word(58,53,50,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,114,101)
, bytes2word(97,100,76,105)
, bytes2word(115,116,58,49)
, bytes2word(52,58,50,52)
, bytes2word(45,49,53,58)
,	/* ST_v465: (byte 3) */
  bytes2word(53,52,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,95)
, bytes2word(46,114,101,97)
, bytes2word(100,76,105,115)
, bytes2word(116,58,49,54)
, bytes2word(58,49,51,45)
, bytes2word(49,57,58,53)
,	/* ST_v513: (byte 2) */
  bytes2word(52,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(114,101,97,100)
, bytes2word(76,105,115,116)
, bytes2word(58,49,54,58)
, bytes2word(50,52,45,49)
, bytes2word(54,58,53,50)
,	/* ST_v483: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,95,46,114)
, bytes2word(101,97,100,76)
, bytes2word(105,115,116,58)
, bytes2word(49,55,58,50)
, bytes2word(52,45,49,57)
,	/* ST_v400: (byte 4) */
  bytes2word(58,53,52,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v402: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(110,111,112,111)
,	/* ST_v521: (byte 2) */
  bytes2word(115,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v519: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(0,0,0,0)
,};

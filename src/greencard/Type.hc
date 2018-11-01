#include "newmacros.h"
#include "runtime.h"

#define v421	((void*)startLabel+28)
#define v420	((void*)startLabel+32)
#define v417	((void*)startLabel+38)
#define CT_v422	((void*)startLabel+48)
#define v451	((void*)startLabel+92)
#define v426	((void*)startLabel+96)
#define v452	((void*)startLabel+114)
#define v430	((void*)startLabel+118)
#define v453	((void*)startLabel+130)
#define v434	((void*)startLabel+134)
#define v454	((void*)startLabel+148)
#define v438	((void*)startLabel+152)
#define v455	((void*)startLabel+162)
#define v442	((void*)startLabel+166)
#define v456	((void*)startLabel+180)
#define v446	((void*)startLabel+184)
#define v457	((void*)startLabel+194)
#define v450	((void*)startLabel+198)
#define v443	((void*)startLabel+203)
#define v435	((void*)startLabel+208)
#define v431	((void*)startLabel+213)
#define v427	((void*)startLabel+217)
#define v423	((void*)startLabel+222)
#define CT_v458	((void*)startLabel+240)
#define v463	((void*)startLabel+280)
#define v462	((void*)startLabel+284)
#define v459	((void*)startLabel+295)
#define CT_v464	((void*)startLabel+312)
#define FN_Type_46ppType_39	((void*)startLabel+340)
#define v466	((void*)startLabel+356)
#define v467	((void*)startLabel+404)
#define v468	((void*)startLabel+419)
#define v469	((void*)startLabel+439)
#define v470	((void*)startLabel+481)
#define CT_v472	((void*)startLabel+508)
#define F0_Type_46ppType_39	((void*)startLabel+516)
#define FN_LAMBDA407	((void*)startLabel+572)
#define CT_v474	((void*)startLabel+592)
#define CF_LAMBDA407	((void*)startLabel+600)
#define CT_v475	((void*)startLabel+636)
#define v480	((void*)startLabel+674)
#define v479	((void*)startLabel+678)
#define v476	((void*)startLabel+681)
#define CT_v481	((void*)startLabel+700)
#define CT_v482	((void*)startLabel+736)
#define FN_LAMBDA408	((void*)startLabel+764)
#define CT_v484	((void*)startLabel+784)
#define CF_LAMBDA408	((void*)startLabel+792)
#define v486	((void*)startLabel+826)
#define v487	((void*)startLabel+900)
#define v488	((void*)startLabel+950)
#define v489	((void*)startLabel+1002)
#define v490	((void*)startLabel+1079)
#define CT_v492	((void*)startLabel+1136)
#define FN_LAMBDA413	((void*)startLabel+1216)
#define CT_v494	((void*)startLabel+1236)
#define CF_LAMBDA413	((void*)startLabel+1244)
#define FN_LAMBDA412	((void*)startLabel+1256)
#define CT_v496	((void*)startLabel+1276)
#define CF_LAMBDA412	((void*)startLabel+1284)
#define FN_LAMBDA411	((void*)startLabel+1296)
#define CT_v498	((void*)startLabel+1316)
#define CF_LAMBDA411	((void*)startLabel+1324)
#define FN_LAMBDA410	((void*)startLabel+1336)
#define CT_v500	((void*)startLabel+1356)
#define CF_LAMBDA410	((void*)startLabel+1364)
#define FN_LAMBDA409	((void*)startLabel+1376)
#define CT_v502	((void*)startLabel+1396)
#define CF_LAMBDA409	((void*)startLabel+1404)
#define CT_v503	((void*)startLabel+1428)
#define CT_v504	((void*)startLabel+1468)
#define CT_v505	((void*)startLabel+1520)
#define ST_v473	((void*)startLabel+1548)
#define ST_v501	((void*)startLabel+1551)
#define ST_v483	((void*)startLabel+1557)
#define ST_v495	((void*)startLabel+1562)
#define ST_v499	((void*)startLabel+1572)
#define ST_v497	((void*)startLabel+1581)
#define ST_v493	((void*)startLabel+1591)
extern Node FN_Pretty_46text[];
extern Node FN_Pretty_46_60_43_62[];
extern Node FN_PrettyUtils_46ppParen[];
extern Node FN_Pretty_46brackets[];
extern Node FN_Prelude_46map[];
extern Node FN_PrettyUtils_46ppTuple[];
extern Node FN_Prelude_46_36[];
extern Node CF_Pretty_46hsep[];
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46showParen[];
extern Node FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec[];
extern Node CF_Prelude_46Show_46Type_46Type[];
extern Node CF_Prelude_46Show_46Prelude_46Char[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v422)
,};
Node FN_Type_46typeResult[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,5,TOP(14),BOT(14))
, bytes2word(TOP(10),BOT(10),TOP(10),BOT(10))
,	/* v421: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(10),BOT(10))
,	/* v420: (byte 4) */
  bytes2word(POP_I1,JUMP,8,0)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
,	/* v417: (byte 2) */
  bytes2word(HEAP_I2,RETURN_EVAL,PUSH_ARG_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v422: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Type_46typeResult[] = {
  CAPTAG(useLabel(FN_Type_46typeResult),1)
, VAPTAG(useLabel(FN_Type_46typeResult))
, bytes2word(1,0,0,1)
, useLabel(CT_v458)
,};
Node FN_Type_46isPureType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,5,TOP(10),BOT(10))
, bytes2word(TOP(10),BOT(10),TOP(10),BOT(10))
,	/* v451: (byte 4) */
  bytes2word(TOP(14),BOT(14),TOP(10),BOT(10))
,	/* v426: (byte 4) */
  bytes2word(POP_I1,JUMP,128,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,5)
, bytes2word(TOP(10),BOT(10),TOP(10),BOT(10))
, bytes2word(TOP(10),BOT(10),TOP(10),BOT(10))
,	/* v452: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,JUMP)
,	/* v430: (byte 2) */
  bytes2word(101,0,UNPACK,1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v453: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v434: (byte 2) */
  bytes2word(81,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(73),BOT(73))
,	/* v454: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v438: (byte 4) */
  bytes2word(POP_I1,JUMP,58,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v455: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v442: (byte 2) */
  bytes2word(44,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(79),BOT(79))
,	/* v456: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v446: (byte 4) */
  bytes2word(POP_I1,JUMP,21,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v457: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v450: (byte 2) */
  bytes2word(7,0,POP_I1,PUSH_HEAP)
,	/* v443: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_P1)
,	/* v435: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v431: (byte 1) */
  bytes2word(0,POP_I1,JUMP,2)
,	/* v427: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v423: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
,	/* CT_v458: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Type_46isPureType[] = {
  CAPTAG(useLabel(FN_Type_46isPureType),1)
, VAPTAG(useLabel(FN_Type_46typeResult))
, bytes2word(1,0,0,1)
, useLabel(CT_v464)
,};
Node FN_Type_46typeArgs[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,5,TOP(14),BOT(14))
, bytes2word(TOP(10),BOT(10),TOP(10),BOT(10))
,	/* v463: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(10),BOT(10))
,	/* v462: (byte 4) */
  bytes2word(POP_I1,JUMP,13,0)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I1)
,	/* v459: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v464: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Type_46typeArgs[] = {
  CAPTAG(useLabel(FN_Type_46typeArgs),1)
, VAPTAG(useLabel(FN_Type_46typeArgs))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v472)
,	/* FN_Type_46ppType_39: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,5,TOP(10),BOT(10))
, bytes2word(TOP(58),BOT(58),TOP(73),BOT(73))
,	/* v466: (byte 4) */
  bytes2word(TOP(93),BOT(93),TOP(135),BOT(135))
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
,	/* v467: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,8)
,	/* v468: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,UNPACK)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,11)
,	/* v469: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,UNPACK)
, bytes2word(2,HEAP_CVAL_N1,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,2,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,0,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,5)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,3,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v470: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v472: (byte 0) */
  HW(11,2)
, 0
,	/* F0_Type_46ppType_39: (byte 0) */
  CAPTAG(useLabel(FN_Type_46ppType_39),2)
, VAPTAG(useLabel(FN_Type_46ppType_39))
, VAPTAG(useLabel(FN_LAMBDA407))
, VAPTAG(useLabel(FN_Pretty_46text))
, VAPTAG(useLabel(FN_Pretty_46_60_43_62))
, VAPTAG(useLabel(FN_PrettyUtils_46ppParen))
, VAPTAG(useLabel(FN_Pretty_46brackets))
, CAPTAG(useLabel(FN_Type_46ppType_39),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_PrettyUtils_46ppTuple))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(CF_Pretty_46hsep)
, bytes2word(0,0,0,0)
, useLabel(CT_v474)
,	/* FN_LAMBDA407: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v473)
,	/* CT_v474: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA407: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA407))
, bytes2word(0,0,0,0)
, useLabel(CT_v475)
,};
Node FN_Type_46ppType[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v475: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Type_46ppType[] = {
  VAPTAG(useLabel(FN_Type_46ppType))
, CAPTAG(useLabel(FN_Type_46ppType_39),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v481)
,};
Node FN_Type_46typeApply[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v480: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v479: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I1)
,	/* v476: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(3,2,0)
,	/* CT_v481: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Type_46typeApply[] = {
  CAPTAG(useLabel(FN_Type_46typeApply),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v482)
,};
Node FN_Prelude_46Show_46Type_46Type_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v482: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Type_46Type_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Type_46Type_46showsType),1)
, useLabel(CF_LAMBDA408)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v484)
,	/* FN_LAMBDA408: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v483)
,	/* CT_v484: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA408: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA408))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v492)
,};
Node FN_Prelude_46Show_46Type_46Type_46showsPrec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(38,TABLESWITCH,5,NOP)
, bytes2word(TOP(10),BOT(10),TOP(84),BOT(84))
, bytes2word(TOP(134),BOT(134),TOP(186),BOT(186))
,	/* v486: (byte 2) */
  bytes2word(TOP(263),BOT(263),UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_INT_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,HEAP_CHAR_P1)
, bytes2word(32,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(9,HEAP_INT_P1,10,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,32,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,9,HEAP_INT_P1)
, bytes2word(10,HEAP_I1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
,	/* v487: (byte 4) */
  bytes2word(35,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(9,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,HEAP_CHAR_P1,32)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_INT_P1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,22,HEAP_OFF_N1)
,	/* v488: (byte 2) */
  bytes2word(5,RETURN_EVAL,UNPACK,1)
, bytes2word(HEAP_CVAL_I3,HEAP_INT_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,32,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_P1,14)
, bytes2word(HEAP_INT_P1,10,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,23,HEAP_OFF_N1)
,	/* v489: (byte 2) */
  bytes2word(5,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_INT_P1,9,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,32,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_INT_P1,10)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,HEAP_CHAR_P1,32)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_P1,14,HEAP_INT_P1,10)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,36)
,	/* v490: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,UNPACK)
, bytes2word(1,HEAP_CVAL_I3,HEAP_INT_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,32,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(17,HEAP_INT_P1,10,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,23)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v492: (byte 0) */
  HW(15,2)
, 0
,};
Node F0_Prelude_46Show_46Type_46Type_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Type_46Type_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA409))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46Show_46Type_46Type_46showsPrec))
, VAPTAG(useLabel(FN_Prelude_46showParen))
, VAPTAG(useLabel(FN_LAMBDA410))
, VAPTAG(useLabel(FN_LAMBDA411))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec))
, useLabel(CF_Prelude_46Show_46Type_46Type)
, VAPTAG(useLabel(FN_LAMBDA412))
, VAPTAG(useLabel(FN_LAMBDA413))
, useLabel(CF_Prelude_46Show_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v494)
,	/* FN_LAMBDA413: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v493)
,	/* CT_v494: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA413: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA413))
, bytes2word(0,0,0,0)
, useLabel(CT_v496)
,	/* FN_LAMBDA412: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v495)
,	/* CT_v496: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA412: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA412))
, bytes2word(0,0,0,0)
, useLabel(CT_v498)
,	/* FN_LAMBDA411: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v497)
,	/* CT_v498: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA411: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA411))
, bytes2word(0,0,0,0)
, useLabel(CT_v500)
,	/* FN_LAMBDA410: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v499)
,	/* CT_v500: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA410: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA410))
, bytes2word(0,0,0,0)
, useLabel(CT_v502)
,	/* FN_LAMBDA409: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v501)
,	/* CT_v502: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA409: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA409))
, bytes2word(1,0,0,1)
, useLabel(CT_v503)
,};
Node FN_Prelude_46Show_46Type_46Type_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v503: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Type_46Type_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Type_46Type_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Type_46Type)
, bytes2word(1,0,0,1)
, useLabel(CT_v504)
,};
Node FN_Prelude_46Show_46Type_46Type_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v504: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Type_46Type_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Type_46Type_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46Type_46Type)
, bytes2word(0,0,0,0)
, useLabel(CT_v505)
,};
Node FN_Prelude_46Show_46Type_46Type[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v505: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Type_46Type[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Type_46Type))
, useLabel(F0_Prelude_46Show_46Type_46Type_46showsPrec)
, useLabel(F0_Prelude_46Show_46Type_46Type_46showsType)
, useLabel(F0_Prelude_46Show_46Type_46Type_46showList)
, useLabel(F0_Prelude_46Show_46Type_46Type_46show)
,	/* ST_v473: (byte 0) */
 	/* ST_v501: (byte 3) */
  bytes2word(45,62,0,65)
, bytes2word(114,114,111,119)
,	/* ST_v483: (byte 1) */
  bytes2word(0,84,121,112)
,	/* ST_v495: (byte 2) */
  bytes2word(101,0,84,121)
, bytes2word(112,101,65,112)
,	/* ST_v499: (byte 4) */
  bytes2word(112,108,121,0)
, bytes2word(84,121,112,101)
, bytes2word(76,105,115,116)
,	/* ST_v497: (byte 1) */
  bytes2word(0,84,121,112)
, bytes2word(101,84,117,112)
,	/* ST_v493: (byte 3) */
  bytes2word(108,101,0,84)
, bytes2word(121,112,101,86)
, bytes2word(97,114,0,0)
,};

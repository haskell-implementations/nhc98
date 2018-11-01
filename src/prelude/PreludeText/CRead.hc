#include "newmacros.h"
#include "runtime.h"

#define CT_v400	((void*)startLabel+32)
#define FN_LAMBDA388	((void*)startLabel+60)
#define CT_v402	((void*)startLabel+80)
#define CF_LAMBDA388	((void*)startLabel+88)
#define CT_v403	((void*)startLabel+128)
#define FN_LAMBDA398	((void*)startLabel+160)
#define CT_v404	((void*)startLabel+192)
#define F0_LAMBDA398	((void*)startLabel+200)
#define FN_LAMBDA397	((void*)startLabel+228)
#define v422	((void*)startLabel+242)
#define v412	((void*)startLabel+246)
#define v423	((void*)startLabel+260)
#define v416	((void*)startLabel+264)
#define v424	((void*)startLabel+274)
#define v420	((void*)startLabel+278)
#define v413	((void*)startLabel+298)
#define v409	((void*)startLabel+303)
#define v405	((void*)startLabel+308)
#define CT_v425	((void*)startLabel+316)
#define F0_LAMBDA397	((void*)startLabel+324)
#define FN_LAMBDA396	((void*)startLabel+356)
#define CT_v426	((void*)startLabel+380)
#define F0_LAMBDA396	((void*)startLabel+388)
#define FN_Prelude_46Prelude_46166_46readl	((void*)startLabel+404)
#define CT_v427	((void*)startLabel+464)
#define F0_Prelude_46Prelude_46166_46readl	((void*)startLabel+472)
#define FN_LAMBDA395	((void*)startLabel+516)
#define CT_v431	((void*)startLabel+548)
#define F0_LAMBDA395	((void*)startLabel+556)
#define FN_LAMBDA394	((void*)startLabel+588)
#define CT_v435	((void*)startLabel+628)
#define F0_LAMBDA394	((void*)startLabel+636)
#define FN_LAMBDA393	((void*)startLabel+652)
#define v453	((void*)startLabel+666)
#define v443	((void*)startLabel+670)
#define v454	((void*)startLabel+684)
#define v447	((void*)startLabel+688)
#define v455	((void*)startLabel+698)
#define v451	((void*)startLabel+702)
#define v444	((void*)startLabel+718)
#define v440	((void*)startLabel+723)
#define v436	((void*)startLabel+728)
#define CT_v456	((void*)startLabel+752)
#define F0_LAMBDA393	((void*)startLabel+760)
#define FN_Prelude_46Prelude_46167_46readl_39	((void*)startLabel+776)
#define CT_v457	((void*)startLabel+828)
#define F0_Prelude_46Prelude_46167_46readl_39	((void*)startLabel+836)
#define FN_LAMBDA392	((void*)startLabel+872)
#define v475	((void*)startLabel+886)
#define v465	((void*)startLabel+890)
#define v476	((void*)startLabel+904)
#define v469	((void*)startLabel+908)
#define v477	((void*)startLabel+918)
#define v473	((void*)startLabel+922)
#define v466	((void*)startLabel+946)
#define v462	((void*)startLabel+951)
#define v458	((void*)startLabel+956)
#define CT_v478	((void*)startLabel+964)
#define F0_LAMBDA392	((void*)startLabel+972)
#define FN_LAMBDA391	((void*)startLabel+1004)
#define CT_v482	((void*)startLabel+1036)
#define F0_LAMBDA391	((void*)startLabel+1044)
#define FN_LAMBDA390	((void*)startLabel+1076)
#define CT_v486	((void*)startLabel+1116)
#define F0_LAMBDA390	((void*)startLabel+1124)
#define FN_LAMBDA389	((void*)startLabel+1140)
#define v504	((void*)startLabel+1154)
#define v494	((void*)startLabel+1158)
#define v505	((void*)startLabel+1172)
#define v498	((void*)startLabel+1176)
#define v506	((void*)startLabel+1186)
#define v502	((void*)startLabel+1190)
#define v495	((void*)startLabel+1206)
#define v491	((void*)startLabel+1211)
#define v487	((void*)startLabel+1216)
#define CT_v507	((void*)startLabel+1240)
#define F0_LAMBDA389	((void*)startLabel+1248)
#define CT_v508	((void*)startLabel+1272)
#define CT_v509	((void*)startLabel+1304)
#define ST_v401	((void*)startLabel+1316)
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v400)
,};
Node FN_Prelude_46_95_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v400: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46readsPrec),2)
, VAPTAG(useLabel(FN_LAMBDA388))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v402)
,	/* FN_LAMBDA388: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v401)
,	/* CT_v402: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA388: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA388))
, bytes2word(1,0,0,1)
, useLabel(CT_v403)
,};
Node FN_Prelude_46_95_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v403: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46_95_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46readList),1)
, CAPTAG(useLabel(FN_LAMBDA398),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v404)
,	/* FN_LAMBDA398: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v404: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA398: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA398),2)
, CAPTAG(useLabel(FN_LAMBDA397),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v425)
,	/* FN_LAMBDA397: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v422: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v412: (byte 2) */
  bytes2word(59,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(91),BOT(91))
,	/* v423: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v416: (byte 4) */
  bytes2word(POP_I1,JUMP,36,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v424: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v420: (byte 2) */
  bytes2word(22,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,1,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_ARG)
,	/* v413: (byte 2) */
  bytes2word(3,RETURN_EVAL,POP_P1,2)
,	/* v409: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v405: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v425: (byte 0) */
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
, useLabel(CT_v426)
,	/* FN_LAMBDA396: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v426: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA396: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA396),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v427)
,	/* FN_Prelude_46Prelude_46166_46readl: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,0)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v427: (byte 0) */
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
, useLabel(CT_v431)
,	/* FN_LAMBDA395: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v431: (byte 0) */
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
, useLabel(CT_v435)
,	/* FN_LAMBDA394: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v435: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA394: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA394),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v456)
,	/* FN_LAMBDA393: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v453: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v443: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(93),BOT(93))
,	/* v454: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v447: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v455: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v451: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v444: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v440: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v436: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v456: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA393: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA393),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v457)
,	/* FN_Prelude_46Prelude_46167_46readl_39: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v457: (byte 0) */
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
, useLabel(CT_v478)
,	/* FN_LAMBDA392: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v475: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v465: (byte 2) */
  bytes2word(63,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(44),BOT(44))
,	/* v476: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v469: (byte 4) */
  bytes2word(POP_I1,JUMP,40,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v477: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v473: (byte 2) */
  bytes2word(26,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_INT_P1,0,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,6,HEAP_ARG)
,	/* v466: (byte 2) */
  bytes2word(3,RETURN_EVAL,POP_P1,2)
,	/* v462: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v458: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v478: (byte 0) */
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
, useLabel(CT_v482)
,	/* FN_LAMBDA391: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v482: (byte 0) */
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
, useLabel(CT_v486)
,	/* FN_LAMBDA390: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v486: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA390: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA390),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v507)
,	/* FN_LAMBDA389: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v504: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v494: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(93),BOT(93))
,	/* v505: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v498: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v506: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v502: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v495: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v491: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v487: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v507: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA389: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA389),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v508)
,};
Node FN_Prelude_46readsPrec[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v508: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46readsPrec),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v509)
,};
Node FN_Prelude_46readList[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v509: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46readList),1)
,	/* ST_v401: (byte 0) */
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
, bytes2word(0,0,0,0)
,};

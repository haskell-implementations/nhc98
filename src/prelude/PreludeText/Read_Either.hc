#include "newmacros.h"
#include "runtime.h"

#define CT_v322	((void*)startLabel+36)
#define FN_LAMBDA318	((void*)startLabel+72)
#define CT_v323	((void*)startLabel+128)
#define F0_LAMBDA318	((void*)startLabel+136)
#define FN_LAMBDA317	((void*)startLabel+172)
#define v373	((void*)startLabel+186)
#define v331	((void*)startLabel+190)
#define v374	((void*)startLabel+204)
#define v335	((void*)startLabel+208)
#define v375	((void*)startLabel+218)
#define v339	((void*)startLabel+222)
#define v376	((void*)startLabel+236)
#define v343	((void*)startLabel+240)
#define v377	((void*)startLabel+250)
#define v347	((void*)startLabel+254)
#define v378	((void*)startLabel+268)
#define v351	((void*)startLabel+272)
#define v379	((void*)startLabel+282)
#define v355	((void*)startLabel+286)
#define v380	((void*)startLabel+300)
#define v359	((void*)startLabel+304)
#define v381	((void*)startLabel+314)
#define v363	((void*)startLabel+318)
#define v382	((void*)startLabel+332)
#define v367	((void*)startLabel+336)
#define v383	((void*)startLabel+346)
#define v371	((void*)startLabel+350)
#define v364	((void*)startLabel+372)
#define v356	((void*)startLabel+377)
#define v348	((void*)startLabel+382)
#define v340	((void*)startLabel+387)
#define v332	((void*)startLabel+392)
#define v328	((void*)startLabel+397)
#define v324	((void*)startLabel+402)
#define CT_v384	((void*)startLabel+412)
#define F0_LAMBDA317	((void*)startLabel+420)
#define FN_LAMBDA316	((void*)startLabel+452)
#define CT_v388	((void*)startLabel+496)
#define F0_LAMBDA316	((void*)startLabel+504)
#define FN_LAMBDA315	((void*)startLabel+520)
#define v430	((void*)startLabel+534)
#define v396	((void*)startLabel+538)
#define v431	((void*)startLabel+552)
#define v400	((void*)startLabel+556)
#define v432	((void*)startLabel+566)
#define v404	((void*)startLabel+570)
#define v433	((void*)startLabel+584)
#define v408	((void*)startLabel+588)
#define v434	((void*)startLabel+598)
#define v412	((void*)startLabel+602)
#define v435	((void*)startLabel+616)
#define v416	((void*)startLabel+620)
#define v436	((void*)startLabel+630)
#define v420	((void*)startLabel+634)
#define v437	((void*)startLabel+648)
#define v424	((void*)startLabel+652)
#define v438	((void*)startLabel+662)
#define v428	((void*)startLabel+666)
#define v421	((void*)startLabel+688)
#define v413	((void*)startLabel+693)
#define v405	((void*)startLabel+698)
#define v397	((void*)startLabel+703)
#define v393	((void*)startLabel+708)
#define v389	((void*)startLabel+713)
#define CT_v439	((void*)startLabel+720)
#define F0_LAMBDA315	((void*)startLabel+728)
#define FN_LAMBDA314	((void*)startLabel+760)
#define CT_v443	((void*)startLabel+804)
#define F0_LAMBDA314	((void*)startLabel+812)
#define CT_v444	((void*)startLabel+844)
#define CT_v445	((void*)startLabel+908)
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Read_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v322)
,};
Node FN_Prelude_46Read_46Prelude_46Either_46readsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_INT_P1,9,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v322: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, CAPTAG(useLabel(FN_LAMBDA318),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v323)
,	/* FN_LAMBDA318: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,3,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,3,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(14,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v323: (byte 0) */
  HW(5,3)
, 0
,	/* F0_LAMBDA318: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA318),3)
, CAPTAG(useLabel(FN_LAMBDA315),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA317),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v384)
,	/* FN_LAMBDA317: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v373: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v331: (byte 2) */
  bytes2word(209,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(82),BOT(82))
,	/* v374: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v335: (byte 4) */
  bytes2word(POP_I1,JUMP,186,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v375: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v339: (byte 2) */
  bytes2word(172,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(105),BOT(105))
,	/* v376: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v343: (byte 4) */
  bytes2word(POP_I1,JUMP,149,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v377: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v347: (byte 2) */
  bytes2word(135,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(103),BOT(103))
,	/* v378: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v351: (byte 4) */
  bytes2word(POP_I1,JUMP,112,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v379: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v355: (byte 2) */
  bytes2word(98,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(104),BOT(104))
,	/* v380: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v359: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v381: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v363: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v382: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v367: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v383: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v371: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,10)
, bytes2word(HEAP_P1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v364: (byte 4) */
  bytes2word(6,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v356: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v348: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v340: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v332: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v328: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v324: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v384: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA317: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA317),3)
, CAPTAG(useLabel(FN_LAMBDA316),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v388)
,	/* FN_LAMBDA316: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,1,0)
,	/* CT_v388: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA316: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA316),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v439)
,	/* FN_LAMBDA315: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v430: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v396: (byte 2) */
  bytes2word(172,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(76),BOT(76))
,	/* v431: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v400: (byte 4) */
  bytes2word(POP_I1,JUMP,149,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v432: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v404: (byte 2) */
  bytes2word(135,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(101),BOT(101))
,	/* v433: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v408: (byte 4) */
  bytes2word(POP_I1,JUMP,112,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v434: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v412: (byte 2) */
  bytes2word(98,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(102),BOT(102))
,	/* v435: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v416: (byte 4) */
  bytes2word(POP_I1,JUMP,75,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v436: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v420: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(116),BOT(116))
,	/* v437: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v424: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v438: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v428: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,10)
, bytes2word(HEAP_P1,9,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v421: (byte 4) */
  bytes2word(6,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v413: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v405: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v397: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v393: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v389: (byte 1) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v439: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA315: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA315),3)
, CAPTAG(useLabel(FN_LAMBDA314),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v443)
,	/* FN_LAMBDA314: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,1,0)
,	/* CT_v443: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA314: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA314),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v444)
,};
Node FN_Prelude_46Read_46Prelude_46Either_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v444: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readList),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v445)
,};
Node FN_Prelude_46Read_46Prelude_46Either[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v445: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either),2)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Either_46readList))
,};

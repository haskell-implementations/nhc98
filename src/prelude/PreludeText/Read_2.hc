#include "newmacros.h"
#include "runtime.h"

#define CT_v310	((void*)startLabel+40)
#define FN_LAMBDA306	((void*)startLabel+72)
#define CT_v311	((void*)startLabel+104)
#define F0_LAMBDA306	((void*)startLabel+112)
#define FN_LAMBDA305	((void*)startLabel+144)
#define v329	((void*)startLabel+158)
#define v319	((void*)startLabel+162)
#define v330	((void*)startLabel+176)
#define v323	((void*)startLabel+180)
#define v331	((void*)startLabel+190)
#define v327	((void*)startLabel+194)
#define v320	((void*)startLabel+216)
#define v316	((void*)startLabel+221)
#define v312	((void*)startLabel+226)
#define CT_v332	((void*)startLabel+236)
#define F0_LAMBDA305	((void*)startLabel+244)
#define FN_LAMBDA304	((void*)startLabel+276)
#define CT_v336	((void*)startLabel+304)
#define F0_LAMBDA304	((void*)startLabel+312)
#define FN_LAMBDA303	((void*)startLabel+344)
#define v354	((void*)startLabel+358)
#define v344	((void*)startLabel+362)
#define v355	((void*)startLabel+376)
#define v348	((void*)startLabel+380)
#define v356	((void*)startLabel+390)
#define v352	((void*)startLabel+394)
#define v345	((void*)startLabel+416)
#define v341	((void*)startLabel+421)
#define v337	((void*)startLabel+426)
#define CT_v357	((void*)startLabel+436)
#define F0_LAMBDA303	((void*)startLabel+444)
#define FN_LAMBDA302	((void*)startLabel+476)
#define CT_v361	((void*)startLabel+504)
#define F0_LAMBDA302	((void*)startLabel+512)
#define FN_LAMBDA301	((void*)startLabel+544)
#define v379	((void*)startLabel+558)
#define v369	((void*)startLabel+562)
#define v380	((void*)startLabel+576)
#define v373	((void*)startLabel+580)
#define v381	((void*)startLabel+590)
#define v377	((void*)startLabel+594)
#define v370	((void*)startLabel+614)
#define v366	((void*)startLabel+619)
#define v362	((void*)startLabel+624)
#define CT_v382	((void*)startLabel+640)
#define F0_LAMBDA301	((void*)startLabel+648)
#define CT_v383	((void*)startLabel+680)
#define CT_v384	((void*)startLabel+744)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_462[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v310)
,};
Node FN_Prelude_46Read_46Prelude_462_46readsPrec[] = {
  bytes2word(ZAP_ARG_I3,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,2,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v310: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_462_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462_46readsPrec),3)
, CAPTAG(useLabel(FN_LAMBDA306),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v311)
,	/* FN_LAMBDA306: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v311: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA306: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA306),3)
, CAPTAG(useLabel(FN_LAMBDA305),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v332)
,	/* FN_LAMBDA305: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v329: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v319: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(40),BOT(40))
,	/* v330: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v323: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v331: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v327: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v320: (byte 4) */
  bytes2word(5,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v316: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v312: (byte 2) */
  bytes2word(2,0,PUSH_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v332: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA305: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA305),4)
, CAPTAG(useLabel(FN_LAMBDA304),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v336)
,	/* FN_LAMBDA304: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v336: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA304: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA304),3)
, CAPTAG(useLabel(FN_LAMBDA303),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v357)
,	/* FN_LAMBDA303: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v354: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v344: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(44),BOT(44))
,	/* v355: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v348: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v356: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v352: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v345: (byte 4) */
  bytes2word(5,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v341: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v337: (byte 2) */
  bytes2word(2,0,PUSH_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v357: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA303: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA303),4)
, CAPTAG(useLabel(FN_LAMBDA302),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v361)
,	/* FN_LAMBDA302: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v361: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA302: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA302),3)
, CAPTAG(useLabel(FN_LAMBDA301),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v382)
,	/* FN_LAMBDA301: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v379: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v369: (byte 2) */
  bytes2word(59,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(41),BOT(41))
,	/* v380: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v373: (byte 4) */
  bytes2word(POP_I1,JUMP,36,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v381: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v377: (byte 2) */
  bytes2word(22,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v370: (byte 2) */
  bytes2word(4,RETURN,POP_P1,2)
,	/* v366: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v362: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v382: (byte 0) */
  HW(0,4)
, 0
,	/* F0_LAMBDA301: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA301),4)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v383)
,};
Node FN_Prelude_46Read_46Prelude_462_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v383: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_462_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462_46readList),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v384)
,};
Node FN_Prelude_46Read_46Prelude_462[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v384: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462),2)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462_46readList))
,};

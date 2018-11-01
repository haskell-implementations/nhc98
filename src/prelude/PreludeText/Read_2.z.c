#include "newmacros.h"
#include "runtime.h"

#define CT_v311	((void*)startLabel+52)
#define FN_LAMBDA306	((void*)startLabel+84)
#define CT_v313	((void*)startLabel+128)
#define F0_LAMBDA306	((void*)startLabel+136)
#define FN_LAMBDA305	((void*)startLabel+168)
#define v332	((void*)startLabel+186)
#define v321	((void*)startLabel+190)
#define v333	((void*)startLabel+204)
#define v325	((void*)startLabel+208)
#define v334	((void*)startLabel+218)
#define v329	((void*)startLabel+222)
#define v322	((void*)startLabel+244)
#define v318	((void*)startLabel+249)
#define v314	((void*)startLabel+254)
#define CT_v335	((void*)startLabel+272)
#define F0_LAMBDA305	((void*)startLabel+280)
#define FN_LAMBDA304	((void*)startLabel+312)
#define CT_v339	((void*)startLabel+352)
#define F0_LAMBDA304	((void*)startLabel+360)
#define FN_LAMBDA303	((void*)startLabel+392)
#define v357	((void*)startLabel+410)
#define v347	((void*)startLabel+414)
#define v358	((void*)startLabel+428)
#define v351	((void*)startLabel+432)
#define v359	((void*)startLabel+442)
#define v355	((void*)startLabel+446)
#define v348	((void*)startLabel+468)
#define v344	((void*)startLabel+473)
#define v340	((void*)startLabel+478)
#define CT_v360	((void*)startLabel+496)
#define F0_LAMBDA303	((void*)startLabel+504)
#define FN_LAMBDA302	((void*)startLabel+536)
#define CT_v364	((void*)startLabel+576)
#define F0_LAMBDA302	((void*)startLabel+584)
#define FN_LAMBDA301	((void*)startLabel+616)
#define v382	((void*)startLabel+634)
#define v372	((void*)startLabel+638)
#define v383	((void*)startLabel+652)
#define v376	((void*)startLabel+656)
#define v384	((void*)startLabel+666)
#define v380	((void*)startLabel+670)
#define v373	((void*)startLabel+688)
#define v369	((void*)startLabel+693)
#define v365	((void*)startLabel+698)
#define CT_v385	((void*)startLabel+724)
#define F0_LAMBDA301	((void*)startLabel+732)
#define CT_v387	((void*)startLabel+776)
#define CT_v389	((void*)startLabel+852)
#define ST_v388	((void*)startLabel+872)
#define ST_v386	((void*)startLabel+895)
#define ST_v310	((void*)startLabel+927)
#define ST_v312	((void*)startLabel+960)
#define ST_v330	((void*)startLabel+1003)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_462[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v311)
,};
Node FN_Prelude_46Read_46Prelude_462_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I3,NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,2,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40005
, useLabel(ST_v310)
,	/* CT_v311: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Read_46Prelude_462_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462_46readsPrec),3)
, CAPTAG(useLabel(FN_LAMBDA306),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v313)
,	/* FN_LAMBDA306: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50030
, useLabel(ST_v312)
,	/* CT_v313: (byte 0) */
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
, useLabel(CT_v335)
,	/* FN_LAMBDA305: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v332: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v321: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(40),BOT(40))
,	/* v333: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v325: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v334: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v329: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v322: (byte 4) */
  bytes2word(5,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v318: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v314: (byte 2) */
  bytes2word(2,0,PUSH_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50036
, useLabel(ST_v330)
,	/* CT_v335: (byte 0) */
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
, useLabel(CT_v339)
,	/* FN_LAMBDA304: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50036
, useLabel(ST_v330)
,	/* CT_v339: (byte 0) */
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
, useLabel(CT_v360)
,	/* FN_LAMBDA303: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v357: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v347: (byte 2) */
  bytes2word(61,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(44),BOT(44))
,	/* v358: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v351: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v359: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v355: (byte 2) */
  bytes2word(24,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
,	/* v348: (byte 4) */
  bytes2word(5,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v344: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v340: (byte 2) */
  bytes2word(2,0,PUSH_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50036
, useLabel(ST_v330)
,	/* CT_v360: (byte 0) */
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
, useLabel(CT_v364)
,	/* FN_LAMBDA302: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50036
, useLabel(ST_v330)
,	/* CT_v364: (byte 0) */
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
, useLabel(CT_v385)
,	/* FN_LAMBDA301: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v382: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v372: (byte 2) */
  bytes2word(57,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(41),BOT(41))
,	/* v383: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v376: (byte 4) */
  bytes2word(POP_I1,JUMP,34,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v384: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v380: (byte 2) */
  bytes2word(20,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,4,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
,	/* v373: (byte 4) */
  bytes2word(4,HEAP_ARG,4,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v369: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v365: (byte 2) */
  bytes2word(2,0,PUSH_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 50036
, useLabel(ST_v330)
,	/* CT_v385: (byte 0) */
  HW(0,4)
, 0
,	/* F0_LAMBDA301: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA301),4)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v387)
,};
Node FN_Prelude_46Read_46Prelude_462_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30031
, useLabel(ST_v386)
,	/* CT_v387: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_462_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462_46readList),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v389)
,};
Node FN_Prelude_46Read_46Prelude_462[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30031
, useLabel(ST_v388)
,	/* CT_v389: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462),2)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_462_46readList))
,	/* ST_v388: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v386: (byte 3) */
  bytes2word(46,50,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v310: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v312: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,50,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,51)
, bytes2word(48,45,57,58)
,	/* ST_v330: (byte 3) */
  bytes2word(54,55,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,114,101)
, bytes2word(97,100,115,80)
, bytes2word(114,101,99,58)
, bytes2word(53,58,51,54)
, bytes2word(45,57,58,54)
, bytes2word(55,0,0,0)
,};

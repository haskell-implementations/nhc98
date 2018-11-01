#include "newmacros.h"
#include "runtime.h"

#define CT_v288	((void*)startLabel+36)
#define FN_LAMBDA284	((void*)startLabel+72)
#define CT_v289	((void*)startLabel+112)
#define F0_LAMBDA284	((void*)startLabel+120)
#define FN_LAMBDA283	((void*)startLabel+152)
#define CT_v293	((void*)startLabel+180)
#define F0_LAMBDA283	((void*)startLabel+188)
#define FN_LAMBDA282	((void*)startLabel+220)
#define v319	((void*)startLabel+236)
#define v301	((void*)startLabel+240)
#define v320	((void*)startLabel+254)
#define v305	((void*)startLabel+258)
#define v321	((void*)startLabel+268)
#define v309	((void*)startLabel+272)
#define v322	((void*)startLabel+286)
#define v313	((void*)startLabel+290)
#define v323	((void*)startLabel+300)
#define v317	((void*)startLabel+304)
#define v310	((void*)startLabel+329)
#define v302	((void*)startLabel+334)
#define v298	((void*)startLabel+339)
#define v294	((void*)startLabel+344)
#define CT_v324	((void*)startLabel+352)
#define F0_LAMBDA282	((void*)startLabel+360)
#define FN_LAMBDA281	((void*)startLabel+396)
#define CT_v328	((void*)startLabel+436)
#define F0_LAMBDA281	((void*)startLabel+444)
#define FN_LAMBDA280	((void*)startLabel+464)
#define CT_v329	((void*)startLabel+492)
#define F0_LAMBDA280	((void*)startLabel+500)
#define CT_v330	((void*)startLabel+532)
#define CT_v331	((void*)startLabel+596)
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62_61[];
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46Read_46Complex_46Complex[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v288)
,};
Node FN_Prelude_46Read_46Complex_46Complex_46readsPrec[] = {
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(3,HEAP_INT_P1,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v288: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Read_46Complex_46Complex_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex_46readsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62_61))
, CAPTAG(useLabel(FN_LAMBDA284),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v289)
,	/* FN_LAMBDA284: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v289: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA284: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA284),2)
, CAPTAG(useLabel(FN_LAMBDA283),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v293)
,	/* FN_LAMBDA283: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_I1,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v293: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA283: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA283),3)
, CAPTAG(useLabel(FN_LAMBDA282),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v324)
,	/* FN_LAMBDA282: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v319: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v301: (byte 4) */
  bytes2word(POP_I1,JUMP,101,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(58),BOT(58),TOP(10),BOT(10))
,	/* v320: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v305: (byte 2) */
  bytes2word(78,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v321: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v309: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(43),BOT(43),TOP(10),BOT(10))
,	/* v322: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v313: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v323: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v317: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_INT_P1)
, bytes2word(6,HEAP_P1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,6,HEAP_ARG,5)
,	/* v310: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v302: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v298: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v294: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v324: (byte 0) */
  HW(4,5)
, 0
,	/* F0_LAMBDA282: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA282),5)
, CAPTAG(useLabel(FN_LAMBDA281),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v328)
,	/* FN_LAMBDA281: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v328: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA281: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA281),4)
, VAPTAG(useLabel(FN_LAMBDA280))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v329)
,	/* FN_LAMBDA280: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v329: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA280: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA280),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v330)
,};
Node FN_Prelude_46Read_46Complex_46Complex_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v330: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Complex_46Complex_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex_46readList),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v331)
,};
Node FN_Prelude_46Read_46Complex_46Complex[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v331: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Read_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex),2)
, CAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Complex_46Complex_46readList))
,};

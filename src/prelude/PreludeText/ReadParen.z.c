#include "newmacros.h"
#include "runtime.h"

#define v248	((void*)startLabel+28)
#define CT_v251	((void*)startLabel+48)
#define FN_Prelude_46Prelude_46167_46optional	((void*)startLabel+80)
#define CT_v253	((void*)startLabel+120)
#define F0_Prelude_46Prelude_46167_46optional	((void*)startLabel+128)
#define FN_Prelude_46Prelude_46168_46mandatory	((void*)startLabel+156)
#define CT_v255	((void*)startLabel+200)
#define F0_Prelude_46Prelude_46168_46mandatory	((void*)startLabel+208)
#define FN_LAMBDA246	((void*)startLabel+236)
#define v274	((void*)startLabel+254)
#define v263	((void*)startLabel+258)
#define v275	((void*)startLabel+272)
#define v267	((void*)startLabel+276)
#define v276	((void*)startLabel+286)
#define v271	((void*)startLabel+290)
#define v264	((void*)startLabel+310)
#define v260	((void*)startLabel+315)
#define v256	((void*)startLabel+320)
#define CT_v277	((void*)startLabel+336)
#define F0_LAMBDA246	((void*)startLabel+344)
#define FN_LAMBDA245	((void*)startLabel+376)
#define CT_v281	((void*)startLabel+416)
#define F0_LAMBDA245	((void*)startLabel+424)
#define FN_LAMBDA244	((void*)startLabel+452)
#define v299	((void*)startLabel+470)
#define v289	((void*)startLabel+474)
#define v300	((void*)startLabel+488)
#define v293	((void*)startLabel+492)
#define v301	((void*)startLabel+502)
#define v297	((void*)startLabel+506)
#define v290	((void*)startLabel+520)
#define v286	((void*)startLabel+525)
#define v282	((void*)startLabel+530)
#define CT_v302	((void*)startLabel+556)
#define F0_LAMBDA244	((void*)startLabel+564)
#define ST_v250	((void*)startLabel+568)
#define ST_v252	((void*)startLabel+586)
#define ST_v254	((void*)startLabel+614)
#define ST_v272	((void*)startLabel+643)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v251)
,};
Node FN_Prelude_46readParen[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,7,0,PUSH_HEAP)
,	/* v248: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v250)
,	/* CT_v251: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46readParen[] = {
  CAPTAG(useLabel(FN_Prelude_46readParen),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46168_46mandatory),1)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46optional),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v253)
,	/* FN_Prelude_46Prelude_46167_46optional: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80026
, useLabel(ST_v252)
,	/* CT_v253: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Prelude_46Prelude_46167_46optional: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46optional),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46Prelude_46168_46mandatory),1)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v255)
,	/* FN_Prelude_46Prelude_46168_46mandatory: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 90026
, useLabel(ST_v254)
,	/* CT_v255: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Prelude_46Prelude_46168_46mandatory: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46168_46mandatory),2)
, CAPTAG(useLabel(FN_LAMBDA246),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v277)
,	/* FN_LAMBDA246: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v274: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v263: (byte 2) */
  bytes2word(59,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(40),BOT(40))
,	/* v275: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v267: (byte 4) */
  bytes2word(POP_I1,JUMP,36,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v276: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v271: (byte 2) */
  bytes2word(22,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v264: (byte 2) */
  bytes2word(3,RETURN_EVAL,POP_P1,2)
,	/* v260: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v256: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90040
, useLabel(ST_v272)
,	/* CT_v277: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),3)
, CAPTAG(useLabel(FN_LAMBDA245),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46optional),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v281)
,	/* FN_LAMBDA245: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90040
, useLabel(ST_v272)
,	/* CT_v281: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA245: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA245),2)
, CAPTAG(useLabel(FN_LAMBDA244),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v302)
,	/* FN_LAMBDA244: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v299: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v289: (byte 2) */
  bytes2word(53,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(41),BOT(41))
,	/* v300: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v293: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v301: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v297: (byte 2) */
  bytes2word(16,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_ARG,1,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
,	/* v290: (byte 4) */
  bytes2word(4,HEAP_ARG,3,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v286: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v282: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 90040
, useLabel(ST_v272)
,	/* CT_v302: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA244: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA244),3)
,	/* ST_v250: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(80,97,114,101)
,	/* ST_v252: (byte 2) */
  bytes2word(110,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,114,101)
, bytes2word(97,100,80,97)
, bytes2word(114,101,110,58)
, bytes2word(56,58,50,54)
, bytes2word(45,56,58,53)
,	/* ST_v254: (byte 2) */
  bytes2word(55,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,114,101)
, bytes2word(97,100,80,97)
, bytes2word(114,101,110,58)
, bytes2word(57,58,50,54)
, bytes2word(45,49,49,58)
,	/* ST_v272: (byte 3) */
  bytes2word(54,57,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,114)
, bytes2word(101,97,100,80)
, bytes2word(97,114,101,110)
, bytes2word(58,57,58,52)
, bytes2word(48,45,49,49)
, bytes2word(58,54,57,0)
,};

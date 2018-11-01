#include "newmacros.h"
#include "runtime.h"

#define v248	((void*)startLabel+24)
#define CT_v250	((void*)startLabel+36)
#define FN_Prelude_46Prelude_46167_46optional	((void*)startLabel+68)
#define CT_v251	((void*)startLabel+96)
#define F0_Prelude_46Prelude_46167_46optional	((void*)startLabel+104)
#define FN_Prelude_46Prelude_46168_46mandatory	((void*)startLabel+132)
#define CT_v252	((void*)startLabel+164)
#define F0_Prelude_46Prelude_46168_46mandatory	((void*)startLabel+172)
#define FN_LAMBDA246	((void*)startLabel+200)
#define v270	((void*)startLabel+214)
#define v260	((void*)startLabel+218)
#define v271	((void*)startLabel+232)
#define v264	((void*)startLabel+236)
#define v272	((void*)startLabel+246)
#define v268	((void*)startLabel+250)
#define v261	((void*)startLabel+270)
#define v257	((void*)startLabel+275)
#define v253	((void*)startLabel+280)
#define CT_v273	((void*)startLabel+288)
#define F0_LAMBDA246	((void*)startLabel+296)
#define FN_LAMBDA245	((void*)startLabel+328)
#define CT_v277	((void*)startLabel+356)
#define F0_LAMBDA245	((void*)startLabel+364)
#define FN_LAMBDA244	((void*)startLabel+392)
#define v295	((void*)startLabel+406)
#define v285	((void*)startLabel+410)
#define v296	((void*)startLabel+424)
#define v289	((void*)startLabel+428)
#define v297	((void*)startLabel+438)
#define v293	((void*)startLabel+442)
#define v286	((void*)startLabel+457)
#define v282	((void*)startLabel+462)
#define v278	((void*)startLabel+467)
#define CT_v298	((void*)startLabel+484)
#define F0_LAMBDA244	((void*)startLabel+492)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v250)
,};
Node FN_Prelude_46readParen[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,7,0,PUSH_HEAP)
,	/* v248: (byte 4) */
  bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v250: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46readParen[] = {
  CAPTAG(useLabel(FN_Prelude_46readParen),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46168_46mandatory),1)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46optional),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v251)
,	/* FN_Prelude_46Prelude_46167_46optional: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Prelude_46Prelude_46167_46optional: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46optional),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46Prelude_46168_46mandatory),1)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,	/* FN_Prelude_46Prelude_46168_46mandatory: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v252: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Prelude_46Prelude_46168_46mandatory: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46168_46mandatory),2)
, CAPTAG(useLabel(FN_LAMBDA246),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v273)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v270: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v260: (byte 2) */
  bytes2word(59,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(40),BOT(40))
,	/* v271: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v264: (byte 4) */
  bytes2word(POP_I1,JUMP,36,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v272: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v268: (byte 2) */
  bytes2word(22,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v261: (byte 2) */
  bytes2word(3,RETURN_EVAL,POP_P1,2)
,	/* v257: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v253: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v273: (byte 0) */
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
, useLabel(CT_v277)
,	/* FN_LAMBDA245: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v277: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA245: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA245),2)
, CAPTAG(useLabel(FN_LAMBDA244),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v298)
,	/* FN_LAMBDA244: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v295: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v285: (byte 2) */
  bytes2word(54,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(41),BOT(41))
,	/* v296: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v289: (byte 4) */
  bytes2word(POP_I1,JUMP,31,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v297: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v293: (byte 2) */
  bytes2word(17,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG,1,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
,	/* v286: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v282: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v278: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG_I3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v298: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA244: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA244),3)
,};

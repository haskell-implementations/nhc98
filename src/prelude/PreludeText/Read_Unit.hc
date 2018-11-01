#include "newmacros.h"
#include "runtime.h"

#define CT_v221	((void*)startLabel+36)
#define FN_LAMBDA219	((void*)startLabel+64)
#define CT_v222	((void*)startLabel+96)
#define F0_LAMBDA219	((void*)startLabel+104)
#define FN_LAMBDA218	((void*)startLabel+132)
#define v240	((void*)startLabel+146)
#define v230	((void*)startLabel+150)
#define v241	((void*)startLabel+164)
#define v234	((void*)startLabel+168)
#define v242	((void*)startLabel+178)
#define v238	((void*)startLabel+182)
#define v231	((void*)startLabel+196)
#define v227	((void*)startLabel+201)
#define v223	((void*)startLabel+206)
#define CT_v243	((void*)startLabel+216)
#define F0_LAMBDA218	((void*)startLabel+224)
#define FN_LAMBDA217	((void*)startLabel+252)
#define v261	((void*)startLabel+266)
#define v251	((void*)startLabel+270)
#define v262	((void*)startLabel+284)
#define v255	((void*)startLabel+288)
#define v263	((void*)startLabel+298)
#define v259	((void*)startLabel+302)
#define v252	((void*)startLabel+318)
#define v248	((void*)startLabel+323)
#define v244	((void*)startLabel+328)
#define CT_v264	((void*)startLabel+352)
#define F0_LAMBDA217	((void*)startLabel+360)
#define CT_v265	((void*)startLabel+384)
#define CT_v266	((void*)startLabel+432)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46_40_41[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v221)
,};
Node FN_Prelude_46Read_46_40_41_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v221: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46_40_41_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46_40_41_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA219),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v222)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v222: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),1)
, CAPTAG(useLabel(FN_LAMBDA218),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v243)
,	/* FN_LAMBDA218: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v240: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v230: (byte 2) */
  bytes2word(53,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(40),BOT(40))
,	/* v241: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v234: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v242: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v238: (byte 2) */
  bytes2word(16,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_OFF_N1)
,	/* v231: (byte 4) */
  bytes2word(4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v227: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v223: (byte 2) */
  bytes2word(2,0,PUSH_ARG_I2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v243: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA218: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA218),2)
, CAPTAG(useLabel(FN_LAMBDA217),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,	/* FN_LAMBDA217: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v261: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v251: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(41),BOT(41))
,	/* v262: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v255: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v263: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v259: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v252: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v248: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v244: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v264: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA217: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA217),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v265)
,};
Node FN_Prelude_46Read_46_40_41_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46_40_41_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46_40_41_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Read_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v266: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46_40_41))
, useLabel(F0_Prelude_46Read_46_40_41_46readsPrec)
, useLabel(CF_Prelude_46Read_46_40_41_46readList)
,};

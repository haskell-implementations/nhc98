#include "newmacros.h"
#include "runtime.h"

#define CT_v256	((void*)startLabel+36)
#define FN_LAMBDA254	((void*)startLabel+64)
#define CT_v257	((void*)startLabel+136)
#define F0_LAMBDA254	((void*)startLabel+144)
#define FN_LAMBDA253	((void*)startLabel+184)
#define v283	((void*)startLabel+198)
#define v265	((void*)startLabel+202)
#define v284	((void*)startLabel+216)
#define v269	((void*)startLabel+220)
#define v285	((void*)startLabel+230)
#define v273	((void*)startLabel+234)
#define v286	((void*)startLabel+248)
#define v277	((void*)startLabel+252)
#define v287	((void*)startLabel+262)
#define v281	((void*)startLabel+266)
#define v274	((void*)startLabel+282)
#define v266	((void*)startLabel+287)
#define v262	((void*)startLabel+292)
#define v258	((void*)startLabel+297)
#define CT_v288	((void*)startLabel+320)
#define F0_LAMBDA253	((void*)startLabel+328)
#define FN_LAMBDA252	((void*)startLabel+344)
#define v314	((void*)startLabel+358)
#define v296	((void*)startLabel+362)
#define v315	((void*)startLabel+376)
#define v300	((void*)startLabel+380)
#define v316	((void*)startLabel+390)
#define v304	((void*)startLabel+394)
#define v317	((void*)startLabel+408)
#define v308	((void*)startLabel+412)
#define v318	((void*)startLabel+422)
#define v312	((void*)startLabel+426)
#define v305	((void*)startLabel+442)
#define v297	((void*)startLabel+447)
#define v293	((void*)startLabel+452)
#define v289	((void*)startLabel+457)
#define CT_v319	((void*)startLabel+480)
#define F0_LAMBDA252	((void*)startLabel+488)
#define FN_LAMBDA251	((void*)startLabel+504)
#define v345	((void*)startLabel+518)
#define v327	((void*)startLabel+522)
#define v346	((void*)startLabel+536)
#define v331	((void*)startLabel+540)
#define v347	((void*)startLabel+550)
#define v335	((void*)startLabel+554)
#define v348	((void*)startLabel+568)
#define v339	((void*)startLabel+572)
#define v349	((void*)startLabel+582)
#define v343	((void*)startLabel+586)
#define v336	((void*)startLabel+602)
#define v328	((void*)startLabel+607)
#define v324	((void*)startLabel+612)
#define v320	((void*)startLabel+617)
#define CT_v350	((void*)startLabel+640)
#define F0_LAMBDA251	((void*)startLabel+648)
#define CT_v351	((void*)startLabel+672)
#define CT_v352	((void*)startLabel+720)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Ordering[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering_46readsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v256: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Ordering_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA254),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(1,0,0,1)
, useLabel(CT_v257)
,	/* FN_LAMBDA254: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(24,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v257: (byte 0) */
  HW(6,1)
, 0
,	/* F0_LAMBDA254: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA254),1)
, CAPTAG(useLabel(FN_LAMBDA251),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, CAPTAG(useLabel(FN_LAMBDA252),2)
, CAPTAG(useLabel(FN_LAMBDA253),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v288)
,	/* FN_LAMBDA253: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v283: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v265: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(71),BOT(71))
,	/* v284: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v269: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v285: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v273: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(84),BOT(84))
,	/* v286: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v277: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v287: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v281: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v274: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v266: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v262: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v258: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(2,0,0)
,	/* CT_v288: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA253: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA253),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v319)
,	/* FN_LAMBDA252: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v314: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v296: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(69),BOT(69))
,	/* v315: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v300: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v316: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v304: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(81),BOT(81))
,	/* v317: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v308: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v318: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v312: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v305: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v297: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v293: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v289: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(1,0,0)
,	/* CT_v319: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v350)
,	/* FN_LAMBDA251: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v345: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v327: (byte 2) */
  bytes2word(92,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(76),BOT(76))
,	/* v346: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v331: (byte 4) */
  bytes2word(POP_I1,JUMP,69,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v347: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v335: (byte 2) */
  bytes2word(55,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,LOOKUPSWITCH)
, bytes2word(1,NOP,TOP(84),BOT(84))
,	/* v348: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v339: (byte 4) */
  bytes2word(POP_I1,JUMP,32,0)
, bytes2word(POP_I1,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v349: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v343: (byte 2) */
  bytes2word(18,0,POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_ARG)
,	/* v336: (byte 2) */
  bytes2word(2,RETURN,POP_P1,2)
,	/* v328: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v324: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v320: (byte 1) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v350: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA251: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA251),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v351)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v351: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Ordering_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v352)
,};
Node FN_Prelude_46Read_46Prelude_46Ordering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v352: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Ordering))
, useLabel(F0_Prelude_46Read_46Prelude_46Ordering_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Ordering_46readList)
,};

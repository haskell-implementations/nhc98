#include "newmacros.h"
#include "runtime.h"

#define v255	((void*)startLabel+24)
#define v271	((void*)startLabel+36)
#define v259	((void*)startLabel+40)
#define v256	((void*)startLabel+45)
#define v260	((void*)startLabel+49)
#define v262	((void*)startLabel+62)
#define v263	((void*)startLabel+66)
#define v264	((void*)startLabel+71)
#define v265	((void*)startLabel+76)
#define v273	((void*)startLabel+88)
#define v269	((void*)startLabel+92)
#define v252	((void*)startLabel+97)
#define CT_v274	((void*)startLabel+124)
#define FN_LAMBDA250	((void*)startLabel+152)
#define CT_v276	((void*)startLabel+172)
#define CF_LAMBDA250	((void*)startLabel+180)
#define CT_v277	((void*)startLabel+208)
#define CT_v278	((void*)startLabel+252)
#define CT_v279	((void*)startLabel+296)
#define CT_v280	((void*)startLabel+340)
#define CT_v281	((void*)startLabel+384)
#define CT_v282	((void*)startLabel+428)
#define CT_v283	((void*)startLabel+488)
#define ST_v275	((void*)startLabel+532)
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Ordering[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Ordering[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v255: (byte 4) */
  bytes2word(TOP(31),BOT(31),TOP(58),BOT(58))
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(10),BOT(10))
,	/* v271: (byte 4) */
  bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v259: (byte 4) */
  bytes2word(POP_I1,JUMP,7,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v256: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v260: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v262: (byte 2) */
  bytes2word(TOP(15),BOT(15),POP_I1,PUSH_HEAP)
,	/* v263: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_HEAP)
,	/* v264: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
,	/* v265: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(POP_I1,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v273: (byte 4) */
  bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v269: (byte 4) */
  bytes2word(POP_I1,JUMP,7,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v252: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v274: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46compare),2)
, VAPTAG(useLabel(FN_LAMBDA250))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v276)
,	/* FN_LAMBDA250: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v275)
,	/* CT_v276: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA250: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA250))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v277: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v278: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v279: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v280)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v280: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v281: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v282: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v283)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v283: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering))
, useLabel(CF_Prelude_46Eq_46Prelude_46Ordering)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Ordering_46max)
,	/* ST_v275: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,79,114)
, bytes2word(100,95,79,114)
, bytes2word(100,101,114,105)
, bytes2word(110,103,46,104)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(52,58,51,45)
, bytes2word(49,48,58,50)
, bytes2word(49,46,0,0)
,};

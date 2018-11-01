#include "newmacros.h"
#include "runtime.h"

#define v255	((void*)startLabel+28)
#define v272	((void*)startLabel+40)
#define v259	((void*)startLabel+44)
#define v256	((void*)startLabel+48)
#define v260	((void*)startLabel+52)
#define v262	((void*)startLabel+64)
#define v263	((void*)startLabel+69)
#define v264	((void*)startLabel+73)
#define v265	((void*)startLabel+78)
#define v274	((void*)startLabel+90)
#define v269	((void*)startLabel+94)
#define v252	((void*)startLabel+98)
#define CT_v275	((void*)startLabel+136)
#define FN_LAMBDA250	((void*)startLabel+164)
#define CT_v278	((void*)startLabel+196)
#define CF_LAMBDA250	((void*)startLabel+204)
#define CT_v280	((void*)startLabel+244)
#define CT_v282	((void*)startLabel+300)
#define CT_v284	((void*)startLabel+356)
#define CT_v286	((void*)startLabel+412)
#define CT_v288	((void*)startLabel+468)
#define CT_v290	((void*)startLabel+524)
#define CT_v292	((void*)startLabel+596)
#define ST_v291	((void*)startLabel+640)
#define ST_v287	((void*)startLabel+669)
#define ST_v289	((void*)startLabel+700)
#define ST_v283	((void*)startLabel+732)
#define ST_v285	((void*)startLabel+763)
#define ST_v270	((void*)startLabel+795)
#define ST_v276	((void*)startLabel+832)
#define ST_v281	((void*)startLabel+879)
#define ST_v279	((void*)startLabel+912)
#define ST_v277	((void*)startLabel+945)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Prelude[];
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
, useLabel(CT_v275)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v255: (byte 4) */
  bytes2word(TOP(30),BOT(30),TOP(56),BOT(56))
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(10),BOT(10))
,	/* v272: (byte 4) */
  bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v259: (byte 4) */
  bytes2word(POP_I1,JUMP,6,0)
,	/* v256: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
,	/* v260: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(POP_I1,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v262: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(15),BOT(15))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,5)
,	/* v263: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_IN3)
,	/* v264: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v265: (byte 2) */
  bytes2word(4,RETURN,POP_I1,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v274: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v269: (byte 2) */
  bytes2word(6,0,POP_I1,PUSH_HEAP)
,	/* v252: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 40003
, useLabel(ST_v270)
,	/* CT_v275: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46compare),2)
, VAPTAG(useLabel(FN_LAMBDA250))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v278)
,	/* FN_LAMBDA250: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v277)
, 40003
, useLabel(ST_v276)
,	/* CT_v278: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA250: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA250))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v280)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v279)
,	/* CT_v280: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v281)
,	/* CT_v282: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v284)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v283)
,	/* CT_v284: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v286)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v285)
,	/* CT_v286: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v288)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v287)
,	/* CT_v288: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v290)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v289)
,	/* CT_v290: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Ordering_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Ordering_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v292)
,};
Node FN_Prelude_46Ord_46Prelude_46Ordering[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 30010
, useLabel(ST_v291)
,	/* CT_v292: (byte 0) */
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
,	/* ST_v291: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
,	/* ST_v287: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(101,114,105,110)
,	/* ST_v289: (byte 4) */
  bytes2word(103,46,60,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
,	/* ST_v283: (byte 4) */
  bytes2word(46,60,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
,	/* ST_v285: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
,	/* ST_v270: (byte 3) */
  bytes2word(62,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(99,111,109,112)
,	/* ST_v276: (byte 4) */
  bytes2word(97,114,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,99,111,109)
, bytes2word(112,97,114,101)
, bytes2word(58,52,58,51)
, bytes2word(45,49,48,58)
,	/* ST_v281: (byte 3) */
  bytes2word(50,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
,	/* ST_v279: (byte 4) */
  bytes2word(109,97,120,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,101)
, bytes2word(114,105,110,103)
, bytes2word(46,109,105,110)
,	/* ST_v277: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(58,46,47,79)
, bytes2word(114,100,95,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(104,115,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,52,58,51)
, bytes2word(45,49,48,58)
, bytes2word(50,49,46,0)
,};

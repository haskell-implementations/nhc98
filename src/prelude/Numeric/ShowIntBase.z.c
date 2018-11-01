#include "newmacros.h"
#include "runtime.h"

#define v268	((void*)startLabel+72)
#define v272	((void*)startLabel+193)
#define v270	((void*)startLabel+205)
#define CT_v275	((void*)startLabel+236)
#define FN_LAMBDA264	((void*)startLabel+336)
#define CT_v278	((void*)startLabel+368)
#define CF_LAMBDA264	((void*)startLabel+376)
#define FN_LAMBDA263	((void*)startLabel+388)
#define CT_v280	((void*)startLabel+412)
#define F0_LAMBDA263	((void*)startLabel+420)
#define FN_LAMBDA262	((void*)startLabel+432)
#define CT_v282	((void*)startLabel+456)
#define F0_LAMBDA262	((void*)startLabel+464)
#define FN_LAMBDA261	((void*)startLabel+476)
#define CT_v285	((void*)startLabel+508)
#define CF_LAMBDA261	((void*)startLabel+516)
#define CT_v287	((void*)startLabel+580)
#define CT_v289	((void*)startLabel+676)
#define CT_v291	((void*)startLabel+772)
#define ST_v286	((void*)startLabel+808)
#define ST_v290	((void*)startLabel+824)
#define ST_v274	((void*)startLabel+840)
#define ST_v284	((void*)startLabel+862)
#define ST_v276	((void*)startLabel+913)
#define ST_v283	((void*)startLabel+945)
#define ST_v281	((void*)startLabel+977)
#define ST_v279	((void*)startLabel+1009)
#define ST_v288	((void*)startLabel+1036)
#define ST_v277	((void*)startLabel+1052)
extern Node TM_Numeric[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46error[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_Prelude_46quotRem[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Numeric[];
extern Node F0_Char_46intToDigit[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v275)
,};
Node FN_Numeric_46showIntAtBase[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_P1,0,PUSH_ARG)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,SLIDE_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,10,0)
, bytes2word(HEAP_CVAL_P1,9,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v268: (byte 4) */
  bytes2word(10,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(PUSH_CVAL_P1,11,EVAL,NEEDHEAP_P1)
, bytes2word(41,JUMPFALSE,127,0)
, bytes2word(PUSH_HEAP,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(12,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG,4,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,16,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,3)
, bytes2word(PUSH_P1,0,PUSH_P1,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,18)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(19,HEAP_OFF_N1,3,ZAP_ARG)
, bytes2word(4,ZAP_ARG,5,ZAP_STACK_P1)
, bytes2word(9,ZAP_STACK_P1,8,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,5,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,SLIDE_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(5,0,PUSH_P1,0)
,	/* v272: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_P1,20)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,4,HEAP_I1)
,	/* v270: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,21,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,22,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTRW(0,0)
, 60001
, useLabel(ST_v274)
,	/* CT_v275: (byte 0) */
  HW(20,5)
, 0
,};
Node F0_Numeric_46showIntAtBase[] = {
  CAPTAG(useLabel(FN_Numeric_46showIntAtBase),5)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_LAMBDA261))
, VAPTAG(useLabel(FN_Prelude_46error))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_Prelude_46quotRem))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_LAMBDA262))
, VAPTAG(useLabel(FN_LAMBDA263))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Numeric_46showIntAtBase))
, VAPTAG(useLabel(FN_LAMBDA264))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v278)
,	/* FN_LAMBDA264: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v277)
, 60001
, useLabel(ST_v276)
,	/* CT_v278: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA264: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA264))
, bytes2word(1,0,0,1)
, useLabel(CT_v280)
,	/* FN_LAMBDA263: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90015
, useLabel(ST_v279)
,	/* CT_v280: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA263: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA263),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v282)
,	/* FN_LAMBDA262: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90012
, useLabel(ST_v281)
,	/* CT_v282: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA262: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA262),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v285)
,	/* FN_LAMBDA261: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v284)
, 70021
, useLabel(ST_v283)
,	/* CT_v285: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA261: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA261))
, bytes2word(1,0,0,1)
, useLabel(CT_v287)
,};
Node FN_Numeric_46showBin[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 2
, 160001
, useLabel(ST_v286)
,	/* CT_v287: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_Numeric_46showBin[] = {
  CAPTAG(useLabel(FN_Numeric_46showBin),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Numeric_46showIntAtBase),2)
, useLabel(F0_Char_46intToDigit)
, bytes2word(1,0,0,1)
, useLabel(CT_v289)
,};
Node FN_Numeric_46showOct[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 8
, 150001
, useLabel(ST_v288)
,	/* CT_v289: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_Numeric_46showOct[] = {
  CAPTAG(useLabel(FN_Numeric_46showOct),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Numeric_46showIntAtBase),2)
, useLabel(F0_Char_46intToDigit)
, bytes2word(1,0,0,1)
, useLabel(CT_v291)
,};
Node FN_Numeric_46showHex[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 16
, 140001
, useLabel(ST_v290)
,	/* CT_v291: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_Numeric_46showHex[] = {
  CAPTAG(useLabel(FN_Numeric_46showHex),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Numeric_46showIntAtBase),2)
, useLabel(F0_Char_46intToDigit)
,	/* ST_v286: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
,	/* ST_v290: (byte 4) */
  bytes2word(66,105,110,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
,	/* ST_v274: (byte 4) */
  bytes2word(72,101,120,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
, bytes2word(73,110,116,65)
, bytes2word(116,66,97,115)
,	/* ST_v284: (byte 2) */
  bytes2word(101,0,78,117)
, bytes2word(109,101,114,105)
, bytes2word(99,46,115,104)
, bytes2word(111,119,73,110)
, bytes2word(116,65,116,66)
, bytes2word(97,115,101,58)
, bytes2word(32,99,97,110)
, bytes2word(39,116,32,115)
, bytes2word(104,111,119,32)
, bytes2word(110,101,103,97)
, bytes2word(116,105,118,101)
, bytes2word(32,110,117,109)
, bytes2word(98,101,114,115)
,	/* ST_v276: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,115,104,111)
, bytes2word(119,73,110,116)
, bytes2word(65,116,66,97)
, bytes2word(115,101,58,54)
, bytes2word(58,49,45,49)
, bytes2word(49,58,54,54)
,	/* ST_v283: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,115,104,111)
, bytes2word(119,73,110,116)
, bytes2word(65,116,66,97)
, bytes2word(115,101,58,55)
, bytes2word(58,50,49,45)
, bytes2word(55,58,55,50)
,	/* ST_v281: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,115,104,111)
, bytes2word(119,73,110,116)
, bytes2word(65,116,66,97)
, bytes2word(115,101,58,57)
, bytes2word(58,49,50,45)
, bytes2word(57,58,49,51)
,	/* ST_v279: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,115,104,111)
, bytes2word(119,73,110,116)
, bytes2word(65,116,66,97)
, bytes2word(115,101,58,57)
,	/* ST_v288: (byte 4) */
  bytes2word(58,49,53,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
,	/* ST_v277: (byte 4) */
  bytes2word(79,99,116,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,54,58)
, bytes2word(49,45,49,49)
, bytes2word(58,54,54,46)
, bytes2word(0,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v273	((void*)startLabel+84)
#define FN_Prelude_46Prelude_46171_46f	((void*)startLabel+152)
#define v274	((void*)startLabel+238)
#define CT_v277	((void*)startLabel+268)
#define F0_Prelude_46Prelude_46171_46f	((void*)startLabel+276)
#define CT_v279	((void*)startLabel+376)
#define CT_v281	((void*)startLabel+420)
#define CT_v283	((void*)startLabel+484)
#define ST_v282	((void*)startLabel+512)
#define ST_v278	((void*)startLabel+546)
#define ST_v272	((void*)startLabel+582)
#define ST_v276	((void*)startLabel+629)
#define ST_v280	((void*)startLabel+688)
extern Node TM_Prelude[];
extern Node FN_Prelude_46asTypeOf[];
extern Node FN_Ratio_46numerator[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46Num_46Prelude_46Double_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Ratio_46denominator[];
extern Node FN_Prelude_46Fractional_46Prelude_46Double_46_47[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat[];
extern Node FN_Prelude_46snd[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node TMSUB_Prelude[];
extern Node CF_Prelude_46RealFloat_46Prelude_46Double[];
extern Node FN_Prelude_46floatRadix[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node FN_Ratio_46_37[];
extern Node FN_Prelude_46_94_94[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46round[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat[];
extern Node FN_Prelude_46_95_46recip[];
extern Node CF_Prelude_46Fractional_46Prelude_46Double[];
extern Node CF_Prelude_46Num_46Prelude_46Double[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Fractional_46Prelude_46Double_46fromRational[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_P1,16,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_P1,2,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,7,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 120003
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(11,1)
, 0
,};
Node F0_Prelude_46Fractional_46Prelude_46Double_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Double_46fromRational),1)
, VAPTAG(useLabel(FN_Prelude_46asTypeOf))
, VAPTAG(useLabel(FN_Ratio_46numerator))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Double_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46denominator))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Double_46_47))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat))
, VAPTAG(useLabel(FN_Prelude_46snd))
, CAPTAG(useLabel(FN_Prelude_46Prelude_46171_46f),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v277)
,	/* FN_Prelude_46Prelude_46171_46f: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CADR_N1,4,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(7,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,8,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,14)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,3,PUSH_ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,PUSH_I1,EVAL,NEEDHEAP_I32)
, bytes2word(EQ_W,JUMPFALSE,4,0)
,	/* v274: (byte 2) */
  bytes2word(PUSH_I1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(16,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
, 130011
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
  HW(14,3)
, 0
,	/* F0_Prelude_46Prelude_46171_46f: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46171_46f),3)
, useLabel(CF_Prelude_46RealFloat_46Prelude_46Double)
, VAPTAG(useLabel(FN_Prelude_46floatRadix))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Ratio_46_37))
, VAPTAG(useLabel(FN_Prelude_46_94_94))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat))
, VAPTAG(useLabel(FN_Prelude_46snd))
, VAPTAG(useLabel(FN_Prelude_46Prelude_46171_46f))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,};
Node FN_Prelude_46Fractional_46Prelude_46Double_46_47[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,SLASH_D,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100003
, useLabel(ST_v278)
,	/* CT_v279: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Fractional_46Prelude_46Double_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Double_46_47),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Fractional_46Prelude_46Double_46recip[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 90011
, useLabel(ST_v280)
,	/* CT_v281: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Fractional_46Prelude_46Double_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Double_46recip),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46recip))
, useLabel(CF_Prelude_46Fractional_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v283)
,};
Node FN_Prelude_46Fractional_46Prelude_46Double[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 90011
, useLabel(ST_v282)
,	/* CT_v283: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Fractional_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Double))
, useLabel(CF_Prelude_46Num_46Prelude_46Double)
, useLabel(F0_Prelude_46Fractional_46Prelude_46Double_46_47)
, useLabel(F0_Prelude_46Fractional_46Prelude_46Double_46fromRational)
, useLabel(F0_Prelude_46Fractional_46Prelude_46Double_46recip)
,	/* ST_v282: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,68)
, bytes2word(111,117,98,108)
,	/* ST_v278: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,70,114)
, bytes2word(97,99,116,105)
, bytes2word(111,110,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
,	/* ST_v272: (byte 2) */
  bytes2word(47,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,70,114)
, bytes2word(97,99,116,105)
, bytes2word(111,110,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(102,114,111,109)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
,	/* ST_v276: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,70,114,97)
, bytes2word(99,116,105,111)
, bytes2word(110,97,108,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(68,111,117,98)
, bytes2word(108,101,46,102)
, bytes2word(114,111,109,82)
, bytes2word(97,116,105,111)
, bytes2word(110,97,108,58)
, bytes2word(49,51,58,49)
, bytes2word(49,45,49,55)
,	/* ST_v280: (byte 4) */
  bytes2word(58,52,56,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,68)
, bytes2word(111,117,98,108)
, bytes2word(101,46,114,101)
, bytes2word(99,105,112,0)
,};

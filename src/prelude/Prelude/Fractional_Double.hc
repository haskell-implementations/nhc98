#include "newmacros.h"
#include "runtime.h"

#define CT_v272	((void*)startLabel+72)
#define FN_Prelude_46Prelude_46171_46f	((void*)startLabel+140)
#define v273	((void*)startLabel+222)
#define CT_v275	((void*)startLabel+244)
#define F0_Prelude_46Prelude_46171_46f	((void*)startLabel+252)
#define CT_v276	((void*)startLabel+340)
#define CT_v277	((void*)startLabel+372)
#define CT_v278	((void*)startLabel+424)
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
, useLabel(CT_v272)
,};
Node FN_Prelude_46Fractional_46Prelude_46Double_46fromRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
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
,	/* CT_v272: (byte 0) */
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
, useLabel(CT_v275)
,	/* FN_Prelude_46Prelude_46171_46f: (byte 0) */
  bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CADR_N1,2,HEAP_P1)
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
,	/* v273: (byte 2) */
  bytes2word(PUSH_I1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(16,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v275: (byte 0) */
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
, useLabel(CT_v276)
,};
Node FN_Prelude_46Fractional_46Prelude_46Double_46_47[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,SLASH_D,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v276: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Fractional_46Prelude_46Double_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Double_46_47),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Fractional_46Prelude_46Double_46recip[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v277: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Fractional_46Prelude_46Double_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Double_46recip),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46recip))
, useLabel(CF_Prelude_46Fractional_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Fractional_46Prelude_46Double[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v278: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Fractional_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Double))
, useLabel(CF_Prelude_46Num_46Prelude_46Double)
, useLabel(F0_Prelude_46Fractional_46Prelude_46Double_46_47)
, useLabel(F0_Prelude_46Fractional_46Prelude_46Double_46fromRational)
, useLabel(F0_Prelude_46Fractional_46Prelude_46Double_46recip)
,};

#include "newmacros.h"
#include "runtime.h"

#define FN_Numeric_46integerLogBase	((void*)startLabel+12)
#define v416	((void*)startLabel+26)
#define CT_v418	((void*)startLabel+72)
#define F0_Numeric_46integerLogBase	((void*)startLabel+80)
#define FN_Numeric_46Prelude_46193_46doDiv	((void*)startLabel+132)
#define v419	((void*)startLabel+145)
#define CT_v421	((void*)startLabel+172)
#define F0_Numeric_46Prelude_46193_46doDiv	((void*)startLabel+180)
#define FN_Numeric_46scaleRat	((void*)startLabel+220)
#define v422	((void*)startLabel+238)
#define v424	((void*)startLabel+274)
#define v426	((void*)startLabel+312)
#define CT_v428	((void*)startLabel+332)
#define F0_Numeric_46scaleRat	((void*)startLabel+340)
#define FN_Numeric_46fromRat_39	((void*)startLabel+388)
#define CT_v429	((void*)startLabel+572)
#define F0_Numeric_46fromRat_39	((void*)startLabel+580)
#define FN_Numeric_46Prelude_46183_46r	((void*)startLabel+672)
#define CT_v430	((void*)startLabel+712)
#define F0_Numeric_46Prelude_46183_46r	((void*)startLabel+720)
#define FN_LAMBDA411	((void*)startLabel+756)
#define v431	((void*)startLabel+783)
#define CT_v433	((void*)startLabel+812)
#define F0_LAMBDA411	((void*)startLabel+820)
#define v434	((void*)startLabel+883)
#define v436	((void*)startLabel+938)
#define CT_v438	((void*)startLabel+960)
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node FN_Prelude_46_94[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46div[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio_46_47[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio_46_60[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[];
extern Node FN_Prelude_46floatRadix[];
extern Node CF_Prelude_46RealFloat_46Prelude_46Double[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46floatDigits[];
extern Node FN_Prelude_46floatRange[];
extern Node FN_Prelude_46fst[];
extern Node FN_Numeric_46expt[];
extern Node FN_Prelude_46Real_46Prelude_46Integer_46toRational[];
extern Node FN_Ratio_46numerator[];
extern Node FN_Ratio_46denominator[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46round[];
extern Node FN_Prelude_46snd[];
extern Node FN_Prelude_46encodeFloat[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node FN_Ratio_46_37[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger[];
extern Node FN_Prelude_46Eq_46Ratio_46Ratio_46_61_61[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46negate[];
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46negate[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v418)
,	/* FN_Numeric_46integerLogBase: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,5,0,PUSH_INT_P1)
,	/* v416: (byte 2) */
  bytes2word(0,RETURN,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_INT_P1,2)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,HEAP_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v418: (byte 0) */
  HW(9,2)
, 0
,	/* F0_Numeric_46integerLogBase: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46integerLogBase),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Numeric_46integerLogBase))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_42))
, VAPTAG(useLabel(FN_Prelude_46_94))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, VAPTAG(useLabel(FN_Numeric_46Prelude_46193_46doDiv))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v421)
,	/* FN_Numeric_46Prelude_46193_46doDiv: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,4,0,PUSH_ARG_I3)
,	/* v419: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I4,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_I5,HEAP_ARG,3)
, bytes2word(HEAP_INT_P1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v421: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Numeric_46Prelude_46193_46doDiv: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46193_46doDiv),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Numeric_46Prelude_46193_46doDiv))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v428)
,	/* FN_Numeric_46scaleRat: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,PUSH_ARG)
, bytes2word(5,EVAL,NEEDHEAP_I32,LE_W)
, bytes2word(JUMPFALSE,9,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG_ARG,6)
,	/* v422: (byte 2) */
  bytes2word(5,RETURN,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,6,4)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,27)
, bytes2word(0,HEAP_CVAL_I5,HEAP_ARG,5)
, bytes2word(HEAP_INT_P1,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,6,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v424: (byte 2) */
  bytes2word(10,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_I4,HEAP_ARG_ARG,6)
, bytes2word(3,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(28,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,5,HEAP_INT_P1,1)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(6,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_OFF_N1)
,	/* v426: (byte 4) */
  bytes2word(12,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(6,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v428: (byte 0) */
  HW(8,6)
, 0
,	/* F0_Numeric_46scaleRat: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46scaleRat),6)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47))
, VAPTAG(useLabel(FN_Numeric_46scaleRat))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v429)
,	/* FN_Numeric_46fromRat_39: (byte 0) */
  bytes2word(NEEDHEAP_P1,97,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_P1,75,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_P1)
, bytes2word(65,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_P1,55,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(17,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(19,HEAP_INT_P1,1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,32,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,37,HEAP_OFF_N1,28)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,45,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,16,HEAP_CVAL_P1)
, bytes2word(14,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,51,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(48,PUSH_HEAP,HEAP_CVAL_P1,17)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,36)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,18,HEAP_OFF_N1)
, bytes2word(63,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,66,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_P1,14,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,20,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,48,HEAP_OFF_N1,40)
, bytes2word(HEAP_OFF_N1,36,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(21,HEAP_I1,HEAP_ARG,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v429: (byte 0) */
  HW(19,2)
, 0
,	/* F0_Numeric_46fromRat_39: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46fromRat_39),2)
, VAPTAG(useLabel(FN_Prelude_46floatRadix))
, useLabel(CF_Prelude_46RealFloat_46Prelude_46Double)
, CAPTAG(useLabel(FN_Numeric_46Prelude_46183_46r),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46floatDigits))
, VAPTAG(useLabel(FN_Prelude_46floatRange))
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Numeric_46expt))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer_46toRational))
, VAPTAG(useLabel(FN_Ratio_46numerator))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Numeric_46integerLogBase))
, VAPTAG(useLabel(FN_Ratio_46denominator))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46max))
, VAPTAG(useLabel(FN_LAMBDA411))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47))
, VAPTAG(useLabel(FN_Numeric_46scaleRat))
, VAPTAG(useLabel(FN_Numeric_46Prelude_46183_46r))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v430)
,	/* FN_Numeric_46Prelude_46183_46r: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_P1)
, bytes2word(0,PUSH_P1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v430: (byte 0) */
  HW(5,2)
, 0
,	/* F0_Numeric_46Prelude_46183_46r: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46183_46r),2)
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46snd))
, VAPTAG(useLabel(FN_Prelude_46encodeFloat))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v433)
,	/* FN_LAMBDA411: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,LT_W,JUMPFALSE)
, bytes2word(19,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CADR_N1,2)
,	/* v431: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CADR_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v433: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA411: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA411),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, VAPTAG(useLabel(FN_Numeric_46expt))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v438)
,};
Node FN_Numeric_46fromRat[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CADR_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,6)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,16)
, bytes2word(0,PUSH_INT_P1,0,PUSH_CADR_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,EVAL,NEEDHEAP_I32)
,	/* v434: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,6,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,40,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,5)
, bytes2word(PUSH_P1,0,HEAP_CVAL_P1,10)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
,	/* v436: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v438: (byte 0) */
  HW(11,2)
, 0
,};
Node F0_Numeric_46fromRat[] = {
  CAPTAG(useLabel(FN_Numeric_46fromRat),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46encodeFloat))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46negate))
, VAPTAG(useLabel(FN_Numeric_46fromRat_39))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46negate))
,};

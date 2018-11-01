#include "newmacros.h"
#include "runtime.h"

#define FN_Numeric_46integerLogBase	((void*)startLabel+12)
#define v416	((void*)startLabel+30)
#define CT_v419	((void*)startLabel+84)
#define F0_Numeric_46integerLogBase	((void*)startLabel+92)
#define FN_Numeric_46Prelude_46193_46doDiv	((void*)startLabel+144)
#define v420	((void*)startLabel+161)
#define CT_v423	((void*)startLabel+196)
#define F0_Numeric_46Prelude_46193_46doDiv	((void*)startLabel+204)
#define FN_Numeric_46scaleRat	((void*)startLabel+244)
#define v424	((void*)startLabel+265)
#define v426	((void*)startLabel+301)
#define v428	((void*)startLabel+339)
#define CT_v431	((void*)startLabel+368)
#define F0_Numeric_46scaleRat	((void*)startLabel+376)
#define FN_Numeric_46fromRat_39	((void*)startLabel+424)
#define CT_v433	((void*)startLabel+620)
#define F0_Numeric_46fromRat_39	((void*)startLabel+628)
#define FN_Numeric_46Prelude_46183_46r	((void*)startLabel+720)
#define CT_v435	((void*)startLabel+772)
#define F0_Numeric_46Prelude_46183_46r	((void*)startLabel+780)
#define FN_LAMBDA411	((void*)startLabel+816)
#define v436	((void*)startLabel+847)
#define CT_v439	((void*)startLabel+884)
#define F0_LAMBDA411	((void*)startLabel+892)
#define v440	((void*)startLabel+959)
#define v442	((void*)startLabel+1014)
#define CT_v445	((void*)startLabel+1044)
#define ST_v444	((void*)startLabel+1100)
#define ST_v432	((void*)startLabel+1116)
#define ST_v438	((void*)startLabel+1133)
#define ST_v434	((void*)startLabel+1162)
#define ST_v418	((void*)startLabel+1190)
#define ST_v422	((void*)startLabel+1213)
#define ST_v430	((void*)startLabel+1248)
extern Node TM_Numeric[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node FN_Prelude_46_94[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46div[];
extern Node TMSUB_Numeric[];
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
, useLabel(CT_v419)
,	/* FN_Numeric_46integerLogBase: (byte 0) */
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
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
, 520001
, useLabel(ST_v418)
,	/* CT_v419: (byte 0) */
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
, useLabel(CT_v423)
,	/* FN_Numeric_46Prelude_46193_46doDiv: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,4,0,PUSH_ARG_I3)
,	/* v420: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I4,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_I5,HEAP_ARG,3)
, bytes2word(HEAP_INT_P1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 590013
, useLabel(ST_v422)
,	/* CT_v423: (byte 0) */
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
, useLabel(CT_v431)
,	/* FN_Numeric_46scaleRat: (byte 0) */
  useLabel(TM_Numeric)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,PUSH_ARG)
, bytes2word(5,EVAL,NEEDHEAP_I32,LE_W)
, bytes2word(JUMPFALSE,8,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG_ARG,6,5)
,	/* v424: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,6,4,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,27,0)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,5,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,6,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_OFF_N1,12,HEAP_OFF_N1,10)
,	/* v426: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,6,3)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,28)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(5,HEAP_INT_P1,1,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_I4,HEAP_ARG_ARG,6)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_OFF_N1,12)
,	/* v428: (byte 3) */
  bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG_ARG_RET_EVAL,6,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 380001
, useLabel(ST_v430)
,	/* CT_v431: (byte 0) */
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
, useLabel(CT_v433)
,	/* FN_Numeric_46fromRat_39: (byte 0) */
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_P1,97,HEAP_CVAL_I3,HEAP_CVAL_I4)
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
, 230001
, useLabel(ST_v432)
,	/* CT_v433: (byte 0) */
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
, useLabel(CT_v435)
,	/* FN_Numeric_46Prelude_46183_46r: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_P1)
, bytes2word(0,PUSH_P1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 330009
, useLabel(ST_v434)
,	/* CT_v435: (byte 0) */
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
, useLabel(CT_v439)
,	/* FN_LAMBDA411: (byte 0) */
  useLabel(TMSUB_Numeric)
, bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,LT_W,JUMPFALSE)
, bytes2word(19,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CADR_N1,4)
,	/* v436: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CADR_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
, 310013
, useLabel(ST_v438)
,	/* CT_v439: (byte 0) */
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
, useLabel(CT_v445)
,};
Node FN_Numeric_46fromRat[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CADR_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,6)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,16)
, bytes2word(0,PUSH_INT_P1,0,PUSH_CADR_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,EVAL,NEEDHEAP_I32)
,	/* v440: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CADR_N1,3,PUSH_HEAP)
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
,	/* v442: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, 100001
, useLabel(ST_v444)
,	/* CT_v445: (byte 0) */
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
,	/* ST_v444: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(102,114,111,109)
,	/* ST_v432: (byte 4) */
  bytes2word(82,97,116,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(102,114,111,109)
, bytes2word(82,97,116,39)
,	/* ST_v438: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,102,114,111)
, bytes2word(109,82,97,116)
, bytes2word(39,58,51,49)
, bytes2word(58,49,51,45)
, bytes2word(51,49,58,54)
,	/* ST_v434: (byte 2) */
  bytes2word(50,0,78,117)
, bytes2word(109,101,114,105)
, bytes2word(99,46,102,114)
, bytes2word(111,109,82,97)
, bytes2word(116,39,58,51)
, bytes2word(51,58,57,45)
, bytes2word(51,51,58,52)
,	/* ST_v418: (byte 2) */
  bytes2word(57,0,78,117)
, bytes2word(109,101,114,105)
, bytes2word(99,46,105,110)
, bytes2word(116,101,103,101)
, bytes2word(114,76,111,103)
, bytes2word(66,97,115,101)
,	/* ST_v422: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,105,110,116)
, bytes2word(101,103,101,114)
, bytes2word(76,111,103,66)
, bytes2word(97,115,101,58)
, bytes2word(53,57,58,49)
, bytes2word(51,45,53,57)
,	/* ST_v430: (byte 4) */
  bytes2word(58,54,56,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,99,97,108)
, bytes2word(101,82,97,116)
, bytes2word(0,0,0,0)
,};

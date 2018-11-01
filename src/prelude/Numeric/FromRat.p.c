#include "newmacros.h"
#include "runtime.h"

#define FN_Numeric_46integerLogBase	((void*)startLabel+12)
#define v416	((void*)startLabel+33)
#define CT_v426	((void*)startLabel+264)
#define F0_Numeric_46integerLogBase	((void*)startLabel+272)
#define FN_Numeric_46Prelude_46193_46doDiv	((void*)startLabel+340)
#define v427	((void*)startLabel+359)
#define CT_v434	((void*)startLabel+488)
#define F0_Numeric_46Prelude_46193_46doDiv	((void*)startLabel+496)
#define FN_Numeric_46scaleRat	((void*)startLabel+552)
#define v435	((void*)startLabel+575)
#define v437	((void*)startLabel+635)
#define v439	((void*)startLabel+695)
#define CT_v450	((void*)startLabel+904)
#define F0_Numeric_46scaleRat	((void*)startLabel+912)
#define FN_Numeric_46fromRat_39	((void*)startLabel+976)
#define CT_v469	((void*)startLabel+1652)
#define F0_Numeric_46fromRat_39	((void*)startLabel+1660)
#define FN_Numeric_46Prelude_46183_46r	((void*)startLabel+1768)
#define CT_v476	((void*)startLabel+1920)
#define F0_Numeric_46Prelude_46183_46r	((void*)startLabel+1928)
#define FN_LAMBDA411	((void*)startLabel+1980)
#define v477	((void*)startLabel+2025)
#define CT_v484	((void*)startLabel+2152)
#define F0_LAMBDA411	((void*)startLabel+2160)
#define v485	((void*)startLabel+2258)
#define v487	((void*)startLabel+2358)
#define CT_v501	((void*)startLabel+2608)
#define ST_v490	((void*)startLabel+2680)
#define PP_Numeric_46fromRat_39	((void*)startLabel+2696)
#define PC_Numeric_46fromRat_39	((void*)startLabel+2696)
#define ST_v452	((void*)startLabel+2696)
#define PP_LAMBDA411	((void*)startLabel+2713)
#define PC_LAMBDA411	((void*)startLabel+2713)
#define ST_v480	((void*)startLabel+2713)
#define PP_Numeric_46Prelude_46183_46r	((void*)startLabel+2742)
#define PC_Numeric_46Prelude_46183_46r	((void*)startLabel+2742)
#define ST_v471	((void*)startLabel+2742)
#define PP_Numeric_46integerLogBase	((void*)startLabel+2770)
#define PC_Numeric_46integerLogBase	((void*)startLabel+2770)
#define ST_v419	((void*)startLabel+2770)
#define PP_Numeric_46Prelude_46193_46doDiv	((void*)startLabel+2793)
#define PC_Numeric_46Prelude_46193_46doDiv	((void*)startLabel+2793)
#define ST_v430	((void*)startLabel+2793)
#define PP_Numeric_46scaleRat	((void*)startLabel+2828)
#define PC_Numeric_46scaleRat	((void*)startLabel+2828)
#define ST_v442	((void*)startLabel+2828)
#define PS_v493	((void*)startLabel+2848)
#define PS_v500	((void*)startLabel+2860)
#define PS_v489	((void*)startLabel+2872)
#define PS_v496	((void*)startLabel+2884)
#define PS_v494	((void*)startLabel+2896)
#define PS_v492	((void*)startLabel+2908)
#define PS_v491	((void*)startLabel+2920)
#define PS_v499	((void*)startLabel+2932)
#define PS_v498	((void*)startLabel+2944)
#define PS_v497	((void*)startLabel+2956)
#define PS_v495	((void*)startLabel+2968)
#define PS_v462	((void*)startLabel+2980)
#define PS_v464	((void*)startLabel+2992)
#define PS_v460	((void*)startLabel+3004)
#define PS_v455	((void*)startLabel+3016)
#define PS_v458	((void*)startLabel+3028)
#define PS_v453	((void*)startLabel+3040)
#define PS_v456	((void*)startLabel+3052)
#define PS_v457	((void*)startLabel+3064)
#define PS_v451	((void*)startLabel+3076)
#define PS_v468	((void*)startLabel+3088)
#define PS_v463	((void*)startLabel+3100)
#define PS_v454	((void*)startLabel+3112)
#define PS_v467	((void*)startLabel+3124)
#define PS_v459	((void*)startLabel+3136)
#define PS_v461	((void*)startLabel+3148)
#define PS_v465	((void*)startLabel+3160)
#define PS_v466	((void*)startLabel+3172)
#define PS_v443	((void*)startLabel+3184)
#define PS_v441	((void*)startLabel+3196)
#define PS_v445	((void*)startLabel+3208)
#define PS_v444	((void*)startLabel+3220)
#define PS_v446	((void*)startLabel+3232)
#define PS_v447	((void*)startLabel+3244)
#define PS_v448	((void*)startLabel+3256)
#define PS_v449	((void*)startLabel+3268)
#define PS_v423	((void*)startLabel+3280)
#define PS_v418	((void*)startLabel+3292)
#define PS_v425	((void*)startLabel+3304)
#define PS_v420	((void*)startLabel+3316)
#define PS_v424	((void*)startLabel+3328)
#define PS_v422	((void*)startLabel+3340)
#define PS_v421	((void*)startLabel+3352)
#define PS_v472	((void*)startLabel+3364)
#define PS_v474	((void*)startLabel+3376)
#define PS_v475	((void*)startLabel+3388)
#define PS_v470	((void*)startLabel+3400)
#define PS_v473	((void*)startLabel+3412)
#define PS_v429	((void*)startLabel+3424)
#define PS_v431	((void*)startLabel+3436)
#define PS_v432	((void*)startLabel+3448)
#define PS_v433	((void*)startLabel+3460)
#define PS_v483	((void*)startLabel+3472)
#define PS_v482	((void*)startLabel+3484)
#define PS_v481	((void*)startLabel+3496)
#define PS_v479	((void*)startLabel+3508)
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
extern Node PM_Numeric[];
extern Node PC_Prelude_46encodeFloat[];
extern Node PC_Prelude_46negate[];
extern Node PC_Prelude_46Ord_46Ratio_46Ratio_46_60[];
extern Node PC_Prelude_46Eq_46Ratio_46Ratio_46_61_61[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio_46fromInteger[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Real[];
extern Node PC_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio_46negate[];
extern Node PC_Ratio_46numerator[];
extern Node PC_Ratio_46denominator[];
extern Node PC_Numeric_46expt[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46fst[];
extern Node PC_Prelude_46floatRadix[];
extern Node PC_Prelude_46floatDigits[];
extern Node PC_Prelude_46floatRange[];
extern Node PC_Prelude_46Fractional_46Ratio_46Ratio_46_47[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node PC_Prelude_46Real_46Prelude_46Integer_46toRational[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node PC_Prelude_46Ord_46Ratio_46Ratio_46_62_61[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio_46_42[];
extern Node PC_Prelude_46_94[];
extern Node PC_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node PC_Prelude_46Integral_46Prelude_46Integer_46div[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node PC_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node PC_Prelude_46snd[];
extern Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46round[];
extern Node PC_Ratio_46_37[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46negate[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v426)
,	/* FN_Numeric_46integerLogBase: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,1)
, bytes2word(EVAL,NEEDHEAP_P1,45,JUMPFALSE)
, bytes2word(5,0,PUSH_INT_P1,0)
,	/* v416: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_INT_P1,2)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_CVAL_P1)
, bytes2word(13,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v425)
, 0
, 0
, 0
, 0
, useLabel(PS_v424)
, 0
, 0
, 0
, 0
, useLabel(PS_v423)
, 0
, 0
, 0
, 0
, useLabel(PS_v422)
, 0
, 0
, 0
, 0
, useLabel(PS_v418)
, 0
, 0
, 0
, 0
, useLabel(PS_v421)
, 0
, 0
, 0
, 0
, useLabel(PS_v420)
, 0
, 0
, 0
, 0
, 520001
, useLabel(ST_v419)
,	/* CT_v426: (byte 0) */
  HW(9,2)
, 0
,	/* F0_Numeric_46integerLogBase: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46integerLogBase),2)
, useLabel(PS_v418)
, 0
, 0
, 0
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
, useLabel(CT_v434)
,	/* FN_Numeric_46Prelude_46193_46doDiv: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,4)
,	/* v427: (byte 3) */
  bytes2word(0,PUSH_ARG_I3,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_INT_P1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,20)
, bytes2word(HEAP_OFF_N1,14,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v429)
, 0
, 0
, 0
, 0
, useLabel(PS_v433)
, 0
, 0
, 0
, 0
, useLabel(PS_v432)
, 0
, 0
, 0
, 0
, useLabel(PS_v431)
, 0
, 0
, 0
, 0
, 590013
, useLabel(ST_v430)
,	/* CT_v434: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Numeric_46Prelude_46193_46doDiv: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46193_46doDiv),3)
, useLabel(PS_v429)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46div))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Numeric_46Prelude_46193_46doDiv))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v450)
,	/* FN_Numeric_46scaleRat: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,PUSH_ARG)
, bytes2word(5,EVAL,NEEDHEAP_I32,LE_W)
, bytes2word(JUMPFALSE,14,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
,	/* v435: (byte 3) */
  bytes2word(6,5,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,6,4)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,44)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_INT_P1,1)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,6,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_OFF_N1,24)
,	/* v437: (byte 3) */
  bytes2word(HEAP_OFF_N1,18,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,6,3)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,44)
, bytes2word(0,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_INT_P1,1)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,6,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_OFF_N1,24)
,	/* v439: (byte 3) */
  bytes2word(HEAP_OFF_N1,18,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(6,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v449)
, 0
, 0
, 0
, 0
, useLabel(PS_v448)
, 0
, 0
, 0
, 0
, useLabel(PS_v447)
, 0
, 0
, 0
, 0
, useLabel(PS_v441)
, 0
, 0
, 0
, 0
, useLabel(PS_v446)
, 0
, 0
, 0
, 0
, useLabel(PS_v445)
, 0
, 0
, 0
, 0
, useLabel(PS_v444)
, 0
, 0
, 0
, 0
, useLabel(PS_v443)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 380001
, useLabel(ST_v442)
,	/* CT_v450: (byte 0) */
  HW(8,6)
, 0
,	/* F0_Numeric_46scaleRat: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46scaleRat),6)
, useLabel(PS_v441)
, 0
, 0
, 0
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
, useLabel(CT_v469)
,	/* FN_Numeric_46fromRat_39: (byte 0) */
  bytes2word(NEEDHEAP_P1,221,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_P1,183)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(24,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_P1)
, bytes2word(157,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_P1,131,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(45,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,51,HEAP_INT_P1,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(84,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,97,HEAP_OFF_N1,72)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,18,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,117,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,20,HEAP_CVAL_N1,62)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(18,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,131)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,26,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_OFF_N1,120)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,21,HEAP_CVAL_N1)
, bytes2word(67,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_OFF_N1,88)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,159,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(166,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(77,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,18,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,20,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(24,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,116,HEAP_OFF_N1,96)
, bytes2word(HEAP_OFF_N1,84,HEAP_OFF_N1,37)
, bytes2word(HEAP_OFF_N1,18,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(25,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v468)
, 0
, 0
, 0
, 0
, useLabel(PS_v467)
, 0
, 0
, 0
, 0
, useLabel(PS_v466)
, 0
, 0
, 0
, 0
, useLabel(PS_v465)
, 0
, 0
, 0
, 0
, useLabel(PS_v464)
, 0
, 0
, 0
, 0
, useLabel(PS_v463)
, 0
, 0
, 0
, 0
, useLabel(PS_v462)
, 0
, 0
, 0
, 0
, useLabel(PS_v461)
, 0
, 0
, 0
, 0
, useLabel(PS_v460)
, 0
, 0
, 0
, 0
, useLabel(PS_v459)
, 0
, 0
, 0
, 0
, useLabel(PS_v458)
, 0
, 0
, 0
, 0
, useLabel(PS_v457)
, 0
, 0
, 0
, 0
, useLabel(PS_v456)
, 0
, 0
, 0
, 0
, useLabel(PS_v455)
, 0
, 0
, 0
, 0
, useLabel(PS_v454)
, 0
, 0
, 0
, 0
, useLabel(PS_v453)
, 0
, 0
, 0
, 0
, 230001
, useLabel(ST_v452)
,	/* CT_v469: (byte 0) */
  HW(19,2)
, 0
,	/* F0_Numeric_46fromRat_39: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46fromRat_39),2)
, useLabel(PS_v451)
, 0
, 0
, 0
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
, useLabel(CT_v476)
,	/* FN_Numeric_46Prelude_46183_46r: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v475)
, 0
, 0
, 0
, 0
, useLabel(PS_v474)
, 0
, 0
, 0
, 0
, useLabel(PS_v473)
, 0
, 0
, 0
, 0
, useLabel(PS_v472)
, 0
, 0
, 0
, 0
, 330009
, useLabel(ST_v471)
,	/* CT_v476: (byte 0) */
  HW(5,2)
, 0
,	/* F0_Numeric_46Prelude_46183_46r: (byte 0) */
  CAPTAG(useLabel(FN_Numeric_46Prelude_46183_46r),2)
, useLabel(PS_v470)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46snd))
, VAPTAG(useLabel(FN_Prelude_46encodeFloat))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v484)
,	/* FN_LAMBDA411: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,LT_W,JUMPFALSE)
, bytes2word(37,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CADR_N1,23,HEAP_OFF_N1,14)
,	/* v477: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,13,HEAP_CADR_N1)
, bytes2word(23,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v483)
, 0
, 0
, 0
, 0
, useLabel(PS_v482)
, 0
, 0
, 0
, 0
, useLabel(PS_v481)
, 0
, 0
, 0
, 0
, 310013
, useLabel(ST_v480)
,	/* CT_v484: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA411: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA411),2)
, useLabel(PS_v479)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, VAPTAG(useLabel(FN_Numeric_46expt))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v501)
,};
Node FN_Numeric_46fromRat[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CADR_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,14,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,21,0,PUSH_INT_P1)
, bytes2word(0,PUSH_CADR_N1,12,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,APPLY)
,	/* v485: (byte 2) */
  bytes2word(2,RETURN_EVAL,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CADR_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,14,EVAL)
, bytes2word(NEEDHEAP_P1,38,JUMPFALSE,71)
, bytes2word(0,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,13)
, bytes2word(PUSH_P1,0,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,16,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
,	/* v487: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1)
, bytes2word(2,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v500)
, 0
, 0
, 0
, 0
, useLabel(PS_v499)
, 0
, 0
, 0
, 0
, useLabel(PS_v498)
, 0
, 0
, 0
, 0
, useLabel(PS_v497)
, 0
, 0
, 0
, 0
, useLabel(PS_v496)
, 0
, 0
, 0
, 0
, useLabel(PS_v495)
, 0
, 0
, 0
, 0
, useLabel(PS_v494)
, 0
, 0
, 0
, 0
, useLabel(PS_v493)
, 0
, 0
, 0
, 0
, useLabel(PS_v492)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v491)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v490)
,	/* CT_v501: (byte 0) */
  HW(11,2)
, 0
,};
Node F0_Numeric_46fromRat[] = {
  CAPTAG(useLabel(FN_Numeric_46fromRat),2)
, useLabel(PS_v489)
, 0
, 0
, 0
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
Node PP_Numeric_46fromRat[] = {
 };
Node PC_Numeric_46fromRat[] = {
 	/* ST_v490: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(102,114,111,109)
,	/* PP_Numeric_46fromRat_39: (byte 4) */
 	/* PC_Numeric_46fromRat_39: (byte 4) */
 	/* ST_v452: (byte 4) */
  bytes2word(82,97,116,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(102,114,111,109)
, bytes2word(82,97,116,39)
,	/* PP_LAMBDA411: (byte 1) */
 	/* PC_LAMBDA411: (byte 1) */
 	/* ST_v480: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,102,114,111)
, bytes2word(109,82,97,116)
, bytes2word(39,58,51,49)
, bytes2word(58,49,51,45)
, bytes2word(51,49,58,54)
,	/* PP_Numeric_46Prelude_46183_46r: (byte 2) */
 	/* PC_Numeric_46Prelude_46183_46r: (byte 2) */
 	/* ST_v471: (byte 2) */
  bytes2word(50,0,78,117)
, bytes2word(109,101,114,105)
, bytes2word(99,46,102,114)
, bytes2word(111,109,82,97)
, bytes2word(116,39,58,51)
, bytes2word(51,58,57,45)
, bytes2word(51,51,58,52)
,	/* PP_Numeric_46integerLogBase: (byte 2) */
 	/* PC_Numeric_46integerLogBase: (byte 2) */
 	/* ST_v419: (byte 2) */
  bytes2word(57,0,78,117)
, bytes2word(109,101,114,105)
, bytes2word(99,46,105,110)
, bytes2word(116,101,103,101)
, bytes2word(114,76,111,103)
, bytes2word(66,97,115,101)
,	/* PP_Numeric_46Prelude_46193_46doDiv: (byte 1) */
 	/* PC_Numeric_46Prelude_46193_46doDiv: (byte 1) */
 	/* ST_v430: (byte 1) */
  bytes2word(0,78,117,109)
, bytes2word(101,114,105,99)
, bytes2word(46,105,110,116)
, bytes2word(101,103,101,114)
, bytes2word(76,111,103,66)
, bytes2word(97,115,101,58)
, bytes2word(53,57,58,49)
, bytes2word(51,45,53,57)
,	/* PP_Numeric_46scaleRat: (byte 4) */
 	/* PC_Numeric_46scaleRat: (byte 4) */
 	/* ST_v442: (byte 4) */
  bytes2word(58,54,56,0)
, bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,99,97,108)
, bytes2word(101,82,97,116)
, bytes2word(0,0,0,0)
,	/* PS_v493: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46encodeFloat)
,	/* PS_v500: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46negate)
,	/* PS_v489: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Numeric_46fromRat)
,	/* PS_v496: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Numeric_46fromRat_39)
,	/* PS_v494: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_60)
,	/* PS_v492: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
,	/* PS_v491: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
,	/* PS_v499: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v498: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Real)
,	/* PS_v497: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46RealFrac)
,	/* PS_v495: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46negate)
,	/* PS_v462: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Ratio_46numerator)
,	/* PS_v464: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Ratio_46denominator)
,	/* PS_v460: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Numeric_46expt)
,	/* PS_v455: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v458: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Prelude_46fst)
,	/* PS_v453: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Prelude_46floatRadix)
,	/* PS_v456: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Prelude_46floatDigits)
,	/* PS_v457: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Prelude_46floatRange)
,	/* PS_v451: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Numeric_46fromRat_39)
,	/* PS_v468: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Numeric_46scaleRat)
,	/* PS_v463: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Numeric_46integerLogBase)
,	/* PS_v454: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Numeric_46Prelude_46183_46r)
,	/* PS_v467: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46_47)
,	/* PS_v459: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,	/* PS_v461: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Prelude_46Real_46Prelude_46Integer_46toRational)
,	/* PS_v465: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46max)
,	/* PS_v466: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46fromRat_39)
, useLabel(PC_LAMBDA411)
,	/* PS_v443: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46scaleRat)
, useLabel(PC_Prelude_462)
,	/* PS_v441: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46scaleRat)
, useLabel(PC_Numeric_46scaleRat)
,	/* PS_v445: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46scaleRat)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v444: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46scaleRat)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_62_61)
,	/* PS_v446: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46scaleRat)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46_47)
,	/* PS_v447: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46scaleRat)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_60)
,	/* PS_v448: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46scaleRat)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,	/* PS_v449: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46scaleRat)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_42)
,	/* PS_v423: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46integerLogBase)
, useLabel(PC_Prelude_46_94)
,	/* PS_v418: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46integerLogBase)
, useLabel(PC_Numeric_46integerLogBase)
,	/* PS_v425: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46integerLogBase)
, useLabel(PC_Numeric_46Prelude_46193_46doDiv)
,	/* PS_v420: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46integerLogBase)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_60)
,	/* PS_v424: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46integerLogBase)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* PS_v422: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46integerLogBase)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_42)
,	/* PS_v421: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46integerLogBase)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_42)
,	/* PS_v472: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46183_46r)
, useLabel(PC_Prelude_46fst)
,	/* PS_v474: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46183_46r)
, useLabel(PC_Prelude_46snd)
,	/* PS_v475: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46183_46r)
, useLabel(PC_Prelude_46encodeFloat)
,	/* PS_v470: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46183_46r)
, useLabel(PC_Numeric_46Prelude_46183_46r)
,	/* PS_v473: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46183_46r)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46round)
,	/* PS_v429: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46193_46doDiv)
, useLabel(PC_Numeric_46Prelude_46193_46doDiv)
,	/* PS_v431: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46193_46doDiv)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_60)
,	/* PS_v432: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46193_46doDiv)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46div)
,	/* PS_v433: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46Prelude_46193_46doDiv)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v483: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA411)
, useLabel(PC_Ratio_46_37)
,	/* PS_v482: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA411)
, useLabel(PC_Numeric_46expt)
,	/* PS_v481: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA411)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46negate)
,	/* PS_v479: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_LAMBDA411)
, useLabel(PC_LAMBDA411)
,};

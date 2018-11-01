#include "newmacros.h"
#include "runtime.h"

#define CT_v399	((void*)startLabel+272)
#define CT_v411	((void*)startLabel+620)
#define CT_v422	((void*)startLabel+884)
#define CT_v433	((void*)startLabel+1144)
#define CT_v447	((void*)startLabel+1424)
#define CT_v462	((void*)startLabel+1800)
#define CT_v477	((void*)startLabel+2180)
#define CT_v490	((void*)startLabel+2596)
#define ST_v479	((void*)startLabel+2660)
#define ST_v439	((void*)startLabel+2684)
#define ST_v468	((void*)startLabel+2712)
#define ST_v453	((void*)startLabel+2740)
#define ST_v415	((void*)startLabel+2768)
#define ST_v393	((void*)startLabel+2796)
#define ST_v426	((void*)startLabel+2832)
#define ST_v403	((void*)startLabel+2864)
#define PS_v476	((void*)startLabel+2896)
#define PS_v475	((void*)startLabel+2908)
#define PS_v473	((void*)startLabel+2920)
#define PS_v474	((void*)startLabel+2932)
#define PS_v467	((void*)startLabel+2944)
#define PS_v472	((void*)startLabel+2956)
#define PS_v471	((void*)startLabel+2968)
#define PS_v461	((void*)startLabel+2980)
#define PS_v460	((void*)startLabel+2992)
#define PS_v458	((void*)startLabel+3004)
#define PS_v459	((void*)startLabel+3016)
#define PS_v452	((void*)startLabel+3028)
#define PS_v457	((void*)startLabel+3040)
#define PS_v456	((void*)startLabel+3052)
#define PS_v446	((void*)startLabel+3064)
#define PS_v445	((void*)startLabel+3076)
#define PS_v444	((void*)startLabel+3088)
#define PS_v438	((void*)startLabel+3100)
#define PS_v443	((void*)startLabel+3112)
#define PS_v442	((void*)startLabel+3124)
#define PS_v432	((void*)startLabel+3136)
#define PS_v431	((void*)startLabel+3148)
#define PS_v430	((void*)startLabel+3160)
#define PS_v425	((void*)startLabel+3172)
#define PS_v429	((void*)startLabel+3184)
#define PS_v428	((void*)startLabel+3196)
#define PS_v421	((void*)startLabel+3208)
#define PS_v420	((void*)startLabel+3220)
#define PS_v419	((void*)startLabel+3232)
#define PS_v414	((void*)startLabel+3244)
#define PS_v418	((void*)startLabel+3256)
#define PS_v417	((void*)startLabel+3268)
#define PS_v410	((void*)startLabel+3280)
#define PS_v408	((void*)startLabel+3292)
#define PS_v407	((void*)startLabel+3304)
#define PS_v409	((void*)startLabel+3316)
#define PS_v402	((void*)startLabel+3328)
#define PS_v406	((void*)startLabel+3340)
#define PS_v405	((void*)startLabel+3352)
#define PS_v398	((void*)startLabel+3364)
#define PS_v397	((void*)startLabel+3376)
#define PS_v396	((void*)startLabel+3388)
#define PS_v392	((void*)startLabel+3400)
#define PS_v395	((void*)startLabel+3412)
#define PS_v394	((void*)startLabel+3424)
#define PS_v483	((void*)startLabel+3436)
#define PS_v484	((void*)startLabel+3448)
#define PS_v482	((void*)startLabel+3460)
#define PS_v485	((void*)startLabel+3472)
#define PS_v488	((void*)startLabel+3484)
#define PS_v486	((void*)startLabel+3496)
#define PS_v487	((void*)startLabel+3508)
#define PS_v478	((void*)startLabel+3520)
#define PS_v489	((void*)startLabel+3532)
#define PS_v480	((void*)startLabel+3544)
#define PS_v481	((void*)startLabel+3556)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46signum[];
extern Node FN_Prelude_46abs[];
extern Node FN_Prelude_46negate[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Ratio_46reduce[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46Eq_46Ratio_46Ratio[];
extern Node FN_Prelude_46Show_46Ratio_46Ratio[];
extern Node PM_Ratio[];
extern Node PC_Ratio_46reduce[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_43[];
extern Node PC_Prelude_46_42[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Prelude_46_45[];
extern Node PC_Ratio_46_58_37[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46negate[];
extern Node PC_Prelude_46abs[];
extern Node PC_Prelude_46signum[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_469[];
extern Node PC_Prelude_46Eq_46Ratio_46Ratio[];
extern Node PC_Prelude_46Show_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v399)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger[] = {
  bytes2word(NEEDHEAP_P1,53,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CADR_N1,28)
, bytes2word(PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2,EVAL)
, bytes2word(POP_I1,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(33,HEAP_CVAL_N1,38,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v398)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v397)
, 0
, 0
, 0
, 0
, useLabel(PS_v396)
, 0
, 0
, 0
, 0
, useLabel(PS_v395)
, 0
, 0
, 0
, 0
, useLabel(PS_v394)
, 0
, 0
, 0
, 0
, 160005
, useLabel(ST_v393)
,	/* CT_v399: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger),2)
, useLabel(PS_v392)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v411)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46signum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(50,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CADR_N1,33)
, bytes2word(PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,POP_I1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,38)
, bytes2word(HEAP_CVAL_N1,43,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v410)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v409)
, 0
, 0
, 0
, 0
, useLabel(PS_v408)
, 0
, 0
, 0
, 0
, useLabel(PS_v407)
, 0
, 0
, 0
, 0
, useLabel(PS_v406)
, 0
, 0
, 0
, 0
, useLabel(PS_v405)
, 0
, 0
, 0
, 0
, 150005
, useLabel(ST_v403)
,	/* CT_v411: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46signum),2)
, useLabel(PS_v402)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46signum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v422)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46abs[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_I1)
, bytes2word(PUSH_P1,0,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(2,EVAL,POP_I1,PUSH_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v421)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v420)
, 0
, 0
, 0
, 0
, useLabel(PS_v419)
, 0
, 0
, 0
, 0
, useLabel(PS_v418)
, 0
, 0
, 0
, 0
, useLabel(PS_v417)
, 0
, 0
, 0
, 0
, 140005
, useLabel(ST_v415)
,	/* CT_v422: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46abs),2)
, useLabel(PS_v414)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46abs))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v433)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46negate[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_I1)
, bytes2word(PUSH_P1,0,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(2,EVAL,POP_I1,PUSH_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,HEAP_P1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v432)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v431)
, 0
, 0
, 0
, 0
, useLabel(PS_v430)
, 0
, 0
, 0
, 0
, useLabel(PS_v429)
, 0
, 0
, 0
, 0
, useLabel(PS_v428)
, 0
, 0
, 0
, 0
, 130005
, useLabel(ST_v426)
,	/* CT_v433: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46negate),2)
, useLabel(PS_v425)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v447)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_42[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(60,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(40,HEAP_OFF_N1,15,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v442)
, 0
, 0
, 0
, 0
, 120005
, useLabel(ST_v439)
,	/* CT_v447: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42),3)
, useLabel(PS_v438)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46reduce))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v462)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_45[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(112,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_I2,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,0,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(63,HEAP_OFF_N1,40,HEAP_OFF_N1)
, bytes2word(15,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,40)
, bytes2word(HEAP_OFF_N1,15,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, 110005
, useLabel(ST_v453)
,	/* CT_v462: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_45),3)
, useLabel(PS_v452)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46reduce))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v477)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio_46_43[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(112,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_I2,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,0,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(63,HEAP_OFF_N1,40,HEAP_OFF_N1)
, bytes2word(15,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,40)
, bytes2word(HEAP_OFF_N1,15,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v476)
, 0
, 0
, 0
, 0
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
, useLabel(PS_v471)
, 0
, 0
, 0
, 0
, 100005
, useLabel(ST_v468)
,	/* CT_v477: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_43),3)
, useLabel(PS_v467)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46reduce))
, bytes2word(1,0,0,1)
, useLabel(CT_v490)
,};
Node FN_Prelude_46Num_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_P1,78,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,52,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,9,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v489)
, 0
, 0
, 0
, 0
, CONSTR(0,9,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v488)
, 0
, 0
, 0
, 0
, useLabel(PS_v487)
, 0
, 0
, 0
, 0
, useLabel(PS_v486)
, 0
, 0
, 0
, 0
, useLabel(PS_v485)
, 0
, 0
, 0
, 0
, useLabel(PS_v484)
, 0
, 0
, 0
, 0
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
, useLabel(PS_v480)
, 0
, 0
, 0
, 0
, 90028
, useLabel(ST_v479)
,	/* CT_v490: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Num_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio),1)
, useLabel(PS_v478)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_42),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_43),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_45),2)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46negate),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46signum),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger),1)
, CAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46abs),1)
,};
Node PP_Prelude_46Num_46Ratio_46Ratio[] = {
 };
Node PC_Prelude_46Num_46Ratio_46Ratio[] = {
 	/* ST_v479: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,0)
,};
Node PP_Prelude_46Num_46Ratio_46Ratio_46_42[] = {
 };
Node PC_Prelude_46Num_46Ratio_46Ratio_46_42[] = {
 	/* ST_v439: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(42,0,0,0)
,};
Node PP_Prelude_46Num_46Ratio_46Ratio_46_43[] = {
 };
Node PC_Prelude_46Num_46Ratio_46Ratio_46_43[] = {
 	/* ST_v468: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(43,0,0,0)
,};
Node PP_Prelude_46Num_46Ratio_46Ratio_46_45[] = {
 };
Node PC_Prelude_46Num_46Ratio_46Ratio_46_45[] = {
 	/* ST_v453: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(45,0,0,0)
,};
Node PP_Prelude_46Num_46Ratio_46Ratio_46abs[] = {
 };
Node PC_Prelude_46Num_46Ratio_46Ratio_46abs[] = {
 	/* ST_v415: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(97,98,115,0)
,};
Node PP_Prelude_46Num_46Ratio_46Ratio_46fromInteger[] = {
 };
Node PC_Prelude_46Num_46Ratio_46Ratio_46fromInteger[] = {
 	/* ST_v393: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(102,114,111,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,0)
,};
Node PP_Prelude_46Num_46Ratio_46Ratio_46negate[] = {
 };
Node PC_Prelude_46Num_46Ratio_46Ratio_46negate[] = {
 	/* ST_v426: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(110,101,103,97)
, bytes2word(116,101,0,0)
,};
Node PP_Prelude_46Num_46Ratio_46Ratio_46signum[] = {
 };
Node PC_Prelude_46Num_46Ratio_46Ratio_46signum[] = {
 	/* ST_v403: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(115,105,103,110)
, bytes2word(117,109,0,0)
,	/* PS_v476: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_43)
, useLabel(PC_Ratio_46reduce)
,	/* PS_v475: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_43)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v473: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_43)
, useLabel(PC_Prelude_46_43)
,	/* PS_v474: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_43)
, useLabel(PC_Prelude_46_42)
,	/* PS_v467: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_43)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_43)
,	/* PS_v472: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_43)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v471: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_43)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v461: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_45)
, useLabel(PC_Ratio_46reduce)
,	/* PS_v460: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_45)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v458: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_45)
, useLabel(PC_Prelude_46_45)
,	/* PS_v459: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_45)
, useLabel(PC_Prelude_46_42)
,	/* PS_v452: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_45)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_45)
,	/* PS_v457: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_45)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v456: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_45)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v446: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_42)
, useLabel(PC_Ratio_46reduce)
,	/* PS_v445: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_42)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v444: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_42)
, useLabel(PC_Prelude_46_42)
,	/* PS_v438: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_42)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_42)
,	/* PS_v443: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_42)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v442: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46_42)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v432: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46negate)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v431: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46negate)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v430: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46negate)
, useLabel(PC_Prelude_46negate)
,	/* PS_v425: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46negate)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46negate)
,	/* PS_v429: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46negate)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v428: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46negate)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v421: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46abs)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v420: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46abs)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v419: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46abs)
, useLabel(PC_Prelude_46abs)
,	/* PS_v414: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46abs)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46abs)
,	/* PS_v418: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46abs)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v417: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46abs)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v410: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46signum)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v408: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46signum)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v407: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46signum)
, useLabel(PC_Prelude_46signum)
,	/* PS_v409: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46signum)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v402: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46signum)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46signum)
,	/* PS_v406: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46signum)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v405: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46signum)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v398: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v397: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v396: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v392: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
,	/* PS_v395: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v394: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v483: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_43)
,	/* PS_v484: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_45)
,	/* PS_v482: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_42)
,	/* PS_v485: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46negate)
,	/* PS_v488: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46abs)
,	/* PS_v486: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46signum)
,	/* PS_v487: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
,	/* PS_v478: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio)
,	/* PS_v489: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_469)
,	/* PS_v480: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Eq_46Ratio_46Ratio)
,	/* PS_v481: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Num_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Show_46Ratio_46Ratio)
,};

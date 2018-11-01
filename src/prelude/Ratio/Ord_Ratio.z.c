#include "newmacros.h"
#include "runtime.h"

#define CT_v353	((void*)startLabel+108)
#define CT_v361	((void*)startLabel+252)
#define CT_v363	((void*)startLabel+328)
#define CT_v365	((void*)startLabel+388)
#define CT_v367	((void*)startLabel+448)
#define CT_v369	((void*)startLabel+508)
#define CT_v371	((void*)startLabel+568)
#define CT_v373	((void*)startLabel+680)
#define ST_v372	((void*)startLabel+724)
#define ST_v350	((void*)startLabel+748)
#define ST_v358	((void*)startLabel+774)
#define ST_v366	((void*)startLabel+801)
#define ST_v368	((void*)startLabel+827)
#define ST_v370	((void*)startLabel+854)
#define ST_v364	((void*)startLabel+886)
#define ST_v362	((void*)startLabel+914)
extern Node TM_Ratio[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46_60_61[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46compare[];
extern Node FN_Prelude_46Eq_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v353)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_60[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_I2,HEAP_P1,5)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,8,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90005
, useLabel(ST_v350)
,	/* CT_v353: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v361)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_I2,HEAP_P1,5)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,8,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80005
, useLabel(ST_v358)
,	/* CT_v361: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v363)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46min[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 70028
, useLabel(ST_v362)
,	/* CT_v363: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46min),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v365)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46max[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 70028
, useLabel(ST_v364)
,	/* CT_v365: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46max),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v367)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_62[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 70028
, useLabel(ST_v366)
,	/* CT_v367: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v369)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 70028
, useLabel(ST_v368)
,	/* CT_v369: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v371)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46compare[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, 70028
, useLabel(ST_v370)
,	/* CT_v371: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46compare),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, bytes2word(1,0,0,1)
, useLabel(CT_v373)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_P1,34,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 70028
, useLabel(ST_v372)
,	/* CT_v373: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio),1)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46max),2)
,	/* ST_v372: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
,	/* ST_v350: (byte 4) */
  bytes2word(116,105,111,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
,	/* ST_v358: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,60,61)
,	/* ST_v366: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
,	/* ST_v368: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,62)
,	/* ST_v370: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v364: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,109,97)
,	/* ST_v362: (byte 2) */
  bytes2word(120,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,109,105)
, bytes2word(110,0,0,0)
,};

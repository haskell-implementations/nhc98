#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+32)
#define CT_v196	((void*)startLabel+92)
#define CT_v200	((void*)startLabel+196)
#define ST_v198	((void*)startLabel+232)
#define ST_v192	((void*)startLabel+260)
#define ST_v195	((void*)startLabel+288)
#define PS_v194	((void*)startLabel+316)
#define PS_v191	((void*)startLabel+328)
#define PS_v197	((void*)startLabel+340)
#define PS_v199	((void*)startLabel+352)
extern Node PM_Prelude[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_Prelude_46Eq_46Prelude_46Float_46_47_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NE_F,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Float_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Float_46_47_61),2)
, useLabel(PS_v191)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Eq_46Prelude_46Float_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,EQ_F,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 50003
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Float_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Float_46_61_61),2)
, useLabel(PS_v194)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v200)
,};
Node FN_Prelude_46Eq_46Prelude_46Float[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 40010
, useLabel(ST_v198)
,	/* CT_v200: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Float[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Float))
, useLabel(PS_v197)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46Prelude_46Float_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Float_46_61_61)
,};
Node PP_Prelude_46Eq_46Prelude_46Float[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Float[] = {
 	/* ST_v198: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,70)
, bytes2word(108,111,97,116)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Float_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Float_46_47_61[] = {
 	/* ST_v192: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,70)
, bytes2word(108,111,97,116)
, bytes2word(46,47,61,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Float_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Float_46_61_61[] = {
 	/* ST_v195: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,70)
, bytes2word(108,111,97,116)
, bytes2word(46,61,61,0)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Float_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Float_46_61_61)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Float_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Float_46_47_61)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Float)
, useLabel(PC_Prelude_46Eq_46Prelude_46Float)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Float)
, useLabel(PC_Prelude_462)
,};

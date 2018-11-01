#include "newmacros.h"
#include "runtime.h"

#define CT_v198	((void*)startLabel+80)
#define CT_v202	((void*)startLabel+176)
#define CT_v206	((void*)startLabel+288)
#define ST_v204	((void*)startLabel+324)
#define ST_v200	((void*)startLabel+352)
#define ST_v196	((void*)startLabel+384)
#define PS_v195	((void*)startLabel+416)
#define PS_v197	((void*)startLabel+428)
#define PS_v201	((void*)startLabel+440)
#define PS_v199	((void*)startLabel+452)
#define PS_v203	((void*)startLabel+464)
#define PS_v205	((void*)startLabel+476)
extern Node FN_Prelude_46Enum_46Prelude_46Ordering_46fromEnum[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Ordering[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46Enum_46Prelude_46Ordering_46fromEnum[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,EQ_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v196)
,	/* CT_v198: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Ordering_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61),2)
, useLabel(PS_v195)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46fromEnum))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v202)
,};
Node FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v200)
,	/* CT_v202: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Ordering_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61),2)
, useLabel(PS_v199)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v206)
,};
Node FN_Prelude_46Eq_46Prelude_46Ordering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v204)
,	/* CT_v206: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering))
, useLabel(PS_v203)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46Prelude_46Ordering_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Ordering_46_61_61)
,};
Node PP_Prelude_46Eq_46Prelude_46Ordering[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Ordering[] = {
 	/* ST_v204: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Ordering_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Ordering_46_47_61[] = {
 	/* ST_v200: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(47,61,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Ordering_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Ordering_46_61_61[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(61,61,0,0)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Ordering_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Ordering_46_61_61)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Ordering_46_61_61)
, useLabel(PC_Prelude_46Enum_46Prelude_46Ordering_46fromEnum)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Ordering_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Ordering_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Ordering_46_47_61)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Ordering)
, useLabel(PC_Prelude_46Eq_46Prelude_46Ordering)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Ordering)
, useLabel(PC_Prelude_462)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v197	((void*)startLabel+32)
#define CT_v201	((void*)startLabel+124)
#define CT_v205	((void*)startLabel+236)
#define ST_v203	((void*)startLabel+272)
#define ST_v199	((void*)startLabel+296)
#define ST_v196	((void*)startLabel+324)
#define PS_v195	((void*)startLabel+352)
#define PS_v200	((void*)startLabel+364)
#define PS_v198	((void*)startLabel+376)
#define PS_v202	((void*)startLabel+388)
#define PS_v204	((void*)startLabel+400)
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v197)
,};
Node FN_Prelude_46Eq_46Prelude_46Char_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Char_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char_46_61_61),2)
, useLabel(PS_v195)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v201)
,};
Node FN_Prelude_46Eq_46Prelude_46Char_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v199)
,	/* CT_v201: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Char_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char_46_47_61),2)
, useLabel(PS_v198)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v205)
,};
Node FN_Prelude_46Eq_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v204)
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
, useLabel(ST_v203)
,	/* CT_v205: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Char))
, useLabel(PS_v202)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_61_61)
,};
Node PP_Prelude_46Eq_46Prelude_46Char[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Char[] = {
 	/* ST_v203: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Char_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Char_46_47_61[] = {
 	/* ST_v199: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,46)
, bytes2word(47,61,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Char_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Char_46_61_61[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,67)
, bytes2word(104,97,114,46)
, bytes2word(61,61,0,0)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Char_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Char_46_61_61)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Char_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Char_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Char_46_47_61)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Char)
, useLabel(PC_Prelude_46Eq_46Prelude_46Char)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Char)
, useLabel(PC_Prelude_462)
,};

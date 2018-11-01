#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+80)
#define CT_v192	((void*)startLabel+188)
#define CT_v196	((void*)startLabel+292)
#define ST_v194	((void*)startLabel+328)
#define ST_v186	((void*)startLabel+344)
#define ST_v190	((void*)startLabel+364)
#define PS_v191	((void*)startLabel+384)
#define PS_v189	((void*)startLabel+396)
#define PS_v187	((void*)startLabel+408)
#define PS_v185	((void*)startLabel+420)
#define PS_v193	((void*)startLabel+432)
#define PS_v195	((void*)startLabel+444)
extern Node PM_Prelude[];
extern Node PC_Prelude_46True[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Eq_46_40_41_46_47_61[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 50003
, useLabel(ST_v186)
,	/* CT_v188: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46_40_41_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46_40_41_46_47_61),2)
, useLabel(PS_v185)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,};
Node FN_Prelude_46Eq_46_40_41_46_61_61[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v191)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46_40_41_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46_40_41_46_61_61),2)
, useLabel(PS_v189)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Eq_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v195)
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
, useLabel(ST_v194)
,	/* CT_v196: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46_40_41))
, useLabel(PS_v193)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46_40_41_46_47_61)
, useLabel(F0_Prelude_46Eq_46_40_41_46_61_61)
,};
Node PP_Prelude_46Eq_46_40_41[] = {
 };
Node PC_Prelude_46Eq_46_40_41[] = {
 	/* ST_v194: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,40)
, bytes2word(41,0,0,0)
,};
Node PP_Prelude_46Eq_46_40_41_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46_40_41_46_47_61[] = {
 	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,40)
, bytes2word(41,46,47,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46_40_41_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46_40_41_46_61_61[] = {
 	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,40)
, bytes2word(41,46,61,61)
, bytes2word(0,0,0,0)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46_40_41_46_61_61)
, useLabel(PC_Prelude_46True)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46_40_41_46_61_61)
, useLabel(PC_Prelude_46Eq_46_40_41_46_61_61)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46_40_41_46_47_61)
, useLabel(PC_Prelude_46False)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46_40_41_46_47_61)
, useLabel(PC_Prelude_46Eq_46_40_41_46_47_61)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46_40_41)
, useLabel(PC_Prelude_46Eq_46_40_41)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46_40_41)
, useLabel(PC_Prelude_462)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v190	((void*)startLabel+228)
#define ST_v184	((void*)startLabel+272)
#define PS_v189	((void*)startLabel+284)
#define PS_v187	((void*)startLabel+296)
#define PS_v188	((void*)startLabel+308)
#define PS_v186	((void*)startLabel+320)
#define PS_v183	((void*)startLabel+332)
#define PS_v185	((void*)startLabel+344)
extern Node FN_Prelude_46RealFloat_46Prelude_46Floating[];
extern Node FN_Prelude_46cos[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46sin[];
extern Node PM_Complex[];
extern Node PC_Complex_46_58_43[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46sin[];
extern Node PC_Prelude_46cos[];
extern Node PC_Prelude_46RealFloat_46Prelude_46Floating[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_Complex_46cis[] = {
  bytes2word(NEEDHEAP_P1,41,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,2,PUSH_I1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v184)
,	/* CT_v190: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Complex_46cis[] = {
  CAPTAG(useLabel(FN_Complex_46cis),2)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Floating))
, VAPTAG(useLabel(FN_Prelude_46cos))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46sin))
,};
Node PP_Complex_46cis[] = {
 };
Node PC_Complex_46cis[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(99,105,115,0)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46cis)
, useLabel(PC_Complex_46_58_43)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46cis)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46cis)
, useLabel(PC_Prelude_46sin)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46cis)
, useLabel(PC_Prelude_46cos)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46cis)
, useLabel(PC_Complex_46cis)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46cis)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46Floating)
,};

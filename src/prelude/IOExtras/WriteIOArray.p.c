#include "newmacros.h"
#include "runtime.h"

#define CT_v213	((void*)startLabel+204)
#define ST_v207	((void*)startLabel+244)
#define PS_v211	((void*)startLabel+272)
#define PS_v212	((void*)startLabel+284)
#define PS_v209	((void*)startLabel+296)
#define PS_v210	((void*)startLabel+308)
#define PS_v206	((void*)startLabel+320)
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Array_46primUpdateVectorC[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_Array_46_95E[];
extern Node PC_Array_46primUpdateVectorC[];
extern Node PC_Ix_46index[];
extern Node PC_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v213)
,};
Node FN_NHC_46IOExtras_46writeIOArray[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_I1,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,4,PUSH_P1,3)
, bytes2word(PUSH_I1,PUSH_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v212)
, 0
, 0
, 0
, 0
, useLabel(PS_v211)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v210)
, 0
, 0
, 0
, 0
, useLabel(PS_v209)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v207)
,	/* CT_v213: (byte 0) */
  HW(3,4)
, 0
,};
Node F0_NHC_46IOExtras_46writeIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46writeIOArray),4)
, useLabel(PS_v206)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
,};
Node PP_NHC_46IOExtras_46writeIOArray[] = {
 };
Node PC_NHC_46IOExtras_46writeIOArray[] = {
 	/* ST_v207: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,119,114,105)
, bytes2word(116,101,73,79)
, bytes2word(65,114,114,97)
, bytes2word(121,0,0,0)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46writeIOArray)
, useLabel(PC_Array_46_95E)
,	/* PS_v212: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46writeIOArray)
, useLabel(PC_Array_46primUpdateVectorC)
,	/* PS_v209: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46writeIOArray)
, useLabel(PC_Ix_46index)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46writeIOArray)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v206: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46writeIOArray)
, useLabel(PC_NHC_46IOExtras_46writeIOArray)
,};

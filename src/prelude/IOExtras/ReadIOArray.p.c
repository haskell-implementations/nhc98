#include "newmacros.h"
#include "runtime.h"

#define CT_v205	((void*)startLabel+144)
#define ST_v200	((void*)startLabel+184)
#define PS_v204	((void*)startLabel+212)
#define PS_v202	((void*)startLabel+224)
#define PS_v203	((void*)startLabel+236)
#define PS_v199	((void*)startLabel+248)
extern Node FN_Ix_46index[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Array_46primVectorIndexC[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_Array_46primVectorIndexC[];
extern Node PC_Ix_46index[];
extern Node PC_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v205)
,};
Node FN_NHC_46IOExtras_46readIOArray[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_I1,HEAP_ARG,3)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I3,ZAP_STACK_P1,5)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v200)
,	/* CT_v205: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_NHC_46IOExtras_46readIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46readIOArray),3)
, useLabel(PS_v199)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Ix_46index))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Array_46primVectorIndexC))
,};
Node PP_NHC_46IOExtras_46readIOArray[] = {
 };
Node PC_NHC_46IOExtras_46readIOArray[] = {
 	/* ST_v200: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,114,101,97)
, bytes2word(100,73,79,65)
, bytes2word(114,114,97,121)
, bytes2word(0,0,0,0)
,	/* PS_v204: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46readIOArray)
, useLabel(PC_Array_46primVectorIndexC)
,	/* PS_v202: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46readIOArray)
, useLabel(PC_Ix_46index)
,	/* PS_v203: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46readIOArray)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v199: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46readIOArray)
, useLabel(PC_NHC_46IOExtras_46readIOArray)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v198	((void*)startLabel+124)
#define ST_v195	((void*)startLabel+156)
#define PS_v196	((void*)startLabel+180)
#define PS_v197	((void*)startLabel+192)
#define PS_v194	((void*)startLabel+204)
extern Node FN_Array_46primUpdateVectorC[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_Array_46_95E[];
extern Node PC_Array_46primUpdateVectorC[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_NHC_46IOExtras_46writeIORef[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,PUSH_ARG_I1)
, bytes2word(PUSH_I1,PUSH_INT_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v195)
,	/* CT_v198: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46IOExtras_46writeIORef[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef),2)
, useLabel(PS_v194)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
,};
Node PP_NHC_46IOExtras_46writeIORef[] = {
 };
Node PC_NHC_46IOExtras_46writeIORef[] = {
 	/* ST_v195: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,119,114,105)
, bytes2word(116,101,73,79)
, bytes2word(82,101,102,0)
,	/* PS_v196: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46writeIORef)
, useLabel(PC_Array_46_95E)
,	/* PS_v197: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46writeIORef)
, useLabel(PC_Array_46primUpdateVectorC)
,	/* PS_v194: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46writeIORef)
, useLabel(PC_NHC_46IOExtras_46writeIORef)
,};

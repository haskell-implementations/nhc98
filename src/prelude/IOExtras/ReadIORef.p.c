#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+64)
#define ST_v179	((void*)startLabel+96)
#define PS_v180	((void*)startLabel+120)
#define PS_v178	((void*)startLabel+132)
extern Node FN_Array_46primVectorIndexC[];
extern Node PM_NHC_46IOExtras[];
extern Node PC_Array_46primVectorIndexC[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v181)
,};
Node FN_NHC_46IOExtras_46readIORef[] = {
  bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v179)
,	/* CT_v181: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46IOExtras_46readIORef[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef),1)
, useLabel(PS_v178)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Array_46primVectorIndexC))
,};
Node PP_NHC_46IOExtras_46readIORef[] = {
 };
Node PC_NHC_46IOExtras_46readIORef[] = {
 	/* ST_v179: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,114,101,97)
, bytes2word(100,73,79,82)
, bytes2word(101,102,0,0)
,	/* PS_v180: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46readIORef)
, useLabel(PC_Array_46primVectorIndexC)
,	/* PS_v178: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46readIORef)
, useLabel(PC_NHC_46IOExtras_46readIORef)
,};

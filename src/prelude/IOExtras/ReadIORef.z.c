#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+40)
#define ST_v178	((void*)startLabel+56)
extern Node TM_NHC_46IOExtras[];
extern Node FN_Array_46primVectorIndexC[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_NHC_46IOExtras_46readIORef[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46IOExtras_46readIORef[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef),1)
, VAPTAG(useLabel(FN_Array_46primVectorIndexC))
,	/* ST_v178: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,114,101,97)
, bytes2word(100,73,79,82)
, bytes2word(101,102,0,0)
,};

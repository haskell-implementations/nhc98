#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+28)
extern Node FN_Array_46primVectorIndexC[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_NHC_46IOExtras_46readIORef[] = {
  bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46IOExtras_46readIORef[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef),1)
, VAPTAG(useLabel(FN_Array_46primVectorIndexC))
,};

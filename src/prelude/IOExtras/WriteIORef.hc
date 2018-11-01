#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+48)
extern Node FN_Array_46primUpdateVectorC[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_NHC_46IOExtras_46writeIORef[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,2,PUSH_ARG_I1,PUSH_I1)
, bytes2word(PUSH_INT_P1,0,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v194: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46IOExtras_46writeIORef[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef),2)
, VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
,};

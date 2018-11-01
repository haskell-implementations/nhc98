#include "newmacros.h"
#include "runtime.h"

#define CT_v195	((void*)startLabel+60)
#define ST_v194	((void*)startLabel+76)
extern Node TM_NHC_46IOExtras[];
extern Node FN_Array_46primUpdateVectorC[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v195)
,};
Node FN_NHC_46IOExtras_46writeIORef[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(2,PUSH_ARG_I1,PUSH_I1,PUSH_INT_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I3,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 100001
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46IOExtras_46writeIORef[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef),2)
, VAPTAG(useLabel(FN_Array_46primUpdateVectorC))
,	/* ST_v194: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,119,114,105)
, bytes2word(116,101,73,79)
, bytes2word(82,101,102,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v204	((void*)startLabel+76)
#define ST_v203	((void*)startLabel+116)
extern Node TM_Monad[];
extern Node FN_Prelude_46sequence[];
extern Node FN_Prelude_46map[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46return[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46unzip[];
extern Node FN_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v204)
,};
Node FN_Monad_46mapAndUnzipM[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,PUSH_P1,0,PUSH_P1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v203)
,	/* CT_v204: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_Monad_46mapAndUnzipM[] = {
  CAPTAG(useLabel(FN_Monad_46mapAndUnzipM),3)
, VAPTAG(useLabel(FN_Prelude_46sequence))
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46unzip)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
,	/* ST_v203: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,109,97)
, bytes2word(112,65,110,100)
, bytes2word(85,110,122,105)
, bytes2word(112,77,0,0)
,};

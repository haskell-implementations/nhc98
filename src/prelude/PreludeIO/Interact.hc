#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+24)
#define FN_LAMBDA173	((void*)startLabel+60)
#define CT_v177	((void*)startLabel+84)
#define F0_LAMBDA173	((void*)startLabel+92)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getContents[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46putStr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_Prelude_46interact[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46interact[] = {
  CAPTAG(useLabel(FN_Prelude_46interact),1)
, CAPTAG(useLabel(FN_LAMBDA173),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getContents)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v177)
,	/* FN_LAMBDA173: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA173: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA173),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46putStr))
,};

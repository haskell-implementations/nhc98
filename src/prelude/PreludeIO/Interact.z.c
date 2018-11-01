#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+36)
#define FN_LAMBDA173	((void*)startLabel+72)
#define CT_v179	((void*)startLabel+108)
#define F0_LAMBDA173	((void*)startLabel+116)
#define ST_v176	((void*)startLabel+128)
#define ST_v178	((void*)startLabel+145)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getContents[];
extern Node TMSUB_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46putStr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_Prelude_46interact[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v176)
,	/* CT_v177: (byte 0) */
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
, useLabel(CT_v179)
,	/* FN_LAMBDA173: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40022
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA173: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA173),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46putStr))
,	/* ST_v176: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(105,110,116,101)
, bytes2word(114,97,99,116)
,	/* ST_v178: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,105,110,116)
, bytes2word(101,114,97,99)
, bytes2word(116,58,52,58)
, bytes2word(50,50,45,52)
, bytes2word(58,51,50,0)
,};

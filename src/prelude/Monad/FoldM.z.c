#include "newmacros.h"
#include "runtime.h"

#define v208	((void*)startLabel+32)
#define v209	((void*)startLabel+43)
#define CT_v212	((void*)startLabel+96)
#define FN_LAMBDA203	((void*)startLabel+140)
#define CT_v214	((void*)startLabel+168)
#define F0_LAMBDA203	((void*)startLabel+176)
#define ST_v210	((void*)startLabel+184)
#define ST_v213	((void*)startLabel+196)
extern Node TM_Monad[];
extern Node FN_Prelude_46return[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_62_62_61[];
extern Node TMSUB_Monad[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v212)
,};
Node FN_Monad_46foldM[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v208: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(15),BOT(15))
, bytes2word(POP_I1,PUSH_ARG_I3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,EVAL,NEEDHEAP_I32)
,	/* v209: (byte 3) */
  bytes2word(APPLY,1,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_P1,3,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,6)
, bytes2word(ZAP_STACK_P1,5,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v210)
,	/* CT_v212: (byte 0) */
  HW(4,4)
, 0
,};
Node F0_Monad_46foldM[] = {
  CAPTAG(useLabel(FN_Monad_46foldM),4)
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA203),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v214)
,	/* FN_LAMBDA203: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG_RET_EVAL,4)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50031
, useLabel(ST_v213)
,	/* CT_v214: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA203: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA203),4)
, VAPTAG(useLabel(FN_Monad_46foldM))
,	/* ST_v210: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,102,111)
,	/* ST_v213: (byte 4) */
  bytes2word(108,100,77,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,102,111)
, bytes2word(108,100,77,58)
, bytes2word(53,58,51,49)
, bytes2word(45,53,58,52)
, bytes2word(55,0,0,0)
,};

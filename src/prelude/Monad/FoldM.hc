#include "newmacros.h"
#include "runtime.h"

#define v208	((void*)startLabel+28)
#define v209	((void*)startLabel+39)
#define CT_v211	((void*)startLabel+84)
#define FN_LAMBDA203	((void*)startLabel+128)
#define CT_v212	((void*)startLabel+144)
#define F0_LAMBDA203	((void*)startLabel+152)
extern Node FN_Prelude_46return[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v211)
,};
Node FN_Monad_46foldM[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
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
,	/* CT_v211: (byte 0) */
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
, useLabel(CT_v212)
,	/* FN_LAMBDA203: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG_RET_EVAL,4)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v212: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA203: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA203),4)
, VAPTAG(useLabel(FN_Monad_46foldM))
,};

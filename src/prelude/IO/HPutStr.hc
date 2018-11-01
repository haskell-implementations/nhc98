#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+22)
#define v191	((void*)startLabel+30)
#define CT_v193	((void*)startLabel+64)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_IO_46hPutChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_IO_46hPutStr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v190: (byte 2) */
  bytes2word(TOP(12),BOT(12),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
,	/* v191: (byte 2) */
  bytes2word(2,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v193: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_IO_46hPutStr[] = {
  CAPTAG(useLabel(FN_IO_46hPutStr),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_IO_46hPutChar))
, VAPTAG(useLabel(FN_IO_46hPutStr))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};

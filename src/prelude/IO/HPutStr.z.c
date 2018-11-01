#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+26)
#define v191	((void*)startLabel+33)
#define CT_v194	((void*)startLabel+76)
#define ST_v192	((void*)startLabel+104)
extern Node TM_IO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_IO_46hPutChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_IO_46hPutStr[] = {
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v190: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
,	/* v191: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 80001
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_IO_46hPutStr[] = {
  CAPTAG(useLabel(FN_IO_46hPutStr),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_IO_46hPutChar))
, VAPTAG(useLabel(FN_IO_46hPutStr))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v192: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(80,117,116,83)
, bytes2word(116,114,0,0)
,};

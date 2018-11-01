#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+48)
#define ST_v178	((void*)startLabel+72)
extern Node TM_IO[];
extern Node FN_IO_46hPutStr[];
extern Node FN_IO_46hPutChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,};
Node FN_IO_46hPutStrLn[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CHAR_P1,10,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_IO_46hPutStrLn[] = {
  CAPTAG(useLabel(FN_IO_46hPutStrLn),2)
, VAPTAG(useLabel(FN_IO_46hPutStr))
, VAPTAG(useLabel(FN_IO_46hPutChar))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v178: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(80,117,116,83)
, bytes2word(116,114,76,110)
, bytes2word(0,0,0,0)
,};

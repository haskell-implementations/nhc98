#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+22)
#define v191	((void*)startLabel+41)
#define CT_v199	((void*)startLabel+212)
#define ST_v193	((void*)startLabel+256)
#define PS_v197	((void*)startLabel+268)
#define PS_v195	((void*)startLabel+280)
#define PS_v192	((void*)startLabel+292)
#define PS_v196	((void*)startLabel+304)
#define PS_v198	((void*)startLabel+316)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_IO_46hPutChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PM_IO[];
extern Node PC_IO_46hPutChar[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v199)
,};
Node FN_IO_46hPutStr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v190: (byte 2) */
  bytes2word(TOP(23),BOT(23),POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v191: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v193)
,	/* CT_v199: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_IO_46hPutStr[] = {
  CAPTAG(useLabel(FN_IO_46hPutStr),2)
, useLabel(PS_v192)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_IO_46hPutChar))
, VAPTAG(useLabel(FN_IO_46hPutStr))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
Node PP_IO_46hPutStr[] = {
 };
Node PC_IO_46hPutStr[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(80,117,116,83)
, bytes2word(116,114,0,0)
,	/* PS_v197: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStr)
, useLabel(PC_IO_46hPutChar)
,	/* PS_v195: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStr)
, useLabel(PC__40_41)
,	/* PS_v192: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStr)
, useLabel(PC_IO_46hPutStr)
,	/* PS_v196: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStr)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v198: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStr)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,};

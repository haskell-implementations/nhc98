#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+124)
#define ST_v179	((void*)startLabel+164)
#define PS_v181	((void*)startLabel+180)
#define PS_v180	((void*)startLabel+192)
#define PS_v178	((void*)startLabel+204)
#define PS_v182	((void*)startLabel+216)
extern Node FN_IO_46hPutStr[];
extern Node FN_IO_46hPutChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PM_IO[];
extern Node PC_IO_46hPutChar[];
extern Node PC_IO_46hPutStr[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,};
Node FN_IO_46hPutStrLn[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CHAR_P1,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v179)
,	/* CT_v183: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_IO_46hPutStrLn[] = {
  CAPTAG(useLabel(FN_IO_46hPutStrLn),2)
, useLabel(PS_v178)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hPutStr))
, VAPTAG(useLabel(FN_IO_46hPutChar))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
Node PP_IO_46hPutStrLn[] = {
 };
Node PC_IO_46hPutStrLn[] = {
 	/* ST_v179: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(80,117,116,83)
, bytes2word(116,114,76,110)
, bytes2word(0,0,0,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStrLn)
, useLabel(PC_IO_46hPutChar)
,	/* PS_v180: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStrLn)
, useLabel(PC_IO_46hPutStr)
,	/* PS_v178: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStrLn)
, useLabel(PC_IO_46hPutStrLn)
,	/* PS_v182: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPutStrLn)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+124)
#define ST_v182	((void*)startLabel+164)
#define PS_v185	((void*)startLabel+176)
#define PS_v184	((void*)startLabel+188)
#define PS_v183	((void*)startLabel+200)
#define PS_v181	((void*)startLabel+212)
extern Node FN_Prelude_46show[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_IO_46hPutStr[];
extern Node PM_IO[];
extern Node PC_IO_46hPutStr[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46show[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v186)
,};
Node FN_IO_46hPrint[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v182)
,	/* CT_v186: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_IO_46hPrint[] = {
  CAPTAG(useLabel(FN_IO_46hPrint),3)
, useLabel(PS_v181)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_IO_46hPutStr))
,};
Node PP_IO_46hPrint[] = {
 };
Node PC_IO_46hPrint[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(80,114,105,110)
, bytes2word(116,0,0,0)
,	/* PS_v185: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPrint)
, useLabel(PC_IO_46hPutStr)
,	/* PS_v184: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPrint)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v183: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPrint)
, useLabel(PC_Prelude_46show)
,	/* PS_v181: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hPrint)
, useLabel(PC_IO_46hPrint)
,};

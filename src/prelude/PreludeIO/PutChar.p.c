#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+60)
#define ST_v164	((void*)startLabel+96)
#define PS_v165	((void*)startLabel+112)
#define PS_v163	((void*)startLabel+124)
extern Node FN_IO_46hPutChar[];
extern Node CF_IO_46stdout[];
extern Node PM_Prelude[];
extern Node PC_IO_46hPutChar[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v166)
,};
Node FN_Prelude_46putChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v165)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v164)
,	/* CT_v166: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46putChar[] = {
  CAPTAG(useLabel(FN_Prelude_46putChar),1)
, useLabel(PS_v163)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hPutChar))
, useLabel(CF_IO_46stdout)
,};
Node PP_Prelude_46putChar[] = {
 };
Node PC_Prelude_46putChar[] = {
 	/* ST_v164: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,117,116,67)
, bytes2word(104,97,114,0)
,	/* PS_v165: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putChar)
, useLabel(PC_IO_46hPutChar)
,	/* PS_v163: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46putChar)
, useLabel(PC_Prelude_46putChar)
,};

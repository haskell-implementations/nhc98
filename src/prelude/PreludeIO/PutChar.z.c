#include "newmacros.h"
#include "runtime.h"

#define CT_v164	((void*)startLabel+32)
#define ST_v163	((void*)startLabel+52)
extern Node TM_Prelude[];
extern Node FN_IO_46hPutChar[];
extern Node CF_IO_46stdout[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v164)
,};
Node FN_Prelude_46putChar[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v163)
,	/* CT_v164: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46putChar[] = {
  CAPTAG(useLabel(FN_Prelude_46putChar),1)
, VAPTAG(useLabel(FN_IO_46hPutChar))
, useLabel(CF_IO_46stdout)
,	/* ST_v163: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,117,116,67)
, bytes2word(104,97,114,0)
,};

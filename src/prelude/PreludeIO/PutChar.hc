#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+20)
extern Node FN_IO_46hPutChar[];
extern Node CF_IO_46stdout[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v163)
,};
Node FN_Prelude_46putChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v163: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46putChar[] = {
  CAPTAG(useLabel(FN_Prelude_46putChar),1)
, VAPTAG(useLabel(FN_IO_46hPutChar))
, useLabel(CF_IO_46stdout)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v160	((void*)startLabel+20)
extern Node FN_IO_46hPutStr[];
extern Node CF_IO_46stdout[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v160)
,};
Node FN_Prelude_46putStr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v160: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46putStr[] = {
  VAPTAG(useLabel(FN_Prelude_46putStr))
, CAPTAG(useLabel(FN_IO_46hPutStr),1)
, useLabel(CF_IO_46stdout)
,};

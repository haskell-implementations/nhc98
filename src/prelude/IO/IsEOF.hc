#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+20)
extern Node FN_IO_46hIsEOF[];
extern Node CF_IO_46stdin[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v173)
,};
Node FN_IO_46isEOF[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v173: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_IO_46isEOF[] = {
  VAPTAG(useLabel(FN_IO_46isEOF))
, VAPTAG(useLabel(FN_IO_46hIsEOF))
, useLabel(CF_IO_46stdin)
,};

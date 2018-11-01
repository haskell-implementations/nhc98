#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+28)
extern Node FN_Prelude_46primOpenSocket[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v181)
,};
Node FN_IO_46openSocket[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v181: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_IO_46openSocket[] = {
  CAPTAG(useLabel(FN_IO_46openSocket),3)
, VAPTAG(useLabel(FN_Prelude_46primOpenSocket))
,};

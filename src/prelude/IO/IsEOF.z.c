#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+32)
#define ST_v173	((void*)startLabel+52)
extern Node TM_IO[];
extern Node FN_IO_46hIsEOF[];
extern Node CF_IO_46stdin[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v174)
,};
Node FN_IO_46isEOF[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_IO_46isEOF[] = {
  VAPTAG(useLabel(FN_IO_46isEOF))
, VAPTAG(useLabel(FN_IO_46hIsEOF))
, useLabel(CF_IO_46stdin)
,	/* ST_v173: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(115,69,79,70)
, bytes2word(0,0,0,0)
,};

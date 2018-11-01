#include "newmacros.h"
#include "runtime.h"

#define CT_v161	((void*)startLabel+32)
#define ST_v160	((void*)startLabel+52)
extern Node TM_Prelude[];
extern Node FN_IO_46hGetChar[];
extern Node CF_IO_46stdin[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v161)
,};
Node FN_Prelude_46getChar[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v160)
,	/* CT_v161: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46getChar[] = {
  VAPTAG(useLabel(FN_Prelude_46getChar))
, VAPTAG(useLabel(FN_IO_46hGetChar))
, useLabel(CF_IO_46stdin)
,	/* ST_v160: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(103,101,116,67)
, bytes2word(104,97,114,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+40)
#define ST_v181	((void*)startLabel+56)
extern Node TM_IO[];
extern Node FN_Prelude_46primOpenSocket[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v182)
,};
Node FN_IO_46openSocket[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_IO_46openSocket[] = {
  CAPTAG(useLabel(FN_IO_46openSocket),3)
, VAPTAG(useLabel(FN_Prelude_46primOpenSocket))
,	/* ST_v181: (byte 0) */
  bytes2word(73,79,46,111)
, bytes2word(112,101,110,83)
, bytes2word(111,99,107,101)
, bytes2word(116,0,0,0)
,};

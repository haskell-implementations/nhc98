#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+32)
extern Node FN_Prelude_46const[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Prelude_46ioError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v169: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46ioError[] = {
  CAPTAG(useLabel(FN_Prelude_46ioError),1)
, CAPTAG(useLabel(FN_Prelude_46const),1)
,};

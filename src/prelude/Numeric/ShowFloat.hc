#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+32)
extern Node FN_Numeric_46showGFloat[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_Numeric_46showFloat[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v173: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Numeric_46showFloat[] = {
  CAPTAG(useLabel(FN_Numeric_46showFloat),1)
, CAPTAG(useLabel(FN_Numeric_46showGFloat),1)
,};

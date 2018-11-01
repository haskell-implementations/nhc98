#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+44)
extern Node FN_Complex_46magnitude[];
extern Node FN_Complex_46phase[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v182)
,};
Node FN_Complex_46polar[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v182: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Complex_46polar[] = {
  CAPTAG(useLabel(FN_Complex_46polar),2)
, VAPTAG(useLabel(FN_Complex_46magnitude))
, VAPTAG(useLabel(FN_Complex_46phase))
,};

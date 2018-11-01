#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+56)
#define ST_v182	((void*)startLabel+76)
extern Node TM_Complex[];
extern Node FN_Complex_46magnitude[];
extern Node FN_Complex_46phase[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,};
Node FN_Complex_46polar[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 80001
, useLabel(ST_v182)
,	/* CT_v183: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Complex_46polar[] = {
  CAPTAG(useLabel(FN_Complex_46polar),2)
, VAPTAG(useLabel(FN_Complex_46magnitude))
, VAPTAG(useLabel(FN_Complex_46phase))
,	/* ST_v182: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(112,111,108,97)
, bytes2word(114,0,0,0)
,};

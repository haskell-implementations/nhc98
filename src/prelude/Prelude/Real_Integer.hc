#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+32)
#define CT_v180	((void*)startLabel+84)
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node CF_Prelude_46Ord_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_Prelude_46Real_46Prelude_46Integer_46toRational[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CADR_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v179: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Integer_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer_46toRational),1)
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v180)
,};
Node FN_Prelude_46Real_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v180: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, useLabel(F0_Prelude_46Real_46Prelude_46Integer_46toRational)
,};

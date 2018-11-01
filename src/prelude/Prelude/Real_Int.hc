#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+36)
#define CT_v183	((void*)startLabel+92)
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node CF_Prelude_46Ord_46Prelude_46Int[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_Prelude_46Real_46Prelude_46Int_46toRational[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CADR_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v182: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Int_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Int_46toRational),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v183)
,};
Node FN_Prelude_46Real_46Prelude_46Int[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v183: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Int))
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, useLabel(F0_Prelude_46Real_46Prelude_46Int_46toRational)
,};

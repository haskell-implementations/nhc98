#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+48)
#define CT_v185	((void*)startLabel+112)
#define ST_v184	((void*)startLabel+136)
#define ST_v182	((void*)startLabel+161)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node CF_Prelude_46Ord_46Prelude_46Int[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_Prelude_46Real_46Prelude_46Int_46toRational[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CADR_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
, 60003
, useLabel(ST_v182)
,	/* CT_v183: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Int_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Int_46toRational),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v185)
,};
Node FN_Prelude_46Real_46Prelude_46Int[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, 50010
, useLabel(ST_v184)
,	/* CT_v185: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Int))
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, useLabel(CF_Prelude_46Ord_46Prelude_46Int)
, useLabel(F0_Prelude_46Real_46Prelude_46Int_46toRational)
,	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
,	/* ST_v182: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(108,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,116,111)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
, bytes2word(0,0,0,0)
,};

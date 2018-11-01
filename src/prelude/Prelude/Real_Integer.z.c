#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+44)
#define CT_v182	((void*)startLabel+104)
#define ST_v181	((void*)startLabel+128)
#define ST_v179	((void*)startLabel+157)
extern Node TM_Prelude[];
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node CF_Prelude_46Ord_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v180)
,};
Node FN_Prelude_46Real_46Prelude_46Integer_46toRational[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CADR_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
, 60003
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Integer_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer_46toRational),1)
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v182)
,};
Node FN_Prelude_46Real_46Prelude_46Integer[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, 50010
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, useLabel(F0_Prelude_46Real_46Prelude_46Integer_46toRational)
,	/* ST_v181: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
,	/* ST_v179: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,82,101,97)
, bytes2word(108,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,101,103,101)
, bytes2word(114,46,116,111)
, bytes2word(82,97,116,105)
, bytes2word(111,110,97,108)
, bytes2word(0,0,0,0)
,};

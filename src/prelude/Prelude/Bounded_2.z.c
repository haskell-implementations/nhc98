#include "newmacros.h"
#include "runtime.h"

#define CT_v214	((void*)startLabel+52)
#define CT_v216	((void*)startLabel+120)
#define CT_v218	((void*)startLabel+192)
#define ST_v217	((void*)startLabel+212)
#define ST_v213	((void*)startLabel+238)
#define ST_v215	((void*)startLabel+273)
extern Node TM_Prelude[];
extern Node FN_Prelude_46maxBound[];
extern Node FN_Prelude_46minBound[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v214)
,};
Node FN_Prelude_46Bounded_46Prelude_462_46maxBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50003
, useLabel(ST_v213)
,	/* CT_v214: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_462_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462_46maxBound),2)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v216)
,};
Node FN_Prelude_46Bounded_46Prelude_462_46minBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 40003
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_462_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462_46minBound),2)
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v218)
,};
Node FN_Prelude_46Bounded_46Prelude_462[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30036
, useLabel(ST_v217)
,	/* CT_v218: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462),2)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462_46maxBound))
,	/* ST_v217: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v213: (byte 2) */
  bytes2word(50,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,66,111)
, bytes2word(117,110,100,101)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,50,46)
, bytes2word(109,97,120,66)
, bytes2word(111,117,110,100)
,	/* ST_v215: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,66,111,117)
, bytes2word(110,100,101,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,50,46,109)
, bytes2word(105,110,66,111)
, bytes2word(117,110,100,0)
,};

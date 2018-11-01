#include "newmacros.h"
#include "runtime.h"

#define CT_v235	((void*)startLabel+56)
#define CT_v237	((void*)startLabel+128)
#define CT_v239	((void*)startLabel+204)
#define ST_v238	((void*)startLabel+224)
#define ST_v234	((void*)startLabel+250)
#define ST_v236	((void*)startLabel+285)
extern Node TM_Prelude[];
extern Node FN_Prelude_46maxBound[];
extern Node FN_Prelude_46minBound[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v235)
,};
Node FN_Prelude_46Bounded_46Prelude_463_46maxBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, 50003
, useLabel(ST_v234)
,	/* CT_v235: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_463_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463_46maxBound),3)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v237)
,};
Node FN_Prelude_46Bounded_46Prelude_463_46minBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, 40003
, useLabel(ST_v236)
,	/* CT_v237: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_463_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463_46minBound),3)
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v239)
,};
Node FN_Prelude_46Bounded_46Prelude_463[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30047
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463),3)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463_46maxBound))
,	/* ST_v238: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v234: (byte 2) */
  bytes2word(51,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,66,111)
, bytes2word(117,110,100,101)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,51,46)
, bytes2word(109,97,120,66)
, bytes2word(111,117,110,100)
,	/* ST_v236: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,66,111,117)
, bytes2word(110,100,101,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,51,46,109)
, bytes2word(105,110,66,111)
, bytes2word(117,110,100,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v213	((void*)startLabel+40)
#define CT_v214	((void*)startLabel+96)
#define CT_v215	((void*)startLabel+156)
extern Node FN_Prelude_46maxBound[];
extern Node FN_Prelude_46minBound[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v213)
,};
Node FN_Prelude_46Bounded_46Prelude_462_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v213: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_462_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462_46maxBound),2)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v214)
,};
Node FN_Prelude_46Bounded_46Prelude_462_46minBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v214: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_462_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462_46minBound),2)
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,};
Node FN_Prelude_46Bounded_46Prelude_462[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v215: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462),2)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_462_46maxBound))
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v234	((void*)startLabel+48)
#define CT_v235	((void*)startLabel+112)
#define CT_v236	((void*)startLabel+176)
extern Node FN_Prelude_46maxBound[];
extern Node FN_Prelude_46minBound[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v234)
,};
Node FN_Prelude_46Bounded_46Prelude_463_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v234: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_463_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463_46maxBound),3)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v235)
,};
Node FN_Prelude_46Bounded_46Prelude_463_46minBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v235: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_463_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463_46minBound),3)
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v236)
,};
Node FN_Prelude_46Bounded_46Prelude_463[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v236: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463),3)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_463_46maxBound))
,};

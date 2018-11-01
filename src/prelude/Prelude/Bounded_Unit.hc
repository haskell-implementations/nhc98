#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+28)
#define CT_v174	((void*)startLabel+68)
#define CT_v175	((void*)startLabel+108)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v173)
,};
Node FN_Prelude_46Bounded_46_40_41_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v173: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46_40_41_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46_40_41_46maxBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v174)
,};
Node FN_Prelude_46Bounded_46_40_41_46minBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v174: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46_40_41_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46_40_41_46minBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v175)
,};
Node FN_Prelude_46Bounded_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v175: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46_40_41))
, useLabel(CF_Prelude_46Bounded_46_40_41_46minBound)
, useLabel(CF_Prelude_46Bounded_46_40_41_46maxBound)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+20)
#define CT_v174	((void*)startLabel+52)
#define CT_v175	((void*)startLabel+92)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v173)
,};
Node FN_Prelude_46Bounded_46Prelude_46Char_46maxBound[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,255,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v173: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Char_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Char_46maxBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v174)
,};
Node FN_Prelude_46Bounded_46Prelude_46Char_46minBound[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,0,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v174: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Char_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Char_46minBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v175)
,};
Node FN_Prelude_46Bounded_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v175: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Char))
, useLabel(CF_Prelude_46Bounded_46Prelude_46Char_46minBound)
, useLabel(CF_Prelude_46Bounded_46Prelude_46Char_46maxBound)
,};

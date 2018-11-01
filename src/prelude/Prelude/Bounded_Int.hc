#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+28)
#define CT_v180	((void*)startLabel+68)
#define CT_v181	((void*)startLabel+108)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v179)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int_46maxBound[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 2147483647
,	/* CT_v179: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int_46maxBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v180)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int_46minBound[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, -2147483648
,	/* CT_v180: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int_46minBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v181)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v181: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int))
, useLabel(CF_Prelude_46Bounded_46Prelude_46Int_46minBound)
, useLabel(CF_Prelude_46Bounded_46Prelude_46Int_46maxBound)
,};

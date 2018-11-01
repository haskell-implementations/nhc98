#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+40)
#define CT_v182	((void*)startLabel+92)
#define CT_v184	((void*)startLabel+144)
#define ST_v183	((void*)startLabel+164)
#define ST_v179	((void*)startLabel+192)
#define ST_v181	((void*)startLabel+229)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v180)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int_46maxBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 2147483647
, 70003
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int_46maxBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v182)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int_46minBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, -2147483648
, 60003
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int_46minBound))
, bytes2word(0,0,0,0)
, useLabel(CT_v184)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50010
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int))
, useLabel(CF_Prelude_46Bounded_46Prelude_46Int_46minBound)
, useLabel(CF_Prelude_46Bounded_46Prelude_46Int_46maxBound)
,	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v179: (byte 4) */
  bytes2word(73,110,116,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(109,97,120,66)
, bytes2word(111,117,110,100)
,	/* ST_v181: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,66,111,117)
, bytes2word(110,100,101,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(46,109,105,110)
, bytes2word(66,111,117,110)
, bytes2word(100,0,0,0)
,};

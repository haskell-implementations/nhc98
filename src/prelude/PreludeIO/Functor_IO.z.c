#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+44)
#define CT_v198	((void*)startLabel+108)
#define ST_v197	((void*)startLabel+124)
#define ST_v195	((void*)startLabel+156)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Functor_46NHC_46Internal_46IO_46fmap[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40004
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Functor_46NHC_46Internal_46IO_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46NHC_46Internal_46IO_46fmap),2)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Functor_46NHC_46Internal_46IO[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 30011
, useLabel(ST_v197)
,	/* CT_v198: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46NHC_46Internal_46IO[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46NHC_46Internal_46IO))
, useLabel(F0_Prelude_46Functor_46NHC_46Internal_46IO_46fmap)
,	/* ST_v197: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(78,72,67,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
,	/* ST_v195: (byte 4) */
  bytes2word(46,73,79,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(78,72,67,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
, bytes2word(46,73,79,46)
, bytes2word(102,109,97,112)
, bytes2word(0,0,0,0)
,};

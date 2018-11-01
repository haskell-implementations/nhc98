#include "newmacros.h"
#include "runtime.h"

#define CT_v195	((void*)startLabel+32)
#define CT_v196	((void*)startLabel+84)
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v195)
,};
Node FN_Prelude_46Functor_46NHC_46Internal_46IO_46fmap[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v195: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Functor_46NHC_46Internal_46IO_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46NHC_46Internal_46IO_46fmap),2)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,0,0)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Functor_46NHC_46Internal_46IO[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v196: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46NHC_46Internal_46IO[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46NHC_46Internal_46IO))
, useLabel(F0_Prelude_46Functor_46NHC_46Internal_46IO_46fmap)
,};

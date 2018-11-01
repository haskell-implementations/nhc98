#include "newmacros.h"
#include "runtime.h"

#define CT_v185	((void*)startLabel+24)
#define CT_v186	((void*)startLabel+68)
extern Node FN_Prelude_46map[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,};
Node FN_Prelude_46Functor_46Prelude_46_91_93_46fmap[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v185: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Functor_46Prelude_46_91_93_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap),2)
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(0,0,0,0)
, useLabel(CT_v186)
,};
Node FN_Prelude_46Functor_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v186: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46Prelude_46_91_93[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93))
, useLabel(F0_Prelude_46Functor_46Prelude_46_91_93_46fmap)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+36)
#define CT_v188	((void*)startLabel+92)
#define ST_v187	((void*)startLabel+108)
#define ST_v185	((void*)startLabel+135)
extern Node TM_Prelude[];
extern Node FN_Prelude_46map[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v186)
,};
Node FN_Prelude_46Functor_46Prelude_46_91_93_46fmap[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70005
, useLabel(ST_v185)
,	/* CT_v186: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Functor_46Prelude_46_91_93_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap),2)
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(0,0,0,0)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Functor_46Prelude_46_91_93[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 60010
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46Prelude_46_91_93[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93))
, useLabel(F0_Prelude_46Functor_46Prelude_46_91_93_46fmap)
,	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v185: (byte 3) */
  bytes2word(91,93,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,70)
, bytes2word(117,110,99,116)
, bytes2word(111,114,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
, bytes2word(93,46,102,109)
, bytes2word(97,112,0,0)
,};

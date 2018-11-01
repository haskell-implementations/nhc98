#include "newmacros.h"
#include "runtime.h"

#define CT_v195	((void*)startLabel+36)
#define CT_v197	((void*)startLabel+92)
#define CT_v199	((void*)startLabel+144)
#define ST_v198	((void*)startLabel+168)
#define ST_v194	((void*)startLabel+195)
#define ST_v196	((void*)startLabel+228)
extern Node TM_Monad[];
extern Node FN_Prelude_46_43_43[];
extern Node CF_Prelude_46Monad_46Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v195)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93_46mplus[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70005
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46_91_93_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93_46mplus),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v197)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93_46mzero[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60005
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46_91_93_46mzero[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93_46mzero))
, bytes2word(0,0,0,0)
, useLabel(CT_v199)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, 50011
, useLabel(ST_v198)
,	/* CT_v199: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46_91_93[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93))
, useLabel(CF_Prelude_46Monad_46Prelude_46_91_93)
, useLabel(CF_Monad_46MonadPlus_46Prelude_46_91_93_46mzero)
, useLabel(F0_Monad_46MonadPlus_46Prelude_46_91_93_46mplus)
,	/* ST_v198: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v194: (byte 3) */
  bytes2word(91,93,0,77)
, bytes2word(111,110,97,100)
, bytes2word(46,77,111,110)
, bytes2word(97,100,80,108)
, bytes2word(117,115,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,91)
, bytes2word(93,46,109,112)
,	/* ST_v196: (byte 4) */
  bytes2word(108,117,115,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,109)
, bytes2word(122,101,114,111)
, bytes2word(0,0,0,0)
,};

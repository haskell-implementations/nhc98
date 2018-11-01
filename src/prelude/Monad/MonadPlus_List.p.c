#include "newmacros.h"
#include "runtime.h"

#define CT_v197	((void*)startLabel+64)
#define CT_v201	((void*)startLabel+168)
#define CT_v205	((void*)startLabel+276)
#define ST_v203	((void*)startLabel+316)
#define ST_v195	((void*)startLabel+344)
#define ST_v199	((void*)startLabel+380)
#define PS_v200	((void*)startLabel+416)
#define PS_v198	((void*)startLabel+428)
#define PS_v196	((void*)startLabel+440)
#define PS_v194	((void*)startLabel+452)
#define PS_v202	((void*)startLabel+464)
#define PS_v204	((void*)startLabel+476)
extern Node FN_Prelude_46_43_43[];
extern Node CF_Prelude_46Monad_46Prelude_46_91_93[];
extern Node PM_Monad[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_463[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v197)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93_46mplus[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, 70005
, useLabel(ST_v195)
,	/* CT_v197: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46_91_93_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93_46mplus),2)
, useLabel(PS_v194)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v201)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93_46mzero[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 60005
, useLabel(ST_v199)
,	/* CT_v201: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46_91_93_46mzero[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93_46mzero))
, useLabel(PS_v198)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v205)
,};
Node FN_Monad_46MonadPlus_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, 50011
, useLabel(ST_v203)
,	/* CT_v205: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46_91_93[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46_91_93))
, useLabel(PS_v202)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Monad_46Prelude_46_91_93)
, useLabel(CF_Monad_46MonadPlus_46Prelude_46_91_93_46mzero)
, useLabel(F0_Monad_46MonadPlus_46Prelude_46_91_93_46mplus)
,};
Node PP_Monad_46MonadPlus_46Prelude_46_91_93[] = {
 };
Node PC_Monad_46MonadPlus_46Prelude_46_91_93[] = {
 	/* ST_v203: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,0,0)
,};
Node PP_Monad_46MonadPlus_46Prelude_46_91_93_46mplus[] = {
 };
Node PC_Monad_46MonadPlus_46Prelude_46_91_93_46mplus[] = {
 	/* ST_v195: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,109)
, bytes2word(112,108,117,115)
, bytes2word(0,0,0,0)
,};
Node PP_Monad_46MonadPlus_46Prelude_46_91_93_46mzero[] = {
 };
Node PC_Monad_46MonadPlus_46Prelude_46_91_93_46mzero[] = {
 	/* ST_v199: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,109)
, bytes2word(122,101,114,111)
, bytes2word(0,0,0,0)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46_91_93_46mzero)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46_91_93_46mzero)
, useLabel(PC_Monad_46MonadPlus_46Prelude_46_91_93_46mzero)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46_91_93_46mplus)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46_91_93_46mplus)
, useLabel(PC_Monad_46MonadPlus_46Prelude_46_91_93_46mplus)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46_91_93)
, useLabel(PC_Monad_46MonadPlus_46Prelude_46_91_93)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46_91_93)
, useLabel(PC_Prelude_463)
,};

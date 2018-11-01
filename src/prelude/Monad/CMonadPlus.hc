#include "newmacros.h"
#include "runtime.h"

#define CT_v205	((void*)startLabel+36)
#define FN_LAMBDA202	((void*)startLabel+64)
#define CT_v207	((void*)startLabel+84)
#define CF_LAMBDA202	((void*)startLabel+92)
#define CT_v208	((void*)startLabel+120)
#define FN_LAMBDA203	((void*)startLabel+148)
#define CT_v210	((void*)startLabel+168)
#define CF_LAMBDA203	((void*)startLabel+176)
#define CT_v211	((void*)startLabel+200)
#define CT_v212	((void*)startLabel+232)
#define CT_v213	((void*)startLabel+264)
#define ST_v206	((void*)startLabel+276)
#define ST_v209	((void*)startLabel+321)
extern Node FN_NHC_46Internal_46_95noMethodError[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v205)
,};
Node FN_Monad_46_95_46mplus[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v205: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Monad_46_95_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46_95_46mplus),3)
, VAPTAG(useLabel(FN_LAMBDA202))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v207)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v206)
,	/* CT_v207: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA202: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA202))
, bytes2word(1,0,0,1)
, useLabel(CT_v208)
,};
Node FN_Monad_46_95_46mzero[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v208: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Monad_46_95_46mzero[] = {
  CAPTAG(useLabel(FN_Monad_46_95_46mzero),1)
, VAPTAG(useLabel(FN_LAMBDA203))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v210)
,	/* FN_LAMBDA203: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v209)
,	/* CT_v210: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA203: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA203))
, bytes2word(1,0,0,1)
, useLabel(CT_v211)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Monad[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v211: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46Monad[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Monad),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v212)
,};
Node FN_Monad_46mzero[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v212: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46mzero[] = {
  CAPTAG(useLabel(FN_Monad_46mzero),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v213)
,};
Node FN_Monad_46mplus[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v213: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46mplus),1)
,	/* ST_v206: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,109)
, bytes2word(112,108,117,115)
,	/* ST_v209: (byte 1) */
  bytes2word(0,78,111,32)
, bytes2word(100,101,102,97)
, bytes2word(117,108,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,105,116,105)
, bytes2word(111,110,32,102)
, bytes2word(111,114,32,99)
, bytes2word(108,97,115,115)
, bytes2word(32,109,101,116)
, bytes2word(104,111,100,32)
, bytes2word(109,122,101,114)
, bytes2word(111,0,0,0)
,};

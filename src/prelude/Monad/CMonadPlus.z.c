#include "newmacros.h"
#include "runtime.h"

#define CT_v206	((void*)startLabel+48)
#define FN_LAMBDA202	((void*)startLabel+76)
#define CT_v209	((void*)startLabel+108)
#define CF_LAMBDA202	((void*)startLabel+116)
#define CT_v211	((void*)startLabel+156)
#define FN_LAMBDA203	((void*)startLabel+184)
#define CT_v214	((void*)startLabel+216)
#define CF_LAMBDA203	((void*)startLabel+224)
#define CT_v216	((void*)startLabel+260)
#define CT_v218	((void*)startLabel+304)
#define CT_v220	((void*)startLabel+348)
#define ST_v215	((void*)startLabel+360)
#define ST_v205	((void*)startLabel+390)
#define ST_v207	((void*)startLabel+404)
#define ST_v210	((void*)startLabel+424)
#define ST_v212	((void*)startLabel+438)
#define ST_v219	((void*)startLabel+458)
#define ST_v217	((void*)startLabel+470)
#define ST_v208	((void*)startLabel+482)
#define ST_v213	((void*)startLabel+527)
extern Node TM_Monad[];
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node TMSUB_Monad[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v206)
,};
Node FN_Monad_46_95_46mplus[] = {
  useLabel(TM_Monad)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v205)
,	/* CT_v206: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Monad_46_95_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46_95_46mplus),3)
, VAPTAG(useLabel(FN_LAMBDA202))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v209)
,	/* FN_LAMBDA202: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v208)
, 0
, useLabel(ST_v207)
,	/* CT_v209: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA202: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA202))
, bytes2word(1,0,0,1)
, useLabel(CT_v211)
,};
Node FN_Monad_46_95_46mzero[] = {
  useLabel(TM_Monad)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(ST_v210)
,	/* CT_v211: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Monad_46_95_46mzero[] = {
  CAPTAG(useLabel(FN_Monad_46_95_46mzero),1)
, VAPTAG(useLabel(FN_LAMBDA203))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v214)
,	/* FN_LAMBDA203: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v213)
, 0
, useLabel(ST_v212)
,	/* CT_v214: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA203: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA203))
, bytes2word(1,0,0,1)
, useLabel(CT_v216)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Monad[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30020
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46Monad[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Monad),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v218)
,};
Node FN_Monad_46mzero[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30020
, useLabel(ST_v217)
,	/* CT_v218: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46mzero[] = {
  CAPTAG(useLabel(FN_Monad_46mzero),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v220)
,};
Node FN_Monad_46mplus[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30020
, useLabel(ST_v219)
,	/* CT_v220: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46mplus),1)
,	/* ST_v215: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
,	/* ST_v205: (byte 2) */
  bytes2word(100,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(95,46,109,112)
,	/* ST_v207: (byte 4) */
  bytes2word(108,117,115,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,95,46)
, bytes2word(109,112,108,117)
, bytes2word(115,58,110,111)
,	/* ST_v210: (byte 4) */
  bytes2word(112,111,115,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,95,46)
, bytes2word(109,122,101,114)
,	/* ST_v212: (byte 2) */
  bytes2word(111,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(95,46,109,122)
, bytes2word(101,114,111,58)
, bytes2word(110,111,112,111)
,	/* ST_v219: (byte 2) */
  bytes2word(115,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(109,112,108,117)
,	/* ST_v217: (byte 2) */
  bytes2word(115,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(109,122,101,114)
,	/* ST_v208: (byte 2) */
  bytes2word(111,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,109,112,108)
,	/* ST_v213: (byte 3) */
  bytes2word(117,115,0,78)
, bytes2word(111,32,100,101)
, bytes2word(102,97,117,108)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,105)
, bytes2word(116,105,111,110)
, bytes2word(32,102,111,114)
, bytes2word(32,99,108,97)
, bytes2word(115,115,32,109)
, bytes2word(101,116,104,111)
, bytes2word(100,32,109,122)
, bytes2word(101,114,111,0)
,};

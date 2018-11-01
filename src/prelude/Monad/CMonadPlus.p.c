#include "newmacros.h"
#include "runtime.h"

#define CT_v209	((void*)startLabel+96)
#define FN_LAMBDA202	((void*)startLabel+140)
#define CT_v213	((void*)startLabel+184)
#define CF_LAMBDA202	((void*)startLabel+192)
#define CT_v218	((void*)startLabel+296)
#define FN_LAMBDA203	((void*)startLabel+340)
#define CT_v222	((void*)startLabel+384)
#define CF_LAMBDA203	((void*)startLabel+392)
#define CT_v225	((void*)startLabel+440)
#define CT_v228	((void*)startLabel+496)
#define CT_v231	((void*)startLabel+552)
#define ST_v224	((void*)startLabel+580)
#define ST_v206	((void*)startLabel+612)
#define PP_LAMBDA202	((void*)startLabel+626)
#define PC_LAMBDA202	((void*)startLabel+626)
#define ST_v211	((void*)startLabel+626)
#define ST_v215	((void*)startLabel+648)
#define PP_LAMBDA203	((void*)startLabel+662)
#define PC_LAMBDA203	((void*)startLabel+662)
#define ST_v220	((void*)startLabel+662)
#define ST_v230	((void*)startLabel+684)
#define ST_v227	((void*)startLabel+696)
#define ST_v212	((void*)startLabel+708)
#define ST_v221	((void*)startLabel+753)
#define PS_v226	((void*)startLabel+800)
#define PS_v229	((void*)startLabel+812)
#define PS_v217	((void*)startLabel+824)
#define PS_v214	((void*)startLabel+836)
#define PS_v216	((void*)startLabel+848)
#define PS_v208	((void*)startLabel+860)
#define PS_v205	((void*)startLabel+872)
#define PS_v207	((void*)startLabel+884)
#define PS_v223	((void*)startLabel+896)
#define PS_v210	((void*)startLabel+908)
#define PS_v219	((void*)startLabel+920)
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node PM_Monad[];
extern Node PC_NHC_46Internal_46_95noMethodError[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v209)
,};
Node FN_Monad_46_95_46mplus[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, useLabel(PS_v207)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v206)
,	/* CT_v209: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Monad_46_95_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46_95_46mplus),3)
, useLabel(PS_v205)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA202))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v213)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v212)
, 0
, useLabel(ST_v211)
,	/* CT_v213: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA202: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA202))
, useLabel(PS_v210)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v218)
,};
Node FN_Monad_46_95_46mzero[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v217)
, 0
, 0
, 0
, 0
, useLabel(PS_v216)
, 0
, 0
, 0
, 0
, 0
, useLabel(ST_v215)
,	/* CT_v218: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Monad_46_95_46mzero[] = {
  CAPTAG(useLabel(FN_Monad_46_95_46mzero),1)
, useLabel(PS_v214)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA203))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v222)
,	/* FN_LAMBDA203: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v221)
, 0
, useLabel(ST_v220)
,	/* CT_v222: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA203: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA203))
, useLabel(PS_v219)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v225)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Monad[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30020
, useLabel(ST_v224)
,	/* CT_v225: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46Monad[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Monad),1)
, useLabel(PS_v223)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,};
Node FN_Monad_46mzero[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30020
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46mzero[] = {
  CAPTAG(useLabel(FN_Monad_46mzero),1)
, useLabel(PS_v226)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v231)
,};
Node FN_Monad_46mplus[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30020
, useLabel(ST_v230)
,	/* CT_v231: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Monad_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46mplus),1)
, useLabel(PS_v229)
, 0
, 0
, 0
,};
Node PP_Monad_46MonadPlus_46Prelude_46Monad[] = {
 };
Node PC_Monad_46MonadPlus_46Prelude_46Monad[] = {
 	/* ST_v224: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,0,0,0)
,};
Node PP_Monad_46_95_46mplus[] = {
 };
Node PC_Monad_46_95_46mplus[] = {
 	/* ST_v206: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,95,46)
, bytes2word(109,112,108,117)
,	/* PP_LAMBDA202: (byte 2) */
 	/* PC_LAMBDA202: (byte 2) */
 	/* ST_v211: (byte 2) */
  bytes2word(115,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(95,46,109,112)
, bytes2word(108,117,115,58)
, bytes2word(110,111,112,111)
, bytes2word(115,0,0,0)
,};
Node PP_Monad_46_95_46mzero[] = {
 };
Node PC_Monad_46_95_46mzero[] = {
 	/* ST_v215: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,95,46)
, bytes2word(109,122,101,114)
,	/* PP_LAMBDA203: (byte 2) */
 	/* PC_LAMBDA203: (byte 2) */
 	/* ST_v220: (byte 2) */
  bytes2word(111,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(95,46,109,122)
, bytes2word(101,114,111,58)
, bytes2word(110,111,112,111)
, bytes2word(115,0,0,0)
,};
Node PP_Monad_46mplus[] = {
 };
Node PC_Monad_46mplus[] = {
 	/* ST_v230: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,109,112)
, bytes2word(108,117,115,0)
,};
Node PP_Monad_46mzero[] = {
 };
Node PC_Monad_46mzero[] = {
 	/* ST_v227: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,109,122)
,	/* ST_v212: (byte 4) */
  bytes2word(101,114,111,0)
, bytes2word(78,111,32,100)
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
,	/* ST_v221: (byte 1) */
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
,	/* PS_v226: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mzero)
, useLabel(PC_Monad_46mzero)
,	/* PS_v229: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46mplus)
, useLabel(PC_Monad_46mplus)
,	/* PS_v217: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46_95_46mzero)
, useLabel(PC_NHC_46Internal_46_95noMethodError)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46_95_46mzero)
, useLabel(PC_Monad_46_95_46mzero)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46_95_46mzero)
, useLabel(PC_LAMBDA203)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46_95_46mplus)
, useLabel(PC_NHC_46Internal_46_95noMethodError)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46_95_46mplus)
, useLabel(PC_Monad_46_95_46mplus)
,	/* PS_v207: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46_95_46mplus)
, useLabel(PC_LAMBDA202)
,	/* PS_v223: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46Monad)
, useLabel(PC_Monad_46MonadPlus_46Prelude_46Monad)
,	/* PS_v210: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA202)
, useLabel(PC_LAMBDA202)
,	/* PS_v219: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA203)
, useLabel(PC_LAMBDA203)
,};

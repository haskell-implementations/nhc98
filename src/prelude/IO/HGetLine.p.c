#include "newmacros.h"
#include "runtime.h"

#define CT_v200	((void*)startLabel+120)
#define FN_LAMBDA193	((void*)startLabel+172)
#define v207	((void*)startLabel+184)
#define v204	((void*)startLabel+188)
#define v201	((void*)startLabel+207)
#define CT_v213	((void*)startLabel+372)
#define F0_LAMBDA193	((void*)startLabel+380)
#define FN_LAMBDA192	((void*)startLabel+428)
#define CT_v218	((void*)startLabel+528)
#define F0_LAMBDA192	((void*)startLabel+536)
#define ST_v196	((void*)startLabel+560)
#define PP_LAMBDA192	((void*)startLabel+572)
#define PC_LAMBDA192	((void*)startLabel+572)
#define ST_v215	((void*)startLabel+572)
#define PP_LAMBDA193	((void*)startLabel+596)
#define PC_LAMBDA193	((void*)startLabel+596)
#define ST_v206	((void*)startLabel+596)
#define PS_v197	((void*)startLabel+620)
#define PS_v195	((void*)startLabel+632)
#define PS_v199	((void*)startLabel+644)
#define PS_v198	((void*)startLabel+656)
#define PS_v216	((void*)startLabel+668)
#define PS_v217	((void*)startLabel+680)
#define PS_v214	((void*)startLabel+692)
#define PS_v208	((void*)startLabel+704)
#define PS_v210	((void*)startLabel+716)
#define PS_v212	((void*)startLabel+728)
#define PS_v209	((void*)startLabel+740)
#define PS_v211	((void*)startLabel+752)
#define PS_v205	((void*)startLabel+764)
extern Node FN_IO_46hGetChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_IO[];
extern Node PC_IO_46hGetChar[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PC_Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v200)
,};
Node FN_IO_46hGetLine[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v196)
,	/* CT_v200: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_IO_46hGetLine[] = {
  CAPTAG(useLabel(FN_IO_46hGetLine),1)
, useLabel(PS_v195)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hGetChar))
, CAPTAG(useLabel(FN_LAMBDA193),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v213)
,	/* FN_LAMBDA193: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(10),BOT(10))
,	/* v207: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v204: (byte 4) */
  bytes2word(POP_I1,JUMP,21,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v201: (byte 3) */
  bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v212)
, 0
, 0
, 0
, 0
, useLabel(PS_v211)
, 0
, 0
, 0
, 0
, useLabel(PS_v210)
, 0
, 0
, 0
, 0
, useLabel(PS_v209)
, 0
, 0
, 0
, 0
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 70035
, useLabel(ST_v206)
,	/* CT_v213: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA193: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA193),2)
, useLabel(PS_v205)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_IO_46hGetLine))
, CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v218)
,	/* FN_LAMBDA192: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
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
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, 100048
, useLabel(ST_v215)
,	/* CT_v218: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),2)
, useLabel(PS_v214)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_IO_46hGetLine[] = {
 };
Node PC_IO_46hGetLine[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,76)
,	/* PP_LAMBDA192: (byte 4) */
 	/* PC_LAMBDA192: (byte 4) */
 	/* ST_v215: (byte 4) */
  bytes2word(105,110,101,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,76)
, bytes2word(105,110,101,58)
, bytes2word(49,48,58,52)
, bytes2word(56,45,49,48)
,	/* PP_LAMBDA193: (byte 4) */
 	/* PC_LAMBDA193: (byte 4) */
 	/* ST_v206: (byte 4) */
  bytes2word(58,53,55,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,76)
, bytes2word(105,110,101,58)
, bytes2word(55,58,51,53)
, bytes2word(45,55,58,52)
, bytes2word(52,0,0,0)
,	/* PS_v197: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetLine)
, useLabel(PC_IO_46hGetChar)
,	/* PS_v195: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetLine)
, useLabel(PC_IO_46hGetLine)
,	/* PS_v199: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetLine)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v198: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetLine)
, useLabel(PC_LAMBDA193)
,	/* PS_v216: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA192)
, useLabel(PC_Prelude_46_58)
,	/* PS_v217: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA192)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v214: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA192)
, useLabel(PC_LAMBDA192)
,	/* PS_v208: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA193)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v210: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA193)
, useLabel(PC_IO_46hGetLine)
,	/* PS_v212: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA193)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v209: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA193)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v211: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA193)
, useLabel(PC_LAMBDA192)
,	/* PS_v205: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA193)
, useLabel(PC_LAMBDA193)
,};

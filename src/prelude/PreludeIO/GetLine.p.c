#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+84)
#define FN_LAMBDA188	((void*)startLabel+132)
#define v195	((void*)startLabel+160)
#define CT_v203	((void*)startLabel+276)
#define F0_LAMBDA188	((void*)startLabel+284)
#define FN_LAMBDA187	((void*)startLabel+336)
#define CT_v208	((void*)startLabel+436)
#define F0_LAMBDA187	((void*)startLabel+444)
#define FN_LAMBDA186	((void*)startLabel+476)
#define CT_v212	((void*)startLabel+520)
#define CF_LAMBDA186	((void*)startLabel+528)
#define ST_v211	((void*)startLabel+548)
#define ST_v191	((void*)startLabel+552)
#define PP_LAMBDA188	((void*)startLabel+568)
#define PC_LAMBDA188	((void*)startLabel+568)
#define ST_v198	((void*)startLabel+568)
#define PP_LAMBDA186	((void*)startLabel+594)
#define PC_LAMBDA186	((void*)startLabel+594)
#define ST_v210	((void*)startLabel+594)
#define PP_LAMBDA187	((void*)startLabel+620)
#define PC_LAMBDA187	((void*)startLabel+620)
#define ST_v205	((void*)startLabel+620)
#define PS_v190	((void*)startLabel+648)
#define PS_v193	((void*)startLabel+660)
#define PS_v192	((void*)startLabel+672)
#define PS_v209	((void*)startLabel+684)
#define PS_v206	((void*)startLabel+696)
#define PS_v207	((void*)startLabel+708)
#define PS_v204	((void*)startLabel+720)
#define PS_v202	((void*)startLabel+732)
#define PS_v200	((void*)startLabel+744)
#define PS_v199	((void*)startLabel+756)
#define PS_v201	((void*)startLabel+768)
#define PS_v197	((void*)startLabel+780)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getChar[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v194)
,};
Node FN_Prelude_46getLine[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v193)
, 0
, 0
, 0
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v191)
,	/* CT_v194: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46getLine[] = {
  VAPTAG(useLabel(FN_Prelude_46getLine))
, useLabel(PS_v190)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA188),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getChar)
, bytes2word(1,0,0,1)
, useLabel(CT_v203)
,	/* FN_LAMBDA188: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,10,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,EQ_W,JUMPFALSE)
, bytes2word(20,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v195: (byte 4) */
  bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, 40028
, useLabel(ST_v198)
,	/* CT_v203: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA188: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA188),1)
, useLabel(PS_v197)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA186))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, CAPTAG(useLabel(FN_LAMBDA187),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getLine)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v208)
,	/* FN_LAMBDA187: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v207)
, 0
, 0
, 0
, 0
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, 60034
, useLabel(ST_v205)
,	/* CT_v208: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA187: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA187),2)
, useLabel(PS_v204)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v212)
,	/* FN_LAMBDA186: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v211)
, 50048
, useLabel(ST_v210)
,	/* CT_v212: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA186: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA186))
, useLabel(PS_v209)
, 0
, 0
, 0
,	/* ST_v211: (byte 0) */
  bytes2word(0,0,0,0)
,};
Node PP_Prelude_46getLine[] = {
 };
Node PC_Prelude_46getLine[] = {
 	/* ST_v191: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(103,101,116,76)
,	/* PP_LAMBDA188: (byte 4) */
 	/* PC_LAMBDA188: (byte 4) */
 	/* ST_v198: (byte 4) */
  bytes2word(105,110,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(103,101,116,76)
, bytes2word(105,110,101,58)
, bytes2word(52,58,50,56)
, bytes2word(45,52,58,51)
,	/* PP_LAMBDA186: (byte 2) */
 	/* PC_LAMBDA186: (byte 2) */
 	/* ST_v210: (byte 2) */
  bytes2word(52,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,103,101)
, bytes2word(116,76,105,110)
, bytes2word(101,58,53,58)
, bytes2word(52,56,45,53)
,	/* PP_LAMBDA187: (byte 4) */
 	/* PC_LAMBDA187: (byte 4) */
 	/* ST_v205: (byte 4) */
  bytes2word(58,52,57,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(103,101,116,76)
, bytes2word(105,110,101,58)
, bytes2word(54,58,51,52)
, bytes2word(45,54,58,52)
, bytes2word(48,0,0,0)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46getLine)
, useLabel(PC_Prelude_46getLine)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46getLine)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46getLine)
, useLabel(PC_LAMBDA188)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA186)
, useLabel(PC_LAMBDA186)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA187)
, useLabel(PC_Prelude_46_58)
,	/* PS_v207: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA187)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA187)
, useLabel(PC_LAMBDA187)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA188)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA188)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA188)
, useLabel(PC_LAMBDA186)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA188)
, useLabel(PC_LAMBDA187)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA188)
, useLabel(PC_LAMBDA188)
,};

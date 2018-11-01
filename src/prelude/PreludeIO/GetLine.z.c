#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+36)
#define FN_LAMBDA188	((void*)startLabel+68)
#define v192	((void*)startLabel+88)
#define CT_v195	((void*)startLabel+112)
#define F0_LAMBDA188	((void*)startLabel+120)
#define FN_LAMBDA187	((void*)startLabel+156)
#define CT_v197	((void*)startLabel+192)
#define F0_LAMBDA187	((void*)startLabel+200)
#define FN_LAMBDA186	((void*)startLabel+216)
#define CT_v200	((void*)startLabel+248)
#define CF_LAMBDA186	((void*)startLabel+256)
#define ST_v199	((void*)startLabel+260)
#define ST_v190	((void*)startLabel+261)
#define ST_v194	((void*)startLabel+277)
#define ST_v198	((void*)startLabel+303)
#define ST_v196	((void*)startLabel+329)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getChar[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v191)
,};
Node FN_Prelude_46getLine[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46getLine[] = {
  VAPTAG(useLabel(FN_Prelude_46getLine))
, CAPTAG(useLabel(FN_LAMBDA188),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getChar)
, bytes2word(1,0,0,1)
, useLabel(CT_v195)
,	/* FN_LAMBDA188: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,10,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,EQ_W,JUMPFALSE)
, bytes2word(8,0,HEAP_CVAL_I3,PUSH_HEAP)
,	/* v192: (byte 4) */
  bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40028
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(5,1)
, 0
,	/* F0_LAMBDA188: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA188),1)
, VAPTAG(useLabel(FN_LAMBDA186))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, CAPTAG(useLabel(FN_LAMBDA187),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getLine)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v197)
,	/* FN_LAMBDA187: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 60034
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA187: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA187),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v200)
,	/* FN_LAMBDA186: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v199)
, 50048
, useLabel(ST_v198)
,	/* CT_v200: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA186: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA186))
,	/* ST_v199: (byte 0) */
 	/* ST_v190: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,103,101,116)
, bytes2word(76,105,110,101)
,	/* ST_v194: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,103,101,116)
, bytes2word(76,105,110,101)
, bytes2word(58,52,58,50)
, bytes2word(56,45,52,58)
,	/* ST_v198: (byte 3) */
  bytes2word(51,52,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,103)
, bytes2word(101,116,76,105)
, bytes2word(110,101,58,53)
, bytes2word(58,52,56,45)
, bytes2word(53,58,52,57)
,	/* ST_v196: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,103,101,116)
, bytes2word(76,105,110,101)
, bytes2word(58,54,58,51)
, bytes2word(52,45,54,58)
, bytes2word(52,48,0,0)
,};

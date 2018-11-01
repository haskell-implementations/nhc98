#include "newmacros.h"
#include "runtime.h"

#define v201	((void*)startLabel+22)
#define v198	((void*)startLabel+26)
#define v195	((void*)startLabel+29)
#define CT_v202	((void*)startLabel+44)
#define CT_v206	((void*)startLabel+144)
#define CT_v210	((void*)startLabel+252)
#define ST_v208	((void*)startLabel+292)
#define ST_v200	((void*)startLabel+324)
#define ST_v204	((void*)startLabel+360)
#define PS_v205	((void*)startLabel+396)
#define PS_v203	((void*)startLabel+408)
#define PS_v199	((void*)startLabel+420)
#define PS_v207	((void*)startLabel+432)
#define PS_v209	((void*)startLabel+444)
extern Node CF_Prelude_46Monad_46Prelude_46Maybe[];
extern Node PM_Monad[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_463[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v202)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe_46mplus[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v201: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v198: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I2)
,	/* v195: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 80005
, useLabel(ST_v200)
,	/* CT_v202: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Monad_46MonadPlus_46Prelude_46Maybe_46mplus[] = {
  CAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe_46mplus),2)
, useLabel(PS_v199)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v206)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe_46mzero[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v205)
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
, useLabel(ST_v204)
,	/* CT_v206: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46Maybe_46mzero[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe_46mzero))
, useLabel(PS_v203)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v210)
,};
Node FN_Monad_46MonadPlus_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v209)
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
, useLabel(ST_v208)
,	/* CT_v210: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Monad_46MonadPlus_46Prelude_46Maybe[] = {
  VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Maybe))
, useLabel(PS_v207)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Monad_46Prelude_46Maybe)
, useLabel(CF_Monad_46MonadPlus_46Prelude_46Maybe_46mzero)
, useLabel(F0_Monad_46MonadPlus_46Prelude_46Maybe_46mplus)
,};
Node PP_Monad_46MonadPlus_46Prelude_46Maybe[] = {
 };
Node PC_Monad_46MonadPlus_46Prelude_46Maybe[] = {
 	/* ST_v208: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,0,0,0)
,};
Node PP_Monad_46MonadPlus_46Prelude_46Maybe_46mplus[] = {
 };
Node PC_Monad_46MonadPlus_46Prelude_46Maybe_46mplus[] = {
 	/* ST_v200: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,109,112)
, bytes2word(108,117,115,0)
,};
Node PP_Monad_46MonadPlus_46Prelude_46Maybe_46mzero[] = {
 };
Node PC_Monad_46MonadPlus_46Prelude_46Maybe_46mzero[] = {
 	/* ST_v204: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,77,111)
, bytes2word(110,97,100,80)
, bytes2word(108,117,115,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,109,122)
, bytes2word(101,114,111,0)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46Maybe_46mzero)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46Maybe_46mzero)
, useLabel(PC_Monad_46MonadPlus_46Prelude_46Maybe_46mzero)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46Maybe_46mplus)
, useLabel(PC_Monad_46MonadPlus_46Prelude_46Maybe_46mplus)
,	/* PS_v207: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46Maybe)
, useLabel(PC_Monad_46MonadPlus_46Prelude_46Maybe)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46MonadPlus_46Prelude_46Maybe)
, useLabel(PC_Prelude_463)
,};

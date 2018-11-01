#include "newmacros.h"
#include "runtime.h"

#define CT_v199	((void*)startLabel+92)
#define CT_v203	((void*)startLabel+208)
#define ST_v201	((void*)startLabel+240)
#define ST_v196	((void*)startLabel+272)
#define PS_v197	((void*)startLabel+312)
#define PS_v195	((void*)startLabel+324)
#define PS_v198	((void*)startLabel+336)
#define PS_v200	((void*)startLabel+348)
#define PS_v202	((void*)startLabel+360)
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_461[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v199)
,};
Node FN_Prelude_46Functor_46NHC_46Internal_46IO_46fmap[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, 40004
, useLabel(ST_v196)
,	/* CT_v199: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Functor_46NHC_46Internal_46IO_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46NHC_46Internal_46IO_46fmap),2)
, useLabel(PS_v195)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,0,0)
, useLabel(CT_v203)
,};
Node FN_Prelude_46Functor_46NHC_46Internal_46IO[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 30011
, useLabel(ST_v201)
,	/* CT_v203: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46NHC_46Internal_46IO[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46NHC_46Internal_46IO))
, useLabel(PS_v200)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Functor_46NHC_46Internal_46IO_46fmap)
,};
Node PP_Prelude_46Functor_46NHC_46Internal_46IO[] = {
 };
Node PC_Prelude_46Functor_46NHC_46Internal_46IO[] = {
 	/* ST_v201: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(78,72,67,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
, bytes2word(46,73,79,0)
,};
Node PP_Prelude_46Functor_46NHC_46Internal_46IO_46fmap[] = {
 };
Node PC_Prelude_46Functor_46NHC_46Internal_46IO_46fmap[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(78,72,67,46)
, bytes2word(73,110,116,101)
, bytes2word(114,110,97,108)
, bytes2word(46,73,79,46)
, bytes2word(102,109,97,112)
, bytes2word(0,0,0,0)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46NHC_46Internal_46IO_46fmap)
, useLabel(PC_Prelude_46_46)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46NHC_46Internal_46IO_46fmap)
, useLabel(PC_Prelude_46Functor_46NHC_46Internal_46IO_46fmap)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46NHC_46Internal_46IO_46fmap)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46NHC_46Internal_46IO)
, useLabel(PC_Prelude_46Functor_46NHC_46Internal_46IO)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46NHC_46Internal_46IO)
, useLabel(PC_Prelude_461)
,};

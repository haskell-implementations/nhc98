#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+48)
#define FN_LAMBDA193	((void*)startLabel+92)
#define CT_v198	((void*)startLabel+124)
#define F0_LAMBDA193	((void*)startLabel+132)
#define FN_LAMBDA192	((void*)startLabel+144)
#define CT_v200	((void*)startLabel+180)
#define F0_LAMBDA192	((void*)startLabel+188)
#define ST_v195	((void*)startLabel+196)
#define ST_v197	((void*)startLabel+203)
#define ST_v199	((void*)startLabel+222)
extern Node TM_IO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46catch[];
extern Node TMSUB_IO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v196)
,};
Node FN_IO_46try[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_IO_46try[] = {
  CAPTAG(useLabel(FN_IO_46try),1)
, CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, CAPTAG(useLabel(FN_LAMBDA193),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
, VAPTAG(useLabel(FN_Prelude_46catch))
, bytes2word(1,0,0,1)
, useLabel(CT_v198)
,	/* FN_LAMBDA193: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 100042
, useLabel(ST_v197)
,	/* CT_v198: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA193: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA193),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v200)
,	/* FN_LAMBDA192: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 80041
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v195: (byte 0) */
  bytes2word(73,79,46,116)
,	/* ST_v197: (byte 3) */
  bytes2word(114,121,0,73)
, bytes2word(79,46,116,114)
, bytes2word(121,58,49,48)
, bytes2word(58,52,50,45)
, bytes2word(49,48,58,52)
,	/* ST_v199: (byte 2) */
  bytes2word(53,0,73,79)
, bytes2word(46,116,114,121)
, bytes2word(58,56,58,52)
, bytes2word(49,0,0,0)
,};

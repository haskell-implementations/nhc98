#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hFlushC_35	((void*)startLabel+8)
#define CT_v224	((void*)startLabel+36)
#define F0_IO_46hFlushC_35	((void*)startLabel+44)
#define FN_IO_46hFlushC	((void*)startLabel+56)
#define CT_v226	((void*)startLabel+80)
#define CF_IO_46hFlushC	((void*)startLabel+88)
#define CT_v228	((void*)startLabel+144)
#define FN_LAMBDA221	((void*)startLabel+184)
#define v229	((void*)startLabel+207)
#define CT_v232	((void*)startLabel+236)
#define F0_LAMBDA221	((void*)startLabel+244)
#define FN_LAMBDA220	((void*)startLabel+276)
#define CT_v234	((void*)startLabel+320)
#define F0_LAMBDA220	((void*)startLabel+328)
#define FN_LAMBDA219	((void*)startLabel+348)
#define CT_v237	((void*)startLabel+380)
#define CF_LAMBDA219	((void*)startLabel+388)
#define ST_v227	((void*)startLabel+392)
#define ST_v231	((void*)startLabel+402)
#define ST_v233	((void*)startLabel+424)
#define ST_v235	((void*)startLabel+446)
#define ST_v225	((void*)startLabel+468)
#define ST_v223	((void*)startLabel+479)
#define ST_v236	((void*)startLabel+491)
extern Node TM_IO[];
void FR_IO_46hFlushC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_IO[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v224)
,	/* FN_IO_46hFlushC_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hFlushC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v223)
,	/* CT_v224: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hFlushC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hFlushC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v226)
,	/* FN_IO_46hFlushC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v225)
,	/* CT_v226: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hFlushC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hFlushC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hFlushC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,};
Node FN_IO_46hFlush[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hFlush[] = {
  CAPTAG(useLabel(FN_IO_46hFlush),1)
, VAPTAG(useLabel(FN_IO_46hFlushC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA221),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v232)
,	/* FN_LAMBDA221: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,NE_W,JUMPFALSE)
, bytes2word(11,0,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
,	/* v229: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 100010
, useLabel(ST_v231)
,	/* CT_v232: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA221: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA221),2)
, CAPTAG(useLabel(FN_LAMBDA220),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v234)
,	/* FN_LAMBDA220: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 120018
, useLabel(ST_v233)
,	/* CT_v234: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA220: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA220),2)
, VAPTAG(useLabel(FN_LAMBDA219))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v237)
,	/* FN_LAMBDA219: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v236)
, 130022
, useLabel(ST_v235)
,	/* CT_v237: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA219: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA219))
,	/* ST_v227: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(70,108,117,115)
,	/* ST_v231: (byte 2) */
  bytes2word(104,0,73,79)
, bytes2word(46,104,70,108)
, bytes2word(117,115,104,58)
, bytes2word(49,48,58,49)
, bytes2word(48,45,49,48)
,	/* ST_v233: (byte 4) */
  bytes2word(58,49,56,0)
, bytes2word(73,79,46,104)
, bytes2word(70,108,117,115)
, bytes2word(104,58,49,50)
, bytes2word(58,49,56,45)
, bytes2word(49,50,58,50)
,	/* ST_v235: (byte 2) */
  bytes2word(53,0,73,79)
, bytes2word(46,104,70,108)
, bytes2word(117,115,104,58)
, bytes2word(49,51,58,50)
, bytes2word(50,45,49,51)
,	/* ST_v225: (byte 4) */
  bytes2word(58,50,57,0)
, bytes2word(73,79,46,104)
, bytes2word(70,108,117,115)
,	/* ST_v223: (byte 3) */
  bytes2word(104,67,0,73)
, bytes2word(79,46,104,70)
, bytes2word(108,117,115,104)
,	/* ST_v236: (byte 3) */
  bytes2word(67,35,0,104)
, bytes2word(70,108,117,115)
, bytes2word(104,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hFlushC" IO.hFlushC# 1 :: FFI.ForeignObj -> Prelude.Int */
extern HsInt hFlushC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hFlushC_35 = {"IO","IO.hFlushC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hFlushC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hFlushC(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hFlushC_35);
  C_RETURN(nodeptr);
}

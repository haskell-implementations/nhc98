#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46hPutBufC_35	((void*)startLabel+12)
#define CT_v226	((void*)startLabel+48)
#define F0_NHC_46IOExtras_46hPutBufC_35	((void*)startLabel+56)
#define CT_v228	((void*)startLabel+92)
#define CT_v230	((void*)startLabel+172)
#define FN_NHC_46IOExtras_46hGetBuf_35	((void*)startLabel+212)
#define CT_v232	((void*)startLabel+248)
#define F0_NHC_46IOExtras_46hGetBuf_35	((void*)startLabel+256)
#define CT_v234	((void*)startLabel+292)
#define ST_v233	((void*)startLabel+312)
#define ST_v231	((void*)startLabel+333)
#define ST_v229	((void*)startLabel+355)
#define ST_v227	((void*)startLabel+376)
#define ST_v225	((void*)startLabel+398)
extern Node TM_NHC_46IOExtras[];
void FR_NHC_46IOExtras_46hPutBufC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
void FR_NHC_46IOExtras_46hGetBuf_35(void);

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v226)
,	/* FN_NHC_46IOExtras_46hPutBufC_35: (byte 0) */
  useLabel(TM_NHC_46IOExtras)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46IOExtras_46hPutBufC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v225)
,	/* CT_v226: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46IOExtras_46hPutBufC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBufC_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v228)
,};
Node FN_NHC_46IOExtras_46hPutBufC[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46hPutBufC[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBufC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46IOExtras_46hPutBufC_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v230)
,};
Node FN_NHC_46IOExtras_46hPutBuf[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_IN3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 90001
, useLabel(ST_v229)
,	/* CT_v230: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46IOExtras_46hPutBuf[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBuf),3)
, VAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBufC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v232)
,	/* FN_NHC_46IOExtras_46hGetBuf_35: (byte 0) */
  useLabel(TM_NHC_46IOExtras)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46IOExtras_46hGetBuf_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v231)
,	/* CT_v232: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46IOExtras_46hGetBuf_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46hGetBuf_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v234)
,};
Node FN_NHC_46IOExtras_46hGetBuf[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v233)
,	/* CT_v234: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46hGetBuf[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46hGetBuf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46IOExtras_46hGetBuf_35)
,	/* ST_v233: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,104,71,101)
, bytes2word(116,66,117,102)
,	/* ST_v231: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,73,79,69)
, bytes2word(120,116,114,97)
, bytes2word(115,46,104,71)
, bytes2word(101,116,66,117)
,	/* ST_v229: (byte 3) */
  bytes2word(102,35,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(104,80,117,116)
,	/* ST_v227: (byte 4) */
  bytes2word(66,117,102,0)
, bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,104,80,117)
, bytes2word(116,66,117,102)
,	/* ST_v225: (byte 2) */
  bytes2word(67,0,78,72)
, bytes2word(67,46,73,79)
, bytes2word(69,120,116,114)
, bytes2word(97,115,46,104)
, bytes2word(80,117,116,66)
, bytes2word(117,102,67,35)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hPutBufC" NHC.IOExtras.hPutBufC# 3 :: FFI.ForeignObj -> FFI.Ptr -> Prelude.Int -> Prelude.Int */
extern HsInt hPutBufC(void*,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46IOExtras_46hPutBufC_35 = {"NHC.IOExtras","NHC.IOExtras.hPutBufC#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46IOExtras_46hPutBufC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hPutBufC(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46IOExtras_46hPutBufC_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "hGetBufC" NHC.IOExtras.hGetBuf# 3 :: FFI.ForeignObj -> FFI.Ptr -> Prelude.Int -> Prelude.Int */
extern HsInt hGetBufC(void*,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46IOExtras_46hGetBuf_35 = {"NHC.IOExtras","NHC.IOExtras.hGetBuf#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46IOExtras_46hGetBuf_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hGetBufC(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46IOExtras_46hGetBuf_35);
  C_RETURN(nodeptr);
}

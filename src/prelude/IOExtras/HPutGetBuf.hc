#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46hPutBufC_35	((void*)startLabel+12)
#define CT_v225	((void*)startLabel+36)
#define F0_NHC_46IOExtras_46hPutBufC_35	((void*)startLabel+44)
#define CT_v226	((void*)startLabel+68)
#define CT_v227	((void*)startLabel+136)
#define FN_NHC_46IOExtras_46hGetBuf_35	((void*)startLabel+176)
#define CT_v228	((void*)startLabel+200)
#define F0_NHC_46IOExtras_46hGetBuf_35	((void*)startLabel+208)
#define CT_v229	((void*)startLabel+232)
void FR_NHC_46IOExtras_46hPutBufC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
void FR_NHC_46IOExtras_46hGetBuf_35(void);

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v225)
,	/* FN_NHC_46IOExtras_46hPutBufC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46IOExtras_46hPutBufC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v225: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46IOExtras_46hPutBufC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBufC_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v226)
,};
Node FN_NHC_46IOExtras_46hPutBufC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v226: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46hPutBufC[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBufC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46IOExtras_46hPutBufC_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v227)
,};
Node FN_NHC_46IOExtras_46hPutBuf[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v227: (byte 0) */
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
, useLabel(CT_v228)
,	/* FN_NHC_46IOExtras_46hGetBuf_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46IOExtras_46hGetBuf_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46IOExtras_46hGetBuf_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46hGetBuf_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v229)
,};
Node FN_NHC_46IOExtras_46hGetBuf[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v229: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46hGetBuf[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46hGetBuf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46IOExtras_46hGetBuf_35)
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

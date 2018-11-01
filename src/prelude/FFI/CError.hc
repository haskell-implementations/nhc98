#include "newmacros.h"
#include "runtime.h"

#define CT_v308	((void*)startLabel+44)
#define CT_v309	((void*)startLabel+96)
#define FN_NHC_46FFI_46getErrNo_35	((void*)startLabel+124)
#define CT_v310	((void*)startLabel+140)
#define F0_NHC_46FFI_46getErrNo_35	((void*)startLabel+148)
#define CT_v311	((void*)startLabel+172)
extern Node FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46toEnum[];
extern Node FN_Prelude_46ioError[];
void FR_NHC_46FFI_46getErrNo_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v308)
,};
Node FN_NHC_46FFI_46mkIOError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(HEAP_OFF_N1,6,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v308: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_NHC_46FFI_46mkIOError[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46mkIOError),4)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46toEnum))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v309)
,};
Node FN_NHC_46FFI_46throwIOError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v309: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_NHC_46FFI_46throwIOError[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46throwIOError),4)
, VAPTAG(useLabel(FN_NHC_46FFI_46mkIOError))
, VAPTAG(useLabel(FN_Prelude_46ioError))
, bytes2word(1,0,0,1)
, useLabel(CT_v310)
,	/* FN_NHC_46FFI_46getErrNo_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46getErrNo_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v310: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46getErrNo_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46getErrNo_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v311)
,};
Node FN_NHC_46FFI_46getErrNo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v311: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46getErrNo[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46getErrNo))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46FFI_46getErrNo_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "getErrNo" NHC.FFI.getErrNo# 1 :: Prelude.() -> Prelude.Int */
extern HsInt getErrNo(void);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46getErrNo_35 = {"NHC.FFI","NHC.FFI.getErrNo#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46getErrNo_35) {
  NodePtr nodeptr;
  HsInt result;
  /* void arg1 */;

  result = getErrNo();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46getErrNo_35);
  C_RETURN(nodeptr);
}

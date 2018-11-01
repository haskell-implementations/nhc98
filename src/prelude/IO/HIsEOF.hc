#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hIsEOFC_35	((void*)startLabel+8)
#define CT_v190	((void*)startLabel+24)
#define F0_IO_46hIsEOFC_35	((void*)startLabel+32)
#define FN_IO_46hIsEOFC	((void*)startLabel+44)
#define CT_v191	((void*)startLabel+56)
#define CF_IO_46hIsEOFC	((void*)startLabel+64)
#define CT_v192	((void*)startLabel+100)
void FR_IO_46hIsEOFC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v190)
,	/* FN_IO_46hIsEOFC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hIsEOFC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v190: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hIsEOFC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hIsEOFC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v191)
,	/* FN_IO_46hIsEOFC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v191: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hIsEOFC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hIsEOFC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hIsEOFC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v192)
,};
Node FN_IO_46hIsEOF[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v192: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hIsEOF[] = {
  CAPTAG(useLabel(FN_IO_46hIsEOF),1)
, VAPTAG(useLabel(FN_IO_46hIsEOFC))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hIsEOF" IO.hIsEOFC# 1 :: FFI.ForeignObj -> Prelude.Bool */
extern HsBool hIsEOF(void*);
#ifdef PROFILE
static SInfo pf_IO_46hIsEOFC_35 = {"IO","IO.hIsEOFC#","Prelude.Bool"};
#endif
C_HEADER(FR_IO_46hIsEOFC_35) {
  NodePtr nodeptr;
  HsBool result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hIsEOF(arg1);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hIsEOFC_35);
  C_RETURN(nodeptr);
}

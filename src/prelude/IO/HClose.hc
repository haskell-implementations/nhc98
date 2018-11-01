#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+20)
#define FN_IO_46hCloseC_35	((void*)startLabel+44)
#define CT_v194	((void*)startLabel+60)
#define F0_IO_46hCloseC_35	((void*)startLabel+68)
#define CT_v195	((void*)startLabel+92)
extern Node FN_NHC_46FFI_46freeForeignObj[];
void FR_IO_46hCloseC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v193)
,};
Node FN_IO_46hClose[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hClose[] = {
  CAPTAG(useLabel(FN_IO_46hClose),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46freeForeignObj))
, bytes2word(1,0,0,1)
, useLabel(CT_v194)
,	/* FN_IO_46hCloseC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hCloseC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v194: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hCloseC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hCloseC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v195)
,};
Node FN_IO_46hCloseC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v195: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_IO_46hCloseC[] = {
  VAPTAG(useLabel(FN_IO_46hCloseC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hCloseC_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hCloseC" IO.hCloseC# 1 :: FFI.ForeignObj -> Prelude.() */
extern void hCloseC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hCloseC_35 = {"IO","IO.hCloseC#","Prelude.()"};
#endif
C_HEADER(FR_IO_46hCloseC_35) {
  NodePtr nodeptr;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  hCloseC(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_IO_46hCloseC_35);
  C_RETURN(nodeptr);
}

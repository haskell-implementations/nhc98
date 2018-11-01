#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95sizeBin_35	((void*)startLabel+8)
#define CT_v192	((void*)startLabel+24)
#define F0_NHC_46Binary_46hs_95sizeBin_35	((void*)startLabel+32)
#define FN_NHC_46Binary_46hs_95sizeBin	((void*)startLabel+44)
#define CT_v193	((void*)startLabel+56)
#define CF_NHC_46Binary_46hs_95sizeBin	((void*)startLabel+64)
#define CT_v194	((void*)startLabel+100)
void FR_NHC_46Binary_46hs_95sizeBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v192)
,	/* FN_NHC_46Binary_46hs_95sizeBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95sizeBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v192: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95sizeBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95sizeBin_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v193)
,	/* FN_NHC_46Binary_46hs_95sizeBin: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95sizeBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95sizeBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95sizeBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v194)
,};
Node FN_NHC_46Binary_46sizeBin[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v194: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Binary_46sizeBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46sizeBin),1)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95sizeBin))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_sizeBin" NHC.Binary.hs_sizeBin# 1 :: FFI.ForeignObj -> Prelude.Int */
extern HsInt hs_sizeBin(void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95sizeBin_35 = {"NHC.Binary","NHC.Binary.hs_sizeBin#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95sizeBin_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_sizeBin(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95sizeBin_35);
  C_RETURN(nodeptr);
}

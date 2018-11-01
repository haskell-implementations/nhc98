#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95tellBin_35	((void*)startLabel+8)
#define CT_v206	((void*)startLabel+24)
#define F0_NHC_46Binary_46hs_95tellBin_35	((void*)startLabel+32)
#define FN_NHC_46Binary_46hs_95tellBin	((void*)startLabel+44)
#define CT_v207	((void*)startLabel+56)
#define CF_NHC_46Binary_46hs_95tellBin	((void*)startLabel+64)
#define CT_v208	((void*)startLabel+108)
#define FN_LAMBDA204	((void*)startLabel+144)
#define CT_v209	((void*)startLabel+156)
#define F0_LAMBDA204	((void*)startLabel+164)
void FR_NHC_46Binary_46hs_95tellBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v206)
,	/* FN_NHC_46Binary_46hs_95tellBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95tellBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v206: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95tellBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95tellBin_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v207)
,	/* FN_NHC_46Binary_46hs_95tellBin: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v207: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95tellBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95tellBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95tellBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v208)
,};
Node FN_NHC_46Binary_46tellBin[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v208: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46Binary_46tellBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46tellBin),1)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95tellBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA204),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v209)
,	/* FN_LAMBDA204: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v209: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA204: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA204),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_tellBin" NHC.Binary.hs_tellBin# 1 :: FFI.ForeignObj -> Prelude.Int */
extern HsInt hs_tellBin(void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95tellBin_35 = {"NHC.Binary","NHC.Binary.hs_tellBin#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95tellBin_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_tellBin(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95tellBin_35);
  C_RETURN(nodeptr);
}

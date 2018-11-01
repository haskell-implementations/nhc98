#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95copyBinAux_35	((void*)startLabel+12)
#define CT_v250	((void*)startLabel+36)
#define F0_NHC_46Binary_46hs_95copyBinAux_35	((void*)startLabel+44)
#define FN_NHC_46Binary_46hs_95copyBinAux	((void*)startLabel+56)
#define CT_v251	((void*)startLabel+68)
#define CF_NHC_46Binary_46hs_95copyBinAux	((void*)startLabel+76)
#define FN_NHC_46Binary_46copyBinAux	((void*)startLabel+100)
#define CT_v252	((void*)startLabel+124)
#define F0_NHC_46Binary_46copyBinAux	((void*)startLabel+132)
#define FN_LAMBDA246	((void*)startLabel+160)
#define CT_v253	((void*)startLabel+172)
#define F0_LAMBDA246	((void*)startLabel+180)
#define CT_v254	((void*)startLabel+220)
#define FN_LAMBDA248	((void*)startLabel+256)
#define CT_v255	((void*)startLabel+276)
#define F0_LAMBDA248	((void*)startLabel+284)
#define FN_LAMBDA247	((void*)startLabel+312)
#define CT_v256	((void*)startLabel+336)
#define F0_LAMBDA247	((void*)startLabel+344)
void FR_NHC_46Binary_46hs_95copyBinAux_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46Binary_46openBin[];
extern Node FN_NHC_46Binary_46sizeBin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v250)
,	/* FN_NHC_46Binary_46hs_95copyBinAux_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95copyBinAux_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v250: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95copyBinAux_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v251)
,	/* FN_NHC_46Binary_46hs_95copyBinAux: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95copyBinAux: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95copyBinAux_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v252)
,	/* FN_NHC_46Binary_46copyBinAux: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v252: (byte 0) */
  HW(4,3)
, 0
,	/* F0_NHC_46Binary_46copyBinAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBinAux),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA246),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v253)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v253: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,};
Node FN_NHC_46Binary_46copyBin[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v254: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46Binary_46copyBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBin),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46openBin))
, CAPTAG(useLabel(FN_LAMBDA248),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v255)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46sizeBin))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v256)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v256: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46copyBinAux))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_copyBinAux" NHC.Binary.hs_copyBinAux# 3 :: FFI.ForeignObj -> FFI.ForeignObj -> Prelude.Int -> Prelude.() */
extern void hs_copyBinAux(void*,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95copyBinAux_35 = {"NHC.Binary","NHC.Binary.hs_copyBinAux#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95copyBinAux_35) {
  NodePtr nodeptr;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  hs_copyBinAux(arg1,arg2,arg3);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95copyBinAux_35);
  C_RETURN(nodeptr);
}

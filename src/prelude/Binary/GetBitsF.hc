#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95getBitsFAux	((void*)startLabel+12)
#define CT_v221	((void*)startLabel+36)
#define F0_NHC_46Binary_46hs_95getBitsFAux	((void*)startLabel+44)
#define FN_NHC_46Binary_46getBitsFAux	((void*)startLabel+60)
#define CT_v222	((void*)startLabel+76)
#define F0_NHC_46Binary_46getBitsFAux	((void*)startLabel+84)
#define CT_v223	((void*)startLabel+144)
void FR_NHC_46Binary_46hs_95getBitsFAux(void);
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v221)
,	/* FN_NHC_46Binary_46hs_95getBitsFAux: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95getBitsFAux)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v221: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95getBitsFAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBitsFAux),3)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v222)
,	/* FN_NHC_46Binary_46getBitsFAux: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_P1,0,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v222: (byte 0) */
  HW(1,3)
, 0
,	/* F0_NHC_46Binary_46getBitsFAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46getBitsFAux),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBitsFAux))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v223)
,};
Node FN_NHC_46Binary_46getBitsF[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,12)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v223: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46Binary_46getBitsF[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getBitsF),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46getBitsFAux))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_getBitsFAux" NHC.Binary.hs_getBitsFAux 3 :: FFI.ForeignObj -> Prelude.Int -> Prelude.Int -> Prelude.Int */
extern HsInt hs_getBitsFAux(void*,HsInt,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95getBitsFAux = {"NHC.Binary","NHC.Binary.hs_getBitsFAux","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95getBitsFAux) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_getBitsFAux(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95getBitsFAux);
  C_RETURN(nodeptr);
}

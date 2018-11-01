#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95getBitsFAux	((void*)startLabel+12)
#define CT_v222	((void*)startLabel+48)
#define F0_NHC_46Binary_46hs_95getBitsFAux	((void*)startLabel+56)
#define FN_NHC_46Binary_46getBitsFAux	((void*)startLabel+72)
#define CT_v224	((void*)startLabel+100)
#define F0_NHC_46Binary_46getBitsFAux	((void*)startLabel+108)
#define CT_v226	((void*)startLabel+180)
#define ST_v225	((void*)startLabel+208)
#define ST_v223	((void*)startLabel+228)
#define ST_v221	((void*)startLabel+251)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95getBitsFAux(void);
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v222)
,	/* FN_NHC_46Binary_46hs_95getBitsFAux: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95getBitsFAux)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v221)
,	/* CT_v222: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95getBitsFAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBitsFAux),3)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v224)
,	/* FN_NHC_46Binary_46getBitsFAux: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_P1,0,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 160001
, useLabel(ST_v223)
,	/* CT_v224: (byte 0) */
  HW(1,3)
, 0
,	/* F0_NHC_46Binary_46getBitsFAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46getBitsFAux),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBitsFAux))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v226)
,};
Node FN_NHC_46Binary_46getBitsF[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 110001
, useLabel(ST_v225)
,	/* CT_v226: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46Binary_46getBitsF[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getBitsF),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46getBitsFAux))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum))
,	/* ST_v225: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,66,105)
,	/* ST_v223: (byte 4) */
  bytes2word(116,115,70,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,66,105)
, bytes2word(116,115,70,65)
,	/* ST_v221: (byte 3) */
  bytes2word(117,120,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,104,115)
, bytes2word(95,103,101,116)
, bytes2word(66,105,116,115)
, bytes2word(70,65,117,120)
, bytes2word(0,0,0,0)
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

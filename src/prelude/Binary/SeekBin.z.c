#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95seekBin_35	((void*)startLabel+12)
#define CT_v211	((void*)startLabel+44)
#define F0_NHC_46Binary_46hs_95seekBin_35	((void*)startLabel+52)
#define FN_NHC_46Binary_46hs_95seekBin	((void*)startLabel+64)
#define CT_v213	((void*)startLabel+88)
#define CF_NHC_46Binary_46hs_95seekBin	((void*)startLabel+96)
#define CT_v215	((void*)startLabel+156)
#define FN_LAMBDA208	((void*)startLabel+192)
#define CT_v217	((void*)startLabel+216)
#define F0_LAMBDA208	((void*)startLabel+224)
#define ST_v212	((void*)startLabel+232)
#define ST_v210	((void*)startLabel+254)
#define ST_v214	((void*)startLabel+277)
#define ST_v216	((void*)startLabel+296)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95seekBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v211)
,	/* FN_NHC_46Binary_46hs_95seekBin_35: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Binary_46hs_95seekBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v210)
,	/* CT_v211: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Binary_46hs_95seekBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95seekBin_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v213)
,	/* FN_NHC_46Binary_46hs_95seekBin: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v212)
,	/* CT_v213: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95seekBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95seekBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Binary_46hs_95seekBin_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,};
Node FN_NHC_46Binary_46seekBin[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v214)
,	/* CT_v215: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_NHC_46Binary_46seekBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46seekBin),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95seekBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA208),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v217)
,	/* FN_LAMBDA208: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 150014
, useLabel(ST_v216)
,	/* CT_v217: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v212: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,115,101)
, bytes2word(101,107,66,105)
,	/* ST_v210: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(115,101,101,107)
, bytes2word(66,105,110,35)
,	/* ST_v214: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(115,101,101,107)
,	/* ST_v216: (byte 4) */
  bytes2word(66,105,110,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,115)
, bytes2word(101,101,107,66)
, bytes2word(105,110,58,49)
, bytes2word(53,58,49,52)
, bytes2word(45,49,53,58)
, bytes2word(50,56,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_seekBin" NHC.Binary.hs_seekBin# 2 :: FFI.ForeignObj -> Prelude.Int -> Prelude.() */
extern void hs_seekBin(void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95seekBin_35 = {"NHC.Binary","NHC.Binary.hs_seekBin#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95seekBin_35) {
  NodePtr nodeptr;
  void* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  hs_seekBin(arg1,arg2);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95seekBin_35);
  C_RETURN(nodeptr);
}

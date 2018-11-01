#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95alignBin_35	((void*)startLabel+8)
#define CT_v205	((void*)startLabel+36)
#define F0_NHC_46Binary_46hs_95alignBin_35	((void*)startLabel+44)
#define FN_NHC_46Binary_46hs_95alignBin	((void*)startLabel+56)
#define CT_v207	((void*)startLabel+80)
#define CF_NHC_46Binary_46hs_95alignBin	((void*)startLabel+88)
#define CT_v209	((void*)startLabel+144)
#define FN_LAMBDA202	((void*)startLabel+180)
#define CT_v211	((void*)startLabel+204)
#define F0_LAMBDA202	((void*)startLabel+212)
#define ST_v208	((void*)startLabel+220)
#define ST_v210	((void*)startLabel+240)
#define ST_v206	((void*)startLabel+272)
#define ST_v204	((void*)startLabel+295)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95alignBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v205)
,	/* FN_NHC_46Binary_46hs_95alignBin_35: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95alignBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95alignBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95alignBin_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v207)
,	/* FN_NHC_46Binary_46hs_95alignBin: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v206)
,	/* CT_v207: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95alignBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95alignBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95alignBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v209)
,};
Node FN_NHC_46Binary_46alignBin[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v208)
,	/* CT_v209: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46Binary_46alignBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46alignBin),1)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95alignBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA202),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v211)
,	/* FN_LAMBDA202: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 130014
, useLabel(ST_v210)
,	/* CT_v211: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA202: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA202),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v208: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,97)
, bytes2word(108,105,103,110)
,	/* ST_v210: (byte 4) */
  bytes2word(66,105,110,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,97)
, bytes2word(108,105,103,110)
, bytes2word(66,105,110,58)
, bytes2word(49,51,58,49)
, bytes2word(52,45,49,51)
,	/* ST_v206: (byte 4) */
  bytes2word(58,50,55,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,97,108)
, bytes2word(105,103,110,66)
,	/* ST_v204: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,104,115)
, bytes2word(95,97,108,105)
, bytes2word(103,110,66,105)
, bytes2word(110,35,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_alignBin" NHC.Binary.hs_alignBin# 1 :: FFI.ForeignObj -> Prelude.() */
extern void hs_alignBin(void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95alignBin_35 = {"NHC.Binary","NHC.Binary.hs_alignBin#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95alignBin_35) {
  NodePtr nodeptr;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  hs_alignBin(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95alignBin_35);
  C_RETURN(nodeptr);
}

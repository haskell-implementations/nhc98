#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95isEOFBin_35	((void*)startLabel+8)
#define CT_v193	((void*)startLabel+36)
#define F0_NHC_46Binary_46hs_95isEOFBin_35	((void*)startLabel+44)
#define FN_NHC_46Binary_46hs_95isEOFBin	((void*)startLabel+56)
#define CT_v195	((void*)startLabel+80)
#define CF_NHC_46Binary_46hs_95isEOFBin	((void*)startLabel+88)
#define CT_v197	((void*)startLabel+136)
#define ST_v194	((void*)startLabel+152)
#define ST_v192	((void*)startLabel+175)
#define ST_v196	((void*)startLabel+199)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95isEOFBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v193)
,	/* FN_NHC_46Binary_46hs_95isEOFBin_35: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95isEOFBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95isEOFBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95isEOFBin_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v195)
,	/* FN_NHC_46Binary_46hs_95isEOFBin: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95isEOFBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95isEOFBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95isEOFBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v197)
,};
Node FN_NHC_46Binary_46isEOFBin[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Binary_46isEOFBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46isEOFBin),1)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95isEOFBin))
,	/* ST_v194: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,105,115)
, bytes2word(69,79,70,66)
,	/* ST_v192: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,104,115)
, bytes2word(95,105,115,69)
, bytes2word(79,70,66,105)
,	/* ST_v196: (byte 3) */
  bytes2word(110,35,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,105,115)
, bytes2word(69,79,70,66)
, bytes2word(105,110,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_isEOFBin" NHC.Binary.hs_isEOFBin# 1 :: FFI.ForeignObj -> Prelude.Bool */
extern HsBool hs_isEOFBin(void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95isEOFBin_35 = {"NHC.Binary","NHC.Binary.hs_isEOFBin#","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95isEOFBin_35) {
  NodePtr nodeptr;
  HsBool result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_isEOFBin(arg1);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95isEOFBin_35);
  C_RETURN(nodeptr);
}

#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95sizeBin_35	((void*)startLabel+8)
#define CT_v193	((void*)startLabel+36)
#define F0_NHC_46Binary_46hs_95sizeBin_35	((void*)startLabel+44)
#define FN_NHC_46Binary_46hs_95sizeBin	((void*)startLabel+56)
#define CT_v195	((void*)startLabel+80)
#define CF_NHC_46Binary_46hs_95sizeBin	((void*)startLabel+88)
#define CT_v197	((void*)startLabel+136)
#define ST_v194	((void*)startLabel+152)
#define ST_v192	((void*)startLabel+174)
#define ST_v196	((void*)startLabel+197)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95sizeBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v193)
,	/* FN_NHC_46Binary_46hs_95sizeBin_35: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95sizeBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95sizeBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95sizeBin_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v195)
,	/* FN_NHC_46Binary_46hs_95sizeBin: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95sizeBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95sizeBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95sizeBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v197)
,};
Node FN_NHC_46Binary_46sizeBin[] = {
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
Node F0_NHC_46Binary_46sizeBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46sizeBin),1)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95sizeBin))
,	/* ST_v194: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,115,105)
, bytes2word(122,101,66,105)
,	/* ST_v192: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(115,105,122,101)
, bytes2word(66,105,110,35)
,	/* ST_v196: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(115,105,122,101)
, bytes2word(66,105,110,0)
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

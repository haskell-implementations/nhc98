#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95isEOFBin_35	((void*)startLabel+8)
#define CT_v194	((void*)startLabel+32)
#define F0_NHC_46Binary_46hs_95isEOFBin_35	((void*)startLabel+40)
#define FN_NHC_46Binary_46hs_95isEOFBin	((void*)startLabel+68)
#define CT_v198	((void*)startLabel+120)
#define CF_NHC_46Binary_46hs_95isEOFBin	((void*)startLabel+128)
#define CT_v202	((void*)startLabel+220)
#define PP_NHC_46Binary_46hs_95isEOFBin	((void*)startLabel+252)
#define PC_NHC_46Binary_46hs_95isEOFBin	((void*)startLabel+252)
#define ST_v196	((void*)startLabel+252)
#define PP_NHC_46Binary_46hs_95isEOFBin_35	((void*)startLabel+275)
#define PC_NHC_46Binary_46hs_95isEOFBin_35	((void*)startLabel+275)
#define ST_v193	((void*)startLabel+275)
#define ST_v200	((void*)startLabel+300)
#define PS_v197	((void*)startLabel+320)
#define PS_v195	((void*)startLabel+332)
#define PS_v201	((void*)startLabel+344)
#define PS_v199	((void*)startLabel+356)
#define PS_v192	((void*)startLabel+368)
void FR_NHC_46Binary_46hs_95isEOFBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v194)
,	/* FN_NHC_46Binary_46hs_95isEOFBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95isEOFBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95isEOFBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95isEOFBin_35),1)
, useLabel(PS_v192)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,	/* FN_NHC_46Binary_46hs_95isEOFBin: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v196)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95isEOFBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95isEOFBin))
, useLabel(PS_v195)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95isEOFBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v202)
,};
Node FN_NHC_46Binary_46isEOFBin[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, 120001
, useLabel(ST_v200)
,	/* CT_v202: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Binary_46isEOFBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46isEOFBin),1)
, useLabel(PS_v199)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95isEOFBin))
,	/* PP_NHC_46Binary_46hs_95isEOFBin: (byte 0) */
 	/* PC_NHC_46Binary_46hs_95isEOFBin: (byte 0) */
 	/* ST_v196: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,105,115)
, bytes2word(69,79,70,66)
,	/* PP_NHC_46Binary_46hs_95isEOFBin_35: (byte 3) */
 	/* PC_NHC_46Binary_46hs_95isEOFBin_35: (byte 3) */
 	/* ST_v193: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,104,115)
, bytes2word(95,105,115,69)
, bytes2word(79,70,66,105)
, bytes2word(110,35,0,0)
,};
Node PP_NHC_46Binary_46isEOFBin[] = {
 };
Node PC_NHC_46Binary_46isEOFBin[] = {
 	/* ST_v200: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,105)
, bytes2word(115,69,79,70)
, bytes2word(66,105,110,0)
,	/* PS_v197: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95isEOFBin)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v195: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95isEOFBin)
, useLabel(PC_NHC_46Binary_46hs_95isEOFBin)
,	/* PS_v201: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46isEOFBin)
, useLabel(PC_NHC_46Binary_46hs_95isEOFBin)
,	/* PS_v199: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46isEOFBin)
, useLabel(PC_NHC_46Binary_46isEOFBin)
,	/* PS_v192: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95isEOFBin_35)
, useLabel(PC_NHC_46Binary_46hs_95isEOFBin_35)
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

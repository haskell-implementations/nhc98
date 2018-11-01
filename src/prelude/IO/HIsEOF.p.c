#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hIsEOFC_35	((void*)startLabel+8)
#define CT_v192	((void*)startLabel+32)
#define F0_IO_46hIsEOFC_35	((void*)startLabel+40)
#define FN_IO_46hIsEOFC	((void*)startLabel+68)
#define CT_v196	((void*)startLabel+120)
#define CF_IO_46hIsEOFC	((void*)startLabel+128)
#define CT_v200	((void*)startLabel+220)
#define ST_v198	((void*)startLabel+252)
#define PP_IO_46hIsEOFC	((void*)startLabel+262)
#define PC_IO_46hIsEOFC	((void*)startLabel+262)
#define ST_v194	((void*)startLabel+262)
#define PP_IO_46hIsEOFC_35	((void*)startLabel+273)
#define PC_IO_46hIsEOFC_35	((void*)startLabel+273)
#define ST_v191	((void*)startLabel+273)
#define PS_v195	((void*)startLabel+288)
#define PS_v193	((void*)startLabel+300)
#define PS_v199	((void*)startLabel+312)
#define PS_v197	((void*)startLabel+324)
#define PS_v190	((void*)startLabel+336)
void FR_IO_46hIsEOFC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v192)
,	/* FN_IO_46hIsEOFC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hIsEOFC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v191)
,	/* CT_v192: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hIsEOFC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hIsEOFC_35),1)
, useLabel(PS_v190)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v196)
,	/* FN_IO_46hIsEOFC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v194)
,	/* CT_v196: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hIsEOFC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hIsEOFC))
, useLabel(PS_v193)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hIsEOFC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v200)
,};
Node FN_IO_46hIsEOF[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v198)
,	/* CT_v200: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hIsEOF[] = {
  CAPTAG(useLabel(FN_IO_46hIsEOF),1)
, useLabel(PS_v197)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hIsEOFC))
,};
Node PP_IO_46hIsEOF[] = {
 };
Node PC_IO_46hIsEOF[] = {
 	/* ST_v198: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(73,115,69,79)
,	/* PP_IO_46hIsEOFC: (byte 2) */
 	/* PC_IO_46hIsEOFC: (byte 2) */
 	/* ST_v194: (byte 2) */
  bytes2word(70,0,73,79)
, bytes2word(46,104,73,115)
, bytes2word(69,79,70,67)
,	/* PP_IO_46hIsEOFC_35: (byte 1) */
 	/* PC_IO_46hIsEOFC_35: (byte 1) */
 	/* ST_v191: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,73,115,69)
, bytes2word(79,70,67,35)
, bytes2word(0,0,0,0)
,	/* PS_v195: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsEOFC)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v193: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsEOFC)
, useLabel(PC_IO_46hIsEOFC)
,	/* PS_v199: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsEOF)
, useLabel(PC_IO_46hIsEOFC)
,	/* PS_v197: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsEOF)
, useLabel(PC_IO_46hIsEOF)
,	/* PS_v190: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsEOFC_35)
, useLabel(PC_IO_46hIsEOFC_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hIsEOF" IO.hIsEOFC# 1 :: FFI.ForeignObj -> Prelude.Bool */
extern HsBool hIsEOF(void*);
#ifdef PROFILE
static SInfo pf_IO_46hIsEOFC_35 = {"IO","IO.hIsEOFC#","Prelude.Bool"};
#endif
C_HEADER(FR_IO_46hIsEOFC_35) {
  NodePtr nodeptr;
  HsBool result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hIsEOF(arg1);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hIsEOFC_35);
  C_RETURN(nodeptr);
}

#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95copyBinAux_35	((void*)startLabel+12)
#define CT_v251	((void*)startLabel+48)
#define F0_NHC_46Binary_46hs_95copyBinAux_35	((void*)startLabel+56)
#define FN_NHC_46Binary_46hs_95copyBinAux	((void*)startLabel+68)
#define CT_v253	((void*)startLabel+92)
#define CF_NHC_46Binary_46hs_95copyBinAux	((void*)startLabel+100)
#define FN_NHC_46Binary_46copyBinAux	((void*)startLabel+124)
#define CT_v255	((void*)startLabel+160)
#define F0_NHC_46Binary_46copyBinAux	((void*)startLabel+168)
#define FN_LAMBDA246	((void*)startLabel+196)
#define CT_v257	((void*)startLabel+220)
#define F0_LAMBDA246	((void*)startLabel+228)
#define CT_v259	((void*)startLabel+280)
#define FN_LAMBDA248	((void*)startLabel+316)
#define CT_v261	((void*)startLabel+348)
#define F0_LAMBDA248	((void*)startLabel+356)
#define FN_LAMBDA247	((void*)startLabel+384)
#define CT_v263	((void*)startLabel+420)
#define F0_LAMBDA247	((void*)startLabel+428)
#define ST_v258	((void*)startLabel+444)
#define ST_v260	((void*)startLabel+463)
#define ST_v262	((void*)startLabel+494)
#define ST_v254	((void*)startLabel+525)
#define ST_v256	((void*)startLabel+547)
#define ST_v252	((void*)startLabel+581)
#define ST_v250	((void*)startLabel+606)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95copyBinAux_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46Binary_46openBin[];
extern Node FN_NHC_46Binary_46sizeBin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v251)
,	/* FN_NHC_46Binary_46hs_95copyBinAux_35: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95copyBinAux_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 200001
, useLabel(ST_v250)
,	/* CT_v251: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95copyBinAux_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v253)
,	/* FN_NHC_46Binary_46hs_95copyBinAux: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 200001
, useLabel(ST_v252)
,	/* CT_v253: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95copyBinAux: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95copyBinAux_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v255)
,	/* FN_NHC_46Binary_46copyBinAux: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 230001
, useLabel(ST_v254)
,	/* CT_v255: (byte 0) */
  HW(4,3)
, 0
,	/* F0_NHC_46Binary_46copyBinAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBinAux),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBinAux))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA246),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v257)
,	/* FN_LAMBDA246: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 240014
, useLabel(ST_v256)
,	/* CT_v257: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v259)
,};
Node FN_NHC_46Binary_46copyBin[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 140001
, useLabel(ST_v258)
,	/* CT_v259: (byte 0) */
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
, useLabel(CT_v261)
,	/* FN_LAMBDA248: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 150019
, useLabel(ST_v260)
,	/* CT_v261: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46sizeBin))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v263)
,	/* FN_LAMBDA247: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 160019
, useLabel(ST_v262)
,	/* CT_v263: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46copyBinAux))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v258: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(111,112,121,66)
,	/* ST_v260: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(110,58,49,53)
, bytes2word(58,49,57,45)
, bytes2word(49,56,58,49)
,	/* ST_v262: (byte 2) */
  bytes2word(50,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,99,111,112)
, bytes2word(121,66,105,110)
, bytes2word(58,49,54,58)
, bytes2word(49,57,45,49)
, bytes2word(56,58,49,50)
,	/* ST_v254: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(99,111,112,121)
, bytes2word(66,105,110,65)
,	/* ST_v256: (byte 3) */
  bytes2word(117,120,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,99,111)
, bytes2word(112,121,66,105)
, bytes2word(110,65,117,120)
, bytes2word(58,50,52,58)
, bytes2word(49,52,45,50)
, bytes2word(52,58,52,48)
,	/* ST_v252: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(104,115,95,99)
, bytes2word(111,112,121,66)
, bytes2word(105,110,65,117)
,	/* ST_v250: (byte 2) */
  bytes2word(120,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,111,112,121)
, bytes2word(66,105,110,65)
, bytes2word(117,120,35,0)
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

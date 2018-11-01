#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95endBin_35	((void*)startLabel+8)
#define CT_v208	((void*)startLabel+32)
#define F0_NHC_46Binary_46hs_95endBin_35	((void*)startLabel+40)
#define FN_NHC_46Binary_46hs_95endBin	((void*)startLabel+68)
#define CT_v212	((void*)startLabel+120)
#define CF_NHC_46Binary_46hs_95endBin	((void*)startLabel+128)
#define CT_v219	((void*)startLabel+296)
#define FN_LAMBDA204	((void*)startLabel+348)
#define CT_v223	((void*)startLabel+400)
#define F0_LAMBDA204	((void*)startLabel+408)
#define ST_v214	((void*)startLabel+432)
#define PP_LAMBDA204	((void*)startLabel+450)
#define PC_LAMBDA204	((void*)startLabel+450)
#define ST_v221	((void*)startLabel+450)
#define PP_NHC_46Binary_46hs_95endBin	((void*)startLabel+480)
#define PC_NHC_46Binary_46hs_95endBin	((void*)startLabel+480)
#define ST_v210	((void*)startLabel+480)
#define PP_NHC_46Binary_46hs_95endBin_35	((void*)startLabel+501)
#define PC_NHC_46Binary_46hs_95endBin_35	((void*)startLabel+501)
#define ST_v207	((void*)startLabel+501)
#define PS_v211	((void*)startLabel+524)
#define PS_v209	((void*)startLabel+536)
#define PS_v216	((void*)startLabel+548)
#define PS_v215	((void*)startLabel+560)
#define PS_v213	((void*)startLabel+572)
#define PS_v218	((void*)startLabel+584)
#define PS_v217	((void*)startLabel+596)
#define PS_v206	((void*)startLabel+608)
#define PS_v222	((void*)startLabel+620)
#define PS_v220	((void*)startLabel+632)
void FR_NHC_46Binary_46hs_95endBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v208)
,	/* FN_NHC_46Binary_46hs_95endBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95endBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v207)
,	/* CT_v208: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95endBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95endBin_35),1)
, useLabel(PS_v206)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v212)
,	/* FN_NHC_46Binary_46hs_95endBin: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v211)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v210)
,	/* CT_v212: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95endBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95endBin))
, useLabel(PS_v209)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95endBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v219)
,};
Node FN_NHC_46Binary_46endBin[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,11,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v218)
, 0
, 0
, 0
, 0
, useLabel(PS_v217)
, 0
, 0
, 0
, 0
, useLabel(PS_v216)
, 0
, 0
, 0
, 0
, useLabel(PS_v215)
, 0
, 0
, 0
, 0
, 130001
, useLabel(ST_v214)
,	/* CT_v219: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46Binary_46endBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46endBin),1)
, useLabel(PS_v213)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95endBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA204),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v223)
,	/* FN_LAMBDA204: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v222)
, 0
, 0
, 0
, 0
, 140014
, useLabel(ST_v221)
,	/* CT_v223: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA204: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA204),1)
, useLabel(PS_v220)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_NHC_46Binary_46endBin[] = {
 };
Node PC_NHC_46Binary_46endBin[] = {
 	/* ST_v214: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,101)
, bytes2word(110,100,66,105)
,	/* PP_LAMBDA204: (byte 2) */
 	/* PC_LAMBDA204: (byte 2) */
 	/* ST_v221: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,101,110,100)
, bytes2word(66,105,110,58)
, bytes2word(49,52,58,49)
, bytes2word(52,45,49,52)
,	/* PP_NHC_46Binary_46hs_95endBin: (byte 4) */
 	/* PC_NHC_46Binary_46hs_95endBin: (byte 4) */
 	/* ST_v210: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,101,110)
, bytes2word(100,66,105,110)
,	/* PP_NHC_46Binary_46hs_95endBin_35: (byte 1) */
 	/* PC_NHC_46Binary_46hs_95endBin_35: (byte 1) */
 	/* ST_v207: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(104,115,95,101)
, bytes2word(110,100,66,105)
, bytes2word(110,35,0,0)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95endBin)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v209: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95endBin)
, useLabel(PC_NHC_46Binary_46hs_95endBin)
,	/* PS_v216: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46endBin)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v215: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46endBin)
, useLabel(PC_NHC_46Binary_46hs_95endBin)
,	/* PS_v213: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46endBin)
, useLabel(PC_NHC_46Binary_46endBin)
,	/* PS_v218: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46endBin)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v217: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46endBin)
, useLabel(PC_LAMBDA204)
,	/* PS_v206: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95endBin_35)
, useLabel(PC_NHC_46Binary_46hs_95endBin_35)
,	/* PS_v222: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA204)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v220: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA204)
, useLabel(PC_LAMBDA204)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_endBin" NHC.Binary.hs_endBin# 1 :: FFI.ForeignObj -> Prelude.Int */
extern HsInt hs_endBin(void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95endBin_35 = {"NHC.Binary","NHC.Binary.hs_endBin#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95endBin_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_endBin(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95endBin_35);
  C_RETURN(nodeptr);
}

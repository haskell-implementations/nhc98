#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95tellBin_35	((void*)startLabel+8)
#define CT_v208	((void*)startLabel+32)
#define F0_NHC_46Binary_46hs_95tellBin_35	((void*)startLabel+40)
#define FN_NHC_46Binary_46hs_95tellBin	((void*)startLabel+68)
#define CT_v212	((void*)startLabel+120)
#define CF_NHC_46Binary_46hs_95tellBin	((void*)startLabel+128)
#define CT_v219	((void*)startLabel+296)
#define FN_LAMBDA204	((void*)startLabel+348)
#define CT_v223	((void*)startLabel+400)
#define F0_LAMBDA204	((void*)startLabel+408)
#define PP_NHC_46Binary_46hs_95tellBin	((void*)startLabel+432)
#define PC_NHC_46Binary_46hs_95tellBin	((void*)startLabel+432)
#define ST_v210	((void*)startLabel+432)
#define PP_NHC_46Binary_46hs_95tellBin_35	((void*)startLabel+454)
#define PC_NHC_46Binary_46hs_95tellBin_35	((void*)startLabel+454)
#define ST_v207	((void*)startLabel+454)
#define ST_v214	((void*)startLabel+480)
#define PP_LAMBDA204	((void*)startLabel+499)
#define PC_LAMBDA204	((void*)startLabel+499)
#define ST_v221	((void*)startLabel+499)
#define PS_v211	((void*)startLabel+532)
#define PS_v209	((void*)startLabel+544)
#define PS_v216	((void*)startLabel+556)
#define PS_v215	((void*)startLabel+568)
#define PS_v213	((void*)startLabel+580)
#define PS_v218	((void*)startLabel+592)
#define PS_v217	((void*)startLabel+604)
#define PS_v206	((void*)startLabel+616)
#define PS_v222	((void*)startLabel+628)
#define PS_v220	((void*)startLabel+640)
void FR_NHC_46Binary_46hs_95tellBin_35(void);
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
,	/* FN_NHC_46Binary_46hs_95tellBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95tellBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v207)
,	/* CT_v208: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95tellBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95tellBin_35),1)
, useLabel(PS_v206)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v212)
,	/* FN_NHC_46Binary_46hs_95tellBin: (byte 0) */
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
,	/* CF_NHC_46Binary_46hs_95tellBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95tellBin))
, useLabel(PS_v209)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95tellBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v219)
,};
Node FN_NHC_46Binary_46tellBin[] = {
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
Node F0_NHC_46Binary_46tellBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46tellBin),1)
, useLabel(PS_v213)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95tellBin))
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
, 140011
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
,	/* PP_NHC_46Binary_46hs_95tellBin: (byte 0) */
 	/* PC_NHC_46Binary_46hs_95tellBin: (byte 0) */
 	/* ST_v210: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,116,101)
, bytes2word(108,108,66,105)
,	/* PP_NHC_46Binary_46hs_95tellBin_35: (byte 2) */
 	/* PC_NHC_46Binary_46hs_95tellBin_35: (byte 2) */
 	/* ST_v207: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(116,101,108,108)
, bytes2word(66,105,110,35)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Binary_46tellBin[] = {
 };
Node PC_NHC_46Binary_46tellBin[] = {
 	/* ST_v214: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,116)
, bytes2word(101,108,108,66)
,	/* PP_LAMBDA204: (byte 3) */
 	/* PC_LAMBDA204: (byte 3) */
 	/* ST_v221: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,116,101)
, bytes2word(108,108,66,105)
, bytes2word(110,58,49,52)
, bytes2word(58,49,49,45)
, bytes2word(49,52,58,50)
, bytes2word(51,0,0,0)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95tellBin)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v209: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95tellBin)
, useLabel(PC_NHC_46Binary_46hs_95tellBin)
,	/* PS_v216: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46tellBin)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v215: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46tellBin)
, useLabel(PC_NHC_46Binary_46hs_95tellBin)
,	/* PS_v213: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46tellBin)
, useLabel(PC_NHC_46Binary_46tellBin)
,	/* PS_v218: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46tellBin)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v217: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46tellBin)
, useLabel(PC_LAMBDA204)
,	/* PS_v206: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95tellBin_35)
, useLabel(PC_NHC_46Binary_46hs_95tellBin_35)
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

/* foreign import ccall "hs_tellBin" NHC.Binary.hs_tellBin# 1 :: FFI.ForeignObj -> Prelude.Int */
extern HsInt hs_tellBin(void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95tellBin_35 = {"NHC.Binary","NHC.Binary.hs_tellBin#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95tellBin_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hs_tellBin(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95tellBin_35);
  C_RETURN(nodeptr);
}

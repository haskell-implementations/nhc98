#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95closeBin_35	((void*)startLabel+8)
#define CT_v206	((void*)startLabel+32)
#define F0_NHC_46Binary_46hs_95closeBin_35	((void*)startLabel+40)
#define FN_NHC_46Binary_46hs_95closeBin	((void*)startLabel+68)
#define CT_v210	((void*)startLabel+120)
#define CF_NHC_46Binary_46hs_95closeBin	((void*)startLabel+128)
#define CT_v217	((void*)startLabel+296)
#define FN_LAMBDA202	((void*)startLabel+348)
#define CT_v221	((void*)startLabel+400)
#define F0_LAMBDA202	((void*)startLabel+408)
#define ST_v212	((void*)startLabel+432)
#define PP_LAMBDA202	((void*)startLabel+452)
#define PC_LAMBDA202	((void*)startLabel+452)
#define ST_v219	((void*)startLabel+452)
#define PP_NHC_46Binary_46hs_95closeBin	((void*)startLabel+484)
#define PC_NHC_46Binary_46hs_95closeBin	((void*)startLabel+484)
#define ST_v208	((void*)startLabel+484)
#define PP_NHC_46Binary_46hs_95closeBin_35	((void*)startLabel+507)
#define PC_NHC_46Binary_46hs_95closeBin_35	((void*)startLabel+507)
#define ST_v205	((void*)startLabel+507)
#define PS_v209	((void*)startLabel+532)
#define PS_v207	((void*)startLabel+544)
#define PS_v214	((void*)startLabel+556)
#define PS_v213	((void*)startLabel+568)
#define PS_v211	((void*)startLabel+580)
#define PS_v216	((void*)startLabel+592)
#define PS_v215	((void*)startLabel+604)
#define PS_v204	((void*)startLabel+616)
#define PS_v220	((void*)startLabel+628)
#define PS_v218	((void*)startLabel+640)
void FR_NHC_46Binary_46hs_95closeBin_35(void);
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
, useLabel(CT_v206)
,	/* FN_NHC_46Binary_46hs_95closeBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46Binary_46hs_95closeBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v205)
,	/* CT_v206: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46hs_95closeBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95closeBin_35),1)
, useLabel(PS_v204)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v210)
,	/* FN_NHC_46Binary_46hs_95closeBin: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v209)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v208)
,	/* CT_v210: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95closeBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95closeBin))
, useLabel(PS_v207)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46Binary_46hs_95closeBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v217)
,};
Node FN_NHC_46Binary_46closeBin[] = {
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
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, 120001
, useLabel(ST_v212)
,	/* CT_v217: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46Binary_46closeBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46closeBin),1)
, useLabel(PS_v211)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95closeBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA202),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v221)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v220)
, 0
, 0
, 0
, 0
, 130014
, useLabel(ST_v219)
,	/* CT_v221: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA202: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA202),1)
, useLabel(PS_v218)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_NHC_46Binary_46closeBin[] = {
 };
Node PC_NHC_46Binary_46closeBin[] = {
 	/* ST_v212: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(108,111,115,101)
,	/* PP_LAMBDA202: (byte 4) */
 	/* PC_LAMBDA202: (byte 4) */
 	/* ST_v219: (byte 4) */
  bytes2word(66,105,110,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(108,111,115,101)
, bytes2word(66,105,110,58)
, bytes2word(49,51,58,49)
, bytes2word(52,45,49,51)
,	/* PP_NHC_46Binary_46hs_95closeBin: (byte 4) */
 	/* PC_NHC_46Binary_46hs_95closeBin: (byte 4) */
 	/* ST_v208: (byte 4) */
  bytes2word(58,50,55,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,99,108)
, bytes2word(111,115,101,66)
,	/* PP_NHC_46Binary_46hs_95closeBin_35: (byte 3) */
 	/* PC_NHC_46Binary_46hs_95closeBin_35: (byte 3) */
 	/* ST_v205: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,104,115)
, bytes2word(95,99,108,111)
, bytes2word(115,101,66,105)
, bytes2word(110,35,0,0)
,	/* PS_v209: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95closeBin)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v207: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95closeBin)
, useLabel(PC_NHC_46Binary_46hs_95closeBin)
,	/* PS_v214: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46closeBin)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v213: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46closeBin)
, useLabel(PC_NHC_46Binary_46hs_95closeBin)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46closeBin)
, useLabel(PC_NHC_46Binary_46closeBin)
,	/* PS_v216: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46closeBin)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v215: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46closeBin)
, useLabel(PC_LAMBDA202)
,	/* PS_v204: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95closeBin_35)
, useLabel(PC_NHC_46Binary_46hs_95closeBin_35)
,	/* PS_v220: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA202)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v218: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA202)
, useLabel(PC_LAMBDA202)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_closeBin" NHC.Binary.hs_closeBin# 1 :: FFI.ForeignObj -> Prelude.() */
extern void hs_closeBin(void*);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95closeBin_35 = {"NHC.Binary","NHC.Binary.hs_closeBin#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95closeBin_35) {
  NodePtr nodeptr;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  hs_closeBin(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95closeBin_35);
  C_RETURN(nodeptr);
}

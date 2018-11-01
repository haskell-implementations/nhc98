#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95seekBin_35	((void*)startLabel+12)
#define CT_v212	((void*)startLabel+40)
#define F0_NHC_46Binary_46hs_95seekBin_35	((void*)startLabel+48)
#define FN_NHC_46Binary_46hs_95seekBin	((void*)startLabel+76)
#define CT_v216	((void*)startLabel+128)
#define CF_NHC_46Binary_46hs_95seekBin	((void*)startLabel+136)
#define CT_v223	((void*)startLabel+312)
#define FN_LAMBDA208	((void*)startLabel+364)
#define CT_v227	((void*)startLabel+416)
#define F0_LAMBDA208	((void*)startLabel+424)
#define PP_NHC_46Binary_46hs_95seekBin	((void*)startLabel+448)
#define PC_NHC_46Binary_46hs_95seekBin	((void*)startLabel+448)
#define ST_v214	((void*)startLabel+448)
#define PP_NHC_46Binary_46hs_95seekBin_35	((void*)startLabel+470)
#define PC_NHC_46Binary_46hs_95seekBin_35	((void*)startLabel+470)
#define ST_v211	((void*)startLabel+470)
#define ST_v218	((void*)startLabel+496)
#define PP_LAMBDA208	((void*)startLabel+515)
#define PC_LAMBDA208	((void*)startLabel+515)
#define ST_v225	((void*)startLabel+515)
#define PS_v215	((void*)startLabel+548)
#define PS_v213	((void*)startLabel+560)
#define PS_v220	((void*)startLabel+572)
#define PS_v219	((void*)startLabel+584)
#define PS_v217	((void*)startLabel+596)
#define PS_v222	((void*)startLabel+608)
#define PS_v221	((void*)startLabel+620)
#define PS_v210	((void*)startLabel+632)
#define PS_v226	((void*)startLabel+644)
#define PS_v224	((void*)startLabel+656)
void FR_NHC_46Binary_46hs_95seekBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v212)
,	/* FN_NHC_46Binary_46hs_95seekBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Binary_46hs_95seekBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v211)
,	/* CT_v212: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Binary_46hs_95seekBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95seekBin_35),2)
, useLabel(PS_v210)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v216)
,	/* FN_NHC_46Binary_46hs_95seekBin: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v215)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v214)
,	/* CT_v216: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95seekBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95seekBin))
, useLabel(PS_v213)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Binary_46hs_95seekBin_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v223)
,};
Node FN_NHC_46Binary_46seekBin[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,11,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v222)
, 0
, 0
, 0
, 0
, useLabel(PS_v221)
, 0
, 0
, 0
, 0
, useLabel(PS_v220)
, 0
, 0
, 0
, 0
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, 140001
, useLabel(ST_v218)
,	/* CT_v223: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_NHC_46Binary_46seekBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46seekBin),2)
, useLabel(PS_v217)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95seekBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA208),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v227)
,	/* FN_LAMBDA208: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v226)
, 0
, 0
, 0
, 0
, 150014
, useLabel(ST_v225)
,	/* CT_v227: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),1)
, useLabel(PS_v224)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* PP_NHC_46Binary_46hs_95seekBin: (byte 0) */
 	/* PC_NHC_46Binary_46hs_95seekBin: (byte 0) */
 	/* ST_v214: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,115,101)
, bytes2word(101,107,66,105)
,	/* PP_NHC_46Binary_46hs_95seekBin_35: (byte 2) */
 	/* PC_NHC_46Binary_46hs_95seekBin_35: (byte 2) */
 	/* ST_v211: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(115,101,101,107)
, bytes2word(66,105,110,35)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Binary_46seekBin[] = {
 };
Node PC_NHC_46Binary_46seekBin[] = {
 	/* ST_v218: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,115)
, bytes2word(101,101,107,66)
,	/* PP_LAMBDA208: (byte 3) */
 	/* PC_LAMBDA208: (byte 3) */
 	/* ST_v225: (byte 3) */
  bytes2word(105,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,115,101)
, bytes2word(101,107,66,105)
, bytes2word(110,58,49,53)
, bytes2word(58,49,52,45)
, bytes2word(49,53,58,50)
, bytes2word(56,0,0,0)
,	/* PS_v215: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95seekBin)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v213: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95seekBin)
, useLabel(PC_NHC_46Binary_46hs_95seekBin)
,	/* PS_v220: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46seekBin)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v219: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46seekBin)
, useLabel(PC_NHC_46Binary_46hs_95seekBin)
,	/* PS_v217: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46seekBin)
, useLabel(PC_NHC_46Binary_46seekBin)
,	/* PS_v222: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46seekBin)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v221: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46seekBin)
, useLabel(PC_LAMBDA208)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95seekBin_35)
, useLabel(PC_NHC_46Binary_46hs_95seekBin_35)
,	/* PS_v226: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA208)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v224: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA208)
, useLabel(PC_LAMBDA208)
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

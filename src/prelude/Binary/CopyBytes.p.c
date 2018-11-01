#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95copyBytes_35	((void*)startLabel+12)
#define CT_v216	((void*)startLabel+44)
#define F0_NHC_46Binary_46hs_95copyBytes_35	((void*)startLabel+52)
#define FN_NHC_46Binary_46hs_95copyBytes	((void*)startLabel+80)
#define CT_v220	((void*)startLabel+132)
#define CF_NHC_46Binary_46hs_95copyBytes	((void*)startLabel+140)
#define CT_v227	((void*)startLabel+316)
#define FN_LAMBDA212	((void*)startLabel+368)
#define CT_v231	((void*)startLabel+420)
#define F0_LAMBDA212	((void*)startLabel+428)
#define ST_v222	((void*)startLabel+452)
#define PP_LAMBDA212	((void*)startLabel+473)
#define PC_LAMBDA212	((void*)startLabel+473)
#define ST_v229	((void*)startLabel+473)
#define PP_NHC_46Binary_46hs_95copyBytes	((void*)startLabel+506)
#define PC_NHC_46Binary_46hs_95copyBytes	((void*)startLabel+506)
#define ST_v218	((void*)startLabel+506)
#define PP_NHC_46Binary_46hs_95copyBytes_35	((void*)startLabel+530)
#define PC_NHC_46Binary_46hs_95copyBytes_35	((void*)startLabel+530)
#define ST_v215	((void*)startLabel+530)
#define PS_v219	((void*)startLabel+556)
#define PS_v217	((void*)startLabel+568)
#define PS_v224	((void*)startLabel+580)
#define PS_v223	((void*)startLabel+592)
#define PS_v221	((void*)startLabel+604)
#define PS_v226	((void*)startLabel+616)
#define PS_v225	((void*)startLabel+628)
#define PS_v214	((void*)startLabel+640)
#define PS_v230	((void*)startLabel+652)
#define PS_v228	((void*)startLabel+664)
void FR_NHC_46Binary_46hs_95copyBytes_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Internal_46_95mkIOok3[];
extern Node PC_NHC_46Internal_46_95apply3[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v216)
,	/* FN_NHC_46Binary_46hs_95copyBytes_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95copyBytes_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95copyBytes_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBytes_35),3)
, useLabel(PS_v214)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v220)
,	/* FN_NHC_46Binary_46hs_95copyBytes: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, 120001
, useLabel(ST_v218)
,	/* CT_v220: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95copyBytes: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBytes))
, useLabel(PS_v217)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95copyBytes_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v227)
,};
Node FN_NHC_46Binary_46copyBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v226)
, 0
, 0
, 0
, 0
, useLabel(PS_v225)
, 0
, 0
, 0
, 0
, useLabel(PS_v224)
, 0
, 0
, 0
, 0
, useLabel(PS_v223)
, 0
, 0
, 0
, 0
, 150001
, useLabel(ST_v222)
,	/* CT_v227: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46Binary_46copyBytes[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBytes),3)
, useLabel(PS_v221)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBytes))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA212),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v231)
,	/* FN_LAMBDA212: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v230)
, 0
, 0
, 0
, 0
, 160017
, useLabel(ST_v229)
,	/* CT_v231: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA212: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA212),1)
, useLabel(PS_v228)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_NHC_46Binary_46copyBytes[] = {
 };
Node PC_NHC_46Binary_46copyBytes[] = {
 	/* ST_v222: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(111,112,121,66)
, bytes2word(121,116,101,115)
,	/* PP_LAMBDA212: (byte 1) */
 	/* PC_LAMBDA212: (byte 1) */
 	/* ST_v229: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(99,111,112,121)
, bytes2word(66,121,116,101)
, bytes2word(115,58,49,54)
, bytes2word(58,49,55,45)
, bytes2word(49,54,58,52)
,	/* PP_NHC_46Binary_46hs_95copyBytes: (byte 2) */
 	/* PC_NHC_46Binary_46hs_95copyBytes: (byte 2) */
 	/* ST_v218: (byte 2) */
  bytes2word(50,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,111,112,121)
, bytes2word(66,121,116,101)
,	/* PP_NHC_46Binary_46hs_95copyBytes_35: (byte 2) */
 	/* PC_NHC_46Binary_46hs_95copyBytes_35: (byte 2) */
 	/* ST_v215: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,111,112,121)
, bytes2word(66,121,116,101)
, bytes2word(115,35,0,0)
,	/* PS_v219: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95copyBytes)
, useLabel(PC_NHC_46Internal_46_95mkIOok3)
,	/* PS_v217: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95copyBytes)
, useLabel(PC_NHC_46Binary_46hs_95copyBytes)
,	/* PS_v224: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBytes)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v223: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBytes)
, useLabel(PC_NHC_46Binary_46hs_95copyBytes)
,	/* PS_v221: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBytes)
, useLabel(PC_NHC_46Binary_46copyBytes)
,	/* PS_v226: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBytes)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v225: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46copyBytes)
, useLabel(PC_LAMBDA212)
,	/* PS_v214: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95copyBytes_35)
, useLabel(PC_NHC_46Binary_46hs_95copyBytes_35)
,	/* PS_v230: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA212)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v228: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA212)
, useLabel(PC_LAMBDA212)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_copyBytes" NHC.Binary.hs_copyBytes# 3 :: FFI.ForeignObj -> FFI.ForeignObj -> Prelude.Int -> Prelude.Int */
extern HsInt hs_copyBytes(void*,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95copyBytes_35 = {"NHC.Binary","NHC.Binary.hs_copyBytes#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95copyBytes_35) {
  NodePtr nodeptr;
  HsInt result;
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

  result = hs_copyBytes(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95copyBytes_35);
  C_RETURN(nodeptr);
}

#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hFlushC_35	((void*)startLabel+8)
#define CT_v225	((void*)startLabel+32)
#define F0_IO_46hFlushC_35	((void*)startLabel+40)
#define FN_IO_46hFlushC	((void*)startLabel+68)
#define CT_v229	((void*)startLabel+120)
#define CF_IO_46hFlushC	((void*)startLabel+128)
#define CT_v236	((void*)startLabel+300)
#define FN_LAMBDA221	((void*)startLabel+356)
#define v237	((void*)startLabel+388)
#define CT_v245	((void*)startLabel+524)
#define F0_LAMBDA221	((void*)startLabel+532)
#define FN_LAMBDA220	((void*)startLabel+580)
#define CT_v252	((void*)startLabel+756)
#define F0_LAMBDA220	((void*)startLabel+764)
#define FN_LAMBDA219	((void*)startLabel+800)
#define CT_v256	((void*)startLabel+844)
#define CF_LAMBDA219	((void*)startLabel+852)
#define ST_v231	((void*)startLabel+872)
#define PP_LAMBDA221	((void*)startLabel+882)
#define PC_LAMBDA221	((void*)startLabel+882)
#define ST_v240	((void*)startLabel+882)
#define PP_LAMBDA220	((void*)startLabel+904)
#define PC_LAMBDA220	((void*)startLabel+904)
#define ST_v247	((void*)startLabel+904)
#define PP_LAMBDA219	((void*)startLabel+926)
#define PC_LAMBDA219	((void*)startLabel+926)
#define ST_v254	((void*)startLabel+926)
#define PP_IO_46hFlushC	((void*)startLabel+948)
#define PC_IO_46hFlushC	((void*)startLabel+948)
#define ST_v227	((void*)startLabel+948)
#define PP_IO_46hFlushC_35	((void*)startLabel+959)
#define PC_IO_46hFlushC_35	((void*)startLabel+959)
#define ST_v224	((void*)startLabel+959)
#define ST_v255	((void*)startLabel+971)
#define PS_v228	((void*)startLabel+980)
#define PS_v226	((void*)startLabel+992)
#define PS_v233	((void*)startLabel+1004)
#define PS_v232	((void*)startLabel+1016)
#define PS_v230	((void*)startLabel+1028)
#define PS_v235	((void*)startLabel+1040)
#define PS_v234	((void*)startLabel+1052)
#define PS_v223	((void*)startLabel+1064)
#define PS_v253	((void*)startLabel+1076)
#define PS_v251	((void*)startLabel+1088)
#define PS_v249	((void*)startLabel+1100)
#define PS_v250	((void*)startLabel+1112)
#define PS_v248	((void*)startLabel+1124)
#define PS_v246	((void*)startLabel+1136)
#define PS_v243	((void*)startLabel+1148)
#define PS_v242	((void*)startLabel+1160)
#define PS_v244	((void*)startLabel+1172)
#define PS_v241	((void*)startLabel+1184)
#define PS_v239	((void*)startLabel+1196)
void FR_IO_46hFlushC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v225)
,	/* FN_IO_46hFlushC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hFlushC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v224)
,	/* CT_v225: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hFlushC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hFlushC_35),1)
, useLabel(PS_v223)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v229)
,	/* FN_IO_46hFlushC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v228)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v227)
,	/* CT_v229: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hFlushC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hFlushC))
, useLabel(PS_v226)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hFlushC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v236)
,};
Node FN_IO_46hFlush[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v235)
, 0
, 0
, 0
, 0
, useLabel(PS_v234)
, 0
, 0
, 0
, 0
, useLabel(PS_v233)
, 0
, 0
, 0
, 0
, useLabel(PS_v232)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v231)
,	/* CT_v236: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hFlush[] = {
  CAPTAG(useLabel(FN_IO_46hFlush),1)
, useLabel(PS_v230)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hFlushC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA221),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v245)
,	/* FN_LAMBDA221: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,NE_W,JUMPFALSE)
, bytes2word(24,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
,	/* v237: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v244)
, 0
, 0
, 0
, 0
, useLabel(PS_v243)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v242)
, 0
, 0
, 0
, 0
, useLabel(PS_v241)
, 0
, 0
, 0
, 0
, 100010
, useLabel(ST_v240)
,	/* CT_v245: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA221: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA221),2)
, useLabel(PS_v239)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA220),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,	/* FN_LAMBDA220: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,13,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, useLabel(PS_v250)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v249)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v248)
, 0
, 0
, 0
, 0
, 120018
, useLabel(ST_v247)
,	/* CT_v252: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA220: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA220),2)
, useLabel(PS_v246)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA219))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v256)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v255)
, 130022
, useLabel(ST_v254)
,	/* CT_v256: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA219: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA219))
, useLabel(PS_v253)
, 0
, 0
, 0
,};
Node PP_IO_46hFlush[] = {
 };
Node PC_IO_46hFlush[] = {
 	/* ST_v231: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(70,108,117,115)
,	/* PP_LAMBDA221: (byte 2) */
 	/* PC_LAMBDA221: (byte 2) */
 	/* ST_v240: (byte 2) */
  bytes2word(104,0,73,79)
, bytes2word(46,104,70,108)
, bytes2word(117,115,104,58)
, bytes2word(49,48,58,49)
, bytes2word(48,45,49,48)
,	/* PP_LAMBDA220: (byte 4) */
 	/* PC_LAMBDA220: (byte 4) */
 	/* ST_v247: (byte 4) */
  bytes2word(58,49,56,0)
, bytes2word(73,79,46,104)
, bytes2word(70,108,117,115)
, bytes2word(104,58,49,50)
, bytes2word(58,49,56,45)
, bytes2word(49,50,58,50)
,	/* PP_LAMBDA219: (byte 2) */
 	/* PC_LAMBDA219: (byte 2) */
 	/* ST_v254: (byte 2) */
  bytes2word(53,0,73,79)
, bytes2word(46,104,70,108)
, bytes2word(117,115,104,58)
, bytes2word(49,51,58,50)
, bytes2word(50,45,49,51)
,	/* PP_IO_46hFlushC: (byte 4) */
 	/* PC_IO_46hFlushC: (byte 4) */
 	/* ST_v227: (byte 4) */
  bytes2word(58,50,57,0)
, bytes2word(73,79,46,104)
, bytes2word(70,108,117,115)
,	/* PP_IO_46hFlushC_35: (byte 3) */
 	/* PC_IO_46hFlushC_35: (byte 3) */
 	/* ST_v224: (byte 3) */
  bytes2word(104,67,0,73)
, bytes2word(79,46,104,70)
, bytes2word(108,117,115,104)
,	/* ST_v255: (byte 3) */
  bytes2word(67,35,0,104)
, bytes2word(70,108,117,115)
, bytes2word(104,0,0,0)
,	/* PS_v228: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFlushC)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v226: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFlushC)
, useLabel(PC_IO_46hFlushC)
,	/* PS_v233: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFlush)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v232: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFlush)
, useLabel(PC_IO_46hFlushC)
,	/* PS_v230: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFlush)
, useLabel(PC_IO_46hFlush)
,	/* PS_v235: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFlush)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v234: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFlush)
, useLabel(PC_LAMBDA221)
,	/* PS_v223: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFlushC_35)
, useLabel(PC_IO_46hFlushC_35)
,	/* PS_v253: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA219)
, useLabel(PC_LAMBDA219)
,	/* PS_v251: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA220)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v249: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA220)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v250: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA220)
, useLabel(PC_Prelude_46Just)
,	/* PS_v248: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA220)
, useLabel(PC_LAMBDA219)
,	/* PS_v246: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA220)
, useLabel(PC_LAMBDA220)
,	/* PS_v243: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA221)
, useLabel(PC__40_41)
,	/* PS_v242: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA221)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v244: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA221)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v241: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA221)
, useLabel(PC_LAMBDA220)
,	/* PS_v239: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA221)
, useLabel(PC_LAMBDA221)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hFlushC" IO.hFlushC# 1 :: FFI.ForeignObj -> Prelude.Int */
extern HsInt hFlushC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hFlushC_35 = {"IO","IO.hFlushC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hFlushC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hFlushC(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hFlushC_35);
  C_RETURN(nodeptr);
}

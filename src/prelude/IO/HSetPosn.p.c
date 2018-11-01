#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hSetPosnC_35	((void*)startLabel+12)
#define CT_v233	((void*)startLabel+40)
#define F0_IO_46hSetPosnC_35	((void*)startLabel+48)
#define FN_IO_46hSetPosnC	((void*)startLabel+76)
#define CT_v237	((void*)startLabel+128)
#define CF_IO_46hSetPosnC	((void*)startLabel+136)
#define CT_v247	((void*)startLabel+312)
#define FN_LAMBDA229	((void*)startLabel+368)
#define v248	((void*)startLabel+400)
#define CT_v256	((void*)startLabel+536)
#define F0_LAMBDA229	((void*)startLabel+544)
#define FN_LAMBDA228	((void*)startLabel+592)
#define CT_v263	((void*)startLabel+768)
#define F0_LAMBDA228	((void*)startLabel+776)
#define FN_LAMBDA227	((void*)startLabel+812)
#define CT_v267	((void*)startLabel+856)
#define CF_LAMBDA227	((void*)startLabel+864)
#define ST_v241	((void*)startLabel+884)
#define PP_LAMBDA229	((void*)startLabel+896)
#define PC_LAMBDA229	((void*)startLabel+896)
#define ST_v251	((void*)startLabel+896)
#define PP_LAMBDA228	((void*)startLabel+920)
#define PC_LAMBDA228	((void*)startLabel+920)
#define ST_v258	((void*)startLabel+920)
#define PP_LAMBDA227	((void*)startLabel+944)
#define PC_LAMBDA227	((void*)startLabel+944)
#define ST_v265	((void*)startLabel+944)
#define PP_IO_46hSetPosnC	((void*)startLabel+968)
#define PC_IO_46hSetPosnC	((void*)startLabel+968)
#define ST_v235	((void*)startLabel+968)
#define PP_IO_46hSetPosnC_35	((void*)startLabel+981)
#define PC_IO_46hSetPosnC_35	((void*)startLabel+981)
#define ST_v232	((void*)startLabel+981)
#define ST_v266	((void*)startLabel+995)
#define PS_v236	((void*)startLabel+1004)
#define PS_v234	((void*)startLabel+1016)
#define PS_v244	((void*)startLabel+1028)
#define PS_v243	((void*)startLabel+1040)
#define PS_v240	((void*)startLabel+1052)
#define PS_v246	((void*)startLabel+1064)
#define PS_v245	((void*)startLabel+1076)
#define PS_v231	((void*)startLabel+1088)
#define PS_v264	((void*)startLabel+1100)
#define PS_v262	((void*)startLabel+1112)
#define PS_v260	((void*)startLabel+1124)
#define PS_v261	((void*)startLabel+1136)
#define PS_v259	((void*)startLabel+1148)
#define PS_v257	((void*)startLabel+1160)
#define PS_v254	((void*)startLabel+1172)
#define PS_v253	((void*)startLabel+1184)
#define PS_v255	((void*)startLabel+1196)
#define PS_v252	((void*)startLabel+1208)
#define PS_v250	((void*)startLabel+1220)
void FR_IO_46hSetPosnC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v233)
,	/* FN_IO_46hSetPosnC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46hSetPosnC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v232)
,	/* CT_v233: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46hSetPosnC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hSetPosnC_35),2)
, useLabel(PS_v231)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v237)
,	/* FN_IO_46hSetPosnC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v236)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v235)
,	/* CT_v237: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hSetPosnC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hSetPosnC))
, useLabel(PS_v234)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_IO_46hSetPosnC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v247)
,};
Node FN_IO_46hSetPosn[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_P1,0)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v246)
, 0
, 0
, 0
, 0
, useLabel(PS_v245)
, 0
, 0
, 0
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
, 110001
, useLabel(ST_v241)
,	/* CT_v247: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hSetPosn[] = {
  CAPTAG(useLabel(FN_IO_46hSetPosn),1)
, useLabel(PS_v240)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hSetPosnC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA229),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v256)
,	/* FN_LAMBDA229: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,NE_W,JUMPFALSE)
, bytes2word(24,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
,	/* v248: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v255)
, 0
, 0
, 0
, 0
, useLabel(PS_v254)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v253)
, 0
, 0
, 0
, 0
, useLabel(PS_v252)
, 0
, 0
, 0
, 0
, 120010
, useLabel(ST_v251)
,	/* CT_v256: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA229: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA229),2)
, useLabel(PS_v250)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA228),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v263)
,	/* FN_LAMBDA228: (byte 0) */
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
, useLabel(PS_v262)
, 0
, 0
, 0
, 0
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v259)
, 0
, 0
, 0
, 0
, 140018
, useLabel(ST_v258)
,	/* CT_v263: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA228: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA228),2)
, useLabel(PS_v257)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA227))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v267)
,	/* FN_LAMBDA227: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v266)
, 150022
, useLabel(ST_v265)
,	/* CT_v267: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA227: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA227))
, useLabel(PS_v264)
, 0
, 0
, 0
,};
Node PP_IO_46hSetPosn[] = {
 };
Node PC_IO_46hSetPosn[] = {
 	/* ST_v241: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(83,101,116,80)
,	/* PP_LAMBDA229: (byte 4) */
 	/* PC_LAMBDA229: (byte 4) */
 	/* ST_v251: (byte 4) */
  bytes2word(111,115,110,0)
, bytes2word(73,79,46,104)
, bytes2word(83,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,50,58,49)
, bytes2word(48,45,49,50)
,	/* PP_LAMBDA228: (byte 4) */
 	/* PC_LAMBDA228: (byte 4) */
 	/* ST_v258: (byte 4) */
  bytes2word(58,50,50,0)
, bytes2word(73,79,46,104)
, bytes2word(83,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,52,58,49)
, bytes2word(56,45,49,52)
,	/* PP_LAMBDA227: (byte 4) */
 	/* PC_LAMBDA227: (byte 4) */
 	/* ST_v265: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(73,79,46,104)
, bytes2word(83,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,53,58,50)
, bytes2word(50,45,49,53)
,	/* PP_IO_46hSetPosnC: (byte 4) */
 	/* PC_IO_46hSetPosnC: (byte 4) */
 	/* ST_v235: (byte 4) */
  bytes2word(58,51,49,0)
, bytes2word(73,79,46,104)
, bytes2word(83,101,116,80)
, bytes2word(111,115,110,67)
,	/* PP_IO_46hSetPosnC_35: (byte 1) */
 	/* PC_IO_46hSetPosnC_35: (byte 1) */
 	/* ST_v232: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,83,101,116)
, bytes2word(80,111,115,110)
,	/* ST_v266: (byte 3) */
  bytes2word(67,35,0,104)
, bytes2word(83,101,116,80)
, bytes2word(111,115,110,0)
,	/* PS_v236: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetPosnC)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v234: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetPosnC)
, useLabel(PC_IO_46hSetPosnC)
,	/* PS_v244: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetPosn)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v243: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetPosn)
, useLabel(PC_IO_46hSetPosnC)
,	/* PS_v240: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetPosn)
, useLabel(PC_IO_46hSetPosn)
,	/* PS_v246: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetPosn)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v245: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetPosn)
, useLabel(PC_LAMBDA229)
,	/* PS_v231: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetPosnC_35)
, useLabel(PC_IO_46hSetPosnC_35)
,	/* PS_v264: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA227)
, useLabel(PC_LAMBDA227)
,	/* PS_v262: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA228)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v260: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA228)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v261: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA228)
, useLabel(PC_Prelude_46Just)
,	/* PS_v259: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA228)
, useLabel(PC_LAMBDA227)
,	/* PS_v257: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA228)
, useLabel(PC_LAMBDA228)
,	/* PS_v254: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA229)
, useLabel(PC__40_41)
,	/* PS_v253: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA229)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v255: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA229)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v252: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA229)
, useLabel(PC_LAMBDA228)
,	/* PS_v250: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA229)
, useLabel(PC_LAMBDA229)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hSetPosnC" IO.hSetPosnC# 2 :: FFI.ForeignObj -> FFI.ForeignPtr -> Prelude.Int */
extern HsInt hSetPosnC(void*,void*);
#ifdef PROFILE
static SInfo pf_IO_46hSetPosnC_35 = {"IO","IO.hSetPosnC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hSetPosnC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hSetPosnC(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hSetPosnC_35);
  C_RETURN(nodeptr);
}

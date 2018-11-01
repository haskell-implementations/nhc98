#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hGetPosnC_35	((void*)startLabel+8)
#define CT_v251	((void*)startLabel+32)
#define F0_IO_46hGetPosnC_35	((void*)startLabel+40)
#define FN_IO_46hGetPosnC	((void*)startLabel+68)
#define CT_v255	((void*)startLabel+120)
#define CF_IO_46hGetPosnC	((void*)startLabel+128)
#define CT_v262	((void*)startLabel+300)
#define FN_LAMBDA247	((void*)startLabel+356)
#define v263	((void*)startLabel+396)
#define CT_v273	((void*)startLabel+572)
#define F0_LAMBDA247	((void*)startLabel+580)
#define FN_LAMBDA246	((void*)startLabel+648)
#define CT_v278	((void*)startLabel+748)
#define F0_LAMBDA246	((void*)startLabel+756)
#define FN_LAMBDA245	((void*)startLabel+792)
#define CT_v285	((void*)startLabel+968)
#define F0_LAMBDA245	((void*)startLabel+976)
#define FN_LAMBDA244	((void*)startLabel+1012)
#define CT_v289	((void*)startLabel+1056)
#define CF_LAMBDA244	((void*)startLabel+1064)
#define ST_v257	((void*)startLabel+1084)
#define PP_LAMBDA247	((void*)startLabel+1096)
#define PC_LAMBDA247	((void*)startLabel+1096)
#define ST_v266	((void*)startLabel+1096)
#define PP_LAMBDA245	((void*)startLabel+1120)
#define PC_LAMBDA245	((void*)startLabel+1120)
#define ST_v280	((void*)startLabel+1120)
#define PP_LAMBDA244	((void*)startLabel+1144)
#define PC_LAMBDA244	((void*)startLabel+1144)
#define ST_v287	((void*)startLabel+1144)
#define PP_LAMBDA246	((void*)startLabel+1168)
#define PC_LAMBDA246	((void*)startLabel+1168)
#define ST_v275	((void*)startLabel+1168)
#define PP_IO_46hGetPosnC	((void*)startLabel+1192)
#define PC_IO_46hGetPosnC	((void*)startLabel+1192)
#define ST_v253	((void*)startLabel+1192)
#define PP_IO_46hGetPosnC_35	((void*)startLabel+1205)
#define PC_IO_46hGetPosnC_35	((void*)startLabel+1205)
#define ST_v250	((void*)startLabel+1205)
#define ST_v288	((void*)startLabel+1219)
#define PS_v254	((void*)startLabel+1228)
#define PS_v252	((void*)startLabel+1240)
#define PS_v259	((void*)startLabel+1252)
#define PS_v258	((void*)startLabel+1264)
#define PS_v256	((void*)startLabel+1276)
#define PS_v261	((void*)startLabel+1288)
#define PS_v260	((void*)startLabel+1300)
#define PS_v249	((void*)startLabel+1312)
#define PS_v286	((void*)startLabel+1324)
#define PS_v284	((void*)startLabel+1336)
#define PS_v282	((void*)startLabel+1348)
#define PS_v283	((void*)startLabel+1360)
#define PS_v281	((void*)startLabel+1372)
#define PS_v279	((void*)startLabel+1384)
#define PS_v276	((void*)startLabel+1396)
#define PS_v277	((void*)startLabel+1408)
#define PS_v274	((void*)startLabel+1420)
#define PS_v270	((void*)startLabel+1432)
#define PS_v271	((void*)startLabel+1444)
#define PS_v269	((void*)startLabel+1456)
#define PS_v267	((void*)startLabel+1468)
#define PS_v268	((void*)startLabel+1480)
#define PS_v272	((void*)startLabel+1492)
#define PS_v265	((void*)startLabel+1504)
void FR_IO_46hGetPosnC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_NHC_46FFI_46newForeignPtr[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node CF_NHC_46FFI_46finalizerFree[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_IO_46HandlePosn[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PC_NHC_46FFI_46newForeignPtr[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v251)
,	/* FN_IO_46hGetPosnC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hGetPosnC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v250)
,	/* CT_v251: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hGetPosnC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hGetPosnC_35),1)
, useLabel(PS_v249)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v255)
,	/* FN_IO_46hGetPosnC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v254)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v253)
,	/* CT_v255: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hGetPosnC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hGetPosnC))
, useLabel(PS_v252)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hGetPosnC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v262)
,};
Node FN_IO_46hGetPosn[] = {
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
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, useLabel(PS_v259)
, 0
, 0
, 0
, 0
, useLabel(PS_v258)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v257)
,	/* CT_v262: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hGetPosn[] = {
  CAPTAG(useLabel(FN_IO_46hGetPosn),1)
, useLabel(PS_v256)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hGetPosnC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(24,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
,	/* v263: (byte 4) */
  bytes2word(11,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_CVAL_P1,14,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v272)
, 0
, 0
, 0
, 0
, useLabel(PS_v271)
, 0
, 0
, 0
, 0
, useLabel(PS_v270)
, 0
, 0
, 0
, 0
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, useLabel(PS_v268)
, 0
, 0
, 0
, 0
, useLabel(PS_v267)
, 0
, 0
, 0
, 0
, 110010
, useLabel(ST_v266)
,	/* CT_v273: (byte 0) */
  HW(9,2)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),2)
, useLabel(PS_v265)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_LAMBDA245),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(CF_NHC_46FFI_46finalizerFree)
, CAPTAG(useLabel(FN_LAMBDA246),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v278)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v277)
, 0
, 0
, 0
, 0
, useLabel(PS_v276)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 160014
, useLabel(ST_v275)
,	/* CT_v278: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),2)
, useLabel(PS_v274)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v285)
,	/* FN_LAMBDA245: (byte 0) */
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
, useLabel(PS_v284)
, 0
, 0
, 0
, 0
, useLabel(PS_v283)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v282)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v281)
, 0
, 0
, 0
, 0
, 130018
, useLabel(ST_v280)
,	/* CT_v285: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA245: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA245),2)
, useLabel(PS_v279)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA244))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v289)
,	/* FN_LAMBDA244: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v288)
, 140022
, useLabel(ST_v287)
,	/* CT_v289: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA244: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA244))
, useLabel(PS_v286)
, 0
, 0
, 0
,};
Node PP_IO_46hGetPosn[] = {
 };
Node PC_IO_46hGetPosn[] = {
 	/* ST_v257: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
,	/* PP_LAMBDA247: (byte 4) */
 	/* PC_LAMBDA247: (byte 4) */
 	/* ST_v266: (byte 4) */
  bytes2word(111,115,110,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,49,58,49)
, bytes2word(48,45,49,49)
,	/* PP_LAMBDA245: (byte 4) */
 	/* PC_LAMBDA245: (byte 4) */
 	/* ST_v280: (byte 4) */
  bytes2word(58,50,48,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,51,58,49)
, bytes2word(56,45,49,51)
,	/* PP_LAMBDA244: (byte 4) */
 	/* PC_LAMBDA244: (byte 4) */
 	/* ST_v287: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,52,58,50)
, bytes2word(50,45,49,52)
,	/* PP_LAMBDA246: (byte 4) */
 	/* PC_LAMBDA246: (byte 4) */
 	/* ST_v275: (byte 4) */
  bytes2word(58,51,49,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,58)
, bytes2word(49,54,58,49)
, bytes2word(52,45,49,54)
,	/* PP_IO_46hGetPosnC: (byte 4) */
 	/* PC_IO_46hGetPosnC: (byte 4) */
 	/* ST_v253: (byte 4) */
  bytes2word(58,52,50,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,67)
,	/* PP_IO_46hGetPosnC_35: (byte 1) */
 	/* PC_IO_46hGetPosnC_35: (byte 1) */
 	/* ST_v250: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,71,101,116)
, bytes2word(80,111,115,110)
,	/* ST_v288: (byte 3) */
  bytes2word(67,35,0,104)
, bytes2word(71,101,116,80)
, bytes2word(111,115,110,0)
,	/* PS_v254: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetPosnC)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v252: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetPosnC)
, useLabel(PC_IO_46hGetPosnC)
,	/* PS_v259: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetPosn)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v258: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetPosn)
, useLabel(PC_IO_46hGetPosnC)
,	/* PS_v256: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetPosn)
, useLabel(PC_IO_46hGetPosn)
,	/* PS_v261: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetPosn)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v260: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetPosn)
, useLabel(PC_LAMBDA247)
,	/* PS_v249: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetPosnC_35)
, useLabel(PC_IO_46hGetPosnC_35)
,	/* PS_v286: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA244)
, useLabel(PC_LAMBDA244)
,	/* PS_v284: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA245)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v282: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA245)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v283: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA245)
, useLabel(PC_Prelude_46Just)
,	/* PS_v281: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA245)
, useLabel(PC_LAMBDA244)
,	/* PS_v279: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA245)
, useLabel(PC_LAMBDA245)
,	/* PS_v276: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_IO_46HandlePosn)
,	/* PS_v277: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v274: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_LAMBDA246)
,	/* PS_v270: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_NHC_46FFI_46newForeignPtr)
,	/* PS_v271: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v269: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v267: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61)
,	/* PS_v268: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA245)
,	/* PS_v272: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA246)
,	/* PS_v265: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA247)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hGetPosnC" IO.hGetPosnC# 1 :: FFI.ForeignObj -> FFI.Ptr */
extern void* hGetPosnC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hGetPosnC_35 = {"IO","IO.hGetPosnC#","FFI.Ptr"};
#endif
C_HEADER(FR_IO_46hGetPosnC_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hGetPosnC(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hGetPosnC_35);
  C_RETURN(nodeptr);
}

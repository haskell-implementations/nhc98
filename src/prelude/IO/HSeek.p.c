#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hSeekC_35	((void*)startLabel+12)
#define CT_v251	((void*)startLabel+44)
#define F0_IO_46hSeekC_35	((void*)startLabel+52)
#define FN_IO_46hSeekC	((void*)startLabel+80)
#define CT_v255	((void*)startLabel+132)
#define CF_IO_46hSeekC	((void*)startLabel+140)
#define CT_v263	((void*)startLabel+356)
#define FN_LAMBDA247	((void*)startLabel+420)
#define v264	((void*)startLabel+456)
#define CT_v272	((void*)startLabel+592)
#define F0_LAMBDA247	((void*)startLabel+600)
#define FN_LAMBDA246	((void*)startLabel+652)
#define CT_v283	((void*)startLabel+968)
#define F0_LAMBDA246	((void*)startLabel+976)
#define FN_LAMBDA245	((void*)startLabel+1028)
#define CT_v287	((void*)startLabel+1072)
#define CF_LAMBDA245	((void*)startLabel+1080)
#define FN_LAMBDA244	((void*)startLabel+1108)
#define CT_v291	((void*)startLabel+1152)
#define CF_LAMBDA244	((void*)startLabel+1160)
#define ST_v286	((void*)startLabel+1180)
#define ST_v257	((void*)startLabel+1184)
#define PP_LAMBDA247	((void*)startLabel+1193)
#define PC_LAMBDA247	((void*)startLabel+1193)
#define ST_v267	((void*)startLabel+1193)
#define PP_LAMBDA246	((void*)startLabel+1214)
#define PC_LAMBDA246	((void*)startLabel+1214)
#define ST_v274	((void*)startLabel+1214)
#define PP_LAMBDA244	((void*)startLabel+1235)
#define PC_LAMBDA244	((void*)startLabel+1235)
#define ST_v289	((void*)startLabel+1235)
#define PP_LAMBDA245	((void*)startLabel+1256)
#define PC_LAMBDA245	((void*)startLabel+1256)
#define ST_v285	((void*)startLabel+1256)
#define PP_IO_46hSeekC	((void*)startLabel+1277)
#define PC_IO_46hSeekC	((void*)startLabel+1277)
#define ST_v253	((void*)startLabel+1277)
#define PP_IO_46hSeekC_35	((void*)startLabel+1287)
#define PC_IO_46hSeekC_35	((void*)startLabel+1287)
#define ST_v250	((void*)startLabel+1287)
#define ST_v290	((void*)startLabel+1298)
#define PS_v254	((void*)startLabel+1308)
#define PS_v252	((void*)startLabel+1320)
#define PS_v260	((void*)startLabel+1332)
#define PS_v258	((void*)startLabel+1344)
#define PS_v256	((void*)startLabel+1356)
#define PS_v262	((void*)startLabel+1368)
#define PS_v259	((void*)startLabel+1380)
#define PS_v261	((void*)startLabel+1392)
#define PS_v249	((void*)startLabel+1404)
#define PS_v288	((void*)startLabel+1416)
#define PS_v284	((void*)startLabel+1428)
#define PS_v282	((void*)startLabel+1440)
#define PS_v279	((void*)startLabel+1452)
#define PS_v280	((void*)startLabel+1464)
#define PS_v281	((void*)startLabel+1476)
#define PS_v276	((void*)startLabel+1488)
#define PS_v278	((void*)startLabel+1500)
#define PS_v275	((void*)startLabel+1512)
#define PS_v277	((void*)startLabel+1524)
#define PS_v273	((void*)startLabel+1536)
#define PS_v270	((void*)startLabel+1548)
#define PS_v269	((void*)startLabel+1560)
#define PS_v271	((void*)startLabel+1572)
#define PS_v268	((void*)startLabel+1584)
#define PS_v266	((void*)startLabel+1596)
void FR_IO_46hSeekC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_Prelude_46Enum_46IO_46SeekMode_46fromEnum[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Show_46IO_46SeekMode_46show[];
extern Node FN_Prelude_46Show_46Prelude_46Integer_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok3[];
extern Node PC_NHC_46Internal_46_95apply3[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46Enum_46IO_46SeekMode_46fromEnum[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Prelude_46Show_46IO_46SeekMode_46show[];
extern Node PC_Prelude_46Show_46Prelude_46Integer_46show[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v251)
,	/* FN_IO_46hSeekC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_IO_46hSeekC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v250)
,	/* CT_v251: (byte 0) */
  HW(0,3)
, 0
,	/* F0_IO_46hSeekC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hSeekC_35),3)
, useLabel(PS_v249)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v255)
,	/* FN_IO_46hSeekC: (byte 0) */
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
, 80001
, useLabel(ST_v253)
,	/* CT_v255: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hSeekC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hSeekC))
, useLabel(PS_v252)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_IO_46hSeekC_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v263)
,};
Node FN_IO_46hSeek[] = {
  bytes2word(NEEDHEAP_P1,36,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,13,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,22,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
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
, 110001
, useLabel(ST_v257)
,	/* CT_v263: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_IO_46hSeek[] = {
  CAPTAG(useLabel(FN_IO_46hSeek),3)
, useLabel(PS_v256)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hSeekC))
, VAPTAG(useLabel(FN_Prelude_46Enum_46IO_46SeekMode_46fromEnum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v272)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG)
, bytes2word(4,EVAL,NEEDHEAP_I32,NE_W)
, bytes2word(JUMPFALSE,27,0,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
,	/* v264: (byte 4) */
  bytes2word(9,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, CONSTR(0,0,0)
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
, 120010
, useLabel(ST_v267)
,	/* CT_v272: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),4)
, useLabel(PS_v266)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA246),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v283)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDHEAP_P1,64,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,29,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(41,HEAP_OFF_N1,13,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(23,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(13,HEAP_ARG,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v282)
, 0
, 0
, 0
, 0
, useLabel(PS_v281)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v279)
, 0
, 0
, 0
, 0
, useLabel(PS_v278)
, 0
, 0
, 0
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
, useLabel(PS_v275)
, 0
, 0
, 0
, 0
, 140018
, useLabel(ST_v274)
,	/* CT_v283: (byte 0) */
  HW(6,4)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),4)
, useLabel(PS_v273)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA244))
, VAPTAG(useLabel(FN_Prelude_46Show_46IO_46SeekMode_46show))
, VAPTAG(useLabel(FN_LAMBDA245))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v287)
,	/* FN_LAMBDA245: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v286)
, 150041
, useLabel(ST_v285)
,	/* CT_v287: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA245: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA245))
, useLabel(PS_v284)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v291)
,	/* FN_LAMBDA244: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v290)
, 150023
, useLabel(ST_v289)
,	/* CT_v291: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA244: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA244))
, useLabel(PS_v288)
, 0
, 0
, 0
,	/* ST_v286: (byte 0) */
  bytes2word(32,0,0,0)
,};
Node PP_IO_46hSeek[] = {
 };
Node PC_IO_46hSeek[] = {
 	/* ST_v257: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(83,101,101,107)
,	/* PP_LAMBDA247: (byte 1) */
 	/* PC_LAMBDA247: (byte 1) */
 	/* ST_v267: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,83,101,101)
, bytes2word(107,58,49,50)
, bytes2word(58,49,48,45)
, bytes2word(49,50,58,51)
,	/* PP_LAMBDA246: (byte 2) */
 	/* PC_LAMBDA246: (byte 2) */
 	/* ST_v274: (byte 2) */
  bytes2word(50,0,73,79)
, bytes2word(46,104,83,101)
, bytes2word(101,107,58,49)
, bytes2word(52,58,49,56)
, bytes2word(45,49,52,58)
,	/* PP_LAMBDA244: (byte 3) */
 	/* PC_LAMBDA244: (byte 3) */
 	/* ST_v289: (byte 3) */
  bytes2word(50,53,0,73)
, bytes2word(79,46,104,83)
, bytes2word(101,101,107,58)
, bytes2word(49,53,58,50)
, bytes2word(51,45,49,53)
,	/* PP_LAMBDA245: (byte 4) */
 	/* PC_LAMBDA245: (byte 4) */
 	/* ST_v285: (byte 4) */
  bytes2word(58,51,48,0)
, bytes2word(73,79,46,104)
, bytes2word(83,101,101,107)
, bytes2word(58,49,53,58)
, bytes2word(52,49,45,49)
, bytes2word(53,58,52,51)
,	/* PP_IO_46hSeekC: (byte 1) */
 	/* PC_IO_46hSeekC: (byte 1) */
 	/* ST_v253: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,83,101,101)
,	/* PP_IO_46hSeekC_35: (byte 3) */
 	/* PC_IO_46hSeekC_35: (byte 3) */
 	/* ST_v250: (byte 3) */
  bytes2word(107,67,0,73)
, bytes2word(79,46,104,83)
, bytes2word(101,101,107,67)
,	/* ST_v290: (byte 2) */
  bytes2word(35,0,104,83)
, bytes2word(101,101,107,32)
, bytes2word(0,0,0,0)
,	/* PS_v254: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeekC)
, useLabel(PC_NHC_46Internal_46_95mkIOok3)
,	/* PS_v252: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeekC)
, useLabel(PC_IO_46hSeekC)
,	/* PS_v260: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeek)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v258: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeek)
, useLabel(PC_IO_46hSeekC)
,	/* PS_v256: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeek)
, useLabel(PC_IO_46hSeek)
,	/* PS_v262: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeek)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v259: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeek)
, useLabel(PC_Prelude_46Enum_46IO_46SeekMode_46fromEnum)
,	/* PS_v261: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeek)
, useLabel(PC_LAMBDA247)
,	/* PS_v249: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSeekC_35)
, useLabel(PC_IO_46hSeekC_35)
,	/* PS_v288: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA244)
, useLabel(PC_LAMBDA244)
,	/* PS_v284: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA245)
, useLabel(PC_LAMBDA245)
,	/* PS_v282: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v279: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v280: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v281: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_Prelude_46Just)
,	/* PS_v276: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_Prelude_46Show_46IO_46SeekMode_46show)
,	/* PS_v278: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_Prelude_46Show_46Prelude_46Integer_46show)
,	/* PS_v275: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_LAMBDA244)
,	/* PS_v277: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_LAMBDA245)
,	/* PS_v273: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA246)
, useLabel(PC_LAMBDA246)
,	/* PS_v270: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC__40_41)
,	/* PS_v269: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v271: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v268: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA246)
,	/* PS_v266: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA247)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hSeekC" IO.hSeekC# 3 :: FFI.ForeignObj -> Prelude.Int -> Prelude.Integer -> Prelude.Int */
extern HsInt hSeekC(void*,HsInt,Node*);
#ifdef PROFILE
static SInfo pf_IO_46hSeekC_35 = {"IO","IO.hSeekC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hSeekC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  Node* arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (Node*)nodeptr;

  result = hSeekC(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hSeekC_35);
  C_RETURN(nodeptr);
}

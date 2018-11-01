#include "newmacros.h"
#include "runtime.h"

#define FN_System_46primSystem_35	((void*)startLabel+8)
#define CT_v246	((void*)startLabel+32)
#define F0_System_46primSystem_35	((void*)startLabel+40)
#define CT_v250	((void*)startLabel+120)
#define CT_v258	((void*)startLabel+332)
#define FN_LAMBDA242	((void*)startLabel+392)
#define v259	((void*)startLabel+454)
#define v261	((void*)startLabel+482)
#define CT_v272	((void*)startLabel+700)
#define F0_LAMBDA242	((void*)startLabel+708)
#define FN_LAMBDA241	((void*)startLabel+764)
#define CT_v280	((void*)startLabel+968)
#define F0_LAMBDA241	((void*)startLabel+976)
#define FN_LAMBDA240	((void*)startLabel+1020)
#define CT_v284	((void*)startLabel+1064)
#define CF_LAMBDA240	((void*)startLabel+1072)
#define FN_LAMBDA239	((void*)startLabel+1100)
#define CT_v288	((void*)startLabel+1144)
#define CF_LAMBDA239	((void*)startLabel+1152)
#define ST_v283	((void*)startLabel+1172)
#define ST_v248	((void*)startLabel+1176)
#define PP_System_46primSystem_35	((void*)startLabel+1194)
#define PC_System_46primSystem_35	((void*)startLabel+1194)
#define ST_v245	((void*)startLabel+1194)
#define ST_v252	((void*)startLabel+1216)
#define PP_LAMBDA242	((void*)startLabel+1230)
#define PC_LAMBDA242	((void*)startLabel+1230)
#define ST_v264	((void*)startLabel+1230)
#define PP_LAMBDA241	((void*)startLabel+1256)
#define PC_LAMBDA241	((void*)startLabel+1256)
#define ST_v274	((void*)startLabel+1256)
#define PP_LAMBDA239	((void*)startLabel+1282)
#define PC_LAMBDA239	((void*)startLabel+1282)
#define ST_v286	((void*)startLabel+1282)
#define PP_LAMBDA240	((void*)startLabel+1308)
#define PC_LAMBDA240	((void*)startLabel+1308)
#define ST_v282	((void*)startLabel+1308)
#define ST_v287	((void*)startLabel+1334)
#define PS_v249	((void*)startLabel+1344)
#define PS_v247	((void*)startLabel+1356)
#define PS_v254	((void*)startLabel+1368)
#define PS_v255	((void*)startLabel+1380)
#define PS_v253	((void*)startLabel+1392)
#define PS_v251	((void*)startLabel+1404)
#define PS_v257	((void*)startLabel+1416)
#define PS_v256	((void*)startLabel+1428)
#define PS_v244	((void*)startLabel+1440)
#define PS_v285	((void*)startLabel+1452)
#define PS_v281	((void*)startLabel+1464)
#define PS_v279	((void*)startLabel+1476)
#define PS_v277	((void*)startLabel+1488)
#define PS_v278	((void*)startLabel+1500)
#define PS_v275	((void*)startLabel+1512)
#define PS_v276	((void*)startLabel+1524)
#define PS_v273	((void*)startLabel+1536)
#define PS_v269	((void*)startLabel+1548)
#define PS_v271	((void*)startLabel+1560)
#define PS_v266	((void*)startLabel+1572)
#define PS_v268	((void*)startLabel+1584)
#define PS_v265	((void*)startLabel+1596)
#define PS_v270	((void*)startLabel+1608)
#define PS_v267	((void*)startLabel+1620)
#define PS_v263	((void*)startLabel+1632)
void FR_System_46primSystem_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node FN_Prelude_46_124_124[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_System[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_CString_46toCString[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_System_46ExitSuccess[];
extern Node PC_System_46ExitFailure[];
extern Node PC_Prelude_46_124_124[];
extern Node PC_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v246)
,	/* FN_System_46primSystem_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46primSystem_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v245)
,	/* CT_v246: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46primSystem_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46primSystem_35),1)
, useLabel(PS_v244)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v250)
,};
Node FN_System_46primSystem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v249)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v248)
,	/* CT_v250: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46primSystem[] = {
  VAPTAG(useLabel(FN_System_46primSystem))
, useLabel(PS_v247)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46primSystem_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v258)
,};
Node FN_System_46system[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v257)
, 0
, 0
, 0
, 0
, useLabel(PS_v256)
, 0
, 0
, 0
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
, useLabel(PS_v253)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v252)
,	/* CT_v258: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_System_46system[] = {
  CAPTAG(useLabel(FN_System_46system),1)
, useLabel(PS_v251)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_System_46primSystem))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA242),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v272)
,	/* FN_LAMBDA242: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_INT_N1,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_INT_P1,127,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(19,HEAP_OFF_N1,13,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,24,0)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,11,HEAP_OFF_N1)
,	/* v259: (byte 2) */
  bytes2word(12,RETURN_EVAL,PUSH_INT_P1,0)
, bytes2word(PUSH_ARG_I2,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(EQ_W,JUMPFALSE,20,0)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
,	/* v261: (byte 2) */
  bytes2word(10,RETURN_EVAL,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v271)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
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
, CONSTR(0,0,0)
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
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, 100012
, useLabel(ST_v264)
,	/* CT_v272: (byte 0) */
  HW(6,2)
, 0
,	/* F0_LAMBDA242: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA242),2)
, useLabel(PS_v263)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, CAPTAG(useLabel(FN_LAMBDA241),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v280)
,	/* FN_LAMBDA241: (byte 0) */
  bytes2word(NEEDHEAP_P1,44,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,16)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, CONSTR(0,0,0)
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
, 120018
, useLabel(ST_v274)
,	/* CT_v280: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA241: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA241),2)
, useLabel(PS_v273)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA239))
, VAPTAG(useLabel(FN_LAMBDA240))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v284)
,	/* FN_LAMBDA240: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v283)
, 130041
, useLabel(ST_v282)
,	/* CT_v284: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA240: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA240))
, useLabel(PS_v281)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v288)
,	/* FN_LAMBDA239: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v287)
, 130023
, useLabel(ST_v286)
,	/* CT_v288: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA239: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA239))
, useLabel(PS_v285)
, 0
, 0
, 0
,	/* ST_v283: (byte 0) */
  bytes2word(34,0,0,0)
,};
Node PP_System_46primSystem[] = {
 };
Node PC_System_46primSystem[] = {
 	/* ST_v248: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,83)
, bytes2word(121,115,116,101)
,	/* PP_System_46primSystem_35: (byte 2) */
 	/* PC_System_46primSystem_35: (byte 2) */
 	/* ST_v245: (byte 2) */
  bytes2word(109,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,112,114,105)
, bytes2word(109,83,121,115)
, bytes2word(116,101,109,35)
, bytes2word(0,0,0,0)
,};
Node PP_System_46system[] = {
 };
Node PC_System_46system[] = {
 	/* ST_v252: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,115)
, bytes2word(121,115,116,101)
,	/* PP_LAMBDA242: (byte 2) */
 	/* PC_LAMBDA242: (byte 2) */
 	/* ST_v264: (byte 2) */
  bytes2word(109,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,115,121,115)
, bytes2word(116,101,109,58)
, bytes2word(49,48,58,49)
, bytes2word(50,45,49,48)
,	/* PP_LAMBDA241: (byte 4) */
 	/* PC_LAMBDA241: (byte 4) */
 	/* ST_v274: (byte 4) */
  bytes2word(58,51,55,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,115)
, bytes2word(121,115,116,101)
, bytes2word(109,58,49,50)
, bytes2word(58,49,56,45)
, bytes2word(49,50,58,50)
,	/* PP_LAMBDA239: (byte 2) */
 	/* PC_LAMBDA239: (byte 2) */
 	/* ST_v286: (byte 2) */
  bytes2word(53,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,115,121,115)
, bytes2word(116,101,109,58)
, bytes2word(49,51,58,50)
, bytes2word(51,45,49,51)
,	/* PP_LAMBDA240: (byte 4) */
 	/* PC_LAMBDA240: (byte 4) */
 	/* ST_v282: (byte 4) */
  bytes2word(58,51,51,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,115)
, bytes2word(121,115,116,101)
, bytes2word(109,58,49,51)
, bytes2word(58,52,49,45)
, bytes2word(49,51,58,52)
,	/* ST_v287: (byte 2) */
  bytes2word(52,0,115,121)
, bytes2word(115,116,101,109)
, bytes2word(32,34,0,0)
,	/* PS_v249: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primSystem)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v247: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primSystem)
, useLabel(PC_System_46primSystem)
,	/* PS_v254: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46system)
, useLabel(PC_CString_46toCString)
,	/* PS_v255: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46system)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v253: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46system)
, useLabel(PC_System_46primSystem)
,	/* PS_v251: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46system)
, useLabel(PC_System_46system)
,	/* PS_v257: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46system)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v256: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46system)
, useLabel(PC_LAMBDA242)
,	/* PS_v244: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primSystem_35)
, useLabel(PC_System_46primSystem_35)
,	/* PS_v285: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA239)
, useLabel(PC_LAMBDA239)
,	/* PS_v281: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA240)
, useLabel(PC_LAMBDA240)
,	/* PS_v279: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA241)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v277: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA241)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v278: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA241)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v275: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA241)
, useLabel(PC_LAMBDA239)
,	/* PS_v276: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA241)
, useLabel(PC_LAMBDA240)
,	/* PS_v273: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA241)
, useLabel(PC_LAMBDA241)
,	/* PS_v269: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA242)
, useLabel(PC_System_46ExitSuccess)
,	/* PS_v271: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA242)
, useLabel(PC_System_46ExitFailure)
,	/* PS_v266: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA242)
, useLabel(PC_Prelude_46_124_124)
,	/* PS_v268: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA242)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v265: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA242)
, useLabel(PC_Prelude_46Eq_46Prelude_46Int_46_61_61)
,	/* PS_v270: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA242)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v267: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA242)
, useLabel(PC_LAMBDA241)
,	/* PS_v263: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA242)
, useLabel(PC_LAMBDA242)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "system" System.primSystem# 1 :: PackedString.PackedString -> Prelude.Int */
extern HsInt system(char*);
#ifdef PROFILE
static SInfo pf_System_46primSystem_35 = {"System","System.primSystem#","Prelude.Int"};
#endif
C_HEADER(FR_System_46primSystem_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = system(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46primSystem_35);
  C_RETURN(nodeptr);
}

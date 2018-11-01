#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46openFileC_35	((void*)startLabel+12)
#define CT_v245	((void*)startLabel+40)
#define F0_IO_46openFileC_35	((void*)startLabel+48)
#define FN_IO_46openFileC	((void*)startLabel+76)
#define CT_v249	((void*)startLabel+128)
#define CF_IO_46openFileC	((void*)startLabel+136)
#define CT_v258	((void*)startLabel+372)
#define FN_LAMBDA241	((void*)startLabel+436)
#define v259	((void*)startLabel+486)
#define CT_v268	((void*)startLabel+616)
#define F0_LAMBDA241	((void*)startLabel+624)
#define FN_LAMBDA240	((void*)startLabel+684)
#define CT_v277	((void*)startLabel+920)
#define F0_LAMBDA240	((void*)startLabel+928)
#define FN_LAMBDA239	((void*)startLabel+972)
#define CT_v281	((void*)startLabel+1016)
#define CF_LAMBDA239	((void*)startLabel+1024)
#define ST_v251	((void*)startLabel+1044)
#define PP_LAMBDA241	((void*)startLabel+1056)
#define PC_LAMBDA241	((void*)startLabel+1056)
#define ST_v262	((void*)startLabel+1056)
#define PP_LAMBDA240	((void*)startLabel+1080)
#define PC_LAMBDA240	((void*)startLabel+1080)
#define ST_v270	((void*)startLabel+1080)
#define PP_LAMBDA239	((void*)startLabel+1104)
#define PC_LAMBDA239	((void*)startLabel+1104)
#define ST_v279	((void*)startLabel+1104)
#define PP_IO_46openFileC	((void*)startLabel+1128)
#define PC_IO_46openFileC	((void*)startLabel+1128)
#define ST_v247	((void*)startLabel+1128)
#define PP_IO_46openFileC_35	((void*)startLabel+1141)
#define PC_IO_46openFileC_35	((void*)startLabel+1141)
#define ST_v244	((void*)startLabel+1141)
#define ST_v280	((void*)startLabel+1155)
#define PS_v248	((void*)startLabel+1168)
#define PS_v246	((void*)startLabel+1180)
#define PS_v253	((void*)startLabel+1192)
#define PS_v255	((void*)startLabel+1204)
#define PS_v252	((void*)startLabel+1216)
#define PS_v250	((void*)startLabel+1228)
#define PS_v257	((void*)startLabel+1240)
#define PS_v254	((void*)startLabel+1252)
#define PS_v256	((void*)startLabel+1264)
#define PS_v243	((void*)startLabel+1276)
#define PS_v278	((void*)startLabel+1288)
#define PS_v276	((void*)startLabel+1300)
#define PS_v273	((void*)startLabel+1312)
#define PS_v275	((void*)startLabel+1324)
#define PS_v274	((void*)startLabel+1336)
#define PS_v272	((void*)startLabel+1348)
#define PS_v271	((void*)startLabel+1360)
#define PS_v269	((void*)startLabel+1372)
#define PS_v263	((void*)startLabel+1384)
#define PS_v266	((void*)startLabel+1396)
#define PS_v264	((void*)startLabel+1408)
#define PS_v267	((void*)startLabel+1420)
#define PS_v265	((void*)startLabel+1432)
#define PS_v261	((void*)startLabel+1444)
void FR_IO_46openFileC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_CString_46toCString[];
extern Node FN_Prelude_46Enum_46IO_46IOMode_46fromEnum[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_NHC_46FFI_46foreignObjToAddr[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[];
extern Node CF_NHC_46FFI_46nullAddr[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Show_46IO_46IOMode_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_CString_46toCString[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46Enum_46IO_46IOMode_46fromEnum[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Prelude_46Show_46IO_46IOMode_46show[];
extern Node PC_NHC_46FFI_46foreignObjToAddr[];
extern Node PC_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v245)
,	/* FN_IO_46openFileC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46openFileC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 450001
, useLabel(ST_v244)
,	/* CT_v245: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46openFileC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46openFileC_35),2)
, useLabel(PS_v243)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v249)
,	/* FN_IO_46openFileC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v248)
, 0
, 0
, 0
, 0
, 450001
, useLabel(ST_v247)
,	/* CT_v249: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46openFileC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46openFileC))
, useLabel(PS_v246)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_IO_46openFileC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_IO_46openFile[] = {
  bytes2word(NEEDHEAP_P1,40,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(2,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,20)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v252)
, 0
, 0
, 0
, 0
, 480001
, useLabel(ST_v251)
,	/* CT_v258: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_IO_46openFile[] = {
  CAPTAG(useLabel(FN_IO_46openFile),2)
, useLabel(PS_v250)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46openFileC))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Prelude_46Enum_46IO_46IOMode_46fromEnum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA241),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v268)
,	/* FN_LAMBDA241: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,25,0,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_OFF_N1)
,	/* v259: (byte 2) */
  bytes2word(13,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, 490011
, useLabel(ST_v262)
,	/* CT_v268: (byte 0) */
  HW(7,3)
, 0
,	/* F0_LAMBDA241: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA241),3)
, useLabel(PS_v261)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46foreignObjToAddr))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullAddr)
, CAPTAG(useLabel(FN_LAMBDA240),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v277)
,	/* FN_LAMBDA240: (byte 0) */
  bytes2word(NEEDHEAP_P1,39,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,23,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v274)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v273)
, 0
, 0
, 0
, 0
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
, 510018
, useLabel(ST_v270)
,	/* CT_v277: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA240: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA240),3)
, useLabel(PS_v269)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA239))
, VAPTAG(useLabel(FN_Prelude_46Show_46IO_46IOMode_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v281)
,	/* FN_LAMBDA239: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v280)
, 520023
, useLabel(ST_v279)
,	/* CT_v281: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA239: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA239))
, useLabel(PS_v278)
, 0
, 0
, 0
,};
Node PP_IO_46openFile[] = {
 };
Node PC_IO_46openFile[] = {
 	/* ST_v251: (byte 0) */
  bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
,	/* PP_LAMBDA241: (byte 4) */
 	/* PC_LAMBDA241: (byte 4) */
 	/* ST_v262: (byte 4) */
  bytes2word(105,108,101,0)
, bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,58)
, bytes2word(52,57,58,49)
, bytes2word(49,45,52,57)
,	/* PP_LAMBDA240: (byte 4) */
 	/* PC_LAMBDA240: (byte 4) */
 	/* ST_v270: (byte 4) */
  bytes2word(58,53,50,0)
, bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,58)
, bytes2word(53,49,58,49)
, bytes2word(56,45,53,49)
,	/* PP_LAMBDA239: (byte 4) */
 	/* PC_LAMBDA239: (byte 4) */
 	/* ST_v279: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,58)
, bytes2word(53,50,58,50)
, bytes2word(51,45,53,50)
,	/* PP_IO_46openFileC: (byte 4) */
 	/* PC_IO_46openFileC: (byte 4) */
 	/* ST_v247: (byte 4) */
  bytes2word(58,51,51,0)
, bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,67)
,	/* PP_IO_46openFileC_35: (byte 1) */
 	/* PC_IO_46openFileC_35: (byte 1) */
 	/* ST_v244: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(111,112,101,110)
, bytes2word(70,105,108,101)
,	/* ST_v280: (byte 3) */
  bytes2word(67,35,0,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,32)
, bytes2word(0,0,0,0)
,	/* PS_v248: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFileC)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v246: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFileC)
, useLabel(PC_IO_46openFileC)
,	/* PS_v253: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFile)
, useLabel(PC_CString_46toCString)
,	/* PS_v255: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFile)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v252: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFile)
, useLabel(PC_IO_46openFileC)
,	/* PS_v250: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFile)
, useLabel(PC_IO_46openFile)
,	/* PS_v257: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFile)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v254: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFile)
, useLabel(PC_Prelude_46Enum_46IO_46IOMode_46fromEnum)
,	/* PS_v256: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFile)
, useLabel(PC_LAMBDA241)
,	/* PS_v243: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46openFileC_35)
, useLabel(PC_IO_46openFileC_35)
,	/* PS_v278: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA239)
, useLabel(PC_LAMBDA239)
,	/* PS_v276: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA240)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v273: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA240)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v275: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA240)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v274: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA240)
, useLabel(PC_Prelude_46Just)
,	/* PS_v272: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA240)
, useLabel(PC_Prelude_46Show_46IO_46IOMode_46show)
,	/* PS_v271: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA240)
, useLabel(PC_LAMBDA239)
,	/* PS_v269: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA240)
, useLabel(PC_LAMBDA240)
,	/* PS_v263: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA241)
, useLabel(PC_NHC_46FFI_46foreignObjToAddr)
,	/* PS_v266: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA241)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v264: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA241)
, useLabel(PC_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61)
,	/* PS_v267: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA241)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v265: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA241)
, useLabel(PC_LAMBDA240)
,	/* PS_v261: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA241)
, useLabel(PC_LAMBDA241)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "openFileC" IO.openFileC# 2 :: PackedString.PackedString -> Prelude.Int -> FFI.ForeignObj */
extern void* openFileC(char*,HsInt);
#ifdef PROFILE
static SInfo pf_IO_46openFileC_35 = {"IO","IO.openFileC#","FFI.ForeignObj"};
#endif
C_HEADER(FR_IO_46openFileC_35) {
  NodePtr nodeptr;
  void* result;
  char* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = openFileC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_IO_46openFileC_35);
  C_RETURN(nodeptr);
}

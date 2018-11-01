#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46rename_35	((void*)startLabel+12)
#define CT_v236	((void*)startLabel+40)
#define F0_Directory_46rename_35	((void*)startLabel+48)
#define FN_Directory_46rename	((void*)startLabel+76)
#define CT_v240	((void*)startLabel+128)
#define CF_Directory_46rename	((void*)startLabel+136)
#define CT_v248	((void*)startLabel+356)
#define FN_LAMBDA232	((void*)startLabel+416)
#define CT_v255	((void*)startLabel+560)
#define F0_LAMBDA232	((void*)startLabel+568)
#define FN_LAMBDA231	((void*)startLabel+624)
#define CT_v264	((void*)startLabel+868)
#define F0_LAMBDA231	((void*)startLabel+876)
#define FN_LAMBDA230	((void*)startLabel+920)
#define CT_v268	((void*)startLabel+964)
#define CF_LAMBDA230	((void*)startLabel+972)
#define FN_LAMBDA229	((void*)startLabel+1000)
#define CT_v272	((void*)startLabel+1044)
#define CF_LAMBDA229	((void*)startLabel+1052)
#define ST_v267	((void*)startLabel+1072)
#define PP_Directory_46rename	((void*)startLabel+1074)
#define PC_Directory_46rename	((void*)startLabel+1074)
#define ST_v238	((void*)startLabel+1074)
#define PP_Directory_46rename_35	((void*)startLabel+1091)
#define PC_Directory_46rename_35	((void*)startLabel+1091)
#define ST_v235	((void*)startLabel+1091)
#define ST_v242	((void*)startLabel+1112)
#define PP_LAMBDA232	((void*)startLabel+1138)
#define PC_LAMBDA232	((void*)startLabel+1138)
#define ST_v250	((void*)startLabel+1138)
#define PP_LAMBDA231	((void*)startLabel+1176)
#define PC_LAMBDA231	((void*)startLabel+1176)
#define ST_v257	((void*)startLabel+1176)
#define PP_LAMBDA229	((void*)startLabel+1214)
#define PC_LAMBDA229	((void*)startLabel+1214)
#define ST_v270	((void*)startLabel+1214)
#define PP_LAMBDA230	((void*)startLabel+1252)
#define PC_LAMBDA230	((void*)startLabel+1252)
#define ST_v266	((void*)startLabel+1252)
#define ST_v271	((void*)startLabel+1290)
#define PS_v239	((void*)startLabel+1312)
#define PS_v237	((void*)startLabel+1324)
#define PS_v244	((void*)startLabel+1336)
#define PS_v245	((void*)startLabel+1348)
#define PS_v243	((void*)startLabel+1360)
#define PS_v241	((void*)startLabel+1372)
#define PS_v247	((void*)startLabel+1384)
#define PS_v246	((void*)startLabel+1396)
#define PS_v234	((void*)startLabel+1408)
#define PS_v269	((void*)startLabel+1420)
#define PS_v265	((void*)startLabel+1432)
#define PS_v263	((void*)startLabel+1444)
#define PS_v260	((void*)startLabel+1456)
#define PS_v262	((void*)startLabel+1468)
#define PS_v261	((void*)startLabel+1480)
#define PS_v258	((void*)startLabel+1492)
#define PS_v259	((void*)startLabel+1504)
#define PS_v256	((void*)startLabel+1516)
#define PS_v254	((void*)startLabel+1528)
#define PS_v253	((void*)startLabel+1540)
#define PS_v251	((void*)startLabel+1552)
#define PS_v252	((void*)startLabel+1564)
#define PS_v249	((void*)startLabel+1576)
void FR_Directory_46rename_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_CString_46toCString[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Monad_46when[];
extern Node PC_Prelude_46Eq_46Prelude_46Int_46_61_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,	/* FN_Directory_46rename_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46rename_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v235)
,	/* CT_v236: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46rename_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46rename_35),2)
, useLabel(PS_v234)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v240)
,	/* FN_Directory_46rename: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v239)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v238)
,	/* CT_v240: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46rename: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46rename))
, useLabel(PS_v237)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46rename_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v248)
,};
Node FN_Directory_46renameDirectory[] = {
  bytes2word(NEEDHEAP_P1,40,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(2,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,20)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v247)
, 0
, 0
, 0
, 0
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
, 90001
, useLabel(ST_v242)
,	/* CT_v248: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Directory_46renameDirectory[] = {
  CAPTAG(useLabel(FN_Directory_46renameDirectory),2)
, useLabel(PS_v241)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Directory_46rename))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA232),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v255)
,	/* FN_LAMBDA232: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_INT_N1,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, 100010
, useLabel(ST_v250)
,	/* CT_v255: (byte 0) */
  HW(6,3)
, 0
,	/* F0_LAMBDA232: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA232),3)
, useLabel(PS_v249)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA231),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v264)
,	/* FN_LAMBDA231: (byte 0) */
  bytes2word(NEEDHEAP_P1,45,HEAP_CVAL_P1,7)
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
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,23)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,12)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, useLabel(PS_v262)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
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
, 120021
, useLabel(ST_v257)
,	/* CT_v264: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA231: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA231),3)
, useLabel(PS_v256)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA229))
, VAPTAG(useLabel(FN_LAMBDA230))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v268)
,	/* FN_LAMBDA230: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v267)
, 130056
, useLabel(ST_v266)
,	/* CT_v268: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA230: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA230))
, useLabel(PS_v265)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v272)
,	/* FN_LAMBDA229: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v271)
, 130026
, useLabel(ST_v270)
,	/* CT_v272: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA229: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA229))
, useLabel(PS_v269)
, 0
, 0
, 0
,	/* ST_v267: (byte 0) */
 	/* PP_Directory_46rename: (byte 2) */
 	/* PC_Directory_46rename: (byte 2) */
 	/* ST_v238: (byte 2) */
  bytes2word(34,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(114,101,110,97)
,	/* PP_Directory_46rename_35: (byte 3) */
 	/* PC_Directory_46rename_35: (byte 3) */
 	/* ST_v235: (byte 3) */
  bytes2word(109,101,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,114,101,110)
, bytes2word(97,109,101,35)
, bytes2word(0,0,0,0)
,};
Node PP_Directory_46renameDirectory[] = {
 };
Node PC_Directory_46renameDirectory[] = {
 	/* ST_v242: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,114,101)
, bytes2word(110,97,109,101)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
,	/* PP_LAMBDA232: (byte 2) */
 	/* PC_LAMBDA232: (byte 2) */
 	/* ST_v250: (byte 2) */
  bytes2word(121,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(114,101,110,97)
, bytes2word(109,101,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,58)
, bytes2word(49,48,58,49)
, bytes2word(48,45,49,48)
,	/* PP_LAMBDA231: (byte 4) */
 	/* PC_LAMBDA231: (byte 4) */
 	/* ST_v257: (byte 4) */
  bytes2word(58,52,55,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,114,101)
, bytes2word(110,97,109,101)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,58,49,50)
, bytes2word(58,50,49,45)
, bytes2word(49,50,58,50)
,	/* PP_LAMBDA229: (byte 2) */
 	/* PC_LAMBDA229: (byte 2) */
 	/* ST_v270: (byte 2) */
  bytes2word(56,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(114,101,110,97)
, bytes2word(109,101,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,58)
, bytes2word(49,51,58,50)
, bytes2word(54,45,49,51)
,	/* PP_LAMBDA230: (byte 4) */
 	/* PC_LAMBDA230: (byte 4) */
 	/* ST_v266: (byte 4) */
  bytes2word(58,52,56,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,114,101)
, bytes2word(110,97,109,101)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,58,49,51)
, bytes2word(58,53,54,45)
, bytes2word(49,51,58,53)
,	/* ST_v271: (byte 2) */
  bytes2word(57,0,114,101)
, bytes2word(110,97,109,101)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,32,116,111)
, bytes2word(32,34,0,0)
,	/* PS_v239: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46rename)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v237: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46rename)
, useLabel(PC_Directory_46rename)
,	/* PS_v244: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46renameDirectory)
, useLabel(PC_CString_46toCString)
,	/* PS_v245: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46renameDirectory)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v243: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46renameDirectory)
, useLabel(PC_Directory_46rename)
,	/* PS_v241: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46renameDirectory)
, useLabel(PC_Directory_46renameDirectory)
,	/* PS_v247: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46renameDirectory)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v246: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46renameDirectory)
, useLabel(PC_LAMBDA232)
,	/* PS_v234: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46rename_35)
, useLabel(PC_Directory_46rename_35)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA229)
, useLabel(PC_LAMBDA229)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA230)
, useLabel(PC_LAMBDA230)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA231)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v260: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA231)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA231)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v261: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA231)
, useLabel(PC_Prelude_46Just)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA231)
, useLabel(PC_LAMBDA229)
,	/* PS_v259: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA231)
, useLabel(PC_LAMBDA230)
,	/* PS_v256: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA231)
, useLabel(PC_LAMBDA231)
,	/* PS_v254: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA232)
, useLabel(PC_Monad_46when)
,	/* PS_v253: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA232)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v251: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA232)
, useLabel(PC_Prelude_46Eq_46Prelude_46Int_46_61_61)
,	/* PS_v252: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA232)
, useLabel(PC_LAMBDA231)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA232)
, useLabel(PC_LAMBDA232)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "rename" Directory.rename# 2 :: PackedString.PackedString -> PackedString.PackedString -> Prelude.Int */
#ifdef PROFILE
static SInfo pf_Directory_46rename_35 = {"Directory","Directory.rename#","Prelude.Int"};
#endif
C_HEADER(FR_Directory_46rename_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  char* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (char*)nhc_getPackedString(nodeptr);

  result = rename(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46rename_35);
  C_RETURN(nodeptr);
}

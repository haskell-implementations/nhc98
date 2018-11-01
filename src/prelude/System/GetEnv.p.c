#include "newmacros.h"
#include "runtime.h"

#define FN_System_46primGetEnv_35	((void*)startLabel+8)
#define CT_v232	((void*)startLabel+32)
#define F0_System_46primGetEnv_35	((void*)startLabel+40)
#define CT_v236	((void*)startLabel+120)
#define CT_v239	((void*)startLabel+188)
#define CT_v247	((void*)startLabel+392)
#define FN_LAMBDA228	((void*)startLabel+452)
#define v248	((void*)startLabel+492)
#define CT_v258	((void*)startLabel+656)
#define F0_LAMBDA228	((void*)startLabel+664)
#define FN_LAMBDA227	((void*)startLabel+728)
#define CT_v266	((void*)startLabel+932)
#define F0_LAMBDA227	((void*)startLabel+940)
#define FN_LAMBDA226	((void*)startLabel+984)
#define CT_v270	((void*)startLabel+1028)
#define CF_LAMBDA226	((void*)startLabel+1036)
#define FN_LAMBDA225	((void*)startLabel+1064)
#define CT_v274	((void*)startLabel+1108)
#define CF_LAMBDA225	((void*)startLabel+1116)
#define ST_v269	((void*)startLabel+1136)
#define ST_v241	((void*)startLabel+1140)
#define PP_LAMBDA228	((void*)startLabel+1154)
#define PC_LAMBDA228	((void*)startLabel+1154)
#define ST_v251	((void*)startLabel+1154)
#define PP_LAMBDA227	((void*)startLabel+1180)
#define PC_LAMBDA227	((void*)startLabel+1180)
#define ST_v260	((void*)startLabel+1180)
#define PP_LAMBDA225	((void*)startLabel+1206)
#define PC_LAMBDA225	((void*)startLabel+1206)
#define ST_v272	((void*)startLabel+1206)
#define PP_LAMBDA226	((void*)startLabel+1232)
#define PC_LAMBDA226	((void*)startLabel+1232)
#define ST_v268	((void*)startLabel+1232)
#define ST_v234	((void*)startLabel+1260)
#define PP_System_46primGetEnv_35	((void*)startLabel+1278)
#define PC_System_46primGetEnv_35	((void*)startLabel+1278)
#define ST_v231	((void*)startLabel+1278)
#define ST_v238	((void*)startLabel+1300)
#define ST_v273	((void*)startLabel+1319)
#define PS_v235	((void*)startLabel+1328)
#define PS_v233	((void*)startLabel+1340)
#define PS_v237	((void*)startLabel+1352)
#define PS_v243	((void*)startLabel+1364)
#define PS_v244	((void*)startLabel+1376)
#define PS_v242	((void*)startLabel+1388)
#define PS_v240	((void*)startLabel+1400)
#define PS_v246	((void*)startLabel+1412)
#define PS_v245	((void*)startLabel+1424)
#define PS_v230	((void*)startLabel+1436)
#define PS_v271	((void*)startLabel+1448)
#define PS_v267	((void*)startLabel+1460)
#define PS_v265	((void*)startLabel+1472)
#define PS_v263	((void*)startLabel+1484)
#define PS_v264	((void*)startLabel+1496)
#define PS_v261	((void*)startLabel+1508)
#define PS_v262	((void*)startLabel+1520)
#define PS_v259	((void*)startLabel+1532)
#define PS_v256	((void*)startLabel+1544)
#define PS_v255	((void*)startLabel+1556)
#define PS_v254	((void*)startLabel+1568)
#define PS_v252	((void*)startLabel+1580)
#define PS_v257	((void*)startLabel+1592)
#define PS_v253	((void*)startLabel+1604)
#define PS_v250	((void*)startLabel+1616)
void FR_System_46primGetEnv_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_System_46ptrToString(void);
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_CString_46fromCString[];
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
extern Node PC_CString_46fromCString[];
extern Node PC_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v232)
,	/* FN_System_46primGetEnv_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46primGetEnv_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v231)
,	/* CT_v232: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46primGetEnv_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46primGetEnv_35),1)
, useLabel(PS_v230)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v236)
,};
Node FN_System_46primGetEnv[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v235)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v234)
,	/* CT_v236: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46primGetEnv[] = {
  VAPTAG(useLabel(FN_System_46primGetEnv))
, useLabel(PS_v233)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46primGetEnv_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v239)
,};
Node FN_System_46ptrToString[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46ptrToString)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46ptrToString[] = {
  CAPTAG(useLabel(FN_System_46ptrToString),1)
, useLabel(PS_v237)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v247)
,};
Node FN_System_46getEnv[] = {
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
, useLabel(PS_v242)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v241)
,	/* CT_v247: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_System_46getEnv[] = {
  CAPTAG(useLabel(FN_System_46getEnv),1)
, useLabel(PS_v240)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_System_46primGetEnv))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA228),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,	/* FN_LAMBDA228: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(24,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
,	/* v248: (byte 4) */
  bytes2word(11,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
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
, 100012
, useLabel(ST_v251)
,	/* CT_v258: (byte 0) */
  HW(8,2)
, 0
,	/* F0_LAMBDA228: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA228),2)
, useLabel(PS_v250)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_LAMBDA227),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_System_46ptrToString))
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,	/* FN_LAMBDA227: (byte 0) */
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
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
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, 120018
, useLabel(ST_v260)
,	/* CT_v266: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA227: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA227),2)
, useLabel(PS_v259)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA225))
, VAPTAG(useLabel(FN_LAMBDA226))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v270)
,	/* FN_LAMBDA226: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v269)
, 130044
, useLabel(ST_v268)
,	/* CT_v270: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA226: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA226))
, useLabel(PS_v267)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v274)
,	/* FN_LAMBDA225: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v273)
, 130023
, useLabel(ST_v272)
,	/* CT_v274: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA225: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA225))
, useLabel(PS_v271)
, 0
, 0
, 0
,	/* ST_v269: (byte 0) */
  bytes2word(34,0,0,0)
,};
Node PP_System_46getEnv[] = {
 };
Node PC_System_46getEnv[] = {
 	/* ST_v241: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,103)
, bytes2word(101,116,69,110)
,	/* PP_LAMBDA228: (byte 2) */
 	/* PC_LAMBDA228: (byte 2) */
 	/* ST_v251: (byte 2) */
  bytes2word(118,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,103,101,116)
, bytes2word(69,110,118,58)
, bytes2word(49,48,58,49)
, bytes2word(50,45,49,48)
,	/* PP_LAMBDA227: (byte 4) */
 	/* PC_LAMBDA227: (byte 4) */
 	/* ST_v260: (byte 4) */
  bytes2word(58,52,48,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,103)
, bytes2word(101,116,69,110)
, bytes2word(118,58,49,50)
, bytes2word(58,49,56,45)
, bytes2word(49,50,58,50)
,	/* PP_LAMBDA225: (byte 2) */
 	/* PC_LAMBDA225: (byte 2) */
 	/* ST_v272: (byte 2) */
  bytes2word(53,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,103,101,116)
, bytes2word(69,110,118,58)
, bytes2word(49,51,58,50)
, bytes2word(51,45,49,51)
,	/* PP_LAMBDA226: (byte 4) */
 	/* PC_LAMBDA226: (byte 4) */
 	/* ST_v268: (byte 4) */
  bytes2word(58,51,51,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,103)
, bytes2word(101,116,69,110)
, bytes2word(118,58,49,51)
, bytes2word(58,52,52,45)
, bytes2word(49,51,58,52)
, bytes2word(55,0,0,0)
,};
Node PP_System_46primGetEnv[] = {
 };
Node PC_System_46primGetEnv[] = {
 	/* ST_v234: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,71)
, bytes2word(101,116,69,110)
,	/* PP_System_46primGetEnv_35: (byte 2) */
 	/* PC_System_46primGetEnv_35: (byte 2) */
 	/* ST_v231: (byte 2) */
  bytes2word(118,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,112,114,105)
, bytes2word(109,71,101,116)
, bytes2word(69,110,118,35)
, bytes2word(0,0,0,0)
,};
Node PP_System_46ptrToString[] = {
 };
Node PC_System_46ptrToString[] = {
 	/* ST_v238: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(116,114,84,111)
, bytes2word(83,116,114,105)
,	/* ST_v273: (byte 3) */
  bytes2word(110,103,0,103)
, bytes2word(101,116,69,110)
, bytes2word(118,32,34,0)
,	/* PS_v235: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primGetEnv)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v233: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primGetEnv)
, useLabel(PC_System_46primGetEnv)
,	/* PS_v237: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46ptrToString)
, useLabel(PC_System_46ptrToString)
,	/* PS_v243: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getEnv)
, useLabel(PC_CString_46toCString)
,	/* PS_v244: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getEnv)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v242: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getEnv)
, useLabel(PC_System_46primGetEnv)
,	/* PS_v240: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getEnv)
, useLabel(PC_System_46getEnv)
,	/* PS_v246: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getEnv)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v245: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getEnv)
, useLabel(PC_LAMBDA228)
,	/* PS_v230: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primGetEnv_35)
, useLabel(PC_System_46primGetEnv_35)
,	/* PS_v271: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA225)
, useLabel(PC_LAMBDA225)
,	/* PS_v267: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA226)
, useLabel(PC_LAMBDA226)
,	/* PS_v265: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA227)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v263: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA227)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v264: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA227)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v261: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA227)
, useLabel(PC_LAMBDA225)
,	/* PS_v262: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA227)
, useLabel(PC_LAMBDA226)
,	/* PS_v259: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA227)
, useLabel(PC_LAMBDA227)
,	/* PS_v256: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA228)
, useLabel(PC_CString_46fromCString)
,	/* PS_v255: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA228)
, useLabel(PC_System_46ptrToString)
,	/* PS_v254: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA228)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v252: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA228)
, useLabel(PC_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61)
,	/* PS_v257: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA228)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v253: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA228)
, useLabel(PC_LAMBDA227)
,	/* PS_v250: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_LAMBDA228)
, useLabel(PC_LAMBDA228)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primGetEnv" System.primGetEnv# 1 :: PackedString.PackedString -> FFI.Ptr */
extern void* primGetEnv(char*);
#ifdef PROFILE
static SInfo pf_System_46primGetEnv_35 = {"System","System.primGetEnv#","FFI.Ptr"};
#endif
C_HEADER(FR_System_46primGetEnv_35) {
  NodePtr nodeptr;
  void* result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = primGetEnv(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_System_46primGetEnv_35);
  C_RETURN(nodeptr);
}

/* foreign import cast "ptrToString" System.ptrToString 1 :: FFI.Ptr -> PackedString.PackedString */
#ifdef PROFILE
static SInfo pf_System_46ptrToString = {"System","System.ptrToString","PackedString.PackedString"};
#endif
C_HEADER(FR_System_46ptrToString) {
  NodePtr nodeptr;
  char* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (char*)(arg1);

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_System_46ptrToString);
  C_RETURN(nodeptr);
}

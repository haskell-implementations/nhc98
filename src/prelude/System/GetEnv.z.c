#include "newmacros.h"
#include "runtime.h"

#define FN_System_46primGetEnv_35	((void*)startLabel+8)
#define CT_v231	((void*)startLabel+36)
#define F0_System_46primGetEnv_35	((void*)startLabel+44)
#define CT_v233	((void*)startLabel+80)
#define CT_v235	((void*)startLabel+136)
#define CT_v237	((void*)startLabel+196)
#define FN_LAMBDA228	((void*)startLabel+240)
#define v238	((void*)startLabel+266)
#define CT_v241	((void*)startLabel+296)
#define F0_LAMBDA228	((void*)startLabel+304)
#define FN_LAMBDA227	((void*)startLabel+352)
#define CT_v243	((void*)startLabel+404)
#define F0_LAMBDA227	((void*)startLabel+412)
#define FN_LAMBDA226	((void*)startLabel+440)
#define CT_v246	((void*)startLabel+472)
#define CF_LAMBDA226	((void*)startLabel+480)
#define FN_LAMBDA225	((void*)startLabel+492)
#define CT_v249	((void*)startLabel+524)
#define CF_LAMBDA225	((void*)startLabel+532)
#define ST_v245	((void*)startLabel+536)
#define ST_v236	((void*)startLabel+538)
#define ST_v240	((void*)startLabel+552)
#define ST_v242	((void*)startLabel+578)
#define ST_v247	((void*)startLabel+604)
#define ST_v244	((void*)startLabel+630)
#define ST_v232	((void*)startLabel+656)
#define ST_v230	((void*)startLabel+674)
#define ST_v234	((void*)startLabel+693)
#define ST_v248	((void*)startLabel+712)
extern Node TM_System[];
void FR_System_46primGetEnv_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_System_46ptrToString(void);
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_System[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v231)
,	/* FN_System_46primGetEnv_35: (byte 0) */
  useLabel(TM_System)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46primGetEnv_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v230)
,	/* CT_v231: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46primGetEnv_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46primGetEnv_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v233)
,};
Node FN_System_46primGetEnv[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v232)
,	/* CT_v233: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46primGetEnv[] = {
  VAPTAG(useLabel(FN_System_46primGetEnv))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46primGetEnv_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v235)
,};
Node FN_System_46ptrToString[] = {
  useLabel(TM_System)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46ptrToString)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v234)
,	/* CT_v235: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_System_46ptrToString[] = {
  CAPTAG(useLabel(FN_System_46ptrToString),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v237)
,};
Node FN_System_46getEnv[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v236)
,	/* CT_v237: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_System_46getEnv[] = {
  CAPTAG(useLabel(FN_System_46getEnv),1)
, VAPTAG(useLabel(FN_System_46primGetEnv))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA228),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v241)
,	/* FN_LAMBDA228: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,13,0,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
,	/* v238: (byte 2) */
  bytes2word(4,RETURN_EVAL,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100012
, useLabel(ST_v240)
,	/* CT_v241: (byte 0) */
  HW(8,2)
, 0
,	/* F0_LAMBDA228: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA228),2)
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
, useLabel(CT_v243)
,	/* FN_LAMBDA227: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_IN3,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 120018
, useLabel(ST_v242)
,	/* CT_v243: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA227: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA227),2)
, VAPTAG(useLabel(FN_LAMBDA225))
, VAPTAG(useLabel(FN_LAMBDA226))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v246)
,	/* FN_LAMBDA226: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v245)
, 130044
, useLabel(ST_v244)
,	/* CT_v246: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA226: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA226))
, bytes2word(0,0,0,0)
, useLabel(CT_v249)
,	/* FN_LAMBDA225: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v248)
, 130023
, useLabel(ST_v247)
,	/* CT_v249: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA225: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA225))
,	/* ST_v245: (byte 0) */
 	/* ST_v236: (byte 2) */
  bytes2word(34,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,103,101,116)
,	/* ST_v240: (byte 4) */
  bytes2word(69,110,118,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,103)
, bytes2word(101,116,69,110)
, bytes2word(118,58,49,48)
, bytes2word(58,49,50,45)
, bytes2word(49,48,58,52)
,	/* ST_v242: (byte 2) */
  bytes2word(48,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,103,101,116)
, bytes2word(69,110,118,58)
, bytes2word(49,50,58,49)
, bytes2word(56,45,49,50)
,	/* ST_v247: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,103)
, bytes2word(101,116,69,110)
, bytes2word(118,58,49,51)
, bytes2word(58,50,51,45)
, bytes2word(49,51,58,51)
,	/* ST_v244: (byte 2) */
  bytes2word(51,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,103,101,116)
, bytes2word(69,110,118,58)
, bytes2word(49,51,58,52)
, bytes2word(52,45,49,51)
,	/* ST_v232: (byte 4) */
  bytes2word(58,52,55,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,71)
, bytes2word(101,116,69,110)
,	/* ST_v230: (byte 2) */
  bytes2word(118,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,112,114,105)
, bytes2word(109,71,101,116)
, bytes2word(69,110,118,35)
,	/* ST_v234: (byte 1) */
  bytes2word(0,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(112,116,114,84)
, bytes2word(111,83,116,114)
,	/* ST_v248: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(103,101,116,69)
, bytes2word(110,118,32,34)
, bytes2word(0,0,0,0)
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

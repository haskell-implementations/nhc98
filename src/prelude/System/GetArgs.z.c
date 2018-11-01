#include "newmacros.h"
#include "runtime.h"

#define FN_System_46cGetArg_35	((void*)startLabel+8)
#define CT_v242	((void*)startLabel+36)
#define F0_System_46cGetArg_35	((void*)startLabel+44)
#define CT_v244	((void*)startLabel+80)
#define FN_System_46ptrToCString_35	((void*)startLabel+108)
#define CT_v246	((void*)startLabel+136)
#define F0_System_46ptrToCString_35	((void*)startLabel+144)
#define CT_v248	((void*)startLabel+180)
#define CT_v250	((void*)startLabel+252)
#define FN_System_46Prelude_46186_46getThem	((void*)startLabel+288)
#define CT_v255	((void*)startLabel+320)
#define F0_System_46Prelude_46186_46getThem	((void*)startLabel+328)
#define FN_LAMBDA239	((void*)startLabel+352)
#define v256	((void*)startLabel+373)
#define CT_v259	((void*)startLabel+412)
#define F0_LAMBDA239	((void*)startLabel+420)
#define FN_LAMBDA238	((void*)startLabel+460)
#define CT_v261	((void*)startLabel+504)
#define F0_LAMBDA238	((void*)startLabel+512)
#define FN_LAMBDA237	((void*)startLabel+544)
#define CT_v263	((void*)startLabel+584)
#define F0_LAMBDA237	((void*)startLabel+592)
#define ST_v243	((void*)startLabel+604)
#define ST_v241	((void*)startLabel+619)
#define ST_v249	((void*)startLabel+635)
#define ST_v253	((void*)startLabel+650)
#define ST_v258	((void*)startLabel+676)
#define ST_v260	((void*)startLabel+703)
#define ST_v262	((void*)startLabel+730)
#define ST_v247	((void*)startLabel+757)
#define ST_v245	((void*)startLabel+777)
extern Node TM_System[];
void FR_System_46cGetArg_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
void FR_System_46ptrToCString_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46unsafePerformIO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node TMSUB_System[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node FN_CString_46fromCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v242)
,	/* FN_System_46cGetArg_35: (byte 0) */
  useLabel(TM_System)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46cGetArg_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46cGetArg_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46cGetArg_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v244)
,};
Node FN_System_46cGetArg[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v243)
,	/* CT_v244: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46cGetArg[] = {
  VAPTAG(useLabel(FN_System_46cGetArg))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_System_46cGetArg_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v246)
,	/* FN_System_46ptrToCString_35: (byte 0) */
  useLabel(TM_System)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46ptrToCString_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v245)
,	/* CT_v246: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46ptrToCString_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46ptrToCString_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v248)
,};
Node FN_System_46ptrToCString[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v247)
,	/* CT_v248: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46ptrToCString[] = {
  VAPTAG(useLabel(FN_System_46ptrToCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46ptrToCString_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v250)
,};
Node FN_System_46getArgs[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_I1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 90001
, useLabel(ST_v249)
,	/* CT_v250: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_System_46getArgs[] = {
  VAPTAG(useLabel(FN_System_46getArgs))
, CAPTAG(useLabel(FN_System_46Prelude_46186_46getThem),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46unsafePerformIO))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v255)
,	/* FN_System_46Prelude_46186_46getThem: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 160003
, useLabel(ST_v253)
,	/* CT_v255: (byte 0) */
  HW(3,1)
, 0
,	/* F0_System_46Prelude_46186_46getThem: (byte 0) */
  CAPTAG(useLabel(FN_System_46Prelude_46186_46getThem),1)
, CAPTAG(useLabel(FN_LAMBDA239),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_System_46cGetArg)
, bytes2word(1,0,0,1)
, useLabel(CT_v259)
,	/* FN_LAMBDA239: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,8,0,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,2)
,	/* v256: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 170010
, useLabel(ST_v258)
,	/* CT_v259: (byte 0) */
  HW(7,1)
, 0
,	/* F0_LAMBDA239: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA239),1)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_System_46ptrToCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA238),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v261)
,	/* FN_LAMBDA238: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 190023
, useLabel(ST_v260)
,	/* CT_v261: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA238: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA238),1)
, CAPTAG(useLabel(FN_System_46Prelude_46186_46getThem),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA237),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v263)
,	/* FN_LAMBDA237: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 200023
, useLabel(ST_v262)
,	/* CT_v263: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA237: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA237),2)
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v243: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,99)
, bytes2word(71,101,116,65)
,	/* ST_v241: (byte 3) */
  bytes2word(114,103,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,99,71)
, bytes2word(101,116,65,114)
,	/* ST_v249: (byte 3) */
  bytes2word(103,35,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,103,101)
, bytes2word(116,65,114,103)
,	/* ST_v253: (byte 2) */
  bytes2word(115,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,103,101,116)
, bytes2word(65,114,103,115)
, bytes2word(58,49,54,58)
, bytes2word(51,45,50,49)
,	/* ST_v258: (byte 4) */
  bytes2word(58,52,51,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,103)
, bytes2word(101,116,65,114)
, bytes2word(103,115,58,49)
, bytes2word(55,58,49,48)
, bytes2word(45,49,55,58)
,	/* ST_v260: (byte 3) */
  bytes2word(49,54,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,103,101)
, bytes2word(116,65,114,103)
, bytes2word(115,58,49,57)
, bytes2word(58,50,51,45)
, bytes2word(49,57,58,51)
,	/* ST_v262: (byte 2) */
  bytes2word(54,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,103,101,116)
, bytes2word(65,114,103,115)
, bytes2word(58,50,48,58)
, bytes2word(50,51,45,50)
, bytes2word(48,58,51,51)
,	/* ST_v247: (byte 1) */
  bytes2word(0,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(112,116,114,84)
, bytes2word(111,67,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v245: (byte 1) */
  bytes2word(0,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(112,116,114,84)
, bytes2word(111,67,83,116)
, bytes2word(114,105,110,103)
, bytes2word(35,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "cGetArg" System.cGetArg# 1 :: Prelude.() -> FFI.Ptr */
extern void* cGetArg(void);
#ifdef PROFILE
static SInfo pf_System_46cGetArg_35 = {"System","System.cGetArg#","FFI.Ptr"};
#endif
C_HEADER(FR_System_46cGetArg_35) {
  NodePtr nodeptr;
  void* result;
  /* void arg1 */;

  result = cGetArg();

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_System_46cGetArg_35);
  C_RETURN(nodeptr);
}

/* foreign import cast "ptrToCString" System.ptrToCString# 1 :: FFI.Ptr -> PackedString.PackedString */
#ifdef PROFILE
static SInfo pf_System_46ptrToCString_35 = {"System","System.ptrToCString#","PackedString.PackedString"};
#endif
C_HEADER(FR_System_46ptrToCString_35) {
  NodePtr nodeptr;
  char* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (char*)(arg1);

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_System_46ptrToCString_35);
  C_RETURN(nodeptr);
}

#include "newmacros.h"
#include "runtime.h"

#define FN_System_46cGetArg_35	((void*)startLabel+8)
#define CT_v241	((void*)startLabel+24)
#define F0_System_46cGetArg_35	((void*)startLabel+32)
#define CT_v242	((void*)startLabel+56)
#define FN_System_46ptrToCString_35	((void*)startLabel+84)
#define CT_v243	((void*)startLabel+100)
#define F0_System_46ptrToCString_35	((void*)startLabel+108)
#define CT_v244	((void*)startLabel+132)
#define CT_v245	((void*)startLabel+192)
#define FN_System_46Prelude_46186_46getThem	((void*)startLabel+228)
#define CT_v249	((void*)startLabel+248)
#define F0_System_46Prelude_46186_46getThem	((void*)startLabel+256)
#define FN_LAMBDA239	((void*)startLabel+280)
#define v250	((void*)startLabel+298)
#define CT_v252	((void*)startLabel+332)
#define F0_LAMBDA239	((void*)startLabel+340)
#define FN_LAMBDA238	((void*)startLabel+380)
#define CT_v253	((void*)startLabel+416)
#define F0_LAMBDA238	((void*)startLabel+424)
#define FN_LAMBDA237	((void*)startLabel+456)
#define CT_v254	((void*)startLabel+484)
#define F0_LAMBDA237	((void*)startLabel+492)
void FR_System_46cGetArg_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
void FR_System_46ptrToCString_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46unsafePerformIO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node FN_CString_46fromCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v241)
,	/* FN_System_46cGetArg_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46cGetArg_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v241: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46cGetArg_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46cGetArg_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v242)
,};
Node FN_System_46cGetArg[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v242: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46cGetArg[] = {
  VAPTAG(useLabel(FN_System_46cGetArg))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_System_46cGetArg_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v243)
,	/* FN_System_46ptrToCString_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46ptrToCString_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v243: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46ptrToCString_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46ptrToCString_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v244)
,};
Node FN_System_46ptrToCString[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v244: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46ptrToCString[] = {
  VAPTAG(useLabel(FN_System_46ptrToCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46ptrToCString_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v245)
,};
Node FN_System_46getArgs[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v245: (byte 0) */
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
, useLabel(CT_v249)
,	/* FN_System_46Prelude_46186_46getThem: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v249: (byte 0) */
  HW(3,1)
, 0
,	/* F0_System_46Prelude_46186_46getThem: (byte 0) */
  CAPTAG(useLabel(FN_System_46Prelude_46186_46getThem),1)
, CAPTAG(useLabel(FN_LAMBDA239),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_System_46cGetArg)
, bytes2word(1,0,0,1)
, useLabel(CT_v252)
,	/* FN_LAMBDA239: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,9,0,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
,	/* v250: (byte 2) */
  bytes2word(2,RETURN_EVAL,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v252: (byte 0) */
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
, useLabel(CT_v253)
,	/* FN_LAMBDA238: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v253: (byte 0) */
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
, useLabel(CT_v254)
,	/* FN_LAMBDA237: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v254: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA237: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA237),2)
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
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

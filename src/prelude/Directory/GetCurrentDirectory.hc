#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46getcwd_35	((void*)startLabel+12)
#define CT_v237	((void*)startLabel+32)
#define F0_Directory_46getcwd_35	((void*)startLabel+40)
#define FN_Directory_46getcwd	((void*)startLabel+52)
#define CT_v238	((void*)startLabel+64)
#define CF_Directory_46getcwd	((void*)startLabel+72)
#define FN_Directory_46addrToCString	((void*)startLabel+92)
#define CT_v239	((void*)startLabel+108)
#define F0_Directory_46addrToCString	((void*)startLabel+116)
#define CT_v240	((void*)startLabel+160)
#define FN_LAMBDA235	((void*)startLabel+200)
#define CT_v241	((void*)startLabel+248)
#define F0_LAMBDA235	((void*)startLabel+256)
#define FN_LAMBDA234	((void*)startLabel+316)
#define CT_v242	((void*)startLabel+352)
#define F0_LAMBDA234	((void*)startLabel+360)
#define FN_LAMBDA233	((void*)startLabel+384)
#define CT_v244	((void*)startLabel+404)
#define CF_LAMBDA233	((void*)startLabel+412)
#define ST_v243	((void*)startLabel+416)
void FR_Directory_46getcwd_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_Directory_46addrToCString(void);
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node CF_NHC_46FFI_46nullAddr[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46Show_46NHC_46FFI_46Addr_46show[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v237)
,	/* FN_Directory_46getcwd_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46getcwd_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v237: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46getcwd_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46getcwd_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v238)
,	/* FN_Directory_46getcwd: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v238: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46getcwd: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46getcwd))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46getcwd_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v239)
,	/* FN_Directory_46addrToCString: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46addrToCString)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v239: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46addrToCString: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46addrToCString),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v240)
,};
Node FN_Directory_46getCurrentDirectory[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I5,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1024
,	/* CT_v240: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_Directory_46getCurrentDirectory[] = {
  VAPTAG(useLabel(FN_Directory_46getCurrentDirectory))
, VAPTAG(useLabel(FN_Directory_46getcwd))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, useLabel(CF_NHC_46FFI_46nullAddr)
, CAPTAG(useLabel(FN_LAMBDA235),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v241)
,	/* FN_LAMBDA235: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,10)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,11)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v241: (byte 0) */
  HW(11,1)
, 0
,	/* F0_LAMBDA235: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA235),1)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullAddr)
, CAPTAG(useLabel(FN_LAMBDA234),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_Directory_46addrToCString))
, VAPTAG(useLabel(FN_CString_46fromCString))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v242)
,	/* FN_LAMBDA234: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
,	/* CT_v242: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA234: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA234),2)
, VAPTAG(useLabel(FN_LAMBDA233))
, VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46show))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v244)
,	/* FN_LAMBDA233: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v243)
,	/* CT_v244: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA233: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA233))
,	/* ST_v243: (byte 0) */
  bytes2word(103,101,116,67)
, bytes2word(117,114,114,101)
, bytes2word(110,116,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "getcwd" Directory.getcwd# 2 :: FFI.Addr -> Prelude.Int -> FFI.Addr */
extern void* getcwd(void*,HsInt);
#ifdef PROFILE
static SInfo pf_Directory_46getcwd_35 = {"Directory","Directory.getcwd#","FFI.Addr"};
#endif
C_HEADER(FR_Directory_46getcwd_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = getcwd(arg1,arg2);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46getcwd_35);
  C_RETURN(nodeptr);
}

/* foreign import cast "addrToCString" Directory.addrToCString 1 :: FFI.Addr -> PackedString.PackedString */
#ifdef PROFILE
static SInfo pf_Directory_46addrToCString = {"Directory","Directory.addrToCString","PackedString.PackedString"};
#endif
C_HEADER(FR_Directory_46addrToCString) {
  NodePtr nodeptr;
  char* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (char*)(arg1);

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46addrToCString);
  C_RETURN(nodeptr);
}

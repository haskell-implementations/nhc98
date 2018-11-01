#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46getcwd_35	((void*)startLabel+12)
#define CT_v238	((void*)startLabel+44)
#define F0_Directory_46getcwd_35	((void*)startLabel+52)
#define FN_Directory_46getcwd	((void*)startLabel+64)
#define CT_v240	((void*)startLabel+88)
#define CF_Directory_46getcwd	((void*)startLabel+96)
#define FN_Directory_46addrToCString	((void*)startLabel+116)
#define CT_v242	((void*)startLabel+144)
#define F0_Directory_46addrToCString	((void*)startLabel+152)
#define CT_v244	((void*)startLabel+208)
#define FN_LAMBDA235	((void*)startLabel+248)
#define CT_v246	((void*)startLabel+308)
#define F0_LAMBDA235	((void*)startLabel+316)
#define FN_LAMBDA234	((void*)startLabel+376)
#define CT_v248	((void*)startLabel+424)
#define F0_LAMBDA234	((void*)startLabel+432)
#define FN_LAMBDA233	((void*)startLabel+456)
#define CT_v251	((void*)startLabel+488)
#define CF_LAMBDA233	((void*)startLabel+496)
#define ST_v241	((void*)startLabel+500)
#define ST_v243	((void*)startLabel+524)
#define ST_v245	((void*)startLabel+554)
#define ST_v247	((void*)startLabel+595)
#define ST_v249	((void*)startLabel+637)
#define ST_v239	((void*)startLabel+679)
#define ST_v237	((void*)startLabel+696)
#define ST_v250	((void*)startLabel+714)
extern Node TM_Directory[];
void FR_Directory_46getcwd_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_Directory_46addrToCString(void);
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node CF_NHC_46FFI_46nullAddr[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Directory[];
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
, useLabel(CT_v238)
,	/* FN_Directory_46getcwd_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46getcwd_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v237)
,	/* CT_v238: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46getcwd_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46getcwd_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v240)
,	/* FN_Directory_46getcwd: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v239)
,	/* CT_v240: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46getcwd: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46getcwd))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46getcwd_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v242)
,	/* FN_Directory_46addrToCString: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46addrToCString)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46addrToCString: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46addrToCString),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v244)
,};
Node FN_Directory_46getCurrentDirectory[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I5,HEAP_CADR_N1,4)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1024
, 100001
, useLabel(ST_v243)
,	/* CT_v244: (byte 0) */
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
, useLabel(CT_v246)
,	/* FN_LAMBDA235: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
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
, 110008
, useLabel(ST_v245)
,	/* CT_v246: (byte 0) */
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
, useLabel(CT_v248)
,	/* FN_LAMBDA234: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_IN3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, 130021
, useLabel(ST_v247)
,	/* CT_v248: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA234: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA234),2)
, VAPTAG(useLabel(FN_LAMBDA233))
, VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Addr_46show))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v251)
,	/* FN_LAMBDA233: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v250)
, 140025
, useLabel(ST_v249)
,	/* CT_v251: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA233: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA233))
,	/* ST_v241: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,97,100)
, bytes2word(100,114,84,111)
, bytes2word(67,83,116,114)
,	/* ST_v243: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,103,101)
, bytes2word(116,67,117,114)
, bytes2word(114,101,110,116)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
,	/* ST_v245: (byte 2) */
  bytes2word(121,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(103,101,116,67)
, bytes2word(117,114,114,101)
, bytes2word(110,116,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,58)
, bytes2word(49,49,58,56)
, bytes2word(45,49,49,58)
,	/* ST_v247: (byte 3) */
  bytes2word(50,55,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,103,101,116)
, bytes2word(67,117,114,114)
, bytes2word(101,110,116,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(58,49,51,58)
, bytes2word(50,49,45,49)
, bytes2word(51,58,50,56)
,	/* ST_v249: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,103)
, bytes2word(101,116,67,117)
, bytes2word(114,114,101,110)
, bytes2word(116,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,58,49)
, bytes2word(52,58,50,53)
, bytes2word(45,49,52,58)
,	/* ST_v239: (byte 3) */
  bytes2word(52,53,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,103,101,116)
,	/* ST_v237: (byte 4) */
  bytes2word(99,119,100,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,103,101)
, bytes2word(116,99,119,100)
,	/* ST_v250: (byte 2) */
  bytes2word(35,0,103,101)
, bytes2word(116,67,117,114)
, bytes2word(114,101,110,116)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,0,0,0)
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

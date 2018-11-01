#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46openFileC_35	((void*)startLabel+12)
#define CT_v244	((void*)startLabel+44)
#define F0_IO_46openFileC_35	((void*)startLabel+52)
#define FN_IO_46openFileC	((void*)startLabel+64)
#define CT_v246	((void*)startLabel+88)
#define CF_IO_46openFileC	((void*)startLabel+96)
#define CT_v248	((void*)startLabel+168)
#define FN_LAMBDA241	((void*)startLabel+216)
#define v249	((void*)startLabel+247)
#define CT_v252	((void*)startLabel+268)
#define F0_LAMBDA241	((void*)startLabel+276)
#define FN_LAMBDA240	((void*)startLabel+320)
#define CT_v254	((void*)startLabel+372)
#define F0_LAMBDA240	((void*)startLabel+380)
#define FN_LAMBDA239	((void*)startLabel+408)
#define CT_v257	((void*)startLabel+440)
#define CF_LAMBDA239	((void*)startLabel+448)
#define ST_v247	((void*)startLabel+452)
#define ST_v251	((void*)startLabel+464)
#define ST_v253	((void*)startLabel+488)
#define ST_v255	((void*)startLabel+512)
#define ST_v245	((void*)startLabel+536)
#define ST_v243	((void*)startLabel+549)
#define ST_v256	((void*)startLabel+563)
extern Node TM_IO[];
void FR_IO_46openFileC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_CString_46toCString[];
extern Node FN_Prelude_46Enum_46IO_46IOMode_46fromEnum[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_IO[];
extern Node FN_NHC_46FFI_46foreignObjToAddr[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61[];
extern Node CF_NHC_46FFI_46nullAddr[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Show_46IO_46IOMode_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v244)
,	/* FN_IO_46openFileC_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46openFileC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 450001
, useLabel(ST_v243)
,	/* CT_v244: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46openFileC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46openFileC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v246)
,	/* FN_IO_46openFileC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 450001
, useLabel(ST_v245)
,	/* CT_v246: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46openFileC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46openFileC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_IO_46openFileC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v248)
,};
Node FN_IO_46openFile[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 480001
, useLabel(ST_v247)
,	/* CT_v248: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_IO_46openFile[] = {
  CAPTAG(useLabel(FN_IO_46openFile),2)
, VAPTAG(useLabel(FN_IO_46openFileC))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Prelude_46Enum_46IO_46IOMode_46fromEnum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA241),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v252)
,	/* FN_LAMBDA241: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(15,0,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
,	/* v249: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 490011
, useLabel(ST_v251)
,	/* CT_v252: (byte 0) */
  HW(7,3)
, 0
,	/* F0_LAMBDA241: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA241),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46foreignObjToAddr))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Addr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullAddr)
, CAPTAG(useLabel(FN_LAMBDA240),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v254)
,	/* FN_LAMBDA240: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, 510018
, useLabel(ST_v253)
,	/* CT_v254: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA240: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA240),3)
, VAPTAG(useLabel(FN_LAMBDA239))
, VAPTAG(useLabel(FN_Prelude_46Show_46IO_46IOMode_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v257)
,	/* FN_LAMBDA239: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v256)
, 520023
, useLabel(ST_v255)
,	/* CT_v257: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA239: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA239))
,	/* ST_v247: (byte 0) */
  bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
,	/* ST_v251: (byte 4) */
  bytes2word(105,108,101,0)
, bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,58)
, bytes2word(52,57,58,49)
, bytes2word(49,45,52,57)
,	/* ST_v253: (byte 4) */
  bytes2word(58,53,50,0)
, bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,58)
, bytes2word(53,49,58,49)
, bytes2word(56,45,53,49)
,	/* ST_v255: (byte 4) */
  bytes2word(58,50,53,0)
, bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,58)
, bytes2word(53,50,58,50)
, bytes2word(51,45,53,50)
,	/* ST_v245: (byte 4) */
  bytes2word(58,51,51,0)
, bytes2word(73,79,46,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,67)
,	/* ST_v243: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(111,112,101,110)
, bytes2word(70,105,108,101)
,	/* ST_v256: (byte 3) */
  bytes2word(67,35,0,111)
, bytes2word(112,101,110,70)
, bytes2word(105,108,101,32)
, bytes2word(0,0,0,0)
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

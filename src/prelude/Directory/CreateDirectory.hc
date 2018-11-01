#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46octal	((void*)startLabel+8)
#define v266	((void*)startLabel+26)
#define v253	((void*)startLabel+30)
#define v268	((void*)startLabel+46)
#define v261	((void*)startLabel+50)
#define v269	((void*)startLabel+60)
#define v265	((void*)startLabel+64)
#define v258	((void*)startLabel+68)
#define v254	((void*)startLabel+73)
#define v250	((void*)startLabel+78)
#define CT_v270	((void*)startLabel+88)
#define F0_Directory_46octal	((void*)startLabel+96)
#define FN_Directory_46mkdir_35	((void*)startLabel+120)
#define CT_v271	((void*)startLabel+140)
#define F0_Directory_46mkdir_35	((void*)startLabel+148)
#define FN_Directory_46mkdir	((void*)startLabel+160)
#define CT_v272	((void*)startLabel+172)
#define CF_Directory_46mkdir	((void*)startLabel+180)
#define CT_v273	((void*)startLabel+236)
#define FN_LAMBDA248	((void*)startLabel+288)
#define CT_v274	((void*)startLabel+320)
#define F0_LAMBDA248	((void*)startLabel+328)
#define FN_LAMBDA247	((void*)startLabel+368)
#define CT_v275	((void*)startLabel+400)
#define F0_LAMBDA247	((void*)startLabel+408)
#define FN_LAMBDA246	((void*)startLabel+428)
#define CT_v277	((void*)startLabel+448)
#define CF_LAMBDA246	((void*)startLabel+456)
#define FN_LAMBDA245	((void*)startLabel+468)
#define CT_v279	((void*)startLabel+488)
#define CF_LAMBDA245	((void*)startLabel+496)
#define ST_v278	((void*)startLabel+500)
#define ST_v276	((void*)startLabel+505)
extern Node FN_Numeric_46readOct[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
void FR_Directory_46mkdir_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v270)
,	/* FN_Directory_46octal: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v266: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v253: (byte 2) */
  bytes2word(50,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v268: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v261: (byte 2) */
  bytes2word(20,0,POP_I1,PUSH_P1)
, bytes2word(3,EVAL,TABLESWITCH,2)
,	/* v269: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v265: (byte 4) */
  bytes2word(POP_I1,JUMP,6,0)
,	/* v258: (byte 4) */
  bytes2word(POP_I1,PUSH_P1,0,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v254: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v250: (byte 2) */
  bytes2word(2,0,PUSH_INT_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v270: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Directory_46octal: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46octal),1)
, VAPTAG(useLabel(FN_Numeric_46readOct))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v271)
,	/* FN_Directory_46mkdir_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46mkdir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v271: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46mkdir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46mkdir_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v272)
,	/* FN_Directory_46mkdir: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v272: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46mkdir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46mkdir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46mkdir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_Directory_46createDirectory[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v273: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Directory_46createDirectory[] = {
  CAPTAG(useLabel(FN_Directory_46createDirectory),1)
, VAPTAG(useLabel(FN_Directory_46mkdir))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_LAMBDA245))
, VAPTAG(useLabel(FN_Directory_46octal))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA248),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v274)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_INT_N1,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v274: (byte 0) */
  HW(6,2)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA247),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v275)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
,	/* CT_v275: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),2)
, VAPTAG(useLabel(FN_LAMBDA246))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v277)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA246: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA246))
, bytes2word(0,0,0,0)
, useLabel(CT_v279)
,	/* FN_LAMBDA245: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v278)
,	/* CT_v279: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA245: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA245))
,	/* ST_v278: (byte 0) */
  bytes2word(48,55,53,53)
,	/* ST_v276: (byte 1) */
  bytes2word(0,99,114,101)
, bytes2word(97,116,101,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "mkdir" Directory.mkdir# 2 :: PackedString.PackedString -> Prelude.Int -> Prelude.Int */
extern HsInt mkdir(char*,HsInt);
#ifdef PROFILE
static SInfo pf_Directory_46mkdir_35 = {"Directory","Directory.mkdir#","Prelude.Int"};
#endif
C_HEADER(FR_Directory_46mkdir_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = mkdir(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46mkdir_35);
  C_RETURN(nodeptr);
}

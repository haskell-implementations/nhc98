#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46octal	((void*)startLabel+8)
#define v267	((void*)startLabel+30)
#define v253	((void*)startLabel+34)
#define v269	((void*)startLabel+50)
#define v261	((void*)startLabel+54)
#define v270	((void*)startLabel+64)
#define v265	((void*)startLabel+68)
#define v258	((void*)startLabel+72)
#define v254	((void*)startLabel+77)
#define v250	((void*)startLabel+82)
#define CT_v271	((void*)startLabel+100)
#define F0_Directory_46octal	((void*)startLabel+108)
#define FN_Directory_46mkdir_35	((void*)startLabel+132)
#define CT_v273	((void*)startLabel+164)
#define F0_Directory_46mkdir_35	((void*)startLabel+172)
#define FN_Directory_46mkdir	((void*)startLabel+184)
#define CT_v275	((void*)startLabel+208)
#define CF_Directory_46mkdir	((void*)startLabel+216)
#define CT_v277	((void*)startLabel+284)
#define FN_LAMBDA248	((void*)startLabel+336)
#define CT_v279	((void*)startLabel+380)
#define F0_LAMBDA248	((void*)startLabel+388)
#define FN_LAMBDA247	((void*)startLabel+428)
#define CT_v281	((void*)startLabel+472)
#define F0_LAMBDA247	((void*)startLabel+480)
#define FN_LAMBDA246	((void*)startLabel+500)
#define CT_v284	((void*)startLabel+532)
#define CF_LAMBDA246	((void*)startLabel+540)
#define FN_LAMBDA245	((void*)startLabel+552)
#define CT_v287	((void*)startLabel+584)
#define CF_LAMBDA245	((void*)startLabel+592)
#define ST_v286	((void*)startLabel+596)
#define ST_v276	((void*)startLabel+601)
#define ST_v278	((void*)startLabel+627)
#define ST_v285	((void*)startLabel+665)
#define ST_v280	((void*)startLabel+703)
#define ST_v282	((void*)startLabel+741)
#define ST_v274	((void*)startLabel+779)
#define ST_v272	((void*)startLabel+795)
#define ST_v266	((void*)startLabel+812)
#define ST_v283	((void*)startLabel+828)
extern Node TM_Directory[];
extern Node FN_Numeric_46readOct[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
void FR_Directory_46mkdir_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Directory[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v271)
,	/* FN_Directory_46octal: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v267: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v253: (byte 2) */
  bytes2word(50,0,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,UNPACK)
, bytes2word(2,PUSH_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v269: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v261: (byte 2) */
  bytes2word(20,0,POP_I1,PUSH_P1)
, bytes2word(3,EVAL,TABLESWITCH,2)
,	/* v270: (byte 4) */
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
, 180001
, useLabel(ST_v266)
,	/* CT_v271: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Directory_46octal: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46octal),1)
, VAPTAG(useLabel(FN_Numeric_46readOct))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,	/* FN_Directory_46mkdir_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46mkdir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46mkdir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46mkdir_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v275)
,	/* FN_Directory_46mkdir: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v274)
,	/* CT_v275: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46mkdir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46mkdir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46mkdir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v277)
,};
Node FN_Directory_46createDirectory[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
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
, useLabel(CT_v279)
,	/* FN_LAMBDA248: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_INT_N1,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110012
, useLabel(ST_v278)
,	/* CT_v279: (byte 0) */
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
, useLabel(CT_v281)
,	/* FN_LAMBDA247: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, 130023
, useLabel(ST_v280)
,	/* CT_v281: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),2)
, VAPTAG(useLabel(FN_LAMBDA246))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v284)
,	/* FN_LAMBDA246: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v283)
, 140027
, useLabel(ST_v282)
,	/* CT_v284: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA246: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA246))
, bytes2word(0,0,0,0)
, useLabel(CT_v287)
,	/* FN_LAMBDA245: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v286)
, 110040
, useLabel(ST_v285)
,	/* CT_v287: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA245: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA245))
,	/* ST_v286: (byte 0) */
  bytes2word(48,55,53,53)
,	/* ST_v276: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,99)
, bytes2word(114,101,97,116)
, bytes2word(101,68,105,114)
, bytes2word(101,99,116,111)
,	/* ST_v278: (byte 3) */
  bytes2word(114,121,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,99,114,101)
, bytes2word(97,116,101,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(58,49,49,58)
, bytes2word(49,50,45,49)
, bytes2word(49,58,52,54)
,	/* ST_v285: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,99)
, bytes2word(114,101,97,116)
, bytes2word(101,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,58,49)
, bytes2word(49,58,52,48)
, bytes2word(45,49,49,58)
,	/* ST_v280: (byte 3) */
  bytes2word(52,53,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,99,114,101)
, bytes2word(97,116,101,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(58,49,51,58)
, bytes2word(50,51,45,49)
, bytes2word(51,58,51,48)
,	/* ST_v282: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,99)
, bytes2word(114,101,97,116)
, bytes2word(101,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,58,49)
, bytes2word(52,58,50,55)
, bytes2word(45,49,52,58)
,	/* ST_v274: (byte 3) */
  bytes2word(52,51,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,109,107,100)
,	/* ST_v272: (byte 3) */
  bytes2word(105,114,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,109,107,100)
,	/* ST_v266: (byte 4) */
  bytes2word(105,114,35,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,111,99)
,	/* ST_v283: (byte 4) */
  bytes2word(116,97,108,0)
, bytes2word(99,114,101,97)
, bytes2word(116,101,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,0)
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

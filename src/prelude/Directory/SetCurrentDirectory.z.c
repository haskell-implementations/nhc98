#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46chdir_35	((void*)startLabel+8)
#define CT_v227	((void*)startLabel+36)
#define F0_Directory_46chdir_35	((void*)startLabel+44)
#define FN_Directory_46chdir	((void*)startLabel+56)
#define CT_v229	((void*)startLabel+80)
#define CF_Directory_46chdir	((void*)startLabel+88)
#define CT_v231	((void*)startLabel+148)
#define FN_LAMBDA224	((void*)startLabel+192)
#define CT_v233	((void*)startLabel+236)
#define F0_LAMBDA224	((void*)startLabel+244)
#define FN_LAMBDA223	((void*)startLabel+284)
#define CT_v235	((void*)startLabel+328)
#define F0_LAMBDA223	((void*)startLabel+336)
#define FN_LAMBDA222	((void*)startLabel+356)
#define CT_v238	((void*)startLabel+388)
#define CF_LAMBDA222	((void*)startLabel+396)
#define ST_v228	((void*)startLabel+400)
#define ST_v226	((void*)startLabel+416)
#define ST_v230	((void*)startLabel+433)
#define ST_v232	((void*)startLabel+463)
#define ST_v234	((void*)startLabel+505)
#define ST_v236	((void*)startLabel+547)
#define ST_v237	((void*)startLabel+589)
extern Node TM_Directory[];
void FR_Directory_46chdir_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Directory[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v227)
,	/* FN_Directory_46chdir_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46chdir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v226)
,	/* CT_v227: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46chdir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46chdir_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v229)
,	/* FN_Directory_46chdir: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v228)
,	/* CT_v229: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46chdir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46chdir))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46chdir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v231)
,};
Node FN_Directory_46setCurrentDirectory[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v230)
,	/* CT_v231: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_Directory_46setCurrentDirectory[] = {
  CAPTAG(useLabel(FN_Directory_46setCurrentDirectory),1)
, VAPTAG(useLabel(FN_Directory_46chdir))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA224),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v233)
,	/* FN_LAMBDA224: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_INT_N1,1,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100010
, useLabel(ST_v232)
,	/* CT_v233: (byte 0) */
  HW(6,2)
, 0
,	/* F0_LAMBDA224: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA224),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v235)
,	/* FN_LAMBDA223: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, 120022
, useLabel(ST_v234)
,	/* CT_v235: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),2)
, VAPTAG(useLabel(FN_LAMBDA222))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v238)
,	/* FN_LAMBDA222: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v237)
, 130026
, useLabel(ST_v236)
,	/* CT_v238: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA222: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA222))
,	/* ST_v228: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,99,104)
,	/* ST_v226: (byte 4) */
  bytes2word(100,105,114,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,99,104)
, bytes2word(100,105,114,35)
,	/* ST_v230: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,115)
, bytes2word(101,116,67,117)
, bytes2word(114,114,101,110)
, bytes2word(116,68,105,114)
, bytes2word(101,99,116,111)
,	/* ST_v232: (byte 3) */
  bytes2word(114,121,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,115,101,116)
, bytes2word(67,117,114,114)
, bytes2word(101,110,116,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(58,49,48,58)
, bytes2word(49,48,45,49)
, bytes2word(48,58,50,57)
,	/* ST_v234: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,115)
, bytes2word(101,116,67,117)
, bytes2word(114,114,101,110)
, bytes2word(116,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,58,49)
, bytes2word(50,58,50,50)
, bytes2word(45,49,50,58)
,	/* ST_v236: (byte 3) */
  bytes2word(50,57,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,115,101,116)
, bytes2word(67,117,114,114)
, bytes2word(101,110,116,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(58,49,51,58)
, bytes2word(50,54,45,49)
, bytes2word(51,58,52,54)
,	/* ST_v237: (byte 1) */
  bytes2word(0,115,101,116)
, bytes2word(67,117,114,114)
, bytes2word(101,110,116,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "chdir" Directory.chdir# 1 :: PackedString.PackedString -> Prelude.Int */
extern HsInt chdir(char*);
#ifdef PROFILE
static SInfo pf_Directory_46chdir_35 = {"Directory","Directory.chdir#","Prelude.Int"};
#endif
C_HEADER(FR_Directory_46chdir_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = chdir(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46chdir_35);
  C_RETURN(nodeptr);
}

#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46rename_35	((void*)startLabel+12)
#define CT_v235	((void*)startLabel+44)
#define F0_Directory_46rename_35	((void*)startLabel+52)
#define FN_Directory_46rename	((void*)startLabel+64)
#define CT_v237	((void*)startLabel+88)
#define CF_Directory_46rename	((void*)startLabel+96)
#define CT_v239	((void*)startLabel+168)
#define FN_LAMBDA232	((void*)startLabel+212)
#define CT_v241	((void*)startLabel+256)
#define F0_LAMBDA232	((void*)startLabel+264)
#define FN_LAMBDA231	((void*)startLabel+304)
#define CT_v243	((void*)startLabel+360)
#define F0_LAMBDA231	((void*)startLabel+368)
#define FN_LAMBDA230	((void*)startLabel+396)
#define CT_v246	((void*)startLabel+428)
#define CF_LAMBDA230	((void*)startLabel+436)
#define FN_LAMBDA229	((void*)startLabel+448)
#define CT_v249	((void*)startLabel+480)
#define CF_LAMBDA229	((void*)startLabel+488)
#define ST_v245	((void*)startLabel+492)
#define ST_v236	((void*)startLabel+494)
#define ST_v234	((void*)startLabel+511)
#define ST_v238	((void*)startLabel+529)
#define ST_v240	((void*)startLabel+555)
#define ST_v242	((void*)startLabel+593)
#define ST_v247	((void*)startLabel+631)
#define ST_v244	((void*)startLabel+669)
#define ST_v248	((void*)startLabel+707)
extern Node TM_Directory[];
void FR_Directory_46rename_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Directory[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v235)
,	/* FN_Directory_46rename_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46rename_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v234)
,	/* CT_v235: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46rename_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46rename_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v237)
,	/* FN_Directory_46rename: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v236)
,	/* CT_v237: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46rename: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46rename))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46rename_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v239)
,};
Node FN_Directory_46renameDirectory[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG_ARG,2,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Directory_46renameDirectory[] = {
  CAPTAG(useLabel(FN_Directory_46renameDirectory),2)
, VAPTAG(useLabel(FN_Directory_46rename))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA232),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v241)
,	/* FN_LAMBDA232: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_INT_N1,1,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100010
, useLabel(ST_v240)
,	/* CT_v241: (byte 0) */
  HW(6,3)
, 0
,	/* F0_LAMBDA232: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA232),3)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA231),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v243)
,	/* FN_LAMBDA231: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_IN3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, 120021
, useLabel(ST_v242)
,	/* CT_v243: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA231: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA231),3)
, VAPTAG(useLabel(FN_LAMBDA229))
, VAPTAG(useLabel(FN_LAMBDA230))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v246)
,	/* FN_LAMBDA230: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v245)
, 130056
, useLabel(ST_v244)
,	/* CT_v246: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA230: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA230))
, bytes2word(0,0,0,0)
, useLabel(CT_v249)
,	/* FN_LAMBDA229: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v248)
, 130026
, useLabel(ST_v247)
,	/* CT_v249: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA229: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA229))
,	/* ST_v245: (byte 0) */
 	/* ST_v236: (byte 2) */
  bytes2word(34,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(114,101,110,97)
,	/* ST_v234: (byte 3) */
  bytes2word(109,101,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,114,101,110)
, bytes2word(97,109,101,35)
,	/* ST_v238: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,114)
, bytes2word(101,110,97,109)
, bytes2word(101,68,105,114)
, bytes2word(101,99,116,111)
,	/* ST_v240: (byte 3) */
  bytes2word(114,121,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,114,101,110)
, bytes2word(97,109,101,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(58,49,48,58)
, bytes2word(49,48,45,49)
, bytes2word(48,58,52,55)
,	/* ST_v242: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,114)
, bytes2word(101,110,97,109)
, bytes2word(101,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,58,49)
, bytes2word(50,58,50,49)
, bytes2word(45,49,50,58)
,	/* ST_v247: (byte 3) */
  bytes2word(50,56,0,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(46,114,101,110)
, bytes2word(97,109,101,68)
, bytes2word(105,114,101,99)
, bytes2word(116,111,114,121)
, bytes2word(58,49,51,58)
, bytes2word(50,54,45,49)
, bytes2word(51,58,52,56)
,	/* ST_v244: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,114)
, bytes2word(101,110,97,109)
, bytes2word(101,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,58,49)
, bytes2word(51,58,53,54)
, bytes2word(45,49,51,58)
,	/* ST_v248: (byte 3) */
  bytes2word(53,57,0,114)
, bytes2word(101,110,97,109)
, bytes2word(101,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,32,116)
, bytes2word(111,32,34,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "rename" Directory.rename# 2 :: PackedString.PackedString -> PackedString.PackedString -> Prelude.Int */
#ifdef PROFILE
static SInfo pf_Directory_46rename_35 = {"Directory","Directory.rename#","Prelude.Int"};
#endif
C_HEADER(FR_Directory_46rename_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  char* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (char*)nhc_getPackedString(nodeptr);

  result = rename(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46rename_35);
  C_RETURN(nodeptr);
}

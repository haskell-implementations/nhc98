#include "newmacros.h"
#include "runtime.h"

#define FN_System_46primSystem_35	((void*)startLabel+8)
#define CT_v245	((void*)startLabel+36)
#define F0_System_46primSystem_35	((void*)startLabel+44)
#define CT_v247	((void*)startLabel+80)
#define CT_v249	((void*)startLabel+148)
#define FN_LAMBDA242	((void*)startLabel+192)
#define v250	((void*)startLabel+229)
#define v252	((void*)startLabel+246)
#define CT_v255	((void*)startLabel+280)
#define F0_LAMBDA242	((void*)startLabel+288)
#define FN_LAMBDA241	((void*)startLabel+328)
#define CT_v257	((void*)startLabel+380)
#define F0_LAMBDA241	((void*)startLabel+388)
#define FN_LAMBDA240	((void*)startLabel+416)
#define CT_v260	((void*)startLabel+448)
#define CF_LAMBDA240	((void*)startLabel+456)
#define FN_LAMBDA239	((void*)startLabel+468)
#define CT_v263	((void*)startLabel+500)
#define CF_LAMBDA239	((void*)startLabel+508)
#define ST_v259	((void*)startLabel+512)
#define ST_v246	((void*)startLabel+514)
#define ST_v244	((void*)startLabel+532)
#define ST_v248	((void*)startLabel+551)
#define ST_v254	((void*)startLabel+565)
#define ST_v256	((void*)startLabel+591)
#define ST_v261	((void*)startLabel+617)
#define ST_v258	((void*)startLabel+643)
#define ST_v262	((void*)startLabel+669)
extern Node TM_System[];
void FR_System_46primSystem_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_System[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node FN_Prelude_46_124_124[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v245)
,	/* FN_System_46primSystem_35: (byte 0) */
  useLabel(TM_System)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46primSystem_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v244)
,	/* CT_v245: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46primSystem_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46primSystem_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v247)
,};
Node FN_System_46primSystem[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v246)
,	/* CT_v247: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46primSystem[] = {
  VAPTAG(useLabel(FN_System_46primSystem))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_System_46primSystem_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v249)
,};
Node FN_System_46system[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v248)
,	/* CT_v249: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_System_46system[] = {
  CAPTAG(useLabel(FN_System_46system),1)
, VAPTAG(useLabel(FN_System_46primSystem))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA242),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v255)
,	/* FN_LAMBDA242: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_INT_N1,1,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_INT_P1,127,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(13,0,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,4)
,	/* v250: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_INT_P1,0,PUSH_ARG_I2)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,EQ_W)
, bytes2word(JUMPFALSE,9,0,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
,	/* v252: (byte 2) */
  bytes2word(2,RETURN_EVAL,HEAP_CVAL_N1,4)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 100012
, useLabel(ST_v254)
,	/* CT_v255: (byte 0) */
  HW(6,2)
, 0
,	/* F0_LAMBDA242: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA242),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, CAPTAG(useLabel(FN_LAMBDA241),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v257)
,	/* FN_LAMBDA241: (byte 0) */
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
, useLabel(ST_v256)
,	/* CT_v257: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA241: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA241),2)
, VAPTAG(useLabel(FN_LAMBDA239))
, VAPTAG(useLabel(FN_LAMBDA240))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v260)
,	/* FN_LAMBDA240: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v259)
, 130041
, useLabel(ST_v258)
,	/* CT_v260: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA240: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA240))
, bytes2word(0,0,0,0)
, useLabel(CT_v263)
,	/* FN_LAMBDA239: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v262)
, 130023
, useLabel(ST_v261)
,	/* CT_v263: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA239: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA239))
,	/* ST_v259: (byte 0) */
 	/* ST_v246: (byte 2) */
  bytes2word(34,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,112,114,105)
, bytes2word(109,83,121,115)
,	/* ST_v244: (byte 4) */
  bytes2word(116,101,109,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,83)
, bytes2word(121,115,116,101)
,	/* ST_v248: (byte 3) */
  bytes2word(109,35,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,115,121)
, bytes2word(115,116,101,109)
,	/* ST_v254: (byte 1) */
  bytes2word(0,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(115,121,115,116)
, bytes2word(101,109,58,49)
, bytes2word(48,58,49,50)
, bytes2word(45,49,48,58)
,	/* ST_v256: (byte 3) */
  bytes2word(51,55,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,115,121)
, bytes2word(115,116,101,109)
, bytes2word(58,49,50,58)
, bytes2word(49,56,45,49)
, bytes2word(50,58,50,53)
,	/* ST_v261: (byte 1) */
  bytes2word(0,83,121,115)
, bytes2word(116,101,109,46)
, bytes2word(115,121,115,116)
, bytes2word(101,109,58,49)
, bytes2word(51,58,50,51)
, bytes2word(45,49,51,58)
,	/* ST_v258: (byte 3) */
  bytes2word(51,51,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,115,121)
, bytes2word(115,116,101,109)
, bytes2word(58,49,51,58)
, bytes2word(52,49,45,49)
, bytes2word(51,58,52,52)
,	/* ST_v262: (byte 1) */
  bytes2word(0,115,121,115)
, bytes2word(116,101,109,32)
, bytes2word(34,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "system" System.primSystem# 1 :: PackedString.PackedString -> Prelude.Int */
extern HsInt system(char*);
#ifdef PROFILE
static SInfo pf_System_46primSystem_35 = {"System","System.primSystem#","Prelude.Int"};
#endif
C_HEADER(FR_System_46primSystem_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = system(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_System_46primSystem_35);
  C_RETURN(nodeptr);
}

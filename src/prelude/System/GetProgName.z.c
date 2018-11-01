#include "newmacros.h"
#include "runtime.h"

#define FN_System_46primGetProgName_35	((void*)startLabel+8)
#define CT_v202	((void*)startLabel+36)
#define F0_System_46primGetProgName_35	((void*)startLabel+44)
#define CT_v204	((void*)startLabel+80)
#define CT_v206	((void*)startLabel+140)
#define ST_v205	((void*)startLabel+172)
#define ST_v203	((void*)startLabel+191)
#define ST_v201	((void*)startLabel+214)
extern Node TM_System[];
void FR_System_46primGetProgName_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node F0_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v202)
,	/* FN_System_46primGetProgName_35: (byte 0) */
  useLabel(TM_System)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46primGetProgName_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v201)
,	/* CT_v202: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46primGetProgName_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46primGetProgName_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v204)
,};
Node FN_System_46primGetProgName[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v203)
,	/* CT_v204: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46primGetProgName[] = {
  VAPTAG(useLabel(FN_System_46primGetProgName))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_System_46primGetProgName_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v206)
,};
Node FN_System_46getProgName[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v205)
,	/* CT_v206: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_System_46getProgName[] = {
  VAPTAG(useLabel(FN_System_46getProgName))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
, useLabel(F0_CString_46fromCString)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_System_46primGetProgName)
,	/* ST_v205: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,103)
, bytes2word(101,116,80,114)
, bytes2word(111,103,78,97)
,	/* ST_v203: (byte 3) */
  bytes2word(109,101,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,112,114)
, bytes2word(105,109,71,101)
, bytes2word(116,80,114,111)
, bytes2word(103,78,97,109)
,	/* ST_v201: (byte 2) */
  bytes2word(101,0,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,112,114,105)
, bytes2word(109,71,101,116)
, bytes2word(80,114,111,103)
, bytes2word(78,97,109,101)
, bytes2word(35,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primGetProgName" System.primGetProgName# 1 :: Prelude.() -> PackedString.PackedString */
extern char* primGetProgName(void);
#ifdef PROFILE
static SInfo pf_System_46primGetProgName_35 = {"System","System.primGetProgName#","PackedString.PackedString"};
#endif
C_HEADER(FR_System_46primGetProgName_35) {
  NodePtr nodeptr;
  char* result;
  /* void arg1 */;

  result = primGetProgName();

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_System_46primGetProgName_35);
  C_RETURN(nodeptr);
}

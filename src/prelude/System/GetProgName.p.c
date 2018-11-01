#include "newmacros.h"
#include "runtime.h"

#define FN_System_46primGetProgName_35	((void*)startLabel+8)
#define CT_v203	((void*)startLabel+32)
#define F0_System_46primGetProgName_35	((void*)startLabel+40)
#define CT_v207	((void*)startLabel+120)
#define CT_v212	((void*)startLabel+244)
#define ST_v209	((void*)startLabel+292)
#define ST_v205	((void*)startLabel+312)
#define PP_System_46primGetProgName_35	((void*)startLabel+335)
#define PC_System_46primGetProgName_35	((void*)startLabel+335)
#define ST_v202	((void*)startLabel+335)
#define PS_v206	((void*)startLabel+360)
#define PS_v204	((void*)startLabel+372)
#define PS_v210	((void*)startLabel+384)
#define PS_v208	((void*)startLabel+396)
#define PS_v211	((void*)startLabel+408)
#define PS_v201	((void*)startLabel+420)
void FR_System_46primGetProgName_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node F0_CString_46fromCString[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PM_System[];
extern Node PC_NHC_46Internal_46_95mkIOok0[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v203)
,	/* FN_System_46primGetProgName_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_System_46primGetProgName_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
  HW(0,1)
, 0
,	/* F0_System_46primGetProgName_35: (byte 0) */
  CAPTAG(useLabel(FN_System_46primGetProgName_35),1)
, useLabel(PS_v201)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v207)
,};
Node FN_System_46primGetProgName[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v205)
,	/* CT_v207: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_System_46primGetProgName[] = {
  VAPTAG(useLabel(FN_System_46primGetProgName))
, useLabel(PS_v204)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_System_46primGetProgName_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v212)
,};
Node FN_System_46getProgName[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v211)
, 0
, 0
, 0
, 0
, useLabel(PS_v210)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v209)
,	/* CT_v212: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_System_46getProgName[] = {
  VAPTAG(useLabel(FN_System_46getProgName))
, useLabel(PS_v208)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
, useLabel(F0_CString_46fromCString)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_System_46primGetProgName)
,};
Node PP_System_46getProgName[] = {
 };
Node PC_System_46getProgName[] = {
 	/* ST_v209: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,103)
, bytes2word(101,116,80,114)
, bytes2word(111,103,78,97)
, bytes2word(109,101,0,0)
,};
Node PP_System_46primGetProgName[] = {
 };
Node PC_System_46primGetProgName[] = {
 	/* ST_v205: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,71)
, bytes2word(101,116,80,114)
, bytes2word(111,103,78,97)
,	/* PP_System_46primGetProgName_35: (byte 3) */
 	/* PC_System_46primGetProgName_35: (byte 3) */
 	/* ST_v202: (byte 3) */
  bytes2word(109,101,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,112,114)
, bytes2word(105,109,71,101)
, bytes2word(116,80,114,111)
, bytes2word(103,78,97,109)
, bytes2word(101,35,0,0)
,	/* PS_v206: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primGetProgName)
, useLabel(PC_NHC_46Internal_46_95mkIOok0)
,	/* PS_v204: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primGetProgName)
, useLabel(PC_System_46primGetProgName)
,	/* PS_v210: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getProgName)
, useLabel(PC_Prelude_46_46)
,	/* PS_v208: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getProgName)
, useLabel(PC_System_46getProgName)
,	/* PS_v211: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46getProgName)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v201: (byte 0) */
  useLabel(PM_System)
, useLabel(PP_System_46primGetProgName_35)
, useLabel(PC_System_46primGetProgName_35)
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

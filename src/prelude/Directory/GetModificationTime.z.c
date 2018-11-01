#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95primGetModTime_35	((void*)startLabel+8)
#define CT_v227	((void*)startLabel+36)
#define F0_Directory_46hs_95primGetModTime_35	((void*)startLabel+44)
#define FN_Directory_46hs_95primGetModTime	((void*)startLabel+56)
#define CT_v229	((void*)startLabel+80)
#define CF_Directory_46hs_95primGetModTime	((void*)startLabel+88)
#define FN_Directory_46primGetModTime	((void*)startLabel+108)
#define CT_v231	((void*)startLabel+148)
#define F0_Directory_46primGetModTime	((void*)startLabel+156)
#define FN_LAMBDA223	((void*)startLabel+188)
#define CT_v236	((void*)startLabel+232)
#define F0_LAMBDA223	((void*)startLabel+240)
#define CT_v238	((void*)startLabel+284)
#define FN_LAMBDA224	((void*)startLabel+316)
#define CT_v241	((void*)startLabel+348)
#define CF_LAMBDA224	((void*)startLabel+356)
#define ST_v237	((void*)startLabel+360)
#define ST_v239	((void*)startLabel+390)
#define ST_v228	((void*)startLabel+432)
#define ST_v226	((void*)startLabel+460)
#define ST_v230	((void*)startLabel+489)
#define ST_v234	((void*)startLabel+514)
#define ST_v240	((void*)startLabel+551)
extern Node TM_Directory[];
void FR_Directory_46hs_95primGetModTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Directory[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Directory_46patchIOErrorFVal[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v227)
,	/* FN_Directory_46hs_95primGetModTime_35: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95primGetModTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v226)
,	/* CT_v227: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95primGetModTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95primGetModTime_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v229)
,	/* FN_Directory_46hs_95primGetModTime: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v228)
,	/* CT_v229: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95primGetModTime: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95primGetModTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95primGetModTime_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v231)
,	/* FN_Directory_46primGetModTime: (byte 0) */
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v230)
,	/* CT_v231: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Directory_46primGetModTime: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46primGetModTime),1)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95primGetModTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v236)
,	/* FN_LAMBDA223: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_IN3,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,4,HEAP_P1,0)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,1,0)
, 130020
, useLabel(ST_v234)
,	/* CT_v236: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_Directory_46getModificationTime[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 190001
, useLabel(ST_v237)
,	/* CT_v238: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Directory_46getModificationTime[] = {
  CAPTAG(useLabel(FN_Directory_46getModificationTime),1)
, VAPTAG(useLabel(FN_LAMBDA224))
, VAPTAG(useLabel(FN_Directory_46patchIOErrorFVal))
, useLabel(F0_Directory_46primGetModTime)
, bytes2word(0,0,0,0)
, useLabel(CT_v241)
,	/* FN_LAMBDA224: (byte 0) */
  useLabel(TMSUB_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v240)
, 190043
, useLabel(ST_v239)
,	/* CT_v241: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA224: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA224))
,	/* ST_v237: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,103,101)
, bytes2word(116,77,111,100)
, bytes2word(105,102,105,99)
, bytes2word(97,116,105,111)
, bytes2word(110,84,105,109)
,	/* ST_v239: (byte 2) */
  bytes2word(101,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(103,101,116,77)
, bytes2word(111,100,105,102)
, bytes2word(105,99,97,116)
, bytes2word(105,111,110,84)
, bytes2word(105,109,101,58)
, bytes2word(49,57,58,52)
, bytes2word(51,45,49,57)
,	/* ST_v228: (byte 4) */
  bytes2word(58,54,51,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,112,114,105)
, bytes2word(109,71,101,116)
, bytes2word(77,111,100,84)
,	/* ST_v226: (byte 4) */
  bytes2word(105,109,101,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,112,114,105)
, bytes2word(109,71,101,116)
, bytes2word(77,111,100,84)
, bytes2word(105,109,101,35)
,	/* ST_v230: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,112)
, bytes2word(114,105,109,71)
, bytes2word(101,116,77,111)
, bytes2word(100,84,105,109)
,	/* ST_v234: (byte 2) */
  bytes2word(101,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(112,114,105,109)
, bytes2word(71,101,116,77)
, bytes2word(111,100,84,105)
, bytes2word(109,101,58,49)
, bytes2word(51,58,50,48)
, bytes2word(45,49,51,58)
,	/* ST_v240: (byte 3) */
  bytes2word(51,57,0,103)
, bytes2word(101,116,77,111)
, bytes2word(100,105,102,105)
, bytes2word(99,97,116,105)
, bytes2word(111,110,84,105)
, bytes2word(109,101,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_primGetModTime" Directory.hs_primGetModTime# 1 :: PackedString.PackedString -> Prelude.2 */
extern Node* hs_primGetModTime(char*);
#ifdef PROFILE
static SInfo pf_Directory_46hs_95primGetModTime_35 = {"Directory","Directory.hs_primGetModTime#","Prelude.2"};
#endif
C_HEADER(FR_Directory_46hs_95primGetModTime_35) {
  NodePtr nodeptr;
  Node* result;
  char* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);

  result = hs_primGetModTime(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Directory_46hs_95primGetModTime_35);
  C_RETURN(nodeptr);
}

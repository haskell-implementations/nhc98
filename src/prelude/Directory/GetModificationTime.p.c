#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46hs_95primGetModTime_35	((void*)startLabel+8)
#define CT_v228	((void*)startLabel+32)
#define F0_Directory_46hs_95primGetModTime_35	((void*)startLabel+40)
#define FN_Directory_46hs_95primGetModTime	((void*)startLabel+68)
#define CT_v232	((void*)startLabel+120)
#define CF_Directory_46hs_95primGetModTime	((void*)startLabel+128)
#define FN_Directory_46primGetModTime	((void*)startLabel+164)
#define CT_v240	((void*)startLabel+332)
#define F0_Directory_46primGetModTime	((void*)startLabel+340)
#define FN_LAMBDA223	((void*)startLabel+388)
#define CT_v249	((void*)startLabel+544)
#define F0_LAMBDA223	((void*)startLabel+552)
#define CT_v254	((void*)startLabel+660)
#define FN_LAMBDA224	((void*)startLabel+708)
#define CT_v258	((void*)startLabel+752)
#define CF_LAMBDA224	((void*)startLabel+760)
#define ST_v251	((void*)startLabel+780)
#define PP_LAMBDA224	((void*)startLabel+810)
#define PC_LAMBDA224	((void*)startLabel+810)
#define ST_v256	((void*)startLabel+810)
#define PP_Directory_46hs_95primGetModTime	((void*)startLabel+852)
#define PC_Directory_46hs_95primGetModTime	((void*)startLabel+852)
#define ST_v230	((void*)startLabel+852)
#define PP_Directory_46hs_95primGetModTime_35	((void*)startLabel+880)
#define PC_Directory_46hs_95primGetModTime_35	((void*)startLabel+880)
#define ST_v227	((void*)startLabel+880)
#define PP_Directory_46primGetModTime	((void*)startLabel+909)
#define PC_Directory_46primGetModTime	((void*)startLabel+909)
#define ST_v234	((void*)startLabel+909)
#define PP_LAMBDA223	((void*)startLabel+934)
#define PC_LAMBDA223	((void*)startLabel+934)
#define ST_v244	((void*)startLabel+934)
#define ST_v257	((void*)startLabel+971)
#define PS_v231	((void*)startLabel+992)
#define PS_v229	((void*)startLabel+1004)
#define PS_v235	((void*)startLabel+1016)
#define PS_v237	((void*)startLabel+1028)
#define PS_v236	((void*)startLabel+1040)
#define PS_v233	((void*)startLabel+1052)
#define PS_v239	((void*)startLabel+1064)
#define PS_v238	((void*)startLabel+1076)
#define PS_v253	((void*)startLabel+1088)
#define PS_v250	((void*)startLabel+1100)
#define PS_v252	((void*)startLabel+1112)
#define PS_v226	((void*)startLabel+1124)
#define PS_v246	((void*)startLabel+1136)
#define PS_v247	((void*)startLabel+1148)
#define PS_v248	((void*)startLabel+1160)
#define PS_v243	((void*)startLabel+1172)
#define PS_v255	((void*)startLabel+1184)
void FR_Directory_46hs_95primGetModTime_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Directory_46patchIOErrorFVal[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_CString_46toCString[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Directory_46patchIOErrorFVal[];
extern Node PC_Time_46CT[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v228)
,	/* FN_Directory_46hs_95primGetModTime_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46hs_95primGetModTime_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46hs_95primGetModTime_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46hs_95primGetModTime_35),1)
, useLabel(PS_v226)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v232)
,	/* FN_Directory_46hs_95primGetModTime: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v231)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v230)
,	/* CT_v232: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46hs_95primGetModTime: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46hs_95primGetModTime))
, useLabel(PS_v229)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46hs_95primGetModTime_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v240)
,	/* FN_Directory_46primGetModTime: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v239)
, 0
, 0
, 0
, 0
, useLabel(PS_v238)
, 0
, 0
, 0
, 0
, useLabel(PS_v237)
, 0
, 0
, 0
, 0
, useLabel(PS_v236)
, 0
, 0
, 0
, 0
, useLabel(PS_v235)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v234)
,	/* CT_v240: (byte 0) */
  HW(5,1)
, 0
,	/* F0_Directory_46primGetModTime: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46primGetModTime),1)
, useLabel(PS_v233)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Directory_46hs_95primGetModTime))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v249)
,	/* FN_LAMBDA223: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v248)
, 0
, 0
, 0
, 0
, useLabel(PS_v247)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v246)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 130020
, useLabel(ST_v244)
,	/* CT_v249: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),1)
, useLabel(PS_v243)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v254)
,};
Node FN_Directory_46getModificationTime[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v253)
, 0
, 0
, 0
, 0
, useLabel(PS_v252)
, 0
, 0
, 0
, 0
, 190001
, useLabel(ST_v251)
,	/* CT_v254: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Directory_46getModificationTime[] = {
  CAPTAG(useLabel(FN_Directory_46getModificationTime),1)
, useLabel(PS_v250)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA224))
, VAPTAG(useLabel(FN_Directory_46patchIOErrorFVal))
, useLabel(F0_Directory_46primGetModTime)
, bytes2word(0,0,0,0)
, useLabel(CT_v258)
,	/* FN_LAMBDA224: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v257)
, 190043
, useLabel(ST_v256)
,	/* CT_v258: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA224: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA224))
, useLabel(PS_v255)
, 0
, 0
, 0
,};
Node PP_Directory_46getModificationTime[] = {
 };
Node PC_Directory_46getModificationTime[] = {
 	/* ST_v251: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,103,101)
, bytes2word(116,77,111,100)
, bytes2word(105,102,105,99)
, bytes2word(97,116,105,111)
, bytes2word(110,84,105,109)
,	/* PP_LAMBDA224: (byte 2) */
 	/* PC_LAMBDA224: (byte 2) */
 	/* ST_v256: (byte 2) */
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
,	/* PP_Directory_46hs_95primGetModTime: (byte 4) */
 	/* PC_Directory_46hs_95primGetModTime: (byte 4) */
 	/* ST_v230: (byte 4) */
  bytes2word(58,54,51,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,112,114,105)
, bytes2word(109,71,101,116)
, bytes2word(77,111,100,84)
,	/* PP_Directory_46hs_95primGetModTime_35: (byte 4) */
 	/* PC_Directory_46hs_95primGetModTime_35: (byte 4) */
 	/* ST_v227: (byte 4) */
  bytes2word(105,109,101,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,104,115)
, bytes2word(95,112,114,105)
, bytes2word(109,71,101,116)
, bytes2word(77,111,100,84)
, bytes2word(105,109,101,35)
,	/* PP_Directory_46primGetModTime: (byte 1) */
 	/* PC_Directory_46primGetModTime: (byte 1) */
 	/* ST_v234: (byte 1) */
  bytes2word(0,68,105,114)
, bytes2word(101,99,116,111)
, bytes2word(114,121,46,112)
, bytes2word(114,105,109,71)
, bytes2word(101,116,77,111)
, bytes2word(100,84,105,109)
,	/* PP_LAMBDA223: (byte 2) */
 	/* PC_LAMBDA223: (byte 2) */
 	/* ST_v244: (byte 2) */
  bytes2word(101,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(112,114,105,109)
, bytes2word(71,101,116,77)
, bytes2word(111,100,84,105)
, bytes2word(109,101,58,49)
, bytes2word(51,58,50,48)
, bytes2word(45,49,51,58)
,	/* ST_v257: (byte 3) */
  bytes2word(51,57,0,103)
, bytes2word(101,116,77,111)
, bytes2word(100,105,102,105)
, bytes2word(99,97,116,105)
, bytes2word(111,110,84,105)
, bytes2word(109,101,0,0)
,	/* PS_v231: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95primGetModTime)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v229: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95primGetModTime)
, useLabel(PC_Directory_46hs_95primGetModTime)
,	/* PS_v235: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46primGetModTime)
, useLabel(PC_CString_46toCString)
,	/* PS_v237: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46primGetModTime)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v236: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46primGetModTime)
, useLabel(PC_Directory_46hs_95primGetModTime)
,	/* PS_v233: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46primGetModTime)
, useLabel(PC_Directory_46primGetModTime)
,	/* PS_v239: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46primGetModTime)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v238: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46primGetModTime)
, useLabel(PC_LAMBDA223)
,	/* PS_v253: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getModificationTime)
, useLabel(PC_Directory_46patchIOErrorFVal)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getModificationTime)
, useLabel(PC_Directory_46getModificationTime)
,	/* PS_v252: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46getModificationTime)
, useLabel(PC_LAMBDA224)
,	/* PS_v226: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46hs_95primGetModTime_35)
, useLabel(PC_Directory_46hs_95primGetModTime_35)
,	/* PS_v246: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Time_46CT)
,	/* PS_v247: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Prelude_462)
,	/* PS_v248: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v243: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_LAMBDA223)
,	/* PS_v255: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA224)
, useLabel(PC_LAMBDA224)
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

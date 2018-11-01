#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46chdir_35	((void*)startLabel+8)
#define CT_v228	((void*)startLabel+32)
#define F0_Directory_46chdir_35	((void*)startLabel+40)
#define FN_Directory_46chdir	((void*)startLabel+68)
#define CT_v232	((void*)startLabel+120)
#define CF_Directory_46chdir	((void*)startLabel+128)
#define CT_v240	((void*)startLabel+332)
#define FN_LAMBDA224	((void*)startLabel+392)
#define CT_v247	((void*)startLabel+532)
#define F0_LAMBDA224	((void*)startLabel+540)
#define FN_LAMBDA223	((void*)startLabel+596)
#define CT_v254	((void*)startLabel+772)
#define F0_LAMBDA223	((void*)startLabel+780)
#define FN_LAMBDA222	((void*)startLabel+816)
#define CT_v258	((void*)startLabel+860)
#define CF_LAMBDA222	((void*)startLabel+868)
#define PP_Directory_46chdir	((void*)startLabel+888)
#define PC_Directory_46chdir	((void*)startLabel+888)
#define ST_v230	((void*)startLabel+888)
#define PP_Directory_46chdir_35	((void*)startLabel+904)
#define PC_Directory_46chdir_35	((void*)startLabel+904)
#define ST_v227	((void*)startLabel+904)
#define ST_v234	((void*)startLabel+924)
#define PP_LAMBDA224	((void*)startLabel+954)
#define PC_LAMBDA224	((void*)startLabel+954)
#define ST_v242	((void*)startLabel+954)
#define PP_LAMBDA223	((void*)startLabel+996)
#define PC_LAMBDA223	((void*)startLabel+996)
#define ST_v249	((void*)startLabel+996)
#define PP_LAMBDA222	((void*)startLabel+1038)
#define PC_LAMBDA222	((void*)startLabel+1038)
#define ST_v256	((void*)startLabel+1038)
#define ST_v257	((void*)startLabel+1080)
#define PS_v231	((void*)startLabel+1100)
#define PS_v229	((void*)startLabel+1112)
#define PS_v236	((void*)startLabel+1124)
#define PS_v237	((void*)startLabel+1136)
#define PS_v235	((void*)startLabel+1148)
#define PS_v233	((void*)startLabel+1160)
#define PS_v239	((void*)startLabel+1172)
#define PS_v238	((void*)startLabel+1184)
#define PS_v226	((void*)startLabel+1196)
#define PS_v255	((void*)startLabel+1208)
#define PS_v253	((void*)startLabel+1220)
#define PS_v252	((void*)startLabel+1232)
#define PS_v251	((void*)startLabel+1244)
#define PS_v250	((void*)startLabel+1256)
#define PS_v248	((void*)startLabel+1268)
#define PS_v246	((void*)startLabel+1280)
#define PS_v245	((void*)startLabel+1292)
#define PS_v243	((void*)startLabel+1304)
#define PS_v244	((void*)startLabel+1316)
#define PS_v241	((void*)startLabel+1328)
void FR_Directory_46chdir_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_Directory[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_CString_46toCString[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Monad_46when[];
extern Node PC_Prelude_46Eq_46Prelude_46Int_46_61_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v228)
,	/* FN_Directory_46chdir_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Directory_46chdir_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Directory_46chdir_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46chdir_35),1)
, useLabel(PS_v226)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v232)
,	/* FN_Directory_46chdir: (byte 0) */
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
, 60001
, useLabel(ST_v230)
,	/* CT_v232: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46chdir: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46chdir))
, useLabel(PS_v229)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Directory_46chdir_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v240)
,};
Node FN_Directory_46setCurrentDirectory[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
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
, 90001
, useLabel(ST_v234)
,	/* CT_v240: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_Directory_46setCurrentDirectory[] = {
  CAPTAG(useLabel(FN_Directory_46setCurrentDirectory),1)
, useLabel(PS_v233)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Directory_46chdir))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA224),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v247)
,	/* FN_LAMBDA224: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_INT_N1,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,26)
, bytes2word(HEAP_OFF_N1,14,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v246)
, 0
, 0
, 0
, 0
, useLabel(PS_v245)
, 0
, 0
, 0
, 0
, useLabel(PS_v244)
, 0
, 0
, 0
, 0
, useLabel(PS_v243)
, 0
, 0
, 0
, 0
, 100010
, useLabel(ST_v242)
,	/* CT_v247: (byte 0) */
  HW(6,2)
, 0
,	/* F0_LAMBDA224: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA224),2)
, useLabel(PS_v241)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,	/* FN_LAMBDA223: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v250)
, 0
, 0
, 0
, 0
, 120022
, useLabel(ST_v249)
,	/* CT_v254: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),2)
, useLabel(PS_v248)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA222))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v258)
,	/* FN_LAMBDA222: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v257)
, 130026
, useLabel(ST_v256)
,	/* CT_v258: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA222: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA222))
, useLabel(PS_v255)
, 0
, 0
, 0
,	/* PP_Directory_46chdir: (byte 0) */
 	/* PC_Directory_46chdir: (byte 0) */
 	/* ST_v230: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,99,104)
,	/* PP_Directory_46chdir_35: (byte 4) */
 	/* PC_Directory_46chdir_35: (byte 4) */
 	/* ST_v227: (byte 4) */
  bytes2word(100,105,114,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,99,104)
, bytes2word(100,105,114,35)
, bytes2word(0,0,0,0)
,};
Node PP_Directory_46setCurrentDirectory[] = {
 };
Node PC_Directory_46setCurrentDirectory[] = {
 	/* ST_v234: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,115,101)
, bytes2word(116,67,117,114)
, bytes2word(114,101,110,116)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
,	/* PP_LAMBDA224: (byte 2) */
 	/* PC_LAMBDA224: (byte 2) */
 	/* ST_v242: (byte 2) */
  bytes2word(121,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(115,101,116,67)
, bytes2word(117,114,114,101)
, bytes2word(110,116,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,58)
, bytes2word(49,48,58,49)
, bytes2word(48,45,49,48)
,	/* PP_LAMBDA223: (byte 4) */
 	/* PC_LAMBDA223: (byte 4) */
 	/* ST_v249: (byte 4) */
  bytes2word(58,50,57,0)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,115,101)
, bytes2word(116,67,117,114)
, bytes2word(114,101,110,116)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,58,49,50)
, bytes2word(58,50,50,45)
, bytes2word(49,50,58,50)
,	/* PP_LAMBDA222: (byte 2) */
 	/* PC_LAMBDA222: (byte 2) */
 	/* ST_v256: (byte 2) */
  bytes2word(57,0,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,46)
, bytes2word(115,101,116,67)
, bytes2word(117,114,114,101)
, bytes2word(110,116,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,58)
, bytes2word(49,51,58,50)
, bytes2word(54,45,49,51)
,	/* ST_v257: (byte 4) */
  bytes2word(58,52,54,0)
, bytes2word(115,101,116,67)
, bytes2word(117,114,114,101)
, bytes2word(110,116,68,105)
, bytes2word(114,101,99,116)
, bytes2word(111,114,121,0)
,	/* PS_v231: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46chdir)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v229: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46chdir)
, useLabel(PC_Directory_46chdir)
,	/* PS_v236: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setCurrentDirectory)
, useLabel(PC_CString_46toCString)
,	/* PS_v237: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setCurrentDirectory)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v235: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setCurrentDirectory)
, useLabel(PC_Directory_46chdir)
,	/* PS_v233: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setCurrentDirectory)
, useLabel(PC_Directory_46setCurrentDirectory)
,	/* PS_v239: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setCurrentDirectory)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v238: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46setCurrentDirectory)
, useLabel(PC_LAMBDA224)
,	/* PS_v226: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_Directory_46chdir_35)
, useLabel(PC_Directory_46chdir_35)
,	/* PS_v255: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA222)
, useLabel(PC_LAMBDA222)
,	/* PS_v253: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v252: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v251: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Prelude_46Just)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_LAMBDA222)
,	/* PS_v248: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA223)
, useLabel(PC_LAMBDA223)
,	/* PS_v246: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA224)
, useLabel(PC_Monad_46when)
,	/* PS_v245: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA224)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v243: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA224)
, useLabel(PC_Prelude_46Eq_46Prelude_46Int_46_61_61)
,	/* PS_v244: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA224)
, useLabel(PC_LAMBDA223)
,	/* PS_v241: (byte 0) */
  useLabel(PM_Directory)
, useLabel(PP_LAMBDA224)
, useLabel(PC_LAMBDA224)
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

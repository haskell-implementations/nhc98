#include "newmacros.h"
#include "runtime.h"

#define PS_NHC_46FFI_46_95E	((void*)startLabel+16)
#define CT_v238	((void*)startLabel+136)
#define CT_v241	((void*)startLabel+200)
#define CT_v245	((void*)startLabel+300)
#define FN_NHC_46FFI_46reallyFreeForeignObj	((void*)startLabel+340)
#define CT_v248	((void*)startLabel+364)
#define F0_NHC_46FFI_46reallyFreeForeignObj	((void*)startLabel+372)
#define CT_v252	((void*)startLabel+456)
#define FN_NHC_46FFI_46primForeignObjC_35	((void*)startLabel+504)
#define CT_v255	((void*)startLabel+532)
#define F0_NHC_46FFI_46primForeignObjC_35	((void*)startLabel+540)
#define FN_NHC_46FFI_46primForeignObjC	((void*)startLabel+568)
#define CT_v259	((void*)startLabel+620)
#define CF_NHC_46FFI_46primForeignObjC	((void*)startLabel+628)
#define CT_v265	((void*)startLabel+804)
#define CT_v268	((void*)startLabel+868)
#define ST_v240	((void*)startLabel+900)
#define ST_v250	((void*)startLabel+928)
#define ST_v261	((void*)startLabel+952)
#define ST_v267	((void*)startLabel+976)
#define PP_NHC_46FFI_46primForeignObjC	((void*)startLabel+998)
#define PC_NHC_46FFI_46primForeignObjC	((void*)startLabel+998)
#define ST_v257	((void*)startLabel+998)
#define PP_NHC_46FFI_46primForeignObjC_35	((void*)startLabel+1022)
#define PC_NHC_46FFI_46primForeignObjC_35	((void*)startLabel+1022)
#define ST_v254	((void*)startLabel+1022)
#define PP_NHC_46FFI_46reallyFreeForeignObj	((void*)startLabel+1047)
#define PC_NHC_46FFI_46reallyFreeForeignObj	((void*)startLabel+1047)
#define ST_v247	((void*)startLabel+1047)
#define ST_v235	((void*)startLabel+1076)
#define ST_v243	((void*)startLabel+1100)
#define PS_v262	((void*)startLabel+1124)
#define PS_v263	((void*)startLabel+1136)
#define PS_v260	((void*)startLabel+1148)
#define PS_v264	((void*)startLabel+1160)
#define PS_v266	((void*)startLabel+1172)
#define PS_v258	((void*)startLabel+1184)
#define PS_v256	((void*)startLabel+1196)
#define PS_v239	((void*)startLabel+1208)
#define PS_v251	((void*)startLabel+1220)
#define PS_v249	((void*)startLabel+1232)
#define PS_v246	((void*)startLabel+1244)
#define PS_v244	((void*)startLabel+1256)
#define PS_v242	((void*)startLabel+1268)
#define PS_v236	((void*)startLabel+1280)
#define PS_v234	((void*)startLabel+1292)
#define PS_v237	((void*)startLabel+1304)
#define PS_v253	((void*)startLabel+1316)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
void FR_NHC_46FFI_46foreignObjToAddr(void);
extern void *reallyFreeForeignObj();
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_NHC_46FFI_46primForeignObjC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46unsafePerformIO[];
extern Node PM_NHC_46FFI[];
extern Node PC_NHC_46Internal_46unsafePerformIO[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  42
,};
Node PP_NHC_46FFI_46_95E[] = {
 };
Node PC_NHC_46FFI_46_95E[] = {
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(95,69,0,0)
,	/* PS_NHC_46FFI_46_95E: (byte 0) */
  useLabel(PP_NHC_46FFI_46_95E)
, useLabel(PP_NHC_46FFI_46_95E)
, useLabel(PC_NHC_46FFI_46_95E)
, bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_NHC_46FFI_46touchForeignObj[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 770001
, useLabel(ST_v235)
,	/* CT_v238: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46touchForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46touchForeignObj),1)
, useLabel(PS_v234)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v241)
,};
Node FN_NHC_46FFI_46foreignObjToAddr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46foreignObjToAddr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 430001
, useLabel(ST_v240)
,	/* CT_v241: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46foreignObjToAddr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46foreignObjToAddr),1)
, useLabel(PS_v239)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v245)
,};
Node FN_NHC_46FFI_46withForeignObj[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v244)
, 0
, 0
, 0
, 0
, 650001
, useLabel(ST_v243)
,	/* CT_v245: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46withForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46withForeignObj),2)
, useLabel(PS_v242)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46foreignObjToAddr))
, bytes2word(1,0,0,1)
, useLabel(CT_v248)
,	/* FN_NHC_46FFI_46reallyFreeForeignObj: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(reallyFreeForeignObj)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 600001
, useLabel(ST_v247)
,	/* CT_v248: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46reallyFreeForeignObj: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46reallyFreeForeignObj),1)
, useLabel(PS_v246)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v252)
,};
Node FN_NHC_46FFI_46freeForeignObj[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, 530001
, useLabel(ST_v250)
,	/* CT_v252: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46freeForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46freeForeignObj),1)
, useLabel(PS_v249)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46reallyFreeForeignObj)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v255)
,	/* FN_NHC_46FFI_46primForeignObjC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primForeignObjC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 390001
, useLabel(ST_v254)
,	/* CT_v255: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primForeignObjC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC_35),2)
, useLabel(PS_v253)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v259)
,	/* FN_NHC_46FFI_46primForeignObjC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v258)
, 0
, 0
, 0
, 0
, 390001
, useLabel(ST_v257)
,	/* CT_v259: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46primForeignObjC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC))
, useLabel(PS_v256)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46FFI_46primForeignObjC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v265)
,};
Node FN_NHC_46FFI_46makeForeignObj[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(PUSH_P1,0,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v262)
, 0
, 0
, 0
, 0
, 260001
, useLabel(ST_v261)
,	/* CT_v265: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46makeForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46makeForeignObj),2)
, useLabel(PS_v260)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46unsafePerformIO))
, VAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC))
, bytes2word(0,0,0,0)
, useLabel(CT_v268)
,};
Node FN_NHC_46FFI_46newForeignObj[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 300001
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46FFI_46newForeignObj[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46newForeignObj))
, useLabel(PS_v266)
, 0
, 0
, 0
, useLabel(F0_NHC_46FFI_46makeForeignObj)
,};
Node PP_NHC_46FFI_46foreignObjToAddr[] = {
 };
Node PC_NHC_46FFI_46foreignObjToAddr[] = {
 	/* ST_v240: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(102,111,114,101)
, bytes2word(105,103,110,79)
, bytes2word(98,106,84,111)
, bytes2word(65,100,100,114)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46FFI_46freeForeignObj[] = {
 };
Node PC_NHC_46FFI_46freeForeignObj[] = {
 	/* ST_v250: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(102,114,101,101)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,79)
, bytes2word(98,106,0,0)
,};
Node PP_NHC_46FFI_46makeForeignObj[] = {
 };
Node PC_NHC_46FFI_46makeForeignObj[] = {
 	/* ST_v261: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(109,97,107,101)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,79)
, bytes2word(98,106,0,0)
,};
Node PP_NHC_46FFI_46newForeignObj[] = {
 };
Node PC_NHC_46FFI_46newForeignObj[] = {
 	/* ST_v267: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(110,101,119,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,79,98)
,	/* PP_NHC_46FFI_46primForeignObjC: (byte 2) */
 	/* PC_NHC_46FFI_46primForeignObjC: (byte 2) */
 	/* ST_v257: (byte 2) */
  bytes2word(106,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,112,114)
, bytes2word(105,109,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,79,98,106)
,	/* PP_NHC_46FFI_46primForeignObjC_35: (byte 2) */
 	/* PC_NHC_46FFI_46primForeignObjC_35: (byte 2) */
 	/* ST_v254: (byte 2) */
  bytes2word(67,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,112,114)
, bytes2word(105,109,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,79,98,106)
,	/* PP_NHC_46FFI_46reallyFreeForeignObj: (byte 3) */
 	/* PC_NHC_46FFI_46reallyFreeForeignObj: (byte 3) */
 	/* ST_v247: (byte 3) */
  bytes2word(67,35,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,114)
, bytes2word(101,97,108,108)
, bytes2word(121,70,114,101)
, bytes2word(101,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(79,98,106,0)
,};
Node PP_NHC_46FFI_46touchForeignObj[] = {
 };
Node PC_NHC_46FFI_46touchForeignObj[] = {
 	/* ST_v235: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(116,111,117,99)
, bytes2word(104,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(79,98,106,0)
,};
Node PP_NHC_46FFI_46withForeignObj[] = {
 };
Node PC_NHC_46FFI_46withForeignObj[] = {
 	/* ST_v243: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(119,105,116,104)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,79)
, bytes2word(98,106,0,0)
,	/* PS_v262: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46makeForeignObj)
, useLabel(PC_NHC_46Internal_46unsafePerformIO)
,	/* PS_v263: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46makeForeignObj)
, useLabel(PC_NHC_46FFI_46_95E)
,	/* PS_v260: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46makeForeignObj)
, useLabel(PC_NHC_46FFI_46makeForeignObj)
,	/* PS_v264: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46makeForeignObj)
, useLabel(PC_NHC_46FFI_46primForeignObjC)
,	/* PS_v266: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46newForeignObj)
, useLabel(PC_NHC_46FFI_46newForeignObj)
,	/* PS_v258: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46primForeignObjC)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v256: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46primForeignObjC)
, useLabel(PC_NHC_46FFI_46primForeignObjC)
,	/* PS_v239: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46foreignObjToAddr)
, useLabel(PC_NHC_46FFI_46foreignObjToAddr)
,	/* PS_v251: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46freeForeignObj)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v249: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46freeForeignObj)
, useLabel(PC_NHC_46FFI_46freeForeignObj)
,	/* PS_v246: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46reallyFreeForeignObj)
, useLabel(PC_NHC_46FFI_46reallyFreeForeignObj)
,	/* PS_v244: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46withForeignObj)
, useLabel(PC_NHC_46FFI_46foreignObjToAddr)
,	/* PS_v242: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46withForeignObj)
, useLabel(PC_NHC_46FFI_46withForeignObj)
,	/* PS_v236: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46touchForeignObj)
, useLabel(PC__40_41)
,	/* PS_v234: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46touchForeignObj)
, useLabel(PC_NHC_46FFI_46touchForeignObj)
,	/* PS_v237: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46touchForeignObj)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v253: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46primForeignObjC_35)
, useLabel(PC_NHC_46FFI_46primForeignObjC_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "foreignObjToAddr" NHC.FFI.foreignObjToAddr 1 :: FFI.ForeignObj -> FFI.Addr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46foreignObjToAddr = {"NHC.FFI","NHC.FFI.foreignObjToAddr","FFI.Addr"};
#endif
C_HEADER(FR_NHC_46FFI_46foreignObjToAddr) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46foreignObjToAddr);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primForeignObjC" NHC.FFI.primForeignObjC# 2 :: FFI.Addr -> 1 -> FFI.ForeignObj */
extern void* primForeignObjC(void*,Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primForeignObjC_35 = {"NHC.FFI","NHC.FFI.primForeignObjC#","FFI.ForeignObj"};
#endif
C_HEADER(FR_NHC_46FFI_46primForeignObjC_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = primForeignObjC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primForeignObjC_35);
  C_RETURN(nodeptr);
}

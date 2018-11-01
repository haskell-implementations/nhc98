#include "newmacros.h"
#include "runtime.h"

#define CT_v235	((void*)startLabel+48)
#define CT_v237	((void*)startLabel+100)
#define CT_v239	((void*)startLabel+160)
#define FN_NHC_46FFI_46reallyFreeForeignObj	((void*)startLabel+184)
#define CT_v241	((void*)startLabel+212)
#define F0_NHC_46FFI_46reallyFreeForeignObj	((void*)startLabel+220)
#define CT_v243	((void*)startLabel+260)
#define FN_NHC_46FFI_46primForeignObjC_35	((void*)startLabel+292)
#define CT_v245	((void*)startLabel+324)
#define F0_NHC_46FFI_46primForeignObjC_35	((void*)startLabel+332)
#define FN_NHC_46FFI_46primForeignObjC	((void*)startLabel+344)
#define CT_v247	((void*)startLabel+368)
#define CF_NHC_46FFI_46primForeignObjC	((void*)startLabel+376)
#define CT_v249	((void*)startLabel+448)
#define CT_v251	((void*)startLabel+500)
#define ST_v236	((void*)startLabel+516)
#define ST_v242	((void*)startLabel+541)
#define ST_v248	((void*)startLabel+564)
#define ST_v250	((void*)startLabel+587)
#define ST_v246	((void*)startLabel+609)
#define ST_v244	((void*)startLabel+633)
#define ST_v240	((void*)startLabel+658)
#define ST_v234	((void*)startLabel+687)
#define ST_v238	((void*)startLabel+711)
extern Node TM_NHC_46FFI[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
void FR_NHC_46FFI_46foreignObjToAddr(void);
extern void *reallyFreeForeignObj();
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_NHC_46FFI_46primForeignObjC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46unsafePerformIO[];

static Node startLabel[] = {
  42
, bytes2word(1,0,0,1)
, useLabel(CT_v235)
,};
Node FN_NHC_46FFI_46touchForeignObj[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 770001
, useLabel(ST_v234)
,	/* CT_v235: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46touchForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46touchForeignObj),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v237)
,};
Node FN_NHC_46FFI_46foreignObjToAddr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46foreignObjToAddr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 430001
, useLabel(ST_v236)
,	/* CT_v237: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46foreignObjToAddr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46foreignObjToAddr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v239)
,};
Node FN_NHC_46FFI_46withForeignObj[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 650001
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46withForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46withForeignObj),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46foreignObjToAddr))
, bytes2word(1,0,0,1)
, useLabel(CT_v241)
,	/* FN_NHC_46FFI_46reallyFreeForeignObj: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(reallyFreeForeignObj)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 600001
, useLabel(ST_v240)
,	/* CT_v241: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46reallyFreeForeignObj: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46reallyFreeForeignObj),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v243)
,};
Node FN_NHC_46FFI_46freeForeignObj[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 530001
, useLabel(ST_v242)
,	/* CT_v243: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46freeForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46freeForeignObj),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46reallyFreeForeignObj)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v245)
,	/* FN_NHC_46FFI_46primForeignObjC_35: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primForeignObjC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 390001
, useLabel(ST_v244)
,	/* CT_v245: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primForeignObjC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v247)
,	/* FN_NHC_46FFI_46primForeignObjC: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 390001
, useLabel(ST_v246)
,	/* CT_v247: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46primForeignObjC: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46FFI_46primForeignObjC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v249)
,};
Node FN_NHC_46FFI_46makeForeignObj[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,3)
, bytes2word(PUSH_P1,0,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 260001
, useLabel(ST_v248)
,	/* CT_v249: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46makeForeignObj[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46makeForeignObj),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46unsafePerformIO))
, VAPTAG(useLabel(FN_NHC_46FFI_46primForeignObjC))
, bytes2word(0,0,0,0)
, useLabel(CT_v251)
,};
Node FN_NHC_46FFI_46newForeignObj[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 300001
, useLabel(ST_v250)
,	/* CT_v251: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46FFI_46newForeignObj[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46newForeignObj))
, useLabel(F0_NHC_46FFI_46makeForeignObj)
,	/* ST_v236: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(102,111,114,101)
, bytes2word(105,103,110,79)
, bytes2word(98,106,84,111)
, bytes2word(65,100,100,114)
,	/* ST_v242: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,102,114,101)
, bytes2word(101,70,111,114)
, bytes2word(101,105,103,110)
,	/* ST_v248: (byte 4) */
  bytes2word(79,98,106,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(109,97,107,101)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,79)
,	/* ST_v250: (byte 3) */
  bytes2word(98,106,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,110)
, bytes2word(101,119,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,79,98,106)
,	/* ST_v246: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,112,114,105)
, bytes2word(109,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(79,98,106,67)
,	/* ST_v244: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,112,114,105)
, bytes2word(109,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(79,98,106,67)
,	/* ST_v240: (byte 2) */
  bytes2word(35,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,114,101)
, bytes2word(97,108,108,121)
, bytes2word(70,114,101,101)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,79)
,	/* ST_v234: (byte 3) */
  bytes2word(98,106,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,116)
, bytes2word(111,117,99,104)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,79)
,	/* ST_v238: (byte 3) */
  bytes2word(98,106,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,119)
, bytes2word(105,116,104,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,79,98)
, bytes2word(106,0,0,0)
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

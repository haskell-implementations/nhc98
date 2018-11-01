#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46IOExtras_46hPutBufC_35	((void*)startLabel+12)
#define CT_v227	((void*)startLabel+44)
#define F0_NHC_46IOExtras_46hPutBufC_35	((void*)startLabel+52)
#define CT_v231	((void*)startLabel+132)
#define CT_v239	((void*)startLabel+368)
#define FN_NHC_46IOExtras_46hGetBuf_35	((void*)startLabel+424)
#define CT_v242	((void*)startLabel+456)
#define F0_NHC_46IOExtras_46hGetBuf_35	((void*)startLabel+464)
#define CT_v246	((void*)startLabel+544)
#define ST_v244	((void*)startLabel+580)
#define PP_NHC_46IOExtras_46hGetBuf_35	((void*)startLabel+601)
#define PC_NHC_46IOExtras_46hGetBuf_35	((void*)startLabel+601)
#define ST_v241	((void*)startLabel+601)
#define ST_v233	((void*)startLabel+624)
#define ST_v229	((void*)startLabel+648)
#define PP_NHC_46IOExtras_46hPutBufC_35	((void*)startLabel+670)
#define PC_NHC_46IOExtras_46hPutBufC_35	((void*)startLabel+670)
#define ST_v226	((void*)startLabel+670)
#define PS_v230	((void*)startLabel+696)
#define PS_v228	((void*)startLabel+708)
#define PS_v245	((void*)startLabel+720)
#define PS_v243	((void*)startLabel+732)
#define PS_v235	((void*)startLabel+744)
#define PS_v236	((void*)startLabel+756)
#define PS_v234	((void*)startLabel+768)
#define PS_v232	((void*)startLabel+780)
#define PS_v238	((void*)startLabel+792)
#define PS_v237	((void*)startLabel+804)
#define PS_v225	((void*)startLabel+816)
#define PS_v240	((void*)startLabel+828)
void FR_NHC_46IOExtras_46hPutBufC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
void FR_NHC_46IOExtras_46hGetBuf_35(void);
extern Node PM_NHC_46IOExtras[];
extern Node PC_NHC_46Internal_46_95mkIOok3[];
extern Node PC_NHC_46Internal_46_95apply3[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v227)
,	/* FN_NHC_46IOExtras_46hPutBufC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46IOExtras_46hPutBufC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v226)
,	/* CT_v227: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46IOExtras_46hPutBufC_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBufC_35),3)
, useLabel(PS_v225)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v231)
,};
Node FN_NHC_46IOExtras_46hPutBufC[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v230)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v229)
,	/* CT_v231: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46hPutBufC[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBufC))
, useLabel(PS_v228)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46IOExtras_46hPutBufC_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v239)
,};
Node FN_NHC_46IOExtras_46hPutBuf[] = {
  bytes2word(NEEDHEAP_P1,33,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v235)
, 0
, 0
, 0
, 0
, useLabel(PS_v234)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v233)
,	/* CT_v239: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46IOExtras_46hPutBuf[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBuf),3)
, useLabel(PS_v232)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46IOExtras_46hPutBufC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v242)
,	/* FN_NHC_46IOExtras_46hGetBuf_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46IOExtras_46hGetBuf_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46IOExtras_46hGetBuf_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46IOExtras_46hGetBuf_35),3)
, useLabel(PS_v240)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v246)
,};
Node FN_NHC_46IOExtras_46hGetBuf[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v245)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v244)
,	/* CT_v246: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46IOExtras_46hGetBuf[] = {
  VAPTAG(useLabel(FN_NHC_46IOExtras_46hGetBuf))
, useLabel(PS_v243)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46IOExtras_46hGetBuf_35)
,};
Node PP_NHC_46IOExtras_46hGetBuf[] = {
 };
Node PC_NHC_46IOExtras_46hGetBuf[] = {
 	/* ST_v244: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,104,71,101)
, bytes2word(116,66,117,102)
,	/* PP_NHC_46IOExtras_46hGetBuf_35: (byte 1) */
 	/* PC_NHC_46IOExtras_46hGetBuf_35: (byte 1) */
 	/* ST_v241: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,73,79,69)
, bytes2word(120,116,114,97)
, bytes2word(115,46,104,71)
, bytes2word(101,116,66,117)
, bytes2word(102,35,0,0)
,};
Node PP_NHC_46IOExtras_46hPutBuf[] = {
 };
Node PC_NHC_46IOExtras_46hPutBuf[] = {
 	/* ST_v233: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,104,80,117)
, bytes2word(116,66,117,102)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46IOExtras_46hPutBufC[] = {
 };
Node PC_NHC_46IOExtras_46hPutBufC[] = {
 	/* ST_v229: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,104,80,117)
, bytes2word(116,66,117,102)
,	/* PP_NHC_46IOExtras_46hPutBufC_35: (byte 2) */
 	/* PC_NHC_46IOExtras_46hPutBufC_35: (byte 2) */
 	/* ST_v226: (byte 2) */
  bytes2word(67,0,78,72)
, bytes2word(67,46,73,79)
, bytes2word(69,120,116,114)
, bytes2word(97,115,46,104)
, bytes2word(80,117,116,66)
, bytes2word(117,102,67,35)
, bytes2word(0,0,0,0)
,	/* PS_v230: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBufC)
, useLabel(PC_NHC_46Internal_46_95mkIOok3)
,	/* PS_v228: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBufC)
, useLabel(PC_NHC_46IOExtras_46hPutBufC)
,	/* PS_v245: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hGetBuf)
, useLabel(PC_NHC_46Internal_46_95mkIOok3)
,	/* PS_v243: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hGetBuf)
, useLabel(PC_NHC_46IOExtras_46hGetBuf)
,	/* PS_v235: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBuf)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v236: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBuf)
, useLabel(PC__40_41)
,	/* PS_v234: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBuf)
, useLabel(PC_NHC_46IOExtras_46hPutBufC)
,	/* PS_v232: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBuf)
, useLabel(PC_NHC_46IOExtras_46hPutBuf)
,	/* PS_v238: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBuf)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
,	/* PS_v237: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBuf)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v225: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hPutBufC_35)
, useLabel(PC_NHC_46IOExtras_46hPutBufC_35)
,	/* PS_v240: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46hGetBuf_35)
, useLabel(PC_NHC_46IOExtras_46hGetBuf_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hPutBufC" NHC.IOExtras.hPutBufC# 3 :: FFI.ForeignObj -> FFI.Ptr -> Prelude.Int -> Prelude.Int */
extern HsInt hPutBufC(void*,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46IOExtras_46hPutBufC_35 = {"NHC.IOExtras","NHC.IOExtras.hPutBufC#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46IOExtras_46hPutBufC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hPutBufC(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46IOExtras_46hPutBufC_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "hGetBufC" NHC.IOExtras.hGetBuf# 3 :: FFI.ForeignObj -> FFI.Ptr -> Prelude.Int -> Prelude.Int */
extern HsInt hGetBufC(void*,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46IOExtras_46hGetBuf_35 = {"NHC.IOExtras","NHC.IOExtras.hGetBuf#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46IOExtras_46hGetBuf_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hGetBufC(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46IOExtras_46hGetBuf_35);
  C_RETURN(nodeptr);
}

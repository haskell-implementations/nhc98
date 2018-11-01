#include "newmacros.h"
#include "runtime.h"

#define CT_v312	((void*)startLabel+120)
#define CT_v317	((void*)startLabel+248)
#define FN_NHC_46FFI_46getErrNo_35	((void*)startLabel+292)
#define CT_v320	((void*)startLabel+316)
#define F0_NHC_46FFI_46getErrNo_35	((void*)startLabel+324)
#define CT_v324	((void*)startLabel+404)
#define ST_v322	((void*)startLabel+440)
#define PP_NHC_46FFI_46getErrNo_35	((void*)startLabel+457)
#define PC_NHC_46FFI_46getErrNo_35	((void*)startLabel+457)
#define ST_v319	((void*)startLabel+457)
#define ST_v309	((void*)startLabel+476)
#define ST_v314	((void*)startLabel+496)
#define PS_v323	((void*)startLabel+520)
#define PS_v321	((void*)startLabel+532)
#define PS_v311	((void*)startLabel+544)
#define PS_v308	((void*)startLabel+556)
#define PS_v310	((void*)startLabel+568)
#define PS_v316	((void*)startLabel+580)
#define PS_v315	((void*)startLabel+592)
#define PS_v313	((void*)startLabel+604)
#define PS_v318	((void*)startLabel+616)
extern Node FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46toEnum[];
extern Node FN_Prelude_46ioError[];
void FR_NHC_46FFI_46getErrNo_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];
extern Node PM_NHC_46FFI[];
extern Node PC_NHC_46Internal_46_95mkIOok0[];
extern Node PC_Prelude_46IOError[];
extern Node PC_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46toEnum[];
extern Node PC_Prelude_46ioError[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v312)
,};
Node FN_NHC_46FFI_46mkIOError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v311)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v310)
, 0
, 0
, 0
, 0
, 140001
, useLabel(ST_v309)
,	/* CT_v312: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_NHC_46FFI_46mkIOError[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46mkIOError),4)
, useLabel(PS_v308)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46toEnum))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v317)
,};
Node FN_NHC_46FFI_46throwIOError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,14)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v316)
, 0
, 0
, 0
, 0
, useLabel(PS_v315)
, 0
, 0
, 0
, 0
, 170001
, useLabel(ST_v314)
,	/* CT_v317: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_NHC_46FFI_46throwIOError[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46throwIOError),4)
, useLabel(PS_v313)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46mkIOError))
, VAPTAG(useLabel(FN_Prelude_46ioError))
, bytes2word(1,0,0,1)
, useLabel(CT_v320)
,	/* FN_NHC_46FFI_46getErrNo_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46getErrNo_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v319)
,	/* CT_v320: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46getErrNo_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46getErrNo_35),1)
, useLabel(PS_v318)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v324)
,};
Node FN_NHC_46FFI_46getErrNo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v323)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v322)
,	/* CT_v324: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46getErrNo[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46getErrNo))
, useLabel(PS_v321)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_NHC_46FFI_46getErrNo_35)
,};
Node PP_NHC_46FFI_46getErrNo[] = {
 };
Node PC_NHC_46FFI_46getErrNo[] = {
 	/* ST_v322: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(103,101,116,69)
, bytes2word(114,114,78,111)
,	/* PP_NHC_46FFI_46getErrNo_35: (byte 1) */
 	/* PC_NHC_46FFI_46getErrNo_35: (byte 1) */
 	/* ST_v319: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,103,101,116)
, bytes2word(69,114,114,78)
, bytes2word(111,35,0,0)
,};
Node PP_NHC_46FFI_46mkIOError[] = {
 };
Node PC_NHC_46FFI_46mkIOError[] = {
 	/* ST_v309: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(109,107,73,79)
, bytes2word(69,114,114,111)
, bytes2word(114,0,0,0)
,};
Node PP_NHC_46FFI_46throwIOError[] = {
 };
Node PC_NHC_46FFI_46throwIOError[] = {
 	/* ST_v314: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(116,104,114,111)
, bytes2word(119,73,79,69)
, bytes2word(114,114,111,114)
, bytes2word(0,0,0,0)
,	/* PS_v323: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46getErrNo)
, useLabel(PC_NHC_46Internal_46_95mkIOok0)
,	/* PS_v321: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46getErrNo)
, useLabel(PC_NHC_46FFI_46getErrNo)
,	/* PS_v311: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46mkIOError)
, useLabel(PC_Prelude_46IOError)
,	/* PS_v308: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46mkIOError)
, useLabel(PC_NHC_46FFI_46mkIOError)
,	/* PS_v310: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46mkIOError)
, useLabel(PC_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46toEnum)
,	/* PS_v316: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46throwIOError)
, useLabel(PC_Prelude_46ioError)
,	/* PS_v315: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46throwIOError)
, useLabel(PC_NHC_46FFI_46mkIOError)
,	/* PS_v313: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46throwIOError)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v318: (byte 0) */
  useLabel(PM_NHC_46FFI)
, useLabel(PP_NHC_46FFI_46getErrNo_35)
, useLabel(PC_NHC_46FFI_46getErrNo_35)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "getErrNo" NHC.FFI.getErrNo# 1 :: Prelude.() -> Prelude.Int */
extern HsInt getErrNo(void);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46getErrNo_35 = {"NHC.FFI","NHC.FFI.getErrNo#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46getErrNo_35) {
  NodePtr nodeptr;
  HsInt result;
  /* void arg1 */;

  result = getErrNo();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46getErrNo_35);
  C_RETURN(nodeptr);
}

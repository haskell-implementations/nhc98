#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hSetBufferingC_35	((void*)startLabel+12)
#define CT_v238	((void*)startLabel+40)
#define F0_IO_46hSetBufferingC_35	((void*)startLabel+48)
#define FN_IO_46hSetBufferingC	((void*)startLabel+76)
#define CT_v242	((void*)startLabel+128)
#define CF_IO_46hSetBufferingC	((void*)startLabel+136)
#define CT_v249	((void*)startLabel+312)
#define FN_LAMBDA234	((void*)startLabel+368)
#define v250	((void*)startLabel+401)
#define CT_v258	((void*)startLabel+536)
#define F0_LAMBDA234	((void*)startLabel+544)
#define FN_LAMBDA233	((void*)startLabel+592)
#define CT_v267	((void*)startLabel+828)
#define F0_LAMBDA233	((void*)startLabel+836)
#define FN_LAMBDA232	((void*)startLabel+880)
#define CT_v271	((void*)startLabel+924)
#define CF_LAMBDA232	((void*)startLabel+932)
#define ST_v244	((void*)startLabel+952)
#define PP_LAMBDA234	((void*)startLabel+969)
#define PC_LAMBDA234	((void*)startLabel+969)
#define ST_v253	((void*)startLabel+969)
#define PP_LAMBDA233	((void*)startLabel+998)
#define PC_LAMBDA233	((void*)startLabel+998)
#define ST_v260	((void*)startLabel+998)
#define PP_LAMBDA232	((void*)startLabel+1027)
#define PC_LAMBDA232	((void*)startLabel+1027)
#define ST_v269	((void*)startLabel+1027)
#define PP_IO_46hSetBufferingC	((void*)startLabel+1056)
#define PC_IO_46hSetBufferingC	((void*)startLabel+1056)
#define ST_v240	((void*)startLabel+1056)
#define PP_IO_46hSetBufferingC_35	((void*)startLabel+1074)
#define PC_IO_46hSetBufferingC_35	((void*)startLabel+1074)
#define ST_v237	((void*)startLabel+1074)
#define ST_v270	((void*)startLabel+1093)
#define PS_v241	((void*)startLabel+1108)
#define PS_v239	((void*)startLabel+1120)
#define PS_v246	((void*)startLabel+1132)
#define PS_v245	((void*)startLabel+1144)
#define PS_v243	((void*)startLabel+1156)
#define PS_v248	((void*)startLabel+1168)
#define PS_v247	((void*)startLabel+1180)
#define PS_v236	((void*)startLabel+1192)
#define PS_v268	((void*)startLabel+1204)
#define PS_v266	((void*)startLabel+1216)
#define PS_v263	((void*)startLabel+1228)
#define PS_v264	((void*)startLabel+1240)
#define PS_v265	((void*)startLabel+1252)
#define PS_v262	((void*)startLabel+1264)
#define PS_v261	((void*)startLabel+1276)
#define PS_v259	((void*)startLabel+1288)
#define PS_v256	((void*)startLabel+1300)
#define PS_v255	((void*)startLabel+1312)
#define PS_v257	((void*)startLabel+1324)
#define PS_v254	((void*)startLabel+1336)
#define PS_v252	((void*)startLabel+1348)
void FR_IO_46hSetBufferingC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Show_46IO_46BufferMode_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Prelude_46Show_46IO_46BufferMode_46show[];
extern Node PC__40_41[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v238)
,	/* FN_IO_46hSetBufferingC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46hSetBufferingC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v237)
,	/* CT_v238: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46hSetBufferingC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hSetBufferingC_35),2)
, useLabel(PS_v236)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v242)
,	/* FN_IO_46hSetBufferingC: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v241)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v240)
,	/* CT_v242: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46hSetBufferingC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46hSetBufferingC))
, useLabel(PS_v239)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_IO_46hSetBufferingC_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v249)
,};
Node FN_IO_46hSetBuffering[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(2,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,20)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, 110001
, useLabel(ST_v244)
,	/* CT_v249: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_IO_46hSetBuffering[] = {
  CAPTAG(useLabel(FN_IO_46hSetBuffering),2)
, useLabel(PS_v243)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hSetBufferingC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA234),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v258)
,	/* FN_LAMBDA234: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,NE_W,JUMPFALSE)
, bytes2word(25,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,13)
,	/* v250: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v257)
, 0
, 0
, 0
, 0
, useLabel(PS_v256)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v255)
, 0
, 0
, 0
, 0
, useLabel(PS_v254)
, 0
, 0
, 0
, 0
, 120010
, useLabel(ST_v253)
,	/* CT_v258: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA234: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA234),3)
, useLabel(PS_v252)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA233),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v267)
,	/* FN_LAMBDA233: (byte 0) */
  bytes2word(NEEDHEAP_P1,39,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,23,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,13,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, useLabel(PS_v262)
, 0
, 0
, 0
, 0
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, 140018
, useLabel(ST_v260)
,	/* CT_v267: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA233: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA233),3)
, useLabel(PS_v259)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA232))
, VAPTAG(useLabel(FN_Prelude_46Show_46IO_46BufferMode_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v271)
,	/* FN_LAMBDA232: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v270)
, 150023
, useLabel(ST_v269)
,	/* CT_v271: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA232: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA232))
, useLabel(PS_v268)
, 0
, 0
, 0
,};
Node PP_IO_46hSetBuffering[] = {
 };
Node PC_IO_46hSetBuffering[] = {
 	/* ST_v244: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(83,101,116,66)
, bytes2word(117,102,102,101)
, bytes2word(114,105,110,103)
,	/* PP_LAMBDA234: (byte 1) */
 	/* PC_LAMBDA234: (byte 1) */
 	/* ST_v253: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,83,101,116)
, bytes2word(66,117,102,102)
, bytes2word(101,114,105,110)
, bytes2word(103,58,49,50)
, bytes2word(58,49,48,45)
, bytes2word(49,50,58,50)
,	/* PP_LAMBDA233: (byte 2) */
 	/* PC_LAMBDA233: (byte 2) */
 	/* ST_v260: (byte 2) */
  bytes2word(55,0,73,79)
, bytes2word(46,104,83,101)
, bytes2word(116,66,117,102)
, bytes2word(102,101,114,105)
, bytes2word(110,103,58,49)
, bytes2word(52,58,49,56)
, bytes2word(45,49,52,58)
,	/* PP_LAMBDA232: (byte 3) */
 	/* PC_LAMBDA232: (byte 3) */
 	/* ST_v269: (byte 3) */
  bytes2word(50,53,0,73)
, bytes2word(79,46,104,83)
, bytes2word(101,116,66,117)
, bytes2word(102,102,101,114)
, bytes2word(105,110,103,58)
, bytes2word(49,53,58,50)
, bytes2word(51,45,49,53)
,	/* PP_IO_46hSetBufferingC: (byte 4) */
 	/* PC_IO_46hSetBufferingC: (byte 4) */
 	/* ST_v240: (byte 4) */
  bytes2word(58,51,56,0)
, bytes2word(73,79,46,104)
, bytes2word(83,101,116,66)
, bytes2word(117,102,102,101)
, bytes2word(114,105,110,103)
,	/* PP_IO_46hSetBufferingC_35: (byte 2) */
 	/* PC_IO_46hSetBufferingC_35: (byte 2) */
 	/* ST_v237: (byte 2) */
  bytes2word(67,0,73,79)
, bytes2word(46,104,83,101)
, bytes2word(116,66,117,102)
, bytes2word(102,101,114,105)
, bytes2word(110,103,67,35)
,	/* ST_v270: (byte 1) */
  bytes2word(0,104,83,101)
, bytes2word(116,66,117,102)
, bytes2word(102,101,114,105)
, bytes2word(110,103,32,0)
,	/* PS_v241: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetBufferingC)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v239: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetBufferingC)
, useLabel(PC_IO_46hSetBufferingC)
,	/* PS_v246: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetBuffering)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v245: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetBuffering)
, useLabel(PC_IO_46hSetBufferingC)
,	/* PS_v243: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetBuffering)
, useLabel(PC_IO_46hSetBuffering)
,	/* PS_v248: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetBuffering)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v247: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetBuffering)
, useLabel(PC_LAMBDA234)
,	/* PS_v236: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hSetBufferingC_35)
, useLabel(PC_IO_46hSetBufferingC_35)
,	/* PS_v268: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA232)
, useLabel(PC_LAMBDA232)
,	/* PS_v266: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA233)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v263: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA233)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v264: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA233)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v265: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA233)
, useLabel(PC_Prelude_46Just)
,	/* PS_v262: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA233)
, useLabel(PC_Prelude_46Show_46IO_46BufferMode_46show)
,	/* PS_v261: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA233)
, useLabel(PC_LAMBDA232)
,	/* PS_v259: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA233)
, useLabel(PC_LAMBDA233)
,	/* PS_v256: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA234)
, useLabel(PC__40_41)
,	/* PS_v255: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA234)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v257: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA234)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v254: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA234)
, useLabel(PC_LAMBDA233)
,	/* PS_v252: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA234)
, useLabel(PC_LAMBDA234)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hSetBufferingC" IO.hSetBufferingC# 2 :: FFI.ForeignObj -> IO.BufferMode -> Prelude.Int */
extern HsInt hSetBufferingC(void*,Node*);
#ifdef PROFILE
static SInfo pf_IO_46hSetBufferingC_35 = {"IO","IO.hSetBufferingC#","Prelude.Int"};
#endif
C_HEADER(FR_IO_46hSetBufferingC_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = hSetBufferingC(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hSetBufferingC_35);
  C_RETURN(nodeptr);
}

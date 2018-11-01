#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46primHFileSizeC_35	((void*)startLabel+8)
#define CT_v227	((void*)startLabel+32)
#define F0_IO_46primHFileSizeC_35	((void*)startLabel+40)
#define FN_IO_46primHFileSizeC	((void*)startLabel+68)
#define CT_v231	((void*)startLabel+120)
#define CF_IO_46primHFileSizeC	((void*)startLabel+128)
#define CT_v238	((void*)startLabel+300)
#define FN_LAMBDA223	((void*)startLabel+356)
#define v239	((void*)startLabel+396)
#define CT_v247	((void*)startLabel+524)
#define F0_LAMBDA223	((void*)startLabel+532)
#define FN_LAMBDA222	((void*)startLabel+584)
#define CT_v254	((void*)startLabel+760)
#define F0_LAMBDA222	((void*)startLabel+768)
#define FN_LAMBDA221	((void*)startLabel+804)
#define CT_v258	((void*)startLabel+848)
#define CF_LAMBDA221	((void*)startLabel+856)
#define ST_v233	((void*)startLabel+876)
#define PP_LAMBDA223	((void*)startLabel+889)
#define PC_LAMBDA223	((void*)startLabel+889)
#define ST_v242	((void*)startLabel+889)
#define PP_LAMBDA222	((void*)startLabel+914)
#define PC_LAMBDA222	((void*)startLabel+914)
#define ST_v249	((void*)startLabel+914)
#define PP_LAMBDA221	((void*)startLabel+939)
#define PC_LAMBDA221	((void*)startLabel+939)
#define ST_v256	((void*)startLabel+939)
#define PP_IO_46primHFileSizeC	((void*)startLabel+964)
#define PC_IO_46primHFileSizeC	((void*)startLabel+964)
#define ST_v229	((void*)startLabel+964)
#define PP_IO_46primHFileSizeC_35	((void*)startLabel+982)
#define PC_IO_46primHFileSizeC_35	((void*)startLabel+982)
#define ST_v226	((void*)startLabel+982)
#define ST_v257	((void*)startLabel+1001)
#define PS_v230	((void*)startLabel+1012)
#define PS_v228	((void*)startLabel+1024)
#define PS_v235	((void*)startLabel+1036)
#define PS_v234	((void*)startLabel+1048)
#define PS_v232	((void*)startLabel+1060)
#define PS_v237	((void*)startLabel+1072)
#define PS_v236	((void*)startLabel+1084)
#define PS_v225	((void*)startLabel+1096)
#define PS_v255	((void*)startLabel+1108)
#define PS_v253	((void*)startLabel+1120)
#define PS_v251	((void*)startLabel+1132)
#define PS_v252	((void*)startLabel+1144)
#define PS_v250	((void*)startLabel+1156)
#define PS_v248	((void*)startLabel+1168)
#define PS_v245	((void*)startLabel+1180)
#define PS_v243	((void*)startLabel+1192)
#define PS_v246	((void*)startLabel+1204)
#define PS_v244	((void*)startLabel+1216)
#define PS_v241	((void*)startLabel+1228)
void FR_IO_46primHFileSizeC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46throwIOError[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v227)
,	/* FN_IO_46primHFileSizeC_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46primHFileSizeC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v226)
,	/* CT_v227: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46primHFileSizeC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46primHFileSizeC_35),1)
, useLabel(PS_v225)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v231)
,	/* FN_IO_46primHFileSizeC: (byte 0) */
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
,	/* CF_IO_46primHFileSizeC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46primHFileSizeC))
, useLabel(PS_v228)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46primHFileSizeC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_IO_46hFileSize[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v234)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v233)
,	/* CT_v238: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hFileSize[] = {
  CAPTAG(useLabel(FN_IO_46hFileSize),1)
, useLabel(PS_v232)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46primHFileSizeC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v247)
,	/* FN_LAMBDA223: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CADR_N1)
, bytes2word(13,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(24,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,18,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,23)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
,	/* v239: (byte 4) */
  bytes2word(10,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(28,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
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
, CONSTRW(1,1)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v243)
, 0
, 0
, 0
, 0
, 100010
, useLabel(ST_v242)
,	/* CT_v247: (byte 0) */
  HW(5,2)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),2)
, useLabel(PS_v241)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA222),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v254)
,	/* FN_LAMBDA222: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,13,HEAP_ARG,2)
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
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v250)
, 0
, 0
, 0
, 0
, 120018
, useLabel(ST_v249)
,	/* CT_v254: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA222: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA222),2)
, useLabel(PS_v248)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA221))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v258)
,	/* FN_LAMBDA221: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v257)
, 130022
, useLabel(ST_v256)
,	/* CT_v258: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA221: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA221))
, useLabel(PS_v255)
, 0
, 0
, 0
,};
Node PP_IO_46hFileSize[] = {
 };
Node PC_IO_46hFileSize[] = {
 	/* ST_v233: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(70,105,108,101)
, bytes2word(83,105,122,101)
,	/* PP_LAMBDA223: (byte 1) */
 	/* PC_LAMBDA223: (byte 1) */
 	/* ST_v242: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,70,105,108)
, bytes2word(101,83,105,122)
, bytes2word(101,58,49,48)
, bytes2word(58,49,48,45)
, bytes2word(49,48,58,50)
,	/* PP_LAMBDA222: (byte 2) */
 	/* PC_LAMBDA222: (byte 2) */
 	/* ST_v249: (byte 2) */
  bytes2word(53,0,73,79)
, bytes2word(46,104,70,105)
, bytes2word(108,101,83,105)
, bytes2word(122,101,58,49)
, bytes2word(50,58,49,56)
, bytes2word(45,49,50,58)
,	/* PP_LAMBDA221: (byte 3) */
 	/* PC_LAMBDA221: (byte 3) */
 	/* ST_v256: (byte 3) */
  bytes2word(50,53,0,73)
, bytes2word(79,46,104,70)
, bytes2word(105,108,101,83)
, bytes2word(105,122,101,58)
, bytes2word(49,51,58,50)
, bytes2word(50,45,49,51)
,	/* PP_IO_46primHFileSizeC: (byte 4) */
 	/* PC_IO_46primHFileSizeC: (byte 4) */
 	/* ST_v229: (byte 4) */
  bytes2word(58,51,50,0)
, bytes2word(73,79,46,112)
, bytes2word(114,105,109,72)
, bytes2word(70,105,108,101)
, bytes2word(83,105,122,101)
,	/* PP_IO_46primHFileSizeC_35: (byte 2) */
 	/* PC_IO_46primHFileSizeC_35: (byte 2) */
 	/* ST_v226: (byte 2) */
  bytes2word(67,0,73,79)
, bytes2word(46,112,114,105)
, bytes2word(109,72,70,105)
, bytes2word(108,101,83,105)
, bytes2word(122,101,67,35)
,	/* ST_v257: (byte 1) */
  bytes2word(0,104,70,105)
, bytes2word(108,101,83,105)
, bytes2word(122,101,0,0)
,	/* PS_v230: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46primHFileSizeC)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v228: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46primHFileSizeC)
, useLabel(PC_IO_46primHFileSizeC)
,	/* PS_v235: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFileSize)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v234: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFileSize)
, useLabel(PC_IO_46primHFileSizeC)
,	/* PS_v232: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFileSize)
, useLabel(PC_IO_46hFileSize)
,	/* PS_v237: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFileSize)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v236: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hFileSize)
, useLabel(PC_LAMBDA223)
,	/* PS_v225: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46primHFileSizeC_35)
, useLabel(PC_IO_46primHFileSizeC_35)
,	/* PS_v255: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA221)
, useLabel(PC_LAMBDA221)
,	/* PS_v253: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA222)
, useLabel(PC_NHC_46FFI_46throwIOError)
,	/* PS_v251: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA222)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v252: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA222)
, useLabel(PC_Prelude_46Just)
,	/* PS_v250: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA222)
, useLabel(PC_LAMBDA221)
,	/* PS_v248: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA222)
, useLabel(PC_LAMBDA222)
,	/* PS_v245: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v243: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Prelude_46Eq_46Prelude_46Integer_46_61_61)
,	/* PS_v246: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v244: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA223)
, useLabel(PC_LAMBDA222)
,	/* PS_v241: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA223)
, useLabel(PC_LAMBDA223)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primHFileSizeC" IO.primHFileSizeC# 1 :: FFI.ForeignObj -> Prelude.Integer */
extern Node* primHFileSizeC(void*);
#ifdef PROFILE
static SInfo pf_IO_46primHFileSizeC_35 = {"IO","IO.primHFileSizeC#","Prelude.Integer"};
#endif
C_HEADER(FR_IO_46primHFileSizeC_35) {
  NodePtr nodeptr;
  Node* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = primHFileSizeC(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_IO_46primHFileSizeC_35);
  C_RETURN(nodeptr);
}

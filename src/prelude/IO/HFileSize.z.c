#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46primHFileSizeC_35	((void*)startLabel+8)
#define CT_v226	((void*)startLabel+36)
#define F0_IO_46primHFileSizeC_35	((void*)startLabel+44)
#define FN_IO_46primHFileSizeC	((void*)startLabel+56)
#define CT_v228	((void*)startLabel+80)
#define CF_IO_46primHFileSizeC	((void*)startLabel+88)
#define CT_v230	((void*)startLabel+144)
#define FN_LAMBDA223	((void*)startLabel+184)
#define v231	((void*)startLabel+210)
#define CT_v234	((void*)startLabel+240)
#define F0_LAMBDA223	((void*)startLabel+248)
#define FN_LAMBDA222	((void*)startLabel+284)
#define CT_v236	((void*)startLabel+328)
#define F0_LAMBDA222	((void*)startLabel+336)
#define FN_LAMBDA221	((void*)startLabel+356)
#define CT_v239	((void*)startLabel+388)
#define CF_LAMBDA221	((void*)startLabel+396)
#define ST_v229	((void*)startLabel+400)
#define ST_v233	((void*)startLabel+413)
#define ST_v235	((void*)startLabel+438)
#define ST_v237	((void*)startLabel+463)
#define ST_v227	((void*)startLabel+488)
#define ST_v225	((void*)startLabel+506)
#define ST_v238	((void*)startLabel+525)
extern Node TM_IO[];
void FR_IO_46primHFileSizeC_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_IO[];
extern Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v226)
,	/* FN_IO_46primHFileSizeC_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46primHFileSizeC_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v225)
,	/* CT_v226: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46primHFileSizeC_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46primHFileSizeC_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v228)
,	/* FN_IO_46primHFileSizeC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(2,0)
, 0
,	/* CF_IO_46primHFileSizeC: (byte 0) */
  VAPTAG(useLabel(FN_IO_46primHFileSizeC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46primHFileSizeC_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v230)
,};
Node FN_IO_46hFileSize[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v229)
,	/* CT_v230: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_IO_46hFileSize[] = {
  CAPTAG(useLabel(FN_IO_46hFileSize),1)
, VAPTAG(useLabel(FN_IO_46primHFileSizeC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA223),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v234)
,	/* FN_LAMBDA223: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CADR_N1,4,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,12,0)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v231: (byte 2) */
  bytes2word(4,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,1)
, 1
, 100010
, useLabel(ST_v233)
,	/* CT_v234: (byte 0) */
  HW(5,2)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA222),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,	/* FN_LAMBDA222: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 120018
, useLabel(ST_v235)
,	/* CT_v236: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA222: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA222),2)
, VAPTAG(useLabel(FN_LAMBDA221))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v239)
,	/* FN_LAMBDA221: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v238)
, 130022
, useLabel(ST_v237)
,	/* CT_v239: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA221: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA221))
,	/* ST_v229: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(70,105,108,101)
, bytes2word(83,105,122,101)
,	/* ST_v233: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,70,105,108)
, bytes2word(101,83,105,122)
, bytes2word(101,58,49,48)
, bytes2word(58,49,48,45)
, bytes2word(49,48,58,50)
,	/* ST_v235: (byte 2) */
  bytes2word(53,0,73,79)
, bytes2word(46,104,70,105)
, bytes2word(108,101,83,105)
, bytes2word(122,101,58,49)
, bytes2word(50,58,49,56)
, bytes2word(45,49,50,58)
,	/* ST_v237: (byte 3) */
  bytes2word(50,53,0,73)
, bytes2word(79,46,104,70)
, bytes2word(105,108,101,83)
, bytes2word(105,122,101,58)
, bytes2word(49,51,58,50)
, bytes2word(50,45,49,51)
,	/* ST_v227: (byte 4) */
  bytes2word(58,51,50,0)
, bytes2word(73,79,46,112)
, bytes2word(114,105,109,72)
, bytes2word(70,105,108,101)
, bytes2word(83,105,122,101)
,	/* ST_v225: (byte 2) */
  bytes2word(67,0,73,79)
, bytes2word(46,112,114,105)
, bytes2word(109,72,70,105)
, bytes2word(108,101,83,105)
, bytes2word(122,101,67,35)
,	/* ST_v238: (byte 1) */
  bytes2word(0,104,70,105)
, bytes2word(108,101,83,105)
, bytes2word(122,101,0,0)
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

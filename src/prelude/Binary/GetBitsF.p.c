#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95getBitsFAux	((void*)startLabel+12)
#define CT_v223	((void*)startLabel+44)
#define F0_NHC_46Binary_46hs_95getBitsFAux	((void*)startLabel+52)
#define FN_NHC_46Binary_46getBitsFAux	((void*)startLabel+84)
#define CT_v227	((void*)startLabel+140)
#define F0_NHC_46Binary_46getBitsFAux	((void*)startLabel+148)
#define CT_v235	((void*)startLabel+376)
#define ST_v229	((void*)startLabel+420)
#define PP_NHC_46Binary_46getBitsFAux	((void*)startLabel+440)
#define PC_NHC_46Binary_46getBitsFAux	((void*)startLabel+440)
#define ST_v225	((void*)startLabel+440)
#define PP_NHC_46Binary_46hs_95getBitsFAux	((void*)startLabel+463)
#define PC_NHC_46Binary_46hs_95getBitsFAux	((void*)startLabel+463)
#define ST_v222	((void*)startLabel+463)
#define PS_v234	((void*)startLabel+492)
#define PS_v228	((void*)startLabel+504)
#define PS_v230	((void*)startLabel+516)
#define PS_v233	((void*)startLabel+528)
#define PS_v232	((void*)startLabel+540)
#define PS_v231	((void*)startLabel+552)
#define PS_v221	((void*)startLabel+564)
#define PS_v226	((void*)startLabel+576)
#define PS_v224	((void*)startLabel+588)
void FR_NHC_46Binary_46hs_95getBitsFAux(void);
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum[];
extern Node PM_NHC_46Binary[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node PC_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v223)
,	/* FN_NHC_46Binary_46hs_95getBitsFAux: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95getBitsFAux)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v222)
,	/* CT_v223: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95getBitsFAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBitsFAux),3)
, useLabel(PS_v221)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v227)
,	/* FN_NHC_46Binary_46getBitsFAux: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v226)
, 0
, 0
, 0
, 0
, 160001
, useLabel(ST_v225)
,	/* CT_v227: (byte 0) */
  HW(1,3)
, 0
,	/* F0_NHC_46Binary_46getBitsFAux: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46getBitsFAux),3)
, useLabel(PS_v224)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBitsFAux))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v235)
,};
Node FN_NHC_46Binary_46getBitsF[] = {
  bytes2word(NEEDHEAP_P1,35,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(32,HEAP_OFF_N1,12,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v234)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v233)
, 0
, 0
, 0
, 0
, useLabel(PS_v232)
, 0
, 0
, 0
, 0
, useLabel(PS_v231)
, 0
, 0
, 0
, 0
, useLabel(PS_v230)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v229)
,	/* CT_v235: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46Binary_46getBitsF[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getBitsF),3)
, useLabel(PS_v228)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46getBitsFAux))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum))
,};
Node PP_NHC_46Binary_46getBitsF[] = {
 };
Node PC_NHC_46Binary_46getBitsF[] = {
 	/* ST_v229: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,66,105)
,	/* PP_NHC_46Binary_46getBitsFAux: (byte 4) */
 	/* PC_NHC_46Binary_46getBitsFAux: (byte 4) */
 	/* ST_v225: (byte 4) */
  bytes2word(116,115,70,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,66,105)
, bytes2word(116,115,70,65)
,	/* PP_NHC_46Binary_46hs_95getBitsFAux: (byte 3) */
 	/* PC_NHC_46Binary_46hs_95getBitsFAux: (byte 3) */
 	/* ST_v222: (byte 3) */
  bytes2word(117,120,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,104,115)
, bytes2word(95,103,101,116)
, bytes2word(66,105,116,115)
, bytes2word(70,65,117,120)
, bytes2word(0,0,0,0)
,	/* PS_v234: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBitsF)
, useLabel(PC_Prelude_462)
,	/* PS_v228: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBitsF)
, useLabel(PC_NHC_46Binary_46getBitsF)
,	/* PS_v230: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBitsF)
, useLabel(PC_NHC_46Binary_46getBitsFAux)
,	/* PS_v233: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBitsF)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinPtr_46toEnum)
,	/* PS_v232: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBitsF)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v231: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBitsF)
, useLabel(PC_Prelude_46Enum_46NHC_46Binary_46BinPtr_46fromEnum)
,	/* PS_v221: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95getBitsFAux)
, useLabel(PC_NHC_46Binary_46hs_95getBitsFAux)
,	/* PS_v226: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBitsFAux)
, useLabel(PC_NHC_46Binary_46hs_95getBitsFAux)
,	/* PS_v224: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBitsFAux)
, useLabel(PC_NHC_46Binary_46getBitsFAux)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_getBitsFAux" NHC.Binary.hs_getBitsFAux 3 :: FFI.ForeignObj -> Prelude.Int -> Prelude.Int -> Prelude.Int */
extern HsInt hs_getBitsFAux(void*,HsInt,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95getBitsFAux = {"NHC.Binary","NHC.Binary.hs_getBitsFAux","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95getBitsFAux) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_getBitsFAux(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95getBitsFAux);
  C_RETURN(nodeptr);
}

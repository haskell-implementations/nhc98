#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46rename_35	((void*)startLabel+12)
#define CT_v234	((void*)startLabel+32)
#define F0_Directory_46rename_35	((void*)startLabel+40)
#define FN_Directory_46rename	((void*)startLabel+52)
#define CT_v235	((void*)startLabel+64)
#define CF_Directory_46rename	((void*)startLabel+72)
#define CT_v236	((void*)startLabel+132)
#define FN_LAMBDA232	((void*)startLabel+176)
#define CT_v237	((void*)startLabel+208)
#define F0_LAMBDA232	((void*)startLabel+216)
#define FN_LAMBDA231	((void*)startLabel+256)
#define CT_v238	((void*)startLabel+300)
#define F0_LAMBDA231	((void*)startLabel+308)
#define FN_LAMBDA230	((void*)startLabel+336)
#define CT_v240	((void*)startLabel+356)
#define CF_LAMBDA230	((void*)startLabel+364)
#define FN_LAMBDA229	((void*)startLabel+376)
#define CT_v242	((void*)startLabel+396)
#define CF_LAMBDA229	((void*)startLabel+404)
#define ST_v239	((void*)startLabel+408)
#define ST_v241	((void*)startLabel+410)
void FR_Directory_46rename_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_CString_46toCString[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Int_46_61_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46FFI_46throwIOError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v234)
,	/* FN_Directory_46rename_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Directory_46rename_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v234: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Directory_46rename_35: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46rename_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v235)
,	/* FN_Directory_46rename: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v235: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Directory_46rename: (byte 0) */
  VAPTAG(useLabel(FN_Directory_46rename))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Directory_46rename_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,};
Node FN_Directory_46renameDirectory[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG_ARG,2,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v236: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Directory_46renameDirectory[] = {
  CAPTAG(useLabel(FN_Directory_46renameDirectory),2)
, VAPTAG(useLabel(FN_Directory_46rename))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA232),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v237)
,	/* FN_LAMBDA232: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_INT_N1,1,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v237: (byte 0) */
  HW(6,3)
, 0
,	/* F0_LAMBDA232: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA232),3)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Int_46_61_61))
, CAPTAG(useLabel(FN_LAMBDA231),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v238)
,	/* FN_LAMBDA231: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
,	/* CT_v238: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA231: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA231),3)
, VAPTAG(useLabel(FN_LAMBDA229))
, VAPTAG(useLabel(FN_LAMBDA230))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(0,0,0,0)
, useLabel(CT_v240)
,	/* FN_LAMBDA230: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v239)
,	/* CT_v240: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA230: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA230))
, bytes2word(0,0,0,0)
, useLabel(CT_v242)
,	/* FN_LAMBDA229: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA229: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA229))
,	/* ST_v239: (byte 0) */
 	/* ST_v241: (byte 2) */
  bytes2word(34,0,114,101)
, bytes2word(110,97,109,101)
, bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,32,116,111)
, bytes2word(32,34,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "rename" Directory.rename# 2 :: PackedString.PackedString -> PackedString.PackedString -> Prelude.Int */
#ifdef PROFILE
static SInfo pf_Directory_46rename_35 = {"Directory","Directory.rename#","Prelude.Int"};
#endif
C_HEADER(FR_Directory_46rename_35) {
  NodePtr nodeptr;
  HsInt result;
  char* arg1;
  char* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (char*)nhc_getPackedString(nodeptr);

  result = rename(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Directory_46rename_35);
  C_RETURN(nodeptr);
}

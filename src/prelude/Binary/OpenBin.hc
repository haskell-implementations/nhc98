#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95openBin_35	((void*)startLabel+12)
#define CT_v251	((void*)startLabel+36)
#define F0_NHC_46Binary_46hs_95openBin_35	((void*)startLabel+44)
#define FN_NHC_46Binary_46hs_95openBin	((void*)startLabel+56)
#define CT_v252	((void*)startLabel+68)
#define CF_NHC_46Binary_46hs_95openBin	((void*)startLabel+76)
#define CT_v253	((void*)startLabel+148)
#define FN_LAMBDA249	((void*)startLabel+208)
#define CT_v254	((void*)startLabel+220)
#define F0_LAMBDA249	((void*)startLabel+228)
#define FN_LAMBDA248	((void*)startLabel+244)
#define CT_v255	((void*)startLabel+256)
#define F0_LAMBDA248	((void*)startLabel+264)
#define FN_LAMBDA247	((void*)startLabel+276)
#define CT_v256	((void*)startLabel+288)
#define F0_LAMBDA247	((void*)startLabel+296)
#define FN_LAMBDA246	((void*)startLabel+308)
#define CT_v257	((void*)startLabel+320)
#define F0_LAMBDA246	((void*)startLabel+328)
void FR_NHC_46Binary_46hs_95openBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Binary_46fromBinLocation[];
extern Node FN_CString_46toCString[];
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v251)
,	/* FN_NHC_46Binary_46hs_95openBin_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95openBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v251: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95openBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95openBin_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v252)
,	/* FN_NHC_46Binary_46hs_95openBin: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v252: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95openBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95openBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95openBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v253)
,};
Node FN_NHC_46Binary_46openBin[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_I2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_I2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,2)
, bytes2word(HEAP_P1,4,HEAP_I1,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v253: (byte 0) */
  HW(10,1)
, 0
,};
Node F0_NHC_46Binary_46openBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46openBin),1)
, VAPTAG(useLabel(FN_NHC_46Binary_46fromBinLocation))
, VAPTAG(useLabel(FN_LAMBDA246))
, VAPTAG(useLabel(FN_LAMBDA247))
, VAPTAG(useLabel(FN_LAMBDA248))
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum))
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95openBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA249),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v254)
,	/* FN_LAMBDA249: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v254: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA249: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA249),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v255)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v256)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v256: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v257)
,	/* FN_LAMBDA246: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v257: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),1)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_openBin" NHC.Binary.hs_openBin# 3 :: Prelude.Bool -> PackedString.PackedString -> Prelude.Int -> FFI.ForeignObj */
extern void* hs_openBin(HsBool,char*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95openBin_35 = {"NHC.Binary","NHC.Binary.hs_openBin#","FFI.ForeignObj"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95openBin_35) {
  NodePtr nodeptr;
  void* result;
  HsBool arg1;
  char* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsBool)GET_BOOL_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (char*)nhc_getPackedString(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_openBin(arg1,arg2,arg3);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95openBin_35);
  C_RETURN(nodeptr);
}

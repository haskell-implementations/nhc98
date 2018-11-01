#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95openBin_35	((void*)startLabel+12)
#define CT_v252	((void*)startLabel+48)
#define F0_NHC_46Binary_46hs_95openBin_35	((void*)startLabel+56)
#define FN_NHC_46Binary_46hs_95openBin	((void*)startLabel+68)
#define CT_v254	((void*)startLabel+92)
#define CF_NHC_46Binary_46hs_95openBin	((void*)startLabel+100)
#define CT_v256	((void*)startLabel+184)
#define FN_LAMBDA249	((void*)startLabel+244)
#define CT_v258	((void*)startLabel+268)
#define F0_LAMBDA249	((void*)startLabel+276)
#define FN_LAMBDA248	((void*)startLabel+292)
#define CT_v260	((void*)startLabel+316)
#define F0_LAMBDA248	((void*)startLabel+324)
#define FN_LAMBDA247	((void*)startLabel+336)
#define CT_v262	((void*)startLabel+360)
#define F0_LAMBDA247	((void*)startLabel+368)
#define FN_LAMBDA246	((void*)startLabel+380)
#define CT_v264	((void*)startLabel+404)
#define F0_LAMBDA246	((void*)startLabel+412)
#define ST_v253	((void*)startLabel+416)
#define ST_v251	((void*)startLabel+438)
#define ST_v255	((void*)startLabel+461)
#define ST_v263	((void*)startLabel+480)
#define ST_v261	((void*)startLabel+505)
#define ST_v259	((void*)startLabel+536)
#define ST_v257	((void*)startLabel+567)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95openBin_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Binary_46fromBinLocation[];
extern Node FN_CString_46toCString[];
extern Node FN_Prelude_46Enum_46NHC_46Binary_46BinIOMode_46fromEnum[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v252)
,	/* FN_NHC_46Binary_46hs_95openBin_35: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95openBin_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v251)
,	/* CT_v252: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95openBin_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95openBin_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v254)
,	/* FN_NHC_46Binary_46hs_95openBin: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v253)
,	/* CT_v254: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95openBin: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95openBin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95openBin_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v256)
,};
Node FN_NHC_46Binary_46openBin[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
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
, 140001
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
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
, useLabel(CT_v258)
,	/* FN_LAMBDA249: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 180012
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA249: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA249),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v260)
,	/* FN_LAMBDA248: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 150018
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v262)
,	/* FN_LAMBDA247: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 150013
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v264)
,	/* FN_LAMBDA246: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 150011
, useLabel(ST_v263)
,	/* CT_v264: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA246: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA246),1)
,	/* ST_v253: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,111,112)
, bytes2word(101,110,66,105)
,	/* ST_v251: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(111,112,101,110)
, bytes2word(66,105,110,35)
,	/* ST_v255: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(111,112,101,110)
,	/* ST_v263: (byte 4) */
  bytes2word(66,105,110,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,111)
, bytes2word(112,101,110,66)
, bytes2word(105,110,58,49)
, bytes2word(53,58,49,49)
,	/* ST_v261: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(111,112,101,110)
, bytes2word(66,105,110,58)
, bytes2word(49,53,58,49)
, bytes2word(51,45,49,53)
,	/* ST_v259: (byte 4) */
  bytes2word(58,49,54,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,111)
, bytes2word(112,101,110,66)
, bytes2word(105,110,58,49)
, bytes2word(53,58,49,56)
, bytes2word(45,49,53,58)
,	/* ST_v257: (byte 3) */
  bytes2word(50,49,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,111,112)
, bytes2word(101,110,66,105)
, bytes2word(110,58,49,56)
, bytes2word(58,49,50,45)
, bytes2word(49,56,58,50)
, bytes2word(56,0,0,0)
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

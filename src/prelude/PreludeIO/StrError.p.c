#include "newmacros.h"
#include "runtime.h"

#define FN_Prelude_46primStrError	((void*)startLabel+8)
#define CT_v283	((void*)startLabel+32)
#define F0_Prelude_46primStrError	((void*)startLabel+40)
#define CT_v289	((void*)startLabel+176)
#define PP_Prelude_46primStrError	((void*)startLabel+216)
#define PC_Prelude_46primStrError	((void*)startLabel+216)
#define ST_v282	((void*)startLabel+216)
#define ST_v285	((void*)startLabel+240)
#define PS_v281	((void*)startLabel+260)
#define PS_v288	((void*)startLabel+272)
#define PS_v287	((void*)startLabel+284)
#define PS_v284	((void*)startLabel+296)
#define PS_v286	((void*)startLabel+308)
void FR_Prelude_46primStrError(void);
extern Node FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46fromEnum[];
extern Node FN_CString_46fromCString[];
extern Node PM_Prelude[];
extern Node PC_CString_46fromCString[];
extern Node PC_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46fromEnum[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v283)
,	/* FN_Prelude_46primStrError: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46primStrError)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v282)
,	/* CT_v283: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Prelude_46primStrError: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46primStrError),1)
, useLabel(PS_v281)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v289)
,};
Node FN_Prelude_46strError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v288)
, 0
, 0
, 0
, 0
, useLabel(PS_v287)
, 0
, 0
, 0
, 0
, useLabel(PS_v286)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v285)
,	/* CT_v289: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46strError[] = {
  CAPTAG(useLabel(FN_Prelude_46strError),1)
, useLabel(PS_v284)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46primStrError))
, VAPTAG(useLabel(FN_CString_46fromCString))
,	/* PP_Prelude_46primStrError: (byte 0) */
 	/* PC_Prelude_46primStrError: (byte 0) */
 	/* ST_v282: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(83,116,114,69)
, bytes2word(114,114,111,114)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46strError[] = {
 };
Node PC_Prelude_46strError[] = {
 	/* ST_v285: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,116,114,69)
, bytes2word(114,114,111,114)
, bytes2word(0,0,0,0)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primStrError)
, useLabel(PC_Prelude_46primStrError)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46strError)
, useLabel(PC_CString_46fromCString)
,	/* PS_v287: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46strError)
, useLabel(PC_Prelude_46primStrError)
,	/* PS_v284: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46strError)
, useLabel(PC_Prelude_46strError)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46strError)
, useLabel(PC_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46fromEnum)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "strerror" Prelude.primStrError 1 :: Prelude.Int -> PackedString.PackedString */
extern char* strerror(HsInt);
#ifdef PROFILE
static SInfo pf_Prelude_46primStrError = {"Prelude","Prelude.primStrError","PackedString.PackedString"};
#endif
C_HEADER(FR_Prelude_46primStrError) {
  NodePtr nodeptr;
  char* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = strerror(arg1);

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_Prelude_46primStrError);
  C_RETURN(nodeptr);
}

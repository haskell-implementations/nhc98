#include "newmacros.h"
#include "runtime.h"

#define FN_Prelude_46primStrError	((void*)startLabel+8)
#define CT_v282	((void*)startLabel+36)
#define F0_Prelude_46primStrError	((void*)startLabel+44)
#define CT_v284	((void*)startLabel+88)
#define ST_v281	((void*)startLabel+112)
#define ST_v283	((void*)startLabel+133)
extern Node TM_Prelude[];
void FR_Prelude_46primStrError(void);
extern Node FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46fromEnum[];
extern Node FN_CString_46fromCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v282)
,	/* FN_Prelude_46primStrError: (byte 0) */
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46primStrError)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v281)
,	/* CT_v282: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Prelude_46primStrError: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46primStrError),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v284)
,};
Node FN_Prelude_46strError[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v283)
,	/* CT_v284: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46strError[] = {
  CAPTAG(useLabel(FN_Prelude_46strError),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46primStrError))
, VAPTAG(useLabel(FN_CString_46fromCString))
,	/* ST_v281: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(83,116,114,69)
, bytes2word(114,114,111,114)
,	/* ST_v283: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,115,116,114)
, bytes2word(69,114,114,111)
, bytes2word(114,0,0,0)
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

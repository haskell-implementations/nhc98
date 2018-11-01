#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hGetFileNameC	((void*)startLabel+8)
#define CT_v193	((void*)startLabel+36)
#define F0_IO_46hGetFileNameC	((void*)startLabel+44)
#define CT_v195	((void*)startLabel+96)
#define ST_v194	((void*)startLabel+116)
#define ST_v192	((void*)startLabel+132)
extern Node TM_IO[];
void FR_IO_46hGetFileNameC(void);
extern Node FN_CString_46fromCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v193)
,	/* FN_IO_46hGetFileNameC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hGetFileNameC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hGetFileNameC: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hGetFileNameC),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v195)
,};
Node FN_IO_46hGetFileName[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 70001
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hGetFileName[] = {
  CAPTAG(useLabel(FN_IO_46hGetFileName),1)
, VAPTAG(useLabel(FN_IO_46hGetFileNameC))
, VAPTAG(useLabel(FN_CString_46fromCString))
,	/* ST_v194: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,70)
, bytes2word(105,108,101,78)
,	/* ST_v192: (byte 4) */
  bytes2word(97,109,101,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,70)
, bytes2word(105,108,101,78)
, bytes2word(97,109,101,67)
, bytes2word(0,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hGetFileNameC" IO.hGetFileNameC 1 :: FFI.ForeignObj -> PackedString.PackedString */
extern char* hGetFileNameC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hGetFileNameC = {"IO","IO.hGetFileNameC","PackedString.PackedString"};
#endif
C_HEADER(FR_IO_46hGetFileNameC) {
  NodePtr nodeptr;
  char* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hGetFileNameC(arg1);

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hGetFileNameC);
  C_RETURN(nodeptr);
}

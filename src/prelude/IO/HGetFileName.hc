#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hGetFileNameC	((void*)startLabel+8)
#define CT_v192	((void*)startLabel+24)
#define F0_IO_46hGetFileNameC	((void*)startLabel+32)
#define CT_v193	((void*)startLabel+72)
void FR_IO_46hGetFileNameC(void);
extern Node FN_CString_46fromCString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v192)
,	/* FN_IO_46hGetFileNameC: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hGetFileNameC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v192: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hGetFileNameC: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hGetFileNameC),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v193)
,};
Node FN_IO_46hGetFileName[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v193: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hGetFileName[] = {
  CAPTAG(useLabel(FN_IO_46hGetFileName),1)
, VAPTAG(useLabel(FN_IO_46hGetFileNameC))
, VAPTAG(useLabel(FN_CString_46fromCString))
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

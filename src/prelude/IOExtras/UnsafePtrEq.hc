#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+32)
void FR_NHC_46IOExtras_46unsafePtrEq(void);

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v174)
,};
Node FN_NHC_46IOExtras_46unsafePtrEq[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46IOExtras_46unsafePtrEq)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v174: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46IOExtras_46unsafePtrEq[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46unsafePtrEq),2)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "unsafePtrEq" NHC.IOExtras.unsafePtrEq 2 :: 1 -> 1 -> Prelude.Bool */
extern HsBool unsafePtrEq(Node*,Node*);
#ifdef PROFILE
static SInfo pf_NHC_46IOExtras_46unsafePtrEq = {"NHC.IOExtras","NHC.IOExtras.unsafePtrEq","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46IOExtras_46unsafePtrEq) {
  NodePtr nodeptr;
  HsBool result;
  Node* arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = unsafePtrEq(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46IOExtras_46unsafePtrEq);
  C_RETURN(nodeptr);
}

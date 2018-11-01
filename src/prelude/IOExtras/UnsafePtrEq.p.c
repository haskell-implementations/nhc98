#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+40)
#define ST_v175	((void*)startLabel+68)
#define PS_v174	((void*)startLabel+96)
void FR_NHC_46IOExtras_46unsafePtrEq(void);
extern Node PM_NHC_46IOExtras[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v176)
,};
Node FN_NHC_46IOExtras_46unsafePtrEq[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46IOExtras_46unsafePtrEq)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v175)
,	/* CT_v176: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46IOExtras_46unsafePtrEq[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46unsafePtrEq),2)
, useLabel(PS_v174)
, 0
, 0
, 0
,};
Node PP_NHC_46IOExtras_46unsafePtrEq[] = {
 };
Node PC_NHC_46IOExtras_46unsafePtrEq[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,117,110,115)
, bytes2word(97,102,101,80)
, bytes2word(116,114,69,113)
, bytes2word(0,0,0,0)
,	/* PS_v174: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46unsafePtrEq)
, useLabel(PC_NHC_46IOExtras_46unsafePtrEq)
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

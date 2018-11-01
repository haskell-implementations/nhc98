#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+32)
#define CT_v187	((void*)startLabel+76)
#define CT_v188	((void*)startLabel+132)
void FR_Prelude_46primIntegerQuot(void);
void FR_Prelude_46primIntegerRem(void);

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v186)
,};
Node FN_Prelude_46primIntegerQuot[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Prelude_46primIntegerQuot)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v186: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primIntegerQuot[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerQuot),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,};
Node FN_Prelude_46primIntegerRem[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Prelude_46primIntegerRem)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v187: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primIntegerRem[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerRem),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46primIntegerQuotRem[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v188: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46primIntegerQuotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerQuotRem),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuot))
, VAPTAG(useLabel(FN_Prelude_46primIntegerRem))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primIntegerQuotC" Prelude.primIntegerQuot 2 :: Prelude.Integer -> Prelude.Integer -> Prelude.Integer */
extern Node* primIntegerQuotC(Node*,Node*);
#ifdef PROFILE
static SInfo pf_Prelude_46primIntegerQuot = {"Prelude","Prelude.primIntegerQuot","Prelude.Integer"};
#endif
C_HEADER(FR_Prelude_46primIntegerQuot) {
  NodePtr nodeptr;
  Node* result;
  Node* arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = primIntegerQuotC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Prelude_46primIntegerQuot);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primIntegerRemC" Prelude.primIntegerRem 2 :: Prelude.Integer -> Prelude.Integer -> Prelude.Integer */
extern Node* primIntegerRemC(Node*,Node*);
#ifdef PROFILE
static SInfo pf_Prelude_46primIntegerRem = {"Prelude","Prelude.primIntegerRem","Prelude.Integer"};
#endif
C_HEADER(FR_Prelude_46primIntegerRem) {
  NodePtr nodeptr;
  Node* result;
  Node* arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = primIntegerRemC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Prelude_46primIntegerRem);
  C_RETURN(nodeptr);
}

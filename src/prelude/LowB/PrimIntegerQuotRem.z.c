#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+44)
#define CT_v189	((void*)startLabel+100)
#define CT_v191	((void*)startLabel+168)
#define ST_v186	((void*)startLabel+188)
#define ST_v190	((void*)startLabel+212)
#define ST_v188	((void*)startLabel+239)
extern Node TM_Prelude[];
void FR_Prelude_46primIntegerQuot(void);
void FR_Prelude_46primIntegerRem(void);

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,};
Node FN_Prelude_46primIntegerQuot[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Prelude_46primIntegerQuot)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v186)
,	/* CT_v187: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primIntegerQuot[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerQuot),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v189)
,};
Node FN_Prelude_46primIntegerRem[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Prelude_46primIntegerRem)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v188)
,	/* CT_v189: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primIntegerRem[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerRem),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Prelude_46primIntegerQuotRem[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 110001
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46primIntegerQuotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerQuotRem),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuot))
, VAPTAG(useLabel(FN_Prelude_46primIntegerRem))
,	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,81)
,	/* ST_v190: (byte 4) */
  bytes2word(117,111,116,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,81)
, bytes2word(117,111,116,82)
,	/* ST_v188: (byte 3) */
  bytes2word(101,109,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,112)
, bytes2word(114,105,109,73)
, bytes2word(110,116,101,103)
, bytes2word(101,114,82,101)
, bytes2word(109,0,0,0)
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

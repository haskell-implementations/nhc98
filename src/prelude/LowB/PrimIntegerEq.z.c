#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+44)
#define ST_v174	((void*)startLabel+56)
extern Node TM_Prelude[];
void FR_Prelude_46primIntegerEq(void);

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_Prelude_46primIntegerEq[] = {
  useLabel(TM_Prelude)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Prelude_46primIntegerEq)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v174)
,	/* CT_v175: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primIntegerEq[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerEq),2)
,	/* ST_v174: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,69)
, bytes2word(113,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primIntegerEqC" Prelude.primIntegerEq 2 :: Prelude.Integer -> Prelude.Integer -> Prelude.Bool */
extern HsBool primIntegerEqC(Node*,Node*);
#ifdef PROFILE
static SInfo pf_Prelude_46primIntegerEq = {"Prelude","Prelude.primIntegerEq","Prelude.Bool"};
#endif
C_HEADER(FR_Prelude_46primIntegerEq) {
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

  result = primIntegerEqC(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_Prelude_46primIntegerEq);
  C_RETURN(nodeptr);
}

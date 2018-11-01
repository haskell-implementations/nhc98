#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+24)
void FR_Prelude_46primIntegerNeg(void);

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Prelude_46primIntegerNeg[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46primIntegerNeg)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v174: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primIntegerNeg[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerNeg),1)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primIntegerNegC" Prelude.primIntegerNeg 1 :: Prelude.Integer -> Prelude.Integer */
extern Node* primIntegerNegC(Node*);
#ifdef PROFILE
static SInfo pf_Prelude_46primIntegerNeg = {"Prelude","Prelude.primIntegerNeg","Prelude.Integer"};
#endif
C_HEADER(FR_Prelude_46primIntegerNeg) {
  NodePtr nodeptr;
  Node* result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = primIntegerNegC(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Prelude_46primIntegerNeg);
  C_RETURN(nodeptr);
}

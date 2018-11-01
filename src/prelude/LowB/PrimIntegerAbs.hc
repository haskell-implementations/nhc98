#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+24)
void FR_Prelude_46primIntegerAbs(void);

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Prelude_46primIntegerAbs[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46primIntegerAbs)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v174: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primIntegerAbs[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerAbs),1)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primIntegerAbsC" Prelude.primIntegerAbs 1 :: Prelude.Integer -> Prelude.Integer */
extern Node* primIntegerAbsC(Node*);
#ifdef PROFILE
static SInfo pf_Prelude_46primIntegerAbs = {"Prelude","Prelude.primIntegerAbs","Prelude.Integer"};
#endif
C_HEADER(FR_Prelude_46primIntegerAbs) {
  NodePtr nodeptr;
  Node* result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = primIntegerAbsC(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Prelude_46primIntegerAbs);
  C_RETURN(nodeptr);
}

#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+32)
#define ST_v175	((void*)startLabel+60)
#define PS_v174	((void*)startLabel+88)
void FR_Prelude_46primIntegerFromInt(void);
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_Prelude_46primIntegerFromInt[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Prelude_46primIntegerFromInt)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v175)
,	/* CT_v176: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primIntegerFromInt[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerFromInt),1)
, useLabel(PS_v174)
, 0
, 0
, 0
,};
Node PP_Prelude_46primIntegerFromInt[] = {
 };
Node PC_Prelude_46primIntegerFromInt[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,70)
, bytes2word(114,111,109,73)
, bytes2word(110,116,0,0)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerFromInt)
, useLabel(PC_Prelude_46primIntegerFromInt)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primIntegerFromIntC" Prelude.primIntegerFromInt 1 :: Prelude.Int -> Prelude.Integer */
extern Node* primIntegerFromIntC(HsInt);
#ifdef PROFILE
static SInfo pf_Prelude_46primIntegerFromInt = {"Prelude","Prelude.primIntegerFromInt","Prelude.Integer"};
#endif
C_HEADER(FR_Prelude_46primIntegerFromInt) {
  NodePtr nodeptr;
  Node* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = primIntegerFromIntC(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_Prelude_46primIntegerFromInt);
  C_RETURN(nodeptr);
}

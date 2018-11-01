#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+40)
#define CT_v191	((void*)startLabel+108)
#define CT_v197	((void*)startLabel+276)
#define ST_v187	((void*)startLabel+312)
#define ST_v193	((void*)startLabel+336)
#define ST_v190	((void*)startLabel+364)
#define PS_v186	((void*)startLabel+388)
#define PS_v189	((void*)startLabel+400)
#define PS_v196	((void*)startLabel+412)
#define PS_v194	((void*)startLabel+424)
#define PS_v195	((void*)startLabel+436)
#define PS_v192	((void*)startLabel+448)
void FR_Prelude_46primIntegerQuot(void);
void FR_Prelude_46primIntegerRem(void);
extern Node PM_Prelude[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46primIntegerQuot[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Prelude_46primIntegerQuot)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primIntegerQuot[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerQuot),2)
, useLabel(PS_v186)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Prelude_46primIntegerRem[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Prelude_46primIntegerRem)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primIntegerRem[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerRem),2)
, useLabel(PS_v189)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v197)
,};
Node FN_Prelude_46primIntegerQuotRem[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(13,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v193)
,	/* CT_v197: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46primIntegerQuotRem[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerQuotRem),2)
, useLabel(PS_v192)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerQuot))
, VAPTAG(useLabel(FN_Prelude_46primIntegerRem))
,};
Node PP_Prelude_46primIntegerQuot[] = {
 };
Node PC_Prelude_46primIntegerQuot[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,81)
, bytes2word(117,111,116,0)
,};
Node PP_Prelude_46primIntegerQuotRem[] = {
 };
Node PC_Prelude_46primIntegerQuotRem[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,81)
, bytes2word(117,111,116,82)
, bytes2word(101,109,0,0)
,};
Node PP_Prelude_46primIntegerRem[] = {
 };
Node PC_Prelude_46primIntegerRem[] = {
 	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,82)
, bytes2word(101,109,0,0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerQuot)
, useLabel(PC_Prelude_46primIntegerQuot)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerRem)
, useLabel(PC_Prelude_46primIntegerRem)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerQuotRem)
, useLabel(PC_Prelude_462)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerQuotRem)
, useLabel(PC_Prelude_46primIntegerQuot)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerQuotRem)
, useLabel(PC_Prelude_46primIntegerRem)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46primIntegerQuotRem)
, useLabel(PC_Prelude_46primIntegerQuotRem)
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

#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46primEqHandleC	((void*)startLabel+12)
#define CT_v209	((void*)startLabel+32)
#define F0_IO_46primEqHandleC	((void*)startLabel+40)
#define CT_v210	((void*)startLabel+68)
#define CT_v211	((void*)startLabel+108)
#define CT_v212	((void*)startLabel+156)
void FR_IO_46primEqHandleC(void);
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46IO_46Handle[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v209)
,	/* FN_IO_46primEqHandleC: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46primEqHandleC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v209: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46primEqHandleC: (byte 0) */
  CAPTAG(useLabel(FN_IO_46primEqHandleC),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v210)
,};
Node FN_Prelude_46Eq_46IO_46Handle_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v210: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46Handle_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle_46_61_61),2)
, VAPTAG(useLabel(FN_IO_46primEqHandleC))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v211)
,};
Node FN_Prelude_46Eq_46IO_46Handle_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v211: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46Handle_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46IO_46Handle)
, bytes2word(0,0,0,0)
, useLabel(CT_v212)
,};
Node FN_Prelude_46Eq_46IO_46Handle[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v212: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46IO_46Handle[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle))
, useLabel(F0_Prelude_46Eq_46IO_46Handle_46_47_61)
, useLabel(F0_Prelude_46Eq_46IO_46Handle_46_61_61)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primEqHandleC" IO.primEqHandleC 2 :: FFI.ForeignObj -> FFI.ForeignObj -> Prelude.Bool */
extern HsBool primEqHandleC(void*,void*);
#ifdef PROFILE
static SInfo pf_IO_46primEqHandleC = {"IO","IO.primEqHandleC","Prelude.Bool"};
#endif
C_HEADER(FR_IO_46primEqHandleC) {
  NodePtr nodeptr;
  HsBool result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = primEqHandleC(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46primEqHandleC);
  C_RETURN(nodeptr);
}

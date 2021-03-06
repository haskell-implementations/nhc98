#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hGetBuffering_35	((void*)startLabel+8)
#define CT_v190	((void*)startLabel+36)
#define F0_IO_46hGetBuffering_35	((void*)startLabel+44)
#define CT_v192	((void*)startLabel+80)
#define ST_v191	((void*)startLabel+100)
#define ST_v189	((void*)startLabel+117)
extern Node TM_IO[];
void FR_IO_46hGetBuffering_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v190)
,	/* FN_IO_46hGetBuffering_35: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hGetBuffering_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v189)
,	/* CT_v190: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hGetBuffering_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hGetBuffering_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v192)
,};
Node FN_IO_46hGetBuffering[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v191)
,	/* CT_v192: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_IO_46hGetBuffering[] = {
  VAPTAG(useLabel(FN_IO_46hGetBuffering))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hGetBuffering_35)
,	/* ST_v191: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,66)
, bytes2word(117,102,102,101)
, bytes2word(114,105,110,103)
,	/* ST_v189: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,71,101,116)
, bytes2word(66,117,102,102)
, bytes2word(101,114,105,110)
, bytes2word(103,35,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hGetBufferingC" IO.hGetBuffering# 1 :: FFI.ForeignObj -> IO.BufferMode */
extern Node* hGetBufferingC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hGetBuffering_35 = {"IO","IO.hGetBuffering#","IO.BufferMode"};
#endif
C_HEADER(FR_IO_46hGetBuffering_35) {
  NodePtr nodeptr;
  Node* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hGetBufferingC(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_IO_46hGetBuffering_35);
  C_RETURN(nodeptr);
}

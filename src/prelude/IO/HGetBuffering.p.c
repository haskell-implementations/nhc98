#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hGetBuffering_35	((void*)startLabel+8)
#define CT_v191	((void*)startLabel+32)
#define F0_IO_46hGetBuffering_35	((void*)startLabel+40)
#define CT_v195	((void*)startLabel+120)
#define ST_v193	((void*)startLabel+156)
#define PP_IO_46hGetBuffering_35	((void*)startLabel+173)
#define PC_IO_46hGetBuffering_35	((void*)startLabel+173)
#define ST_v190	((void*)startLabel+173)
#define PS_v194	((void*)startLabel+192)
#define PS_v192	((void*)startLabel+204)
#define PS_v189	((void*)startLabel+216)
void FR_IO_46hGetBuffering_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
extern Node PM_IO[];
extern Node PC_NHC_46Internal_46_95mkIOok1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v191)
,	/* FN_IO_46hGetBuffering_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hGetBuffering_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hGetBuffering_35: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hGetBuffering_35),1)
, useLabel(PS_v189)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v195)
,};
Node FN_IO_46hGetBuffering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v193)
,	/* CT_v195: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_IO_46hGetBuffering[] = {
  VAPTAG(useLabel(FN_IO_46hGetBuffering))
, useLabel(PS_v192)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_IO_46hGetBuffering_35)
,};
Node PP_IO_46hGetBuffering[] = {
 };
Node PC_IO_46hGetBuffering[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,66)
, bytes2word(117,102,102,101)
, bytes2word(114,105,110,103)
,	/* PP_IO_46hGetBuffering_35: (byte 1) */
 	/* PC_IO_46hGetBuffering_35: (byte 1) */
 	/* ST_v190: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,71,101,116)
, bytes2word(66,117,102,102)
, bytes2word(101,114,105,110)
, bytes2word(103,35,0,0)
,	/* PS_v194: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetBuffering)
, useLabel(PC_NHC_46Internal_46_95mkIOok1)
,	/* PS_v192: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetBuffering)
, useLabel(PC_IO_46hGetBuffering)
,	/* PS_v189: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetBuffering_35)
, useLabel(PC_IO_46hGetBuffering_35)
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

#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46hGetFileNameC	((void*)startLabel+8)
#define CT_v194	((void*)startLabel+32)
#define F0_IO_46hGetFileNameC	((void*)startLabel+40)
#define CT_v200	((void*)startLabel+192)
#define ST_v196	((void*)startLabel+228)
#define PP_IO_46hGetFileNameC	((void*)startLabel+244)
#define PC_IO_46hGetFileNameC	((void*)startLabel+244)
#define ST_v193	((void*)startLabel+244)
#define PS_v192	((void*)startLabel+264)
#define PS_v198	((void*)startLabel+276)
#define PS_v199	((void*)startLabel+288)
#define PS_v197	((void*)startLabel+300)
#define PS_v195	((void*)startLabel+312)
void FR_IO_46hGetFileNameC(void);
extern Node FN_CString_46fromCString[];
extern Node PM_IO[];
extern Node PC_CString_46fromCString[];
extern Node PC_Prelude_46Just[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v194)
,	/* FN_IO_46hGetFileNameC: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_IO_46hGetFileNameC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46hGetFileNameC: (byte 0) */
  CAPTAG(useLabel(FN_IO_46hGetFileNameC),1)
, useLabel(PS_v192)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v200)
,};
Node FN_IO_46hGetFileName[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v196)
,	/* CT_v200: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hGetFileName[] = {
  CAPTAG(useLabel(FN_IO_46hGetFileName),1)
, useLabel(PS_v195)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hGetFileNameC))
, VAPTAG(useLabel(FN_CString_46fromCString))
,};
Node PP_IO_46hGetFileName[] = {
 };
Node PC_IO_46hGetFileName[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(71,101,116,70)
, bytes2word(105,108,101,78)
,	/* PP_IO_46hGetFileNameC: (byte 4) */
 	/* PC_IO_46hGetFileNameC: (byte 4) */
 	/* ST_v193: (byte 4) */
  bytes2word(97,109,101,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,70)
, bytes2word(105,108,101,78)
, bytes2word(97,109,101,67)
, bytes2word(0,0,0,0)
,	/* PS_v192: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetFileNameC)
, useLabel(PC_IO_46hGetFileNameC)
,	/* PS_v198: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetFileName)
, useLabel(PC_CString_46fromCString)
,	/* PS_v199: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetFileName)
, useLabel(PC_Prelude_46Just)
,	/* PS_v197: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetFileName)
, useLabel(PC_IO_46hGetFileNameC)
,	/* PS_v195: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hGetFileName)
, useLabel(PC_IO_46hGetFileName)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hGetFileNameC" IO.hGetFileNameC 1 :: FFI.ForeignObj -> PackedString.PackedString */
extern char* hGetFileNameC(void*);
#ifdef PROFILE
static SInfo pf_IO_46hGetFileNameC = {"IO","IO.hGetFileNameC","PackedString.PackedString"};
#endif
C_HEADER(FR_IO_46hGetFileNameC) {
  NodePtr nodeptr;
  char* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = hGetFileNameC(arg1);

  nodeptr = nhc_mkString((char*)result);
  INIT_PROFINFO(nodeptr,&pf_IO_46hGetFileNameC);
  C_RETURN(nodeptr);
}

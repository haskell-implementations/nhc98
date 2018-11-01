#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95stdmem	((void*)startLabel+8)
#define CT_v189	((void*)startLabel+36)
#define CF_NHC_46Binary_46hs_95stdmem	((void*)startLabel+44)
#define CT_v191	((void*)startLabel+80)
#define ST_v188	((void*)startLabel+96)
#define ST_v190	((void*)startLabel+117)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95stdmem(void);

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v189)
,	/* FN_NHC_46Binary_46hs_95stdmem: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95stdmem)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v188)
,	/* CT_v189: (byte 0) */
  HW(0,0)
, 0
,	/* CF_NHC_46Binary_46hs_95stdmem: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95stdmem))
, bytes2word(0,0,0,0)
, useLabel(CT_v191)
,};
Node FN_NHC_46Binary_46stdmem[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Binary_46stdmem[] = {
  VAPTAG(useLabel(FN_NHC_46Binary_46stdmem))
, useLabel(CF_NHC_46Binary_46hs_95stdmem)
,	/* ST_v188: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,115,116)
, bytes2word(100,109,101,109)
,	/* ST_v190: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(115,116,100,109)
, bytes2word(101,109,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_stdmem" NHC.Binary.hs_stdmem 0 ::  -> FFI.ForeignObj */
extern void* hs_stdmem();
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95stdmem = {"NHC.Binary","NHC.Binary.hs_stdmem","FFI.ForeignObj"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95stdmem) {
  NodePtr nodeptr;
  void* result;
;

  result = hs_stdmem();

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95stdmem);
  C_RETURN(nodeptr);
}

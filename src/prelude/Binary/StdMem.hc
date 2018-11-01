#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95stdmem	((void*)startLabel+8)
#define CT_v188	((void*)startLabel+24)
#define CF_NHC_46Binary_46hs_95stdmem	((void*)startLabel+32)
#define CT_v189	((void*)startLabel+56)
void FR_NHC_46Binary_46hs_95stdmem(void);

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v188)
,	/* FN_NHC_46Binary_46hs_95stdmem: (byte 0) */
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95stdmem)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(0,0)
, 0
,	/* CF_NHC_46Binary_46hs_95stdmem: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95stdmem))
, bytes2word(0,0,0,0)
, useLabel(CT_v189)
,};
Node FN_NHC_46Binary_46stdmem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v189: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Binary_46stdmem[] = {
  VAPTAG(useLabel(FN_NHC_46Binary_46stdmem))
, useLabel(CF_NHC_46Binary_46hs_95stdmem)
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

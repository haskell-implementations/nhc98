#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95stdmem	((void*)startLabel+8)
#define CT_v190	((void*)startLabel+32)
#define CF_NHC_46Binary_46hs_95stdmem	((void*)startLabel+40)
#define CT_v193	((void*)startLabel+88)
#define PP_NHC_46Binary_46hs_95stdmem	((void*)startLabel+120)
#define PC_NHC_46Binary_46hs_95stdmem	((void*)startLabel+120)
#define ST_v189	((void*)startLabel+120)
#define ST_v192	((void*)startLabel+144)
#define PS_v188	((void*)startLabel+164)
#define PS_v191	((void*)startLabel+176)
void FR_NHC_46Binary_46hs_95stdmem(void);
extern Node PM_NHC_46Binary[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v190)
,	/* FN_NHC_46Binary_46hs_95stdmem: (byte 0) */
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95stdmem)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v189)
,	/* CT_v190: (byte 0) */
  HW(0,0)
, 0
,	/* CF_NHC_46Binary_46hs_95stdmem: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95stdmem))
, useLabel(PS_v188)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v193)
,};
Node FN_NHC_46Binary_46stdmem[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(PUSH_P1,0,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46Binary_46stdmem[] = {
  VAPTAG(useLabel(FN_NHC_46Binary_46stdmem))
, useLabel(PS_v191)
, 0
, 0
, 0
, useLabel(CF_NHC_46Binary_46hs_95stdmem)
,	/* PP_NHC_46Binary_46hs_95stdmem: (byte 0) */
 	/* PC_NHC_46Binary_46hs_95stdmem: (byte 0) */
 	/* ST_v189: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,104)
, bytes2word(115,95,115,116)
, bytes2word(100,109,101,109)
, bytes2word(0,0,0,0)
,};
Node PP_NHC_46Binary_46stdmem[] = {
 };
Node PC_NHC_46Binary_46stdmem[] = {
 	/* ST_v192: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,115)
, bytes2word(116,100,109,101)
, bytes2word(109,0,0,0)
,	/* PS_v188: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95stdmem)
, useLabel(PC_NHC_46Binary_46hs_95stdmem)
,	/* PS_v191: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46stdmem)
, useLabel(PC_NHC_46Binary_46stdmem)
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

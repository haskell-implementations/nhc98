#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+24)
#define CT_v178	((void*)startLabel+68)
extern void *cProfile();
extern Node FN_CString_46toCString[];
extern Node FN_Prelude_46seq[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_NonStdProfile_46cProfile[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cProfile)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NonStdProfile_46cProfile[] = {
  CAPTAG(useLabel(FN_NonStdProfile_46cProfile),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v178)
,};
Node FN_NonStdProfile_46profile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NonStdProfile_46profile[] = {
  CAPTAG(useLabel(FN_NonStdProfile_46profile),2)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NonStdProfile_46cProfile))
, VAPTAG(useLabel(FN_Prelude_46seq))
,};

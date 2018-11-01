#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+24)
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46flip[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Prelude_46subtract[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v174: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46subtract[] = {
  CAPTAG(useLabel(FN_Prelude_46subtract),1)
, VAPTAG(useLabel(FN_Prelude_46_45))
, CAPTAG(useLabel(FN_Prelude_46flip),2)
,};

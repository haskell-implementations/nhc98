#include "newmacros.h"
#include "runtime.h"

#define CT_v168	((void*)startLabel+24)
extern Node FN_Char_46isControl[];
extern Node FN_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v168)
,};
Node FN_Char_46isPrint[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v168: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Char_46isPrint[] = {
  CAPTAG(useLabel(FN_Char_46isPrint),1)
, VAPTAG(useLabel(FN_Char_46isControl))
, VAPTAG(useLabel(FN_Prelude_46not))
,};

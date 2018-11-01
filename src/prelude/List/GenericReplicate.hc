#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+32)
extern Node FN_Prelude_46repeat[];
extern Node FN_List_46genericTake[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v183)
,};
Node FN_List_46genericReplicate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_List_46genericReplicate[] = {
  CAPTAG(useLabel(FN_List_46genericReplicate),3)
, VAPTAG(useLabel(FN_Prelude_46repeat))
, VAPTAG(useLabel(FN_List_46genericTake))
,};

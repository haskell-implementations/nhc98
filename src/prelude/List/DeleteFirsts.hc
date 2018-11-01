#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+20)
extern Node FN_List_46_92_92[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_List_46deleteFirsts[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v172: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_List_46deleteFirsts[] = {
  CAPTAG(useLabel(FN_List_46deleteFirsts),1)
, VAPTAG(useLabel(FN_List_46_92_92))
,};

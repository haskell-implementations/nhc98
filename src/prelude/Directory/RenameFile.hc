#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+24)
extern Node FN_Directory_46renameDirectory[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v171)
,};
Node FN_Directory_46renameFile[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v171: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Directory_46renameFile[] = {
  CAPTAG(useLabel(FN_Directory_46renameFile),2)
, VAPTAG(useLabel(FN_Directory_46renameDirectory))
,};

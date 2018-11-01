#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+36)
#define ST_v171	((void*)startLabel+52)
extern Node TM_Directory[];
extern Node FN_Directory_46renameDirectory[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,};
Node FN_Directory_46renameFile[] = {
  useLabel(TM_Directory)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v171)
,	/* CT_v172: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Directory_46renameFile[] = {
  CAPTAG(useLabel(FN_Directory_46renameFile),2)
, VAPTAG(useLabel(FN_Directory_46renameDirectory))
,	/* ST_v171: (byte 0) */
  bytes2word(68,105,114,101)
, bytes2word(99,116,111,114)
, bytes2word(121,46,114,101)
, bytes2word(110,97,109,101)
, bytes2word(70,105,108,101)
, bytes2word(0,0,0,0)
,};

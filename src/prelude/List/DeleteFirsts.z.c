#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+32)
#define ST_v172	((void*)startLabel+48)
extern Node TM_List[];
extern Node FN_List_46_92_92[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_List_46deleteFirsts[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v172)
,	/* CT_v173: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_List_46deleteFirsts[] = {
  CAPTAG(useLabel(FN_List_46deleteFirsts),1)
, VAPTAG(useLabel(FN_List_46_92_92))
,	/* ST_v172: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,100,101,108)
, bytes2word(101,116,101,70)
, bytes2word(105,114,115,116)
, bytes2word(115,0,0,0)
,};

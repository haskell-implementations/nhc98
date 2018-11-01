#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+44)
#define ST_v183	((void*)startLabel+64)
extern Node TM_List[];
extern Node FN_Prelude_46repeat[];
extern Node FN_List_46genericTake[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v184)
,};
Node FN_List_46genericReplicate[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_List_46genericReplicate[] = {
  CAPTAG(useLabel(FN_List_46genericReplicate),3)
, VAPTAG(useLabel(FN_Prelude_46repeat))
, VAPTAG(useLabel(FN_List_46genericTake))
,	/* ST_v183: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,103,101,110)
, bytes2word(101,114,105,99)
, bytes2word(82,101,112,108)
, bytes2word(105,99,97,116)
, bytes2word(101,0,0,0)
,};

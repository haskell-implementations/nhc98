#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+36)
#define ST_v173	((void*)startLabel+56)
extern Node TM_List[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_List_46intersectBy[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_List_46intersect[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_List_46intersect[] = {
  CAPTAG(useLabel(FN_List_46intersect),1)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, CAPTAG(useLabel(FN_List_46intersectBy),2)
,	/* ST_v173: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,105,110,116)
, bytes2word(101,114,115,101)
, bytes2word(99,116,0,0)
,};

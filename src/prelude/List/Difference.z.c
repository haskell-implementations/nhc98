#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+40)
#define ST_v178	((void*)startLabel+64)
extern Node TM_List[];
extern Node FN_List_46delete[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46foldl[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_List_46_92_92[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 110002
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46_92_92[] = {
  CAPTAG(useLabel(FN_List_46_92_92),1)
, VAPTAG(useLabel(FN_List_46delete))
, CAPTAG(useLabel(FN_Prelude_46flip),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),2)
,	/* ST_v178: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,92,92,0)
,};

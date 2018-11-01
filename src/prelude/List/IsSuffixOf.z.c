#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+52)
#define ST_v181	((void*)startLabel+76)
extern Node TM_List[];
extern Node FN_Prelude_46reverse[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_List_46isPrefixOf[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v182)
,};
Node FN_List_46isSuffixOf[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_List_46isSuffixOf[] = {
  CAPTAG(useLabel(FN_List_46isSuffixOf),3)
, VAPTAG(useLabel(FN_Prelude_46reverse))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_List_46isPrefixOf))
,	/* ST_v181: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,105,115,83)
, bytes2word(117,102,102,105)
, bytes2word(120,79,102,0)
,};

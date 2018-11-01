#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+44)
#define ST_v176	((void*)startLabel+68)
extern Node TM_List[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_List_46findIndices[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v177)
,};
Node FN_List_46elemIndices[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v176)
,	/* CT_v177: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_List_46elemIndices[] = {
  CAPTAG(useLabel(FN_List_46elemIndices),2)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_List_46findIndices),1)
,	/* ST_v176: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,101,108,101)
, bytes2word(109,73,110,100)
, bytes2word(105,99,101,115)
, bytes2word(0,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+24)
extern Node FN_List_46findIndices[];
extern Node FN_Prelude_46_46[];
extern Node F0_Maybe_46listToMaybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_List_46findIndex[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46findIndex[] = {
  CAPTAG(useLabel(FN_List_46findIndex),1)
, CAPTAG(useLabel(FN_List_46findIndices),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Maybe_46listToMaybe)
,};

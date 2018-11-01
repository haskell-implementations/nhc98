#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+40)
extern Node FN_List_46deleteFirstsBy[];
extern Node FN_List_46nubBy[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v180)
,};
Node FN_List_46unionBy[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v180: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_List_46unionBy[] = {
  CAPTAG(useLabel(FN_List_46unionBy),3)
, VAPTAG(useLabel(FN_List_46deleteFirstsBy))
, VAPTAG(useLabel(FN_List_46nubBy))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
,};

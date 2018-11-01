#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+32)
extern Node FN_List_46elemBy[];
extern Node FN_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v177)
,};
Node FN_List_46notElemBy[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_List_46notElemBy[] = {
  CAPTAG(useLabel(FN_List_46notElemBy),3)
, VAPTAG(useLabel(FN_List_46elemBy))
, VAPTAG(useLabel(FN_Prelude_46not))
,};

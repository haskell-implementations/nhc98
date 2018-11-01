#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+20)
#define FN_LAMBDA191	((void*)startLabel+56)
#define CT_v194	((void*)startLabel+84)
#define F0_LAMBDA191	((void*)startLabel+92)
extern Node FN_List_46zipWith5[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v193)
,};
Node FN_List_46zip5[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip5[] = {
  VAPTAG(useLabel(FN_List_46zip5))
, CAPTAG(useLabel(FN_LAMBDA191),5)
, CAPTAG(useLabel(FN_List_46zipWith5),5)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v194)
,	/* FN_LAMBDA191: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,5,0)
,	/* CT_v194: (byte 0) */
  HW(0,5)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),5)
,};

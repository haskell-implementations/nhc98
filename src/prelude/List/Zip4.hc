#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+20)
#define FN_LAMBDA186	((void*)startLabel+56)
#define CT_v189	((void*)startLabel+80)
#define F0_LAMBDA186	((void*)startLabel+88)
extern Node FN_List_46zipWith4[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v188)
,};
Node FN_List_46zip4[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip4[] = {
  VAPTAG(useLabel(FN_List_46zip4))
, CAPTAG(useLabel(FN_LAMBDA186),4)
, CAPTAG(useLabel(FN_List_46zipWith4),4)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v189)
,	/* FN_LAMBDA186: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v189: (byte 0) */
  HW(0,4)
, 0
,	/* F0_LAMBDA186: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA186),4)
,};

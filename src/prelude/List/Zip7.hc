#include "newmacros.h"
#include "runtime.h"

#define CT_v203	((void*)startLabel+20)
#define FN_LAMBDA201	((void*)startLabel+60)
#define CT_v204	((void*)startLabel+92)
#define F0_LAMBDA201	((void*)startLabel+100)
extern Node FN_List_46zipWith7[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v203)
,};
Node FN_List_46zip7[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v203: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip7[] = {
  VAPTAG(useLabel(FN_List_46zip7))
, CAPTAG(useLabel(FN_LAMBDA201),7)
, CAPTAG(useLabel(FN_List_46zipWith7),7)
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v204)
,	/* FN_LAMBDA201: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
,	/* CT_v204: (byte 0) */
  HW(0,7)
, 0
,	/* F0_LAMBDA201: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA201),7)
,};

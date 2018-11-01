#include "newmacros.h"
#include "runtime.h"

#define CT_v198	((void*)startLabel+20)
#define FN_LAMBDA196	((void*)startLabel+60)
#define CT_v199	((void*)startLabel+88)
#define F0_LAMBDA196	((void*)startLabel+96)
extern Node FN_List_46zipWith6[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v198)
,};
Node FN_List_46zip6[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip6[] = {
  VAPTAG(useLabel(FN_List_46zip6))
, CAPTAG(useLabel(FN_LAMBDA196),6)
, CAPTAG(useLabel(FN_List_46zipWith6),6)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v199)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,6,0)
,	/* CT_v199: (byte 0) */
  HW(0,6)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),6)
,};

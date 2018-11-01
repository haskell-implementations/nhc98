#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+28)
#define CT_v164	((void*)startLabel+60)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v163)
,};
Node FN_Machine_46floatIsDouble[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v163: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Machine_46floatIsDouble[] = {
  VAPTAG(useLabel(FN_Machine_46floatIsDouble))
, bytes2word(0,0,0,0)
, useLabel(CT_v164)
,};
Node FN_Machine_46wsize[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v164: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Machine_46wsize[] = {
  VAPTAG(useLabel(FN_Machine_46wsize))
,};

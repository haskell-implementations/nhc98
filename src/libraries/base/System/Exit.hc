#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+32)
#define CT_v173	((void*)startLabel+80)
extern Node FN_System_46exitWith[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v172)
,};
Node FN_System_46Exit_46exitSuccess[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v172: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Exit_46exitSuccess[] = {
  VAPTAG(useLabel(FN_System_46Exit_46exitSuccess))
, VAPTAG(useLabel(FN_System_46exitWith))
, bytes2word(0,0,0,0)
, useLabel(CT_v173)
,};
Node FN_System_46Exit_46exitFailure[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_INT_P1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v173: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Exit_46exitFailure[] = {
  VAPTAG(useLabel(FN_System_46Exit_46exitFailure))
, VAPTAG(useLabel(FN_System_46exitWith))
,};

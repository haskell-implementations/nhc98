#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+20)
extern Node FN_System_46primExitWith[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_System_46exitWith[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v173: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_System_46exitWith[] = {
  CAPTAG(useLabel(FN_System_46exitWith),1)
, VAPTAG(useLabel(FN_System_46primExitWith))
,};

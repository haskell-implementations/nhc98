#include "newmacros.h"
#include "runtime.h"

#define CT_v162	((void*)startLabel+20)
#define FN_LAMBDA160	((void*)startLabel+48)
#define CT_v163	((void*)startLabel+72)
#define F0_LAMBDA160	((void*)startLabel+80)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v162)
,};
Node FN_Prelude_46showChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v162: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46showChar[] = {
  VAPTAG(useLabel(FN_Prelude_46showChar))
, CAPTAG(useLabel(FN_LAMBDA160),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v163)
,	/* FN_LAMBDA160: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v163: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA160: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA160),2)
,};

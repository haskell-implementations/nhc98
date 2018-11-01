#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+44)
#define FN_LAMBDA180	((void*)startLabel+80)
#define CT_v184	((void*)startLabel+100)
#define CF_LAMBDA180	((void*)startLabel+108)
#define ST_v183	((void*)startLabel+112)
extern Node FN_Prelude_46_43_43[];
extern Node FN_System_46cExitWith[];
extern Node FN_NonStdTrace_46trace[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_Prelude_46primError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,HEAP_CVAL_N1)
, bytes2word(1,HEAP_INT_N1,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v182: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46primError[] = {
  CAPTAG(useLabel(FN_Prelude_46primError),1)
, VAPTAG(useLabel(FN_LAMBDA180))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_System_46cExitWith))
, VAPTAG(useLabel(FN_NonStdTrace_46trace))
, bytes2word(0,0,0,0)
, useLabel(CT_v184)
,	/* FN_LAMBDA180: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA180: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA180))
,	/* ST_v183: (byte 0) */
  bytes2word(10,0,0,0)
,};

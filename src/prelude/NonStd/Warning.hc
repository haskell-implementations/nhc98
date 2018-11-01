#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+28)
#define FN_LAMBDA171	((void*)startLabel+60)
#define CT_v175	((void*)startLabel+80)
#define CF_LAMBDA171	((void*)startLabel+88)
#define ST_v174	((void*)startLabel+92)
extern Node FN_Prelude_46_43_43[];
extern Node FN_NonStdTrace_46trace[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_Warning_46warning[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v173: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Warning_46warning[] = {
  CAPTAG(useLabel(FN_Warning_46warning),1)
, VAPTAG(useLabel(FN_LAMBDA171))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, CAPTAG(useLabel(FN_NonStdTrace_46trace),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v175)
,	/* FN_LAMBDA171: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v174)
,	/* CT_v175: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA171: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA171))
,	/* ST_v174: (byte 0) */
  bytes2word(87,65,82,78)
, bytes2word(73,78,71,33)
, bytes2word(33,32,0,0)
,};

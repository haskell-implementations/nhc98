#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+32)
#define FN_LAMBDA165	((void*)startLabel+56)
#define CT_v169	((void*)startLabel+76)
#define CF_LAMBDA165	((void*)startLabel+84)
#define ST_v168	((void*)startLabel+88)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v167)
,};
Node FN_Prelude_46userError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(3,2,0)
,	/* CT_v167: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46userError[] = {
  CAPTAG(useLabel(FN_Prelude_46userError),1)
, VAPTAG(useLabel(FN_LAMBDA165))
, bytes2word(0,0,0,0)
, useLabel(CT_v169)
,	/* FN_LAMBDA165: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA165: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA165))
,	/* ST_v168: (byte 0) */
  bytes2word(99,97,108,108)
, bytes2word(32,116,111,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,96,117,115)
, bytes2word(101,114,69,114)
, bytes2word(114,111,114,39)
, bytes2word(0,0,0,0)
,};

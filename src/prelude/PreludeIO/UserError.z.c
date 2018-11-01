#include "newmacros.h"
#include "runtime.h"

#define CT_v168	((void*)startLabel+44)
#define FN_LAMBDA165	((void*)startLabel+68)
#define CT_v171	((void*)startLabel+100)
#define CF_LAMBDA165	((void*)startLabel+108)
#define ST_v167	((void*)startLabel+112)
#define ST_v169	((void*)startLabel+130)
#define ST_v170	((void*)startLabel+158)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v168)
,};
Node FN_Prelude_46userError[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(3,2,0)
, 60001
, useLabel(ST_v167)
,	/* CT_v168: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46userError[] = {
  CAPTAG(useLabel(FN_Prelude_46userError),1)
, VAPTAG(useLabel(FN_LAMBDA165))
, bytes2word(0,0,0,0)
, useLabel(CT_v171)
,	/* FN_LAMBDA165: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v170)
, 60025
, useLabel(ST_v169)
,	/* CT_v171: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA165: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA165))
,	/* ST_v167: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(117,115,101,114)
, bytes2word(69,114,114,111)
,	/* ST_v169: (byte 2) */
  bytes2word(114,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,117,115)
, bytes2word(101,114,69,114)
, bytes2word(114,111,114,58)
, bytes2word(54,58,50,53)
, bytes2word(45,54,58,53)
,	/* ST_v170: (byte 2) */
  bytes2word(52,0,99,97)
, bytes2word(108,108,32,116)
, bytes2word(111,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,96)
, bytes2word(117,115,101,114)
, bytes2word(69,114,114,111)
, bytes2word(114,39,0,0)
,};

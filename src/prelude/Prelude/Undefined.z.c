#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+32)
#define FN_LAMBDA164	((void*)startLabel+60)
#define CT_v169	((void*)startLabel+92)
#define CF_LAMBDA164	((void*)startLabel+100)
#define ST_v166	((void*)startLabel+104)
#define ST_v168	((void*)startLabel+122)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v167)
,};
Node FN_Prelude_46undefined[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v166)
,	/* CT_v167: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46undefined[] = {
  VAPTAG(useLabel(FN_Prelude_46undefined))
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v169)
,	/* FN_LAMBDA164: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v166)
, 40019
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
,	/* ST_v166: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(117,110,100,101)
, bytes2word(102,105,110,101)
,	/* ST_v168: (byte 2) */
  bytes2word(100,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,117,110)
, bytes2word(100,101,102,105)
, bytes2word(110,101,100,58)
, bytes2word(52,58,49,57)
, bytes2word(45,52,58,51)
, bytes2word(55,0,0,0)
,};

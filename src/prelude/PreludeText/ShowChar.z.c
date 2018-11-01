#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+32)
#define FN_LAMBDA160	((void*)startLabel+60)
#define CT_v165	((void*)startLabel+92)
#define F0_LAMBDA160	((void*)startLabel+100)
#define ST_v162	((void*)startLabel+104)
#define ST_v164	((void*)startLabel+121)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v163)
,};
Node FN_Prelude_46showChar[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v162)
,	/* CT_v163: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46showChar[] = {
  VAPTAG(useLabel(FN_Prelude_46showChar))
, CAPTAG(useLabel(FN_LAMBDA160),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v165)
,	/* FN_LAMBDA160: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 40020
, useLabel(ST_v164)
,	/* CT_v165: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA160: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA160),2)
,	/* ST_v162: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(67,104,97,114)
,	/* ST_v164: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,115,104,111)
, bytes2word(119,67,104,97)
, bytes2word(114,58,52,58)
, bytes2word(50,48,0,0)
,};

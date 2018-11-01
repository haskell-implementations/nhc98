#include "newmacros.h"
#include "runtime.h"

#define CT_v161	((void*)startLabel+32)
#define ST_v160	((void*)startLabel+48)
extern Node TM_Prelude[];
extern Node F0_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v161)
,};
Node FN_Prelude_46showString[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v160)
,	/* CT_v161: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46showString[] = {
  VAPTAG(useLabel(FN_Prelude_46showString))
, useLabel(F0_Prelude_46_43_43)
,	/* ST_v160: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(83,116,114,105)
, bytes2word(110,103,0,0)
,};

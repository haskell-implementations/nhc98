#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+32)
#define ST_v168	((void*)startLabel+48)
extern Node TM_Prelude[];
extern Node F0_Prelude_46const[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v169)
,};
Node FN_Prelude_46asTypeOf[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46asTypeOf[] = {
  VAPTAG(useLabel(FN_Prelude_46asTypeOf))
, useLabel(F0_Prelude_46const)
,	/* ST_v168: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(97,115,84,121)
, bytes2word(112,101,79,102)
, bytes2word(0,0,0,0)
,};

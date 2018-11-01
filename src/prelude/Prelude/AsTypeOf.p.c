#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+28)
#define ST_v169	((void*)startLabel+60)
#define PS_v168	((void*)startLabel+80)
extern Node F0_Prelude_46const[];
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v170)
,};
Node FN_Prelude_46asTypeOf[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v169)
,	/* CT_v170: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46asTypeOf[] = {
  VAPTAG(useLabel(FN_Prelude_46asTypeOf))
, useLabel(PS_v168)
, 0
, 0
, 0
, useLabel(F0_Prelude_46const)
,};
Node PP_Prelude_46asTypeOf[] = {
 };
Node PC_Prelude_46asTypeOf[] = {
 	/* ST_v169: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(97,115,84,121)
, bytes2word(112,101,79,102)
, bytes2word(0,0,0,0)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46asTypeOf)
, useLabel(PC_Prelude_46asTypeOf)
,};

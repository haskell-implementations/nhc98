#include "newmacros.h"
#include "runtime.h"

#define CT_v162	((void*)startLabel+28)
#define ST_v161	((void*)startLabel+60)
#define PS_v160	((void*)startLabel+80)
extern Node F0_Prelude_46_43_43[];
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v162)
,};
Node FN_Prelude_46showString[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v161)
,	/* CT_v162: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46showString[] = {
  VAPTAG(useLabel(FN_Prelude_46showString))
, useLabel(PS_v160)
, 0
, 0
, 0
, useLabel(F0_Prelude_46_43_43)
,};
Node PP_Prelude_46showString[] = {
 };
Node PC_Prelude_46showString[] = {
 	/* ST_v161: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(83,116,114,105)
, bytes2word(110,103,0,0)
,	/* PS_v160: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showString)
, useLabel(PC_Prelude_46showString)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+28)
#define ST_v177	((void*)startLabel+56)
#define PS_v176	((void*)startLabel+68)
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_Prelude_46snd[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46snd[] = {
  CAPTAG(useLabel(FN_Prelude_46snd),1)
, useLabel(PS_v176)
, 0
, 0
, 0
,};
Node PP_Prelude_46snd[] = {
 };
Node PC_Prelude_46snd[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,110,100,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46snd)
, useLabel(PC_Prelude_46snd)
,};

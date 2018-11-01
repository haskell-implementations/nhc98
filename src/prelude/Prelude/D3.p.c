#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_463	((void*)startLabel+16)

static Node startLabel[] = {
  42
,};
Node PP_Prelude_463[] = {
 };
Node PC_Prelude_463[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,0,0,0)
,	/* PS_Prelude_463: (byte 0) */
  useLabel(PP_Prelude_463)
, useLabel(PP_Prelude_463)
, useLabel(PC_Prelude_463)
,};

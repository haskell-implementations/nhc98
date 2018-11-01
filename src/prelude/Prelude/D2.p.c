#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_462	((void*)startLabel+16)

static Node startLabel[] = {
  42
,};
Node PP_Prelude_462[] = {
 };
Node PC_Prelude_462[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,0,0,0)
,	/* PS_Prelude_462: (byte 0) */
  useLabel(PP_Prelude_462)
, useLabel(PP_Prelude_462)
, useLabel(PC_Prelude_462)
,};

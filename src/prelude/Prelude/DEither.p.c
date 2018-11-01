#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_46Right	((void*)startLabel+20)
#define PS_Prelude_46Left	((void*)startLabel+48)

static Node startLabel[] = {
  42
,};
Node PP_Prelude_46Right[] = {
 };
Node PC_Prelude_46Right[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,105,103,104)
, bytes2word(116,0,0,0)
,	/* PS_Prelude_46Right: (byte 0) */
  useLabel(PP_Prelude_46Right)
, useLabel(PP_Prelude_46Right)
, useLabel(PC_Prelude_46Right)
,};
Node PP_Prelude_46Left[] = {
 };
Node PC_Prelude_46Left[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(76,101,102,116)
, bytes2word(0,0,0,0)
,	/* PS_Prelude_46Left: (byte 0) */
  useLabel(PP_Prelude_46Left)
, useLabel(PP_Prelude_46Left)
, useLabel(PC_Prelude_46Left)
,};

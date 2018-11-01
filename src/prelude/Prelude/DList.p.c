#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_46_58	((void*)startLabel+16)
#define PS_Prelude_46_91_93	((void*)startLabel+40)

static Node startLabel[] = {
  42
,};
Node PP_Prelude_46_58[] = {
 };
Node PC_Prelude_46_58[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(58,0,0,0)
,	/* PS_Prelude_46_58: (byte 0) */
  useLabel(PP_Prelude_46_58)
, useLabel(PP_Prelude_46_58)
, useLabel(PC_Prelude_46_58)
,};
Node PP_Prelude_46_91_93[] = {
 };
Node PC_Prelude_46_91_93[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,0,0)
,	/* PS_Prelude_46_91_93: (byte 0) */
  useLabel(PP_Prelude_46_91_93)
, useLabel(PP_Prelude_46_91_93)
, useLabel(PC_Prelude_46_91_93)
,};
Node C0_Prelude_46_91_93[] = {
  CONSTR(0,0,0)
, useLabel(PS_Prelude_46_91_93)
, 0
, 0
, 0
,};

#include "newmacros.h"
#include "runtime.h"

#define PS_IO_46HandlePosn	((void*)startLabel+20)

static Node startLabel[] = {
  42
,};
Node PP_IO_46HandlePosn[] = {
 };
Node PC_IO_46HandlePosn[] = {
  bytes2word(73,79,46,72)
, bytes2word(97,110,100,108)
, bytes2word(101,80,111,115)
, bytes2word(110,0,0,0)
,	/* PS_IO_46HandlePosn: (byte 0) */
  useLabel(PP_IO_46HandlePosn)
, useLabel(PP_IO_46HandlePosn)
, useLabel(PC_IO_46HandlePosn)
,};

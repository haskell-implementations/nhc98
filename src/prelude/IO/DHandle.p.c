#include "newmacros.h"
#include "runtime.h"

#define PS_IO_46Handle	((void*)startLabel+16)

static Node startLabel[] = {
  42
,};
Node PP_IO_46Handle[] = {
 };
Node PC_IO_46Handle[] = {
  bytes2word(73,79,46,72)
, bytes2word(97,110,100,108)
, bytes2word(101,0,0,0)
,	/* PS_IO_46Handle: (byte 0) */
  useLabel(PP_IO_46Handle)
, useLabel(PP_IO_46Handle)
, useLabel(PC_IO_46Handle)
,};

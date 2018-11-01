#include "newmacros.h"
#include "runtime.h"

#define PS_System_46ExitFailure	((void*)startLabel+24)
#define PS_System_46ExitSuccess	((void*)startLabel+56)

static Node startLabel[] = {
  42
,};
Node PP_System_46ExitFailure[] = {
 };
Node PC_System_46ExitFailure[] = {
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,70)
, bytes2word(97,105,108,117)
, bytes2word(114,101,0,0)
,	/* PS_System_46ExitFailure: (byte 0) */
  useLabel(PP_System_46ExitFailure)
, useLabel(PP_System_46ExitFailure)
, useLabel(PC_System_46ExitFailure)
,};
Node PP_System_46ExitSuccess[] = {
 };
Node PC_System_46ExitSuccess[] = {
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,83)
, bytes2word(117,99,99,101)
, bytes2word(115,115,0,0)
,	/* PS_System_46ExitSuccess: (byte 0) */
  useLabel(PP_System_46ExitSuccess)
, useLabel(PP_System_46ExitSuccess)
, useLabel(PC_System_46ExitSuccess)
,};
Node C0_System_46ExitSuccess[] = {
  CONSTR(0,0,0)
, useLabel(PS_System_46ExitSuccess)
, 0
, 0
, 0
,};

#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_46Just	((void*)startLabel+20)
#define PS_Prelude_46Nothing	((void*)startLabel+48)

static Node startLabel[] = {
  42
,};
Node PP_Prelude_46Just[] = {
 };
Node PC_Prelude_46Just[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(74,117,115,116)
, bytes2word(0,0,0,0)
,	/* PS_Prelude_46Just: (byte 0) */
  useLabel(PP_Prelude_46Just)
, useLabel(PP_Prelude_46Just)
, useLabel(PC_Prelude_46Just)
,};
Node PP_Prelude_46Nothing[] = {
 };
Node PC_Prelude_46Nothing[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,111,116,104)
, bytes2word(105,110,103,0)
,	/* PS_Prelude_46Nothing: (byte 0) */
  useLabel(PP_Prelude_46Nothing)
, useLabel(PP_Prelude_46Nothing)
, useLabel(PC_Prelude_46Nothing)
,};
Node C0_Prelude_46Nothing[] = {
  CONSTR(0,0,0)
, useLabel(PS_Prelude_46Nothing)
, 0
, 0
, 0
,};

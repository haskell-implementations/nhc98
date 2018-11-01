#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_46UserError	((void*)startLabel+24)
#define PS_Prelude_46PatternError	((void*)startLabel+60)
#define PS_Prelude_46EOFError	((void*)startLabel+92)
#define PS_Prelude_46IOError	((void*)startLabel+120)

static Node startLabel[] = {
  42
,};
Node PP_Prelude_46UserError[] = {
 };
Node PC_Prelude_46UserError[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(85,115,101,114)
, bytes2word(69,114,114,111)
, bytes2word(114,0,0,0)
,	/* PS_Prelude_46UserError: (byte 0) */
  useLabel(PP_Prelude_46UserError)
, useLabel(PP_Prelude_46UserError)
, useLabel(PC_Prelude_46UserError)
,};
Node PP_Prelude_46PatternError[] = {
 };
Node PC_Prelude_46PatternError[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,69)
, bytes2word(114,114,111,114)
, bytes2word(0,0,0,0)
,	/* PS_Prelude_46PatternError: (byte 0) */
  useLabel(PP_Prelude_46PatternError)
, useLabel(PP_Prelude_46PatternError)
, useLabel(PC_Prelude_46PatternError)
,};
Node PP_Prelude_46EOFError[] = {
 };
Node PC_Prelude_46EOFError[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,79,70,69)
, bytes2word(114,114,111,114)
, bytes2word(0,0,0,0)
,	/* PS_Prelude_46EOFError: (byte 0) */
  useLabel(PP_Prelude_46EOFError)
, useLabel(PP_Prelude_46EOFError)
, useLabel(PC_Prelude_46EOFError)
,};
Node PP_Prelude_46IOError[] = {
 };
Node PC_Prelude_46IOError[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,79,69,114)
, bytes2word(114,111,114,0)
,	/* PS_Prelude_46IOError: (byte 0) */
  useLabel(PP_Prelude_46IOError)
, useLabel(PP_Prelude_46IOError)
, useLabel(PC_Prelude_46IOError)
,};

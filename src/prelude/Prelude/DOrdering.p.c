#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_46GT	((void*)startLabel+16)
#define PS_Prelude_46EQ	((void*)startLabel+40)
#define PS_Prelude_46LT	((void*)startLabel+64)

static Node startLabel[] = {
  42
,};
Node PP_Prelude_46GT[] = {
 };
Node PC_Prelude_46GT[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(71,84,0,0)
,	/* PS_Prelude_46GT: (byte 0) */
  useLabel(PP_Prelude_46GT)
, useLabel(PP_Prelude_46GT)
, useLabel(PC_Prelude_46GT)
,};
Node PP_Prelude_46EQ[] = {
 };
Node PC_Prelude_46EQ[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,81,0,0)
,	/* PS_Prelude_46EQ: (byte 0) */
  useLabel(PP_Prelude_46EQ)
, useLabel(PP_Prelude_46EQ)
, useLabel(PC_Prelude_46EQ)
,};
Node PP_Prelude_46LT[] = {
 };
Node PC_Prelude_46LT[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(76,84,0,0)
,	/* PS_Prelude_46LT: (byte 0) */
  useLabel(PP_Prelude_46LT)
, useLabel(PP_Prelude_46LT)
, useLabel(PC_Prelude_46LT)
,};
Node C0_Prelude_46GT[] = {
  CONSTR(2,0,0)
, useLabel(PS_Prelude_46GT)
, 0
, 0
, 0
,};
Node C0_Prelude_46EQ[] = {
  CONSTR(1,0,0)
, useLabel(PS_Prelude_46EQ)
, 0
, 0
, 0
,};
Node C0_Prelude_46LT[] = {
  CONSTR(0,0,0)
, useLabel(PS_Prelude_46LT)
, 0
, 0
, 0
,};

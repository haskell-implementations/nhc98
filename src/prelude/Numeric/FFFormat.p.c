#include "newmacros.h"
#include "runtime.h"

#define PS_Numeric_46FFGeneric	((void*)startLabel+24)
#define PS_Numeric_46FFFixed	((void*)startLabel+52)
#define PS_Numeric_46FFExponent	((void*)startLabel+84)

static Node startLabel[] = {
  42
,};
Node PP_Numeric_46FFGeneric[] = {
 };
Node PC_Numeric_46FFGeneric[] = {
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(70,70,71,101)
, bytes2word(110,101,114,105)
, bytes2word(99,0,0,0)
,	/* PS_Numeric_46FFGeneric: (byte 0) */
  useLabel(PP_Numeric_46FFGeneric)
, useLabel(PP_Numeric_46FFGeneric)
, useLabel(PC_Numeric_46FFGeneric)
,};
Node PP_Numeric_46FFFixed[] = {
 };
Node PC_Numeric_46FFFixed[] = {
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(70,70,70,105)
, bytes2word(120,101,100,0)
,	/* PS_Numeric_46FFFixed: (byte 0) */
  useLabel(PP_Numeric_46FFFixed)
, useLabel(PP_Numeric_46FFFixed)
, useLabel(PC_Numeric_46FFFixed)
,};
Node PP_Numeric_46FFExponent[] = {
 };
Node PC_Numeric_46FFExponent[] = {
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(70,70,69,120)
, bytes2word(112,111,110,101)
, bytes2word(110,116,0,0)
,	/* PS_Numeric_46FFExponent: (byte 0) */
  useLabel(PP_Numeric_46FFExponent)
, useLabel(PP_Numeric_46FFExponent)
, useLabel(PC_Numeric_46FFExponent)
,};
Node C0_Numeric_46FFGeneric[] = {
  CONSTR(2,0,0)
, useLabel(PS_Numeric_46FFGeneric)
, 0
, 0
, 0
,};
Node C0_Numeric_46FFFixed[] = {
  CONSTR(1,0,0)
, useLabel(PS_Numeric_46FFFixed)
, 0
, 0
, 0
,};
Node C0_Numeric_46FFExponent[] = {
  CONSTR(0,0,0)
, useLabel(PS_Numeric_46FFExponent)
, 0
, 0
, 0
,};

#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_46True	((void*)startLabel+20)
#define PS_Prelude_46False	((void*)startLabel+48)

static Node startLabel[] = {
  42
,};
Node PP_Prelude_46True[] = {
 };
Node PC_Prelude_46True[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(84,114,117,101)
, bytes2word(0,0,0,0)
,	/* PS_Prelude_46True: (byte 0) */
  useLabel(PP_Prelude_46True)
, useLabel(PP_Prelude_46True)
, useLabel(PC_Prelude_46True)
,};
Node PP_Prelude_46False[] = {
 };
Node PC_Prelude_46False[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,97,108,115)
, bytes2word(101,0,0,0)
,	/* PS_Prelude_46False: (byte 0) */
  useLabel(PP_Prelude_46False)
, useLabel(PP_Prelude_46False)
, useLabel(PC_Prelude_46False)
,};
Node C0_Prelude_46True[] = {
  CONSTR(1,0,0)
, useLabel(PS_Prelude_46True)
, 0
, 0
, 0
,};
Node C0_Prelude_46False[] = {
  CONSTR(0,0,0)
, useLabel(PS_Prelude_46False)
, 0
, 0
, 0
,};

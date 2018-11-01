#include "newmacros.h"
#include "runtime.h"

#define PS__40_41	((void*)startLabel+8)

static Node startLabel[] = {
  42
,};
Node PP__40_41[] = {
 };
Node PC__40_41[] = {
  bytes2word(40,41,0,0)
,	/* PS__40_41: (byte 0) */
  useLabel(PP__40_41)
, useLabel(PP__40_41)
, useLabel(PC__40_41)
,};
Node C0__40_41[] = {
  CONSTR(0,0,0)
, useLabel(PS__40_41)
, 0
, 0
, 0
,};

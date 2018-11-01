#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+60)
#define ST_v174	((void*)startLabel+96)
#define PS_v175	((void*)startLabel+108)
#define PS_v173	((void*)startLabel+120)
extern Node FN_IO_46hIsEOF[];
extern Node CF_IO_46stdin[];
extern Node PM_IO[];
extern Node PC_IO_46hIsEOF[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v176)
,};
Node FN_IO_46isEOF[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_IO_46isEOF[] = {
  VAPTAG(useLabel(FN_IO_46isEOF))
, useLabel(PS_v173)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hIsEOF))
, useLabel(CF_IO_46stdin)
,};
Node PP_IO_46isEOF[] = {
 };
Node PC_IO_46isEOF[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(115,69,79,70)
, bytes2word(0,0,0,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46isEOF)
, useLabel(PC_IO_46hIsEOF)
,	/* PS_v173: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46isEOF)
, useLabel(PC_IO_46isEOF)
,};

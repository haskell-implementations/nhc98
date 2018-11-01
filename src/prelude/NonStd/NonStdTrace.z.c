#include "newmacros.h"
#include "runtime.h"

#define v187	((void*)startLabel+26)
#define v188	((void*)startLabel+29)
#define CT_v191	((void*)startLabel+60)
#define ST_v185	((void*)startLabel+80)
#define ST_v189	((void*)startLabel+92)
extern Node TM_NonStdTrace[];
extern Node CF_IO_46stderr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_NonStdTrace_46trace[] = {
  useLabel(TM_NonStdTrace)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v187: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v188: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_P1)
, bytes2word(0,EVAL,PUSH_CVAL_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,HPUTC,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_I2,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v189)
,	/* CT_v191: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NonStdTrace_46trace[] = {
  CAPTAG(useLabel(FN_NonStdTrace_46trace),2)
, useLabel(CF_IO_46stderr)
, VAPTAG(useLabel(FN_NonStdTrace_46trace))
,};
Node PM_NonStdTrace[] = {
 	/* ST_v185: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,84,114)
,	/* ST_v189: (byte 4) */
  bytes2word(97,99,101,0)
, bytes2word(78,111,110,83)
, bytes2word(116,100,84,114)
, bytes2word(97,99,101,46)
, bytes2word(116,114,97,99)
, bytes2word(101,0,0,0)
,};

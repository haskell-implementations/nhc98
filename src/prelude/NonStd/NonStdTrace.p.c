#include "newmacros.h"
#include "runtime.h"

#define v187	((void*)startLabel+22)
#define v188	((void*)startLabel+25)
#define CT_v192	((void*)startLabel+88)
#define ST_v185	((void*)startLabel+124)
#define ST_v190	((void*)startLabel+136)
#define PS_v189	((void*)startLabel+156)
extern Node CF_IO_46stderr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,};
Node FN_NonStdTrace_46trace[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v187: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v188: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_P1)
, bytes2word(0,EVAL,PUSH_CVAL_P1,7)
, bytes2word(EVAL,NEEDHEAP_I32,HPUTC,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NonStdTrace_46trace[] = {
  CAPTAG(useLabel(FN_NonStdTrace_46trace),2)
, useLabel(PS_v189)
, 0
, 0
, 0
, useLabel(CF_IO_46stderr)
, VAPTAG(useLabel(FN_NonStdTrace_46trace))
,};
Node PM_NonStdTrace[] = {
 	/* ST_v185: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,84,114)
, bytes2word(97,99,101,0)
,};
Node PP_NonStdTrace_46trace[] = {
 };
Node PC_NonStdTrace_46trace[] = {
 	/* ST_v190: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,84,114)
, bytes2word(97,99,101,46)
, bytes2word(116,114,97,99)
, bytes2word(101,0,0,0)
,	/* PS_v189: (byte 0) */
  useLabel(PM_NonStdTrace)
, useLabel(PP_NonStdTrace_46trace)
, useLabel(PC_NonStdTrace_46trace)
,};

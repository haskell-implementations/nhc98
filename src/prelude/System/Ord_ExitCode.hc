#include "newmacros.h"
#include "runtime.h"

#define v267	((void*)startLabel+22)
#define v269	((void*)startLabel+32)
#define v270	((void*)startLabel+37)
#define v271	((void*)startLabel+43)
#define v273	((void*)startLabel+54)
#define v274	((void*)startLabel+58)
#define CT_v278	((void*)startLabel+88)
#define CT_v279	((void*)startLabel+128)
#define CT_v280	((void*)startLabel+172)
#define CT_v281	((void*)startLabel+216)
#define CT_v282	((void*)startLabel+260)
#define CT_v283	((void*)startLabel+304)
#define CT_v284	((void*)startLabel+348)
#define CT_v285	((void*)startLabel+408)
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46System_46ExitCode[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node CF_Prelude_46Eq_46System_46ExitCode[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v267: (byte 2) */
  bytes2word(TOP(25),BOT(25),POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v269: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v270: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_HEAP)
,	/* v271: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,UNPACK)
, bytes2word(1,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v273: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v274: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v278: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46compare),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v279: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v280)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v280: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v281: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v282: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v283)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v283: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v284)
,};
Node FN_Prelude_46Ord_46System_46ExitCode_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v284: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46System_46ExitCode_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46System_46ExitCode)
, bytes2word(0,0,0,0)
, useLabel(CT_v285)
,};
Node FN_Prelude_46Ord_46System_46ExitCode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v285: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46System_46ExitCode[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46System_46ExitCode))
, useLabel(CF_Prelude_46Eq_46System_46ExitCode)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_60)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_60_61)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_62_61)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46_62)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46compare)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46min)
, useLabel(F0_Prelude_46Ord_46System_46ExitCode_46max)
,};

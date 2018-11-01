#include "newmacros.h"
#include "runtime.h"

#define v177	((void*)startLabel+22)
#define v178	((void*)startLabel+25)
#define CT_v183	((void*)startLabel+128)
#define ST_v180	((void*)startLabel+160)
#define PS_v182	((void*)startLabel+172)
#define PS_v179	((void*)startLabel+184)
extern Node PM_Prelude[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,};
Node FN_Prelude_46_43_43[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v177: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v178: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_OFF_N1,13)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v180)
,	/* CT_v183: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_43_43[] = {
  CAPTAG(useLabel(FN_Prelude_46_43_43),2)
, useLabel(PS_v179)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_43_43))
,};
Node PP_Prelude_46_43_43[] = {
 };
Node PC_Prelude_46_43_43[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(43,43,0,0)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_43_43)
, useLabel(PC_Prelude_46_58)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_43_43)
, useLabel(PC_Prelude_46_43_43)
,};

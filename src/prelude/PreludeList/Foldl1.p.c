#include "newmacros.h"
#include "runtime.h"

#define v180	((void*)startLabel+22)
#define v181	((void*)startLabel+41)
#define CT_v188	((void*)startLabel+136)
#define FN_LAMBDA177	((void*)startLabel+184)
#define CT_v192	((void*)startLabel+228)
#define CF_LAMBDA177	((void*)startLabel+236)
#define ST_v183	((void*)startLabel+256)
#define PP_LAMBDA177	((void*)startLabel+271)
#define PC_LAMBDA177	((void*)startLabel+271)
#define ST_v190	((void*)startLabel+271)
#define ST_v191	((void*)startLabel+296)
#define PS_v187	((void*)startLabel+328)
#define PS_v186	((void*)startLabel+340)
#define PS_v182	((void*)startLabel+352)
#define PS_v185	((void*)startLabel+364)
#define PS_v189	((void*)startLabel+376)
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46foldl[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46foldl[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46foldl1[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v180: (byte 2) */
  bytes2word(TOP(23),BOT(23),POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v181: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_I2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v183)
,	/* CT_v188: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46foldl1[] = {
  CAPTAG(useLabel(FN_Prelude_46foldl1),2)
, useLabel(PS_v182)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA177))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46foldl))
, bytes2word(0,0,0,0)
, useLabel(CT_v192)
,	/* FN_LAMBDA177: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v191)
, 50027
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA177: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA177))
, useLabel(PS_v189)
, 0
, 0
, 0
,};
Node PP_Prelude_46foldl1[] = {
 };
Node PC_Prelude_46foldl1[] = {
 	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,111,108,100)
,	/* PP_LAMBDA177: (byte 3) */
 	/* PC_LAMBDA177: (byte 3) */
 	/* ST_v190: (byte 3) */
  bytes2word(108,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,102)
, bytes2word(111,108,100,108)
, bytes2word(49,58,53,58)
, bytes2word(50,55,45,53)
,	/* ST_v191: (byte 4) */
  bytes2word(58,53,56,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(102,111,108,100)
, bytes2word(108,49,58,32)
, bytes2word(101,109,112,116)
, bytes2word(121,32,108,105)
, bytes2word(115,116,0,0)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldl1)
, useLabel(PC_Prelude_46foldl)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldl1)
, useLabel(PC_Prelude_46error)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldl1)
, useLabel(PC_Prelude_46foldl1)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldl1)
, useLabel(PC_LAMBDA177)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA177)
, useLabel(PC_LAMBDA177)
,};

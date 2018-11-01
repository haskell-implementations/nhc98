#include "newmacros.h"
#include "runtime.h"

#define v180	((void*)startLabel+18)
#define v181	((void*)startLabel+28)
#define v183	((void*)startLabel+40)
#define v184	((void*)startLabel+51)
#define CT_v191	((void*)startLabel+192)
#define ST_v186	((void*)startLabel+224)
#define PS_v188	((void*)startLabel+240)
#define PS_v190	((void*)startLabel+252)
#define PS_v185	((void*)startLabel+264)
extern Node PM_Maybe[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v191)
,};
Node FN_Maybe_46catMaybes[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v180: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v181: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v183: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(15),BOT(15))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v184: (byte 3) */
  bytes2word(HEAP_SPACE,HEAP_I2,RETURN_EVAL,UNPACK)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_OFF_N1,12)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v186)
,	/* CT_v191: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Maybe_46catMaybes[] = {
  CAPTAG(useLabel(FN_Maybe_46catMaybes),1)
, useLabel(PS_v185)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Maybe_46catMaybes))
,};
Node PP_Maybe_46catMaybes[] = {
 };
Node PC_Maybe_46catMaybes[] = {
 	/* ST_v186: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,99,97)
, bytes2word(116,77,97,121)
, bytes2word(98,101,115,0)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46catMaybes)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46catMaybes)
, useLabel(PC_Prelude_46_58)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46catMaybes)
, useLabel(PC_Maybe_46catMaybes)
,};

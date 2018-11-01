#include "newmacros.h"
#include "runtime.h"

#define v240	((void*)startLabel+26)
#define v253	((void*)startLabel+42)
#define v244	((void*)startLabel+46)
#define v241	((void*)startLabel+70)
#define v245	((void*)startLabel+74)
#define v255	((void*)startLabel+90)
#define v249	((void*)startLabel+94)
#define v246	((void*)startLabel+118)
#define v237	((void*)startLabel+122)
#define CT_v257	((void*)startLabel+208)
#define CT_v262	((void*)startLabel+336)
#define CT_v268	((void*)startLabel+512)
#define ST_v264	((void*)startLabel+548)
#define ST_v259	((void*)startLabel+576)
#define ST_v251	((void*)startLabel+608)
#define PS_v254	((void*)startLabel+640)
#define PS_v256	((void*)startLabel+652)
#define PS_v250	((void*)startLabel+664)
#define PS_v261	((void*)startLabel+676)
#define PS_v258	((void*)startLabel+688)
#define PS_v260	((void*)startLabel+700)
#define PS_v266	((void*)startLabel+712)
#define PS_v265	((void*)startLabel+724)
#define PS_v263	((void*)startLabel+736)
#define PS_v267	((void*)startLabel+748)
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v257)
,};
Node FN_Prelude_46Eq_46Prelude_46Either_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v240: (byte 2) */
  bytes2word(TOP(52),BOT(52),UNPACK,1)
, bytes2word(PUSH_ARG,4,ZAP_ARG_I2,ZAP_ARG)
, bytes2word(4,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v253: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v244: (byte 2) */
  bytes2word(26,0,UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
,	/* v241: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,JUMP)
,	/* v245: (byte 2) */
  bytes2word(50,0,UNPACK,1)
, bytes2word(PUSH_ARG,4,ZAP_ARG_I1,ZAP_ARG)
, bytes2word(4,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v255: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v249: (byte 2) */
  bytes2word(26,0,UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
,	/* v246: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,JUMP)
,	/* v237: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v256)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v254)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v251)
,	/* CT_v257: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_61_61),4)
, useLabel(PS_v250)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Eq_46Prelude_46Either_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, 30026
, useLabel(ST_v259)
,	/* CT_v262: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_47_61),4)
, useLabel(PS_v258)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Eq_46Prelude_46Either[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v267)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, 30026
, useLabel(ST_v264)
,	/* CT_v268: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either),2)
, useLabel(PS_v263)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_61_61),2)
,};
Node PP_Prelude_46Eq_46Prelude_46Either[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Either[] = {
 	/* ST_v264: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
, bytes2word(114,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Either_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Either_46_47_61[] = {
 	/* ST_v259: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
, bytes2word(114,46,47,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_46Either_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_46Either_46_61_61[] = {
 	/* ST_v251: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
, bytes2word(114,46,61,61)
, bytes2word(0,0,0,0)
,	/* PS_v254: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either_46_61_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v256: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either_46_61_61)
, useLabel(PC_Prelude_46False)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Either_46_61_61)
,	/* PS_v261: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Either_46_47_61)
,	/* PS_v260: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Either)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either)
, useLabel(PC_Prelude_46Eq_46Prelude_46Either_46_61_61)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either)
, useLabel(PC_Prelude_46Eq_46Prelude_46Either_46_47_61)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either)
, useLabel(PC_Prelude_46Eq_46Prelude_46Either)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_46Either)
, useLabel(PC_Prelude_462)
,};

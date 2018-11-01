#include "newmacros.h"
#include "runtime.h"

#define CT_v238	((void*)startLabel+40)
#define CT_v240	((void*)startLabel+92)
#define v242	((void*)startLabel+130)
#define v243	((void*)startLabel+134)
#define CT_v246	((void*)startLabel+168)
#define CT_v248	((void*)startLabel+216)
#define CT_v250	((void*)startLabel+280)
#define ST_v249	((void*)startLabel+308)
#define ST_v247	((void*)startLabel+336)
#define ST_v244	((void*)startLabel+367)
#define ST_v237	((void*)startLabel+399)
#define ST_v239	((void*)startLabel+432)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_95_46_62_62[];
extern Node CF_Prelude_46Monad_46Prelude_46Maybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe_46fail[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 90005
, useLabel(ST_v237)
,	/* CT_v238: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46Maybe_46fail[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe_46fail),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v240)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe_46return[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 80005
, useLabel(ST_v239)
,	/* CT_v240: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46Maybe_46return[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe_46return),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v246)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe_46_62_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v242: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v243: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60005
, useLabel(ST_v244)
,	/* CT_v246: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46Maybe_46_62_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe_46_62_62_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v248)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe_46_62_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v247)
,	/* CT_v248: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46Maybe_46_62_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe_46_62_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_62))
, useLabel(CF_Prelude_46Monad_46Prelude_46Maybe)
, bytes2word(0,0,0,0)
, useLabel(CT_v250)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 50010
, useLabel(ST_v249)
,	/* CT_v250: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Monad_46Prelude_46Maybe[] = {
  VAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe))
, useLabel(F0_Prelude_46Monad_46Prelude_46Maybe_46_62_62_61)
, useLabel(F0_Prelude_46Monad_46Prelude_46Maybe_46_62_62)
, useLabel(F0_Prelude_46Monad_46Prelude_46Maybe_46fail)
, useLabel(F0_Prelude_46Monad_46Prelude_46Maybe_46return)
,	/* ST_v249: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
,	/* ST_v247: (byte 4) */
  bytes2word(121,98,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
,	/* ST_v244: (byte 3) */
  bytes2word(62,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(111,110,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,62)
,	/* ST_v237: (byte 3) */
  bytes2word(62,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,77)
, bytes2word(111,110,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,77,97,121)
, bytes2word(98,101,46,102)
,	/* ST_v239: (byte 4) */
  bytes2word(97,105,108,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,111,110,97)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
, bytes2word(114,101,116,117)
, bytes2word(114,110,0,0)
,};

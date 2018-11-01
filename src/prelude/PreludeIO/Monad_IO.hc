#include "newmacros.h"
#include "runtime.h"

#define CT_v312	((void*)startLabel+20)
#define FN_LAMBDA310	((void*)startLabel+48)
#define CT_v313	((void*)startLabel+76)
#define F0_LAMBDA310	((void*)startLabel+84)
#define FN_LAMBDA309	((void*)startLabel+100)
#define CT_v315	((void*)startLabel+120)
#define CF_LAMBDA309	((void*)startLabel+128)
#define CT_v316	((void*)startLabel+152)
#define FN_Prelude_46Prelude_46182_46primReturn	((void*)startLabel+180)
#define CT_v317	((void*)startLabel+204)
#define F0_Prelude_46Prelude_46182_46primReturn	((void*)startLabel+212)
#define CT_v318	((void*)startLabel+240)
#define FN_Prelude_46Prelude_46173_46primBind2	((void*)startLabel+268)
#define v320	((void*)startLabel+284)
#define v321	((void*)startLabel+291)
#define CT_v323	((void*)startLabel+316)
#define F0_Prelude_46Prelude_46173_46primBind2	((void*)startLabel+324)
#define CT_v324	((void*)startLabel+352)
#define FN_Prelude_46Prelude_46163_46primBind1	((void*)startLabel+380)
#define v326	((void*)startLabel+396)
#define v327	((void*)startLabel+403)
#define CT_v329	((void*)startLabel+436)
#define F0_Prelude_46Prelude_46163_46primBind1	((void*)startLabel+444)
#define CT_v330	((void*)startLabel+484)
#define ST_v314	((void*)startLabel+512)
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v312)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46fail[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v312: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46fail[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46fail),1)
, CAPTAG(useLabel(FN_LAMBDA310),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v313)
,	/* FN_LAMBDA310: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,1,0)
, CONSTR(3,2,0)
,	/* CT_v313: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA310: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA310),2)
, VAPTAG(useLabel(FN_LAMBDA309))
, bytes2word(0,0,0,0)
, useLabel(CT_v315)
,	/* FN_LAMBDA309: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v314)
,	/* CT_v315: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA309: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA309))
, bytes2word(1,0,0,1)
, useLabel(CT_v316)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v316: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return),1)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46182_46primReturn),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v317)
,	/* FN_Prelude_46Prelude_46182_46primReturn: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG,1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v317: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Prelude_46Prelude_46182_46primReturn: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46182_46primReturn),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v318)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v318: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46173_46primBind2),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v323)
,	/* FN_Prelude_46Prelude_46173_46primBind2: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v320: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(11),BOT(11))
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v321: (byte 3) */
  bytes2word(1,HEAP_I1,RETURN,UNPACK)
, bytes2word(1,PUSH_ARG_I3,PUSH_ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v323: (byte 0) */
  HW(0,3)
, 0
,	/* F0_Prelude_46Prelude_46173_46primBind2: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46173_46primBind2),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v324)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v324: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46163_46primBind1),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v329)
,	/* FN_Prelude_46Prelude_46163_46primBind1: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v326: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(11),BOT(11))
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v327: (byte 3) */
  bytes2word(1,HEAP_I1,RETURN,UNPACK)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_ARG_I3,PUSH_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v329: (byte 0) */
  HW(1,3)
, 0
,	/* F0_Prelude_46Prelude_46163_46primBind1: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46163_46primBind1),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v330)
,};
Node FN_Prelude_46Monad_46NHC_46Internal_46IO[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v330: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Monad_46NHC_46Internal_46IO[] = {
  VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62)
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46fail)
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* ST_v314: (byte 0) */
  bytes2word(99,97,108,108)
, bytes2word(32,116,111,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,96,102,97)
, bytes2word(105,108,39,0)
,};

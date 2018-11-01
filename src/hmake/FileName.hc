#include "newmacros.h"
#include "runtime.h"

#define FN_FileName_46toPath	((void*)startLabel+8)
#define CT_v266	((void*)startLabel+20)
#define CF_FileName_46toPath	((void*)startLabel+28)
#define FN_LAMBDA261	((void*)startLabel+48)
#define v267	((void*)startLabel+60)
#define CT_v269	((void*)startLabel+68)
#define F0_LAMBDA261	((void*)startLabel+76)
#define v270	((void*)startLabel+137)
#define CT_v272	((void*)startLabel+172)
#define FN_LAMBDA264	((void*)startLabel+212)
#define v284	((void*)startLabel+236)
#define v278	((void*)startLabel+240)
#define v275	((void*)startLabel+244)
#define v285	((void*)startLabel+258)
#define v282	((void*)startLabel+262)
#define v279	((void*)startLabel+265)
#define CT_v286	((void*)startLabel+288)
#define F0_LAMBDA264	((void*)startLabel+296)
#define FN_LAMBDA263	((void*)startLabel+324)
#define CT_v288	((void*)startLabel+344)
#define CF_LAMBDA263	((void*)startLabel+352)
#define FN_LAMBDA262	((void*)startLabel+364)
#define CT_v290	((void*)startLabel+384)
#define CF_LAMBDA262	((void*)startLabel+392)
#define CT_v291	((void*)startLabel+416)
#define ST_v289	((void*)startLabel+432)
#define ST_v287	((void*)startLabel+433)
extern Node FN_Prelude_46map[];
extern Node FN_Argv_46isUnix[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46last[];
extern Node F0_Prelude_46id[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v266)
,	/* FN_FileName_46toPath: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v266: (byte 0) */
  HW(2,0)
, 0
,	/* CF_FileName_46toPath: (byte 0) */
  VAPTAG(useLabel(FN_FileName_46toPath))
, CAPTAG(useLabel(FN_LAMBDA261),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v269)
,	/* FN_LAMBDA261: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,46,PUSH_ARG_I1)
, bytes2word(EVAL,EQ_W,JUMPFALSE,5)
,	/* v267: (byte 4) */
  bytes2word(0,PUSH_CHAR_P1,47,RETURN)
, bytes2word(PUSH_ARG_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v269: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA261: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA261),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v272)
,};
Node FN_FileName_46fixFile[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,32,0,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_N1,1,HEAP_CHAR_P1)
, bytes2word(46,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
,	/* v270: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,1,HEAP_CHAR_P1)
, bytes2word(46,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,4,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v272: (byte 0) */
  HW(5,4)
, 0
,};
Node F0_FileName_46fixFile[] = {
  CAPTAG(useLabel(FN_FileName_46fixFile),4)
, VAPTAG(useLabel(FN_Argv_46isUnix))
, VAPTAG(useLabel(FN_LAMBDA264))
, VAPTAG(useLabel(FN_FileName_46toPath))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v286)
,	/* FN_LAMBDA264: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,4,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v284: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v278: (byte 4) */
  bytes2word(POP_I1,JUMP,6,0)
,	/* v275: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_I4,RETURN_EVAL)
, bytes2word(PUSH_I1,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(47),BOT(47),TOP(10),BOT(10))
,	/* v285: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v282: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I1)
,	/* v279: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v286: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA264: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA264),1)
, VAPTAG(useLabel(FN_Prelude_46last))
, VAPTAG(useLabel(FN_LAMBDA262))
, VAPTAG(useLabel(FN_LAMBDA263))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v288)
,	/* FN_LAMBDA263: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v287)
,	/* CT_v288: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA263: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA263))
, bytes2word(0,0,0,0)
, useLabel(CT_v290)
,	/* FN_LAMBDA262: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v289)
,	/* CT_v290: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA262: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA262))
, bytes2word(0,0,0,0)
, useLabel(CT_v291)
,};
Node FN_FileName_46fixFileName[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v291: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_FileName_46fixFileName[] = {
  VAPTAG(useLabel(FN_FileName_46fixFileName))
, useLabel(F0_Prelude_46id)
,	/* ST_v289: (byte 0) */
 	/* ST_v287: (byte 1) */
  bytes2word(0,47,0,0)
,};

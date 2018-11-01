#include "newmacros.h"
#include "runtime.h"

#define v240	((void*)startLabel+22)
#define v233	((void*)startLabel+26)
#define v230	((void*)startLabel+31)
#define v242	((void*)startLabel+52)
#define v239	((void*)startLabel+56)
#define v236	((void*)startLabel+64)
#define CT_v243	((void*)startLabel+108)
#define FN_LAMBDA228	((void*)startLabel+164)
#define CT_v247	((void*)startLabel+196)
#define F0_LAMBDA228	((void*)startLabel+204)
#define FN_LAMBDA227	((void*)startLabel+220)
#define CT_v249	((void*)startLabel+240)
#define CF_LAMBDA227	((void*)startLabel+248)
#define FN_LAMBDA226	((void*)startLabel+260)
#define CT_v253	((void*)startLabel+276)
#define F0_LAMBDA226	((void*)startLabel+284)
#define ST_v248	((void*)startLabel+292)
extern Node FN_List_46partition[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46map[];
extern Node F0_Prelude_46fst[];
extern Node FN_Compat_46difference[];
extern Node FN_Prelude_46null[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v243)
,};
Node FN_Tsort_46ptsort[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v240: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v233: (byte 2) */
  bytes2word(7,0,POP_I1,PUSH_HEAP)
,	/* v230: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v242: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v239: (byte 4) */
  bytes2word(POP_I1,JUMP,10,0)
, bytes2word(POP_I1,HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v236: (byte 4) */
  bytes2word(6,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_I1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,10,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I1,HEAP_OFF_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v243: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Tsort_46ptsort[] = {
  CAPTAG(useLabel(FN_Tsort_46ptsort),2)
, CAPTAG(useLabel(FN_LAMBDA226),1)
, VAPTAG(useLabel(FN_List_46partition))
, VAPTAG(useLabel(FN_LAMBDA227))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Prelude_46fst)
, CAPTAG(useLabel(FN_LAMBDA228),1)
, VAPTAG(useLabel(FN_Tsort_46ptsort))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v247)
,	/* FN_LAMBDA228: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I1)
, bytes2word(HEAP_OFF_N1,6,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v247: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA228: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA228),3)
, VAPTAG(useLabel(FN_Compat_46difference))
, bytes2word(0,0,0,0)
, useLabel(CT_v249)
,	/* FN_LAMBDA227: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v248)
,	/* CT_v249: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA227: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA227))
, bytes2word(1,0,0,1)
, useLabel(CT_v253)
,	/* FN_LAMBDA226: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v253: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA226: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA226),1)
, VAPTAG(useLabel(FN_Prelude_46null))
,	/* ST_v248: (byte 0) */
  bytes2word(112,116,115,111)
, bytes2word(114,116,58,32)
, bytes2word(99,121,99,108)
, bytes2word(101,32,105,110)
, bytes2word(32,100,97,116)
, bytes2word(97,10,0,0)
,};

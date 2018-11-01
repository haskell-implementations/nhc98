#include "newmacros.h"
#include "runtime.h"

#define v206	((void*)startLabel+62)
#define v213	((void*)startLabel+72)
#define v214	((void*)startLabel+77)
#define v215	((void*)startLabel+168)
#define v210	((void*)startLabel+173)
#define CT_v218	((void*)startLabel+212)
#define FN_LAMBDA202	((void*)startLabel+284)
#define CT_v220	((void*)startLabel+304)
#define CF_LAMBDA202	((void*)startLabel+312)
#define ST_v219	((void*)startLabel+316)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_62[];
extern Node FN_Prelude_46_45[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v218)
,};
Node FN_List_46genericTake[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(1,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,SLIDE_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v206: (byte 2) */
  bytes2word(2,RETURN,PUSH_ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v213: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v214: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,1,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,SLIDE_P1,1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,49)
, bytes2word(0,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CADR_N1,4,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,13)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,6)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,5)
,	/* v215: (byte 4) */
  bytes2word(HEAP_I1,HEAP_OFF_N1,6,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v210: (byte 1) */
  bytes2word(0,HEAP_CVAL_P1,14,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 1
, CONSTR(0,0,0)
, CONSTRW(0,0)
,	/* CT_v218: (byte 0) */
  HW(13,3)
, 0
,};
Node F0_List_46genericTake[] = {
  CAPTAG(useLabel(FN_List_46genericTake),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_62))
, VAPTAG(useLabel(FN_Prelude_46_45))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_List_46genericTake))
, VAPTAG(useLabel(FN_LAMBDA202))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v220)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v219)
,	/* CT_v220: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA202: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA202))
,	/* ST_v219: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,103,101,110)
, bytes2word(101,114,105,99)
, bytes2word(84,97,107,101)
, bytes2word(58,32,110,101)
, bytes2word(103,97,116,105)
, bytes2word(118,101,32,97)
, bytes2word(114,103,117,109)
, bytes2word(101,110,116,0)
,};

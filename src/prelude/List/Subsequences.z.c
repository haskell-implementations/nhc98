#include "newmacros.h"
#include "runtime.h"

#define v181	((void*)startLabel+22)
#define v182	((void*)startLabel+33)
#define CT_v185	((void*)startLabel+76)
#define FN_LAMBDA178	((void*)startLabel+116)
#define CT_v187	((void*)startLabel+148)
#define F0_LAMBDA178	((void*)startLabel+156)
#define ST_v183	((void*)startLabel+160)
#define ST_v186	((void*)startLabel+178)
extern Node TM_List[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_43_43[];
extern Node TMSUB_List[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v185)
,};
Node FN_List_46subsequences[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v181: (byte 2) */
  bytes2word(TOP(15),BOT(15),POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
,	/* v182: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,HEAP_CVAL_I4,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I3,HEAP_I1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v183)
,	/* CT_v185: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_List_46subsequences[] = {
  CAPTAG(useLabel(FN_List_46subsequences),1)
, VAPTAG(useLabel(FN_List_46subsequences))
, CAPTAG(useLabel(FN_LAMBDA178),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,	/* FN_LAMBDA178: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 70053
, useLabel(ST_v186)
,	/* CT_v187: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA178: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA178),2)
,	/* ST_v183: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,115,117,98)
, bytes2word(115,101,113,117)
, bytes2word(101,110,99,101)
,	/* ST_v186: (byte 2) */
  bytes2word(115,0,76,105)
, bytes2word(115,116,46,115)
, bytes2word(117,98,115,101)
, bytes2word(113,117,101,110)
, bytes2word(99,101,115,58)
, bytes2word(55,58,53,51)
, bytes2word(0,0,0,0)
,};

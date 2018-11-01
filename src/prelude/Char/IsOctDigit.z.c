#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+44)
#define ST_v168	((void*)startLabel+68)
extern Node TM_Char[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Char_46isOctDigit[] = {
  useLabel(TM_Char)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CHAR_P1,48,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CHAR_P1,55,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46isOctDigit[] = {
  CAPTAG(useLabel(FN_Char_46isOctDigit),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
,	/* ST_v168: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,79)
, bytes2word(99,116,68,105)
, bytes2word(103,105,116,0)
,};

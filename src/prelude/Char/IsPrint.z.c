#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+36)
#define ST_v168	((void*)startLabel+56)
extern Node TM_Char[];
extern Node FN_Char_46isControl[];
extern Node FN_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Char_46isPrint[] = {
  useLabel(TM_Char)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Char_46isPrint[] = {
  CAPTAG(useLabel(FN_Char_46isPrint),1)
, VAPTAG(useLabel(FN_Char_46isControl))
, VAPTAG(useLabel(FN_Prelude_46not))
,	/* ST_v168: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,80)
, bytes2word(114,105,110,116)
, bytes2word(0,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+84)
#define ST_v169	((void*)startLabel+120)
#define PS_v170	((void*)startLabel+136)
#define PS_v171	((void*)startLabel+148)
#define PS_v168	((void*)startLabel+160)
extern Node FN_Char_46isControl[];
extern Node FN_Prelude_46not[];
extern Node PM_Char[];
extern Node PC_Char_46isControl[];
extern Node PC_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Char_46isPrint[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v171)
, 0
, 0
, 0
, 0
, useLabel(PS_v170)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v169)
,	/* CT_v172: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Char_46isPrint[] = {
  CAPTAG(useLabel(FN_Char_46isPrint),1)
, useLabel(PS_v168)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Char_46isControl))
, VAPTAG(useLabel(FN_Prelude_46not))
,};
Node PP_Char_46isPrint[] = {
 };
Node PC_Char_46isPrint[] = {
 	/* ST_v169: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,80)
, bytes2word(114,105,110,116)
, bytes2word(0,0,0,0)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isPrint)
, useLabel(PC_Char_46isControl)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isPrint)
, useLabel(PC_Prelude_46not)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isPrint)
, useLabel(PC_Char_46isPrint)
,};

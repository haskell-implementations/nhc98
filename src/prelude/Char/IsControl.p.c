#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+184)
#define ST_v173	((void*)startLabel+232)
#define PS_v178	((void*)startLabel+248)
#define PS_v177	((void*)startLabel+260)
#define PS_v172	((void*)startLabel+272)
#define PS_v174	((void*)startLabel+284)
#define PS_v175	((void*)startLabel+296)
#define PS_v176	((void*)startLabel+308)
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_124_124[];
extern Node PM_Char[];
extern Node PC_Prelude_46_124_124[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46Ord_46Prelude_46Char_46_60[];
extern Node PC_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node PC_Prelude_46Ord_46Prelude_46Char_46_60_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_Char_46isControl[] = {
  bytes2word(NEEDHEAP_P1,36,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CHAR_P1)
, bytes2word(32,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CHAR_P1,127)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CHAR_P1,159,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,33)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v173)
,	/* CT_v179: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_Char_46isControl[] = {
  CAPTAG(useLabel(FN_Char_46isControl),1)
, useLabel(PS_v172)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
,};
Node PP_Char_46isControl[] = {
 };
Node PC_Char_46isControl[] = {
 	/* ST_v173: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,67)
, bytes2word(111,110,116,114)
, bytes2word(111,108,0,0)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isControl)
, useLabel(PC_Prelude_46_124_124)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isControl)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isControl)
, useLabel(PC_Char_46isControl)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isControl)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_60)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isControl)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_62_61)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isControl)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_60_61)
,};

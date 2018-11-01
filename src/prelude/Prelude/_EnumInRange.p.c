#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+168)
#define ST_v191	((void*)startLabel+208)
#define PS_v193	((void*)startLabel+232)
#define PS_v195	((void*)startLabel+244)
#define PS_v190	((void*)startLabel+256)
#define PS_v194	((void*)startLabel+268)
extern Node FN_Prelude_46_95fromEnum[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_95fromEnum[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46_60_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46_95enumInRange[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_P1)
, bytes2word(45,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,12)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,31,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, useLabel(PS_v193)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v191)
,	/* CT_v196: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46_95enumInRange[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumInRange),2)
, useLabel(PS_v190)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
,};
Node PP_Prelude_46_95enumInRange[] = {
 };
Node PC_Prelude_46_95enumInRange[] = {
 	/* ST_v191: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,101,110,117)
, bytes2word(109,73,110,82)
, bytes2word(97,110,103,101)
, bytes2word(0,0,0,0)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95enumInRange)
, useLabel(PC_Prelude_46_95fromEnum)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95enumInRange)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95enumInRange)
, useLabel(PC_Prelude_46_95enumInRange)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95enumInRange)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46_60_61)
,};

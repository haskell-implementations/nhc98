#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+168)
#define ST_v172	((void*)startLabel+212)
#define PS_v175	((void*)startLabel+224)
#define PS_v176	((void*)startLabel+236)
#define PS_v173	((void*)startLabel+248)
#define PS_v174	((void*)startLabel+260)
#define PS_v171	((void*)startLabel+272)
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46scanl[];
extern Node PM_List[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46scanl[];
extern Node PC_Prelude_46_43[];
extern Node PC_Prelude_46fromInteger[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_List_46sums[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CADR_N1,22,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,24)
, bytes2word(HEAP_OFF_N1,13,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
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
, useLabel(PS_v173)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v172)
,	/* CT_v177: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_List_46sums[] = {
  CAPTAG(useLabel(FN_List_46sums),1)
, useLabel(PS_v171)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46scanl),1)
,};
Node PP_List_46sums[] = {
 };
Node PC_List_46sums[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,115,117,109)
, bytes2word(115,0,0,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46sums)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v176: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46sums)
, useLabel(PC_Prelude_46scanl)
,	/* PS_v173: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46sums)
, useLabel(PC_Prelude_46_43)
,	/* PS_v174: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46sums)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v171: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46sums)
, useLabel(PC_List_46sums)
,};

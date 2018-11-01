#include "newmacros.h"
#include "runtime.h"

#define CT_v192	((void*)startLabel+80)
#define FN_LAMBDA186	((void*)startLabel+132)
#define CT_v196	((void*)startLabel+204)
#define F0_LAMBDA186	((void*)startLabel+212)
#define ST_v189	((void*)startLabel+232)
#define PP_LAMBDA186	((void*)startLabel+242)
#define PC_LAMBDA186	((void*)startLabel+242)
#define ST_v194	((void*)startLabel+242)
#define PS_v191	((void*)startLabel+264)
#define PS_v188	((void*)startLabel+276)
#define PS_v190	((void*)startLabel+288)
#define PS_v195	((void*)startLabel+300)
#define PS_v193	((void*)startLabel+312)
extern Node FN_List_46zipWith4[];
extern Node PM_List[];
extern Node PC_List_46zipWith4[];
extern Node PC_Prelude_464[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v192)
,};
Node FN_List_46zip4[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v191)
, 0
, 0
, 0
, 0
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v189)
,	/* CT_v192: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip4[] = {
  VAPTAG(useLabel(FN_List_46zip4))
, useLabel(PS_v188)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA186),4)
, CAPTAG(useLabel(FN_List_46zipWith4),4)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v196)
,	/* FN_LAMBDA186: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, 60019
, useLabel(ST_v194)
,	/* CT_v196: (byte 0) */
  HW(0,4)
, 0
,	/* F0_LAMBDA186: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA186),4)
, useLabel(PS_v193)
, 0
, 0
, 0
,};
Node PP_List_46zip4[] = {
 };
Node PC_List_46zip4[] = {
 	/* ST_v189: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,122,105,112)
,	/* PP_LAMBDA186: (byte 2) */
 	/* PC_LAMBDA186: (byte 2) */
 	/* ST_v194: (byte 2) */
  bytes2word(52,0,76,105)
, bytes2word(115,116,46,122)
, bytes2word(105,112,52,58)
, bytes2word(54,58,49,57)
, bytes2word(45,54,58,50)
, bytes2word(51,0,0,0)
,	/* PS_v191: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip4)
, useLabel(PC_List_46zipWith4)
,	/* PS_v188: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip4)
, useLabel(PC_List_46zip4)
,	/* PS_v190: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip4)
, useLabel(PC_LAMBDA186)
,	/* PS_v195: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA186)
, useLabel(PC_Prelude_464)
,	/* PS_v193: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA186)
, useLabel(PC_LAMBDA186)
,};

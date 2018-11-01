#include "newmacros.h"
#include "runtime.h"

#define CT_v197	((void*)startLabel+80)
#define FN_LAMBDA191	((void*)startLabel+132)
#define CT_v201	((void*)startLabel+204)
#define F0_LAMBDA191	((void*)startLabel+212)
#define ST_v194	((void*)startLabel+232)
#define PP_LAMBDA191	((void*)startLabel+242)
#define PC_LAMBDA191	((void*)startLabel+242)
#define ST_v199	((void*)startLabel+242)
#define PS_v196	((void*)startLabel+264)
#define PS_v193	((void*)startLabel+276)
#define PS_v195	((void*)startLabel+288)
#define PS_v200	((void*)startLabel+300)
#define PS_v198	((void*)startLabel+312)
extern Node FN_List_46zipWith5[];
extern Node PM_List[];
extern Node PC_List_46zipWith5[];
extern Node PC_Prelude_465[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v197)
,};
Node FN_List_46zip5[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v194)
,	/* CT_v197: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip5[] = {
  VAPTAG(useLabel(FN_List_46zip5))
, useLabel(PS_v193)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA191),5)
, CAPTAG(useLabel(FN_List_46zipWith5),5)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v201)
,	/* FN_LAMBDA191: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, CONSTR(0,5,0)
, 0
, 0
, 0
, 0
, 60020
, useLabel(ST_v199)
,	/* CT_v201: (byte 0) */
  HW(0,5)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),5)
, useLabel(PS_v198)
, 0
, 0
, 0
,};
Node PP_List_46zip5[] = {
 };
Node PC_List_46zip5[] = {
 	/* ST_v194: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,122,105,112)
,	/* PP_LAMBDA191: (byte 2) */
 	/* PC_LAMBDA191: (byte 2) */
 	/* ST_v199: (byte 2) */
  bytes2word(53,0,76,105)
, bytes2word(115,116,46,122)
, bytes2word(105,112,53,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,50)
, bytes2word(53,0,0,0)
,	/* PS_v196: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip5)
, useLabel(PC_List_46zipWith5)
,	/* PS_v193: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip5)
, useLabel(PC_List_46zip5)
,	/* PS_v195: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip5)
, useLabel(PC_LAMBDA191)
,	/* PS_v200: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA191)
, useLabel(PC_Prelude_465)
,	/* PS_v198: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA191)
, useLabel(PC_LAMBDA191)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v202	((void*)startLabel+80)
#define FN_LAMBDA196	((void*)startLabel+136)
#define CT_v206	((void*)startLabel+208)
#define F0_LAMBDA196	((void*)startLabel+216)
#define ST_v199	((void*)startLabel+236)
#define PP_LAMBDA196	((void*)startLabel+246)
#define PC_LAMBDA196	((void*)startLabel+246)
#define ST_v204	((void*)startLabel+246)
#define PS_v201	((void*)startLabel+268)
#define PS_v198	((void*)startLabel+280)
#define PS_v200	((void*)startLabel+292)
#define PS_v205	((void*)startLabel+304)
#define PS_v203	((void*)startLabel+316)
extern Node FN_List_46zipWith6[];
extern Node PM_List[];
extern Node PC_List_46zipWith6[];
extern Node PC_Prelude_466[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v202)
,};
Node FN_List_46zip6[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v199)
,	/* CT_v202: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip6[] = {
  VAPTAG(useLabel(FN_List_46zip6))
, useLabel(PS_v198)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA196),6)
, CAPTAG(useLabel(FN_List_46zipWith6),6)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v206)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, CONSTR(0,6,0)
, 0
, 0
, 0
, 0
, 60020
, useLabel(ST_v204)
,	/* CT_v206: (byte 0) */
  HW(0,6)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),6)
, useLabel(PS_v203)
, 0
, 0
, 0
,};
Node PP_List_46zip6[] = {
 };
Node PC_List_46zip6[] = {
 	/* ST_v199: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,122,105,112)
,	/* PP_LAMBDA196: (byte 2) */
 	/* PC_LAMBDA196: (byte 2) */
 	/* ST_v204: (byte 2) */
  bytes2word(54,0,76,105)
, bytes2word(115,116,46,122)
, bytes2word(105,112,54,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,50)
, bytes2word(54,0,0,0)
,	/* PS_v201: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip6)
, useLabel(PC_List_46zipWith6)
,	/* PS_v198: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip6)
, useLabel(PC_List_46zip6)
,	/* PS_v200: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46zip6)
, useLabel(PC_LAMBDA196)
,	/* PS_v205: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA196)
, useLabel(PC_Prelude_466)
,	/* PS_v203: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA196)
, useLabel(PC_LAMBDA196)
,};

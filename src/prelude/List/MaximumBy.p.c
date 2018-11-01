#include "newmacros.h"
#include "runtime.h"

#define v189	((void*)startLabel+22)
#define v186	((void*)startLabel+26)
#define v183	((void*)startLabel+45)
#define CT_v194	((void*)startLabel+160)
#define FN_List_46Prelude_46160_46max	((void*)startLabel+216)
#define v201	((void*)startLabel+234)
#define v198	((void*)startLabel+238)
#define v195	((void*)startLabel+241)
#define CT_v202	((void*)startLabel+256)
#define F0_List_46Prelude_46160_46max	((void*)startLabel+264)
#define FN_LAMBDA181	((void*)startLabel+292)
#define CT_v206	((void*)startLabel+336)
#define CF_LAMBDA181	((void*)startLabel+344)
#define ST_v188	((void*)startLabel+364)
#define ST_v205	((void*)startLabel+379)
#define PP_LAMBDA181	((void*)startLabel+406)
#define PC_LAMBDA181	((void*)startLabel+406)
#define ST_v204	((void*)startLabel+406)
#define PP_List_46Prelude_46160_46max	((void*)startLabel+431)
#define PC_List_46Prelude_46160_46max	((void*)startLabel+431)
#define ST_v200	((void*)startLabel+431)
#define PS_v193	((void*)startLabel+456)
#define PS_v191	((void*)startLabel+468)
#define PS_v187	((void*)startLabel+480)
#define PS_v192	((void*)startLabel+492)
#define PS_v190	((void*)startLabel+504)
#define PS_v199	((void*)startLabel+516)
#define PS_v203	((void*)startLabel+528)
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46foldl1[];
extern Node PM_List[];
extern Node PC_Prelude_46foldl1[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_List_46maximumBy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v189: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v186: (byte 2) */
  bytes2word(21,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v183: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v193)
, 0
, 0
, 0
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
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
, 40001
, useLabel(ST_v188)
,	/* CT_v194: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_List_46maximumBy[] = {
  CAPTAG(useLabel(FN_List_46maximumBy),2)
, useLabel(PS_v187)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA181))
, VAPTAG(useLabel(FN_Prelude_46error))
, CAPTAG(useLabel(FN_List_46Prelude_46160_46max),2)
, VAPTAG(useLabel(FN_Prelude_46foldl1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v202)
,	/* FN_List_46Prelude_46160_46max: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v201: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v198: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I2)
,	/* v195: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60036
, useLabel(ST_v200)
,	/* CT_v202: (byte 0) */
  HW(0,3)
, 0
,	/* F0_List_46Prelude_46160_46max: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46160_46max),3)
, useLabel(PS_v199)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v206)
,	/* FN_LAMBDA181: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v205)
, 40034
, useLabel(ST_v204)
,	/* CT_v206: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA181: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA181))
, useLabel(PS_v203)
, 0
, 0
, 0
,};
Node PP_List_46maximumBy[] = {
 };
Node PC_List_46maximumBy[] = {
 	/* ST_v188: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,109,97,120)
, bytes2word(105,109,117,109)
,	/* ST_v205: (byte 3) */
  bytes2word(66,121,0,76)
, bytes2word(105,115,116,46)
, bytes2word(109,97,120,105)
, bytes2word(109,117,109,66)
, bytes2word(121,58,32,101)
, bytes2word(109,112,116,121)
, bytes2word(32,108,105,115)
,	/* PP_LAMBDA181: (byte 2) */
 	/* PC_LAMBDA181: (byte 2) */
 	/* ST_v204: (byte 2) */
  bytes2word(116,0,76,105)
, bytes2word(115,116,46,109)
, bytes2word(97,120,105,109)
, bytes2word(117,109,66,121)
, bytes2word(58,52,58,51)
, bytes2word(52,45,52,58)
,	/* PP_List_46Prelude_46160_46max: (byte 3) */
 	/* PC_List_46Prelude_46160_46max: (byte 3) */
 	/* ST_v200: (byte 3) */
  bytes2word(54,49,0,76)
, bytes2word(105,115,116,46)
, bytes2word(109,97,120,105)
, bytes2word(109,117,109,66)
, bytes2word(121,58,54,58)
, bytes2word(51,54,45,56)
, bytes2word(58,53,55,0)
,	/* PS_v193: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46maximumBy)
, useLabel(PC_Prelude_46foldl1)
,	/* PS_v191: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46maximumBy)
, useLabel(PC_Prelude_46error)
,	/* PS_v187: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46maximumBy)
, useLabel(PC_List_46maximumBy)
,	/* PS_v192: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46maximumBy)
, useLabel(PC_List_46Prelude_46160_46max)
,	/* PS_v190: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46maximumBy)
, useLabel(PC_LAMBDA181)
,	/* PS_v199: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46Prelude_46160_46max)
, useLabel(PC_List_46Prelude_46160_46max)
,	/* PS_v203: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA181)
, useLabel(PC_LAMBDA181)
,};

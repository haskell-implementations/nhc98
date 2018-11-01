#include "newmacros.h"
#include "runtime.h"

#define v195	((void*)startLabel+24)
#define v196	((void*)startLabel+34)
#define CT_v206	((void*)startLabel+312)
#define FN_LAMBDA192	((void*)startLabel+368)
#define CT_v209	((void*)startLabel+388)
#define F0_LAMBDA192	((void*)startLabel+396)
#define FN_LAMBDA191	((void*)startLabel+424)
#define CT_v212	((void*)startLabel+444)
#define F0_LAMBDA191	((void*)startLabel+452)
#define ST_v198	((void*)startLabel+472)
#define PP_LAMBDA191	((void*)startLabel+485)
#define PC_LAMBDA191	((void*)startLabel+485)
#define ST_v211	((void*)startLabel+485)
#define PP_LAMBDA192	((void*)startLabel+508)
#define PC_LAMBDA192	((void*)startLabel+508)
#define ST_v208	((void*)startLabel+508)
#define PS_v201	((void*)startLabel+532)
#define PS_v202	((void*)startLabel+544)
#define PS_v200	((void*)startLabel+556)
#define PS_v205	((void*)startLabel+568)
#define PS_v197	((void*)startLabel+580)
#define PS_v203	((void*)startLabel+592)
#define PS_v204	((void*)startLabel+604)
#define PS_v210	((void*)startLabel+616)
#define PS_v207	((void*)startLabel+628)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46span[];
extern Node PM_List[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46span[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v206)
,};
Node FN_List_46groupBy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(47,TABLESWITCH,2,NOP)
,	/* v195: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v196: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_I2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,3,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(19,HEAP_OFF_N1,13,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v198)
,	/* CT_v206: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_List_46groupBy[] = {
  CAPTAG(useLabel(FN_List_46groupBy),2)
, useLabel(PS_v197)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46span))
, VAPTAG(useLabel(FN_LAMBDA191))
, VAPTAG(useLabel(FN_LAMBDA192))
, VAPTAG(useLabel(FN_List_46groupBy))
, bytes2word(1,0,0,1)
, useLabel(CT_v209)
,	/* FN_LAMBDA192: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60038
, useLabel(ST_v208)
,	/* CT_v209: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),1)
, useLabel(PS_v207)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v212)
,	/* FN_LAMBDA191: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 60035
, useLabel(ST_v211)
,	/* CT_v212: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),1)
, useLabel(PS_v210)
, 0
, 0
, 0
,};
Node PP_List_46groupBy[] = {
 };
Node PC_List_46groupBy[] = {
 	/* ST_v198: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,103,114,111)
, bytes2word(117,112,66,121)
,	/* PP_LAMBDA191: (byte 1) */
 	/* PC_LAMBDA191: (byte 1) */
 	/* ST_v211: (byte 1) */
  bytes2word(0,76,105,115)
, bytes2word(116,46,103,114)
, bytes2word(111,117,112,66)
, bytes2word(121,58,54,58)
, bytes2word(51,53,45,54)
,	/* PP_LAMBDA192: (byte 4) */
 	/* PC_LAMBDA192: (byte 4) */
 	/* ST_v208: (byte 4) */
  bytes2word(58,51,54,0)
, bytes2word(76,105,115,116)
, bytes2word(46,103,114,111)
, bytes2word(117,112,66,121)
, bytes2word(58,54,58,51)
, bytes2word(56,45,54,58)
, bytes2word(51,57,0,0)
,	/* PS_v201: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46groupBy)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v202: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46groupBy)
, useLabel(PC_Prelude_46span)
,	/* PS_v200: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46groupBy)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v205: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46groupBy)
, useLabel(PC_Prelude_46_58)
,	/* PS_v197: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46groupBy)
, useLabel(PC_List_46groupBy)
,	/* PS_v203: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46groupBy)
, useLabel(PC_LAMBDA191)
,	/* PS_v204: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46groupBy)
, useLabel(PC_LAMBDA192)
,	/* PS_v210: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA191)
, useLabel(PC_LAMBDA191)
,	/* PS_v207: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA192)
, useLabel(PC_LAMBDA192)
,};

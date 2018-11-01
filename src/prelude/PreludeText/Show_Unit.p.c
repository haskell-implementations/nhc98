#include "newmacros.h"
#include "runtime.h"

#define CT_v201	((void*)startLabel+64)
#define FN_LAMBDA195	((void*)startLabel+108)
#define CT_v205	((void*)startLabel+152)
#define CF_LAMBDA195	((void*)startLabel+160)
#define CT_v212	((void*)startLabel+252)
#define FN_LAMBDA196	((void*)startLabel+296)
#define CT_v215	((void*)startLabel+340)
#define CF_LAMBDA196	((void*)startLabel+348)
#define CT_v219	((void*)startLabel+428)
#define CT_v223	((void*)startLabel+524)
#define CT_v227	((void*)startLabel+640)
#define ST_v204	((void*)startLabel+684)
#define ST_v225	((void*)startLabel+688)
#define ST_v217	((void*)startLabel+704)
#define ST_v221	((void*)startLabel+728)
#define ST_v209	((void*)startLabel+756)
#define PP_LAMBDA196	((void*)startLabel+782)
#define PC_LAMBDA196	((void*)startLabel+782)
#define ST_v214	((void*)startLabel+782)
#define ST_v199	((void*)startLabel+820)
#define PP_LAMBDA195	((void*)startLabel+846)
#define PC_LAMBDA195	((void*)startLabel+846)
#define ST_v203	((void*)startLabel+846)
#define PS_v211	((void*)startLabel+884)
#define PS_v208	((void*)startLabel+896)
#define PS_v200	((void*)startLabel+908)
#define PS_v198	((void*)startLabel+920)
#define PS_v222	((void*)startLabel+932)
#define PS_v220	((void*)startLabel+944)
#define PS_v218	((void*)startLabel+956)
#define PS_v216	((void*)startLabel+968)
#define PS_v224	((void*)startLabel+980)
#define PS_v226	((void*)startLabel+992)
#define PS_v202	((void*)startLabel+1004)
#define PS_v213	((void*)startLabel+1016)
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46_40_41[];
extern Node FN_Prelude_46_95_46showList[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46showString[];
extern Node PC_Prelude_46_95_46showList[];
extern Node PC_Prelude_46_95_46show[];
extern Node PC_Prelude_464[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v201)
,};
Node FN_Prelude_46Show_46_40_41_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, 60003
, useLabel(ST_v199)
,	/* CT_v201: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showsType),1)
, useLabel(PS_v198)
, 0
, 0
, 0
, useLabel(CF_LAMBDA195)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v205)
,	/* FN_LAMBDA195: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v204)
, 60028
, useLabel(ST_v203)
,	/* CT_v205: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA195: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA195))
, useLabel(PS_v202)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v212)
,};
Node FN_Prelude_46Show_46_40_41_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v211)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v209)
,	/* CT_v212: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showsPrec),2)
, useLabel(PS_v208)
, 0
, 0
, 0
, useLabel(CF_LAMBDA196)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v215)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v204)
, 40032
, useLabel(ST_v214)
,	/* CT_v215: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA196: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA196))
, useLabel(PS_v213)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v219)
,};
Node FN_Prelude_46Show_46_40_41_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v218)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v217)
,	/* CT_v219: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46show),1)
, useLabel(PS_v216)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46_40_41)
, bytes2word(1,0,0,1)
, useLabel(CT_v223)
,};
Node FN_Prelude_46Show_46_40_41_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v222)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v221)
,	/* CT_v223: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showList),1)
, useLabel(PS_v220)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v227)
,};
Node FN_Prelude_46Show_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v226)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v225)
,	/* CT_v227: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46_40_41))
, useLabel(PS_v224)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Show_46_40_41_46showsPrec)
, useLabel(F0_Prelude_46Show_46_40_41_46showsType)
, useLabel(F0_Prelude_46Show_46_40_41_46showList)
, useLabel(F0_Prelude_46Show_46_40_41_46show)
,	/* ST_v204: (byte 0) */
  bytes2word(40,41,0,0)
,};
Node PP_Prelude_46Show_46_40_41[] = {
 };
Node PC_Prelude_46Show_46_40_41[] = {
 	/* ST_v225: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,40,41,0)
,};
Node PP_Prelude_46Show_46_40_41_46show[] = {
 };
Node PC_Prelude_46Show_46_40_41_46show[] = {
 	/* ST_v217: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,40,41,46)
, bytes2word(115,104,111,119)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Show_46_40_41_46showList[] = {
 };
Node PC_Prelude_46Show_46_40_41_46showList[] = {
 	/* ST_v221: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,40,41,46)
, bytes2word(115,104,111,119)
, bytes2word(76,105,115,116)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Show_46_40_41_46showsPrec[] = {
 };
Node PC_Prelude_46Show_46_40_41_46showsPrec[] = {
 	/* ST_v209: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,40,41,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
,	/* PP_LAMBDA196: (byte 2) */
 	/* PC_LAMBDA196: (byte 2) */
 	/* ST_v214: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,40)
, bytes2word(41,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(52,58,51,50)
, bytes2word(45,52,58,51)
, bytes2word(53,0,0,0)
,};
Node PP_Prelude_46Show_46_40_41_46showsType[] = {
 };
Node PC_Prelude_46Show_46_40_41_46showsType[] = {
 	/* ST_v199: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,40,41,46)
, bytes2word(115,104,111,119)
, bytes2word(115,84,121,112)
,	/* PP_LAMBDA195: (byte 2) */
 	/* PC_LAMBDA195: (byte 2) */
 	/* ST_v203: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,40)
, bytes2word(41,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(54,58,50,56)
, bytes2word(45,54,58,51)
, bytes2word(49,0,0,0)
,	/* PS_v211: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41_46showsPrec)
, useLabel(PC_Prelude_46showString)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41_46showsPrec)
, useLabel(PC_Prelude_46Show_46_40_41_46showsPrec)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41_46showsType)
, useLabel(PC_Prelude_46showString)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41_46showsType)
, useLabel(PC_Prelude_46Show_46_40_41_46showsType)
,	/* PS_v222: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41_46showList)
, useLabel(PC_Prelude_46_95_46showList)
,	/* PS_v220: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41_46showList)
, useLabel(PC_Prelude_46Show_46_40_41_46showList)
,	/* PS_v218: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41_46show)
, useLabel(PC_Prelude_46_95_46show)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41_46show)
, useLabel(PC_Prelude_46Show_46_40_41_46show)
,	/* PS_v224: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41)
, useLabel(PC_Prelude_46Show_46_40_41)
,	/* PS_v226: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46_40_41)
, useLabel(PC_Prelude_464)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA195)
, useLabel(PC_LAMBDA195)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA196)
, useLabel(PC_LAMBDA196)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v199	((void*)startLabel+36)
#define FN_LAMBDA195	((void*)startLabel+64)
#define CT_v202	((void*)startLabel+96)
#define CF_LAMBDA195	((void*)startLabel+104)
#define CT_v207	((void*)startLabel+152)
#define FN_LAMBDA196	((void*)startLabel+180)
#define CT_v209	((void*)startLabel+212)
#define CF_LAMBDA196	((void*)startLabel+220)
#define CT_v211	((void*)startLabel+256)
#define CT_v213	((void*)startLabel+308)
#define CT_v215	((void*)startLabel+372)
#define ST_v201	((void*)startLabel+400)
#define ST_v214	((void*)startLabel+403)
#define ST_v210	((void*)startLabel+419)
#define ST_v212	((void*)startLabel+440)
#define ST_v205	((void*)startLabel+465)
#define ST_v208	((void*)startLabel+491)
#define ST_v198	((void*)startLabel+527)
#define ST_v200	((void*)startLabel+553)
extern Node TM_Prelude[];
extern Node FN_Prelude_46showString[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46_40_41[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v199)
,};
Node FN_Prelude_46Show_46_40_41_46showsType[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60003
, useLabel(ST_v198)
,	/* CT_v199: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showsType),1)
, useLabel(CF_LAMBDA195)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v202)
,	/* FN_LAMBDA195: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v201)
, 60028
, useLabel(ST_v200)
,	/* CT_v202: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA195: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA195))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v207)
,};
Node FN_Prelude_46Show_46_40_41_46showsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v205)
,	/* CT_v207: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showsPrec),2)
, useLabel(CF_LAMBDA196)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v209)
,	/* FN_LAMBDA196: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v201)
, 40032
, useLabel(ST_v208)
,	/* CT_v209: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA196: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA196))
, bytes2word(1,0,0,1)
, useLabel(CT_v211)
,};
Node FN_Prelude_46Show_46_40_41_46show[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v210)
,	/* CT_v211: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46_40_41)
, bytes2word(1,0,0,1)
, useLabel(CT_v213)
,};
Node FN_Prelude_46Show_46_40_41_46showList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v212)
,	/* CT_v213: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v215)
,};
Node FN_Prelude_46Show_46_40_41[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 30010
, useLabel(ST_v214)
,	/* CT_v215: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46_40_41))
, useLabel(F0_Prelude_46Show_46_40_41_46showsPrec)
, useLabel(F0_Prelude_46Show_46_40_41_46showsType)
, useLabel(F0_Prelude_46Show_46_40_41_46showList)
, useLabel(F0_Prelude_46Show_46_40_41_46show)
,	/* ST_v201: (byte 0) */
 	/* ST_v214: (byte 3) */
  bytes2word(40,41,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
,	/* ST_v210: (byte 3) */
  bytes2word(40,41,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(40,41,46,115)
,	/* ST_v212: (byte 4) */
  bytes2word(104,111,119,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,40,41,46)
, bytes2word(115,104,111,119)
, bytes2word(76,105,115,116)
,	/* ST_v205: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,40,41)
, bytes2word(46,115,104,111)
, bytes2word(119,115,80,114)
,	/* ST_v208: (byte 3) */
  bytes2word(101,99,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(40,41,46,115)
, bytes2word(104,111,119,115)
, bytes2word(80,114,101,99)
, bytes2word(58,52,58,51)
, bytes2word(50,45,52,58)
,	/* ST_v198: (byte 3) */
  bytes2word(51,53,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(40,41,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
,	/* ST_v200: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,40,41)
, bytes2word(46,115,104,111)
, bytes2word(119,115,84,121)
, bytes2word(112,101,58,54)
, bytes2word(58,50,56,45)
, bytes2word(54,58,51,49)
, bytes2word(0,0,0,0)
,};

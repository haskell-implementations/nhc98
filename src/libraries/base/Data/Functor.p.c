#include "newmacros.h"
#include "runtime.h"

#define CT_v199	((void*)startLabel+60)
#define CT_v204	((void*)startLabel+176)
#define ST_v195	((void*)startLabel+216)
#define ST_v201	((void*)startLabel+232)
#define ST_v197	((void*)startLabel+248)
#define PS_v203	((void*)startLabel+268)
#define PS_v202	((void*)startLabel+280)
#define PS_v200	((void*)startLabel+292)
#define PS_v198	((void*)startLabel+304)
#define PS_v196	((void*)startLabel+316)
extern Node FN_Prelude_46fmap[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46const[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46fmap[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v199)
,};
Node FN_Data_46Functor_46_60_36_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, 320002
, useLabel(ST_v197)
,	/* CT_v199: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Data_46Functor_46_60_36_62[] = {
  CAPTAG(useLabel(FN_Data_46Functor_46_60_36_62),1)
, useLabel(PS_v196)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46fmap))
, bytes2word(1,0,0,1)
, useLabel(CT_v204)
,};
Node FN_Data_46Functor_46_60_36[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, 250002
, useLabel(ST_v201)
,	/* CT_v204: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Data_46Functor_46_60_36[] = {
  CAPTAG(useLabel(FN_Data_46Functor_46_60_36),1)
, useLabel(PS_v200)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46fmap))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46const)
,};
Node PM_Data_46Functor[] = {
 	/* ST_v195: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,117,110)
, bytes2word(99,116,111,114)
, bytes2word(0,0,0,0)
,};
Node PP_Data_46Functor_46_60_36[] = {
 };
Node PC_Data_46Functor_46_60_36[] = {
 	/* ST_v201: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,117,110)
, bytes2word(99,116,111,114)
, bytes2word(46,60,36,0)
,};
Node PP_Data_46Functor_46_60_36_62[] = {
 };
Node PC_Data_46Functor_46_60_36_62[] = {
 	/* ST_v197: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,117,110)
, bytes2word(99,116,111,114)
, bytes2word(46,60,36,62)
, bytes2word(0,0,0,0)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Data_46Functor)
, useLabel(PP_Data_46Functor_46_60_36)
, useLabel(PC_Prelude_46_46)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Data_46Functor)
, useLabel(PP_Data_46Functor_46_60_36)
, useLabel(PC_Prelude_46fmap)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Data_46Functor)
, useLabel(PP_Data_46Functor_46_60_36)
, useLabel(PC_Data_46Functor_46_60_36)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Data_46Functor)
, useLabel(PP_Data_46Functor_46_60_36_62)
, useLabel(PC_Prelude_46fmap)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Data_46Functor)
, useLabel(PP_Data_46Functor_46_60_36_62)
, useLabel(PC_Data_46Functor_46_60_36_62)
,};

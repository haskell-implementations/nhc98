#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+72)
#define CT_v180	((void*)startLabel+172)
#define CT_v184	((void*)startLabel+276)
#define ST_v182	((void*)startLabel+312)
#define ST_v174	((void*)startLabel+332)
#define ST_v178	((void*)startLabel+360)
#define PS_v179	((void*)startLabel+388)
#define PS_v177	((void*)startLabel+400)
#define PS_v175	((void*)startLabel+412)
#define PS_v173	((void*)startLabel+424)
#define PS_v181	((void*)startLabel+436)
#define PS_v183	((void*)startLabel+448)
extern Node PM_Prelude[];
extern Node PC__40_41[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v176)
,};
Node FN_Prelude_46Bounded_46_40_41_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 50003
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46_40_41_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46_40_41_46maxBound))
, useLabel(PS_v173)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v180)
,};
Node FN_Prelude_46Bounded_46_40_41_46minBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v178)
,	/* CT_v180: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46_40_41_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46_40_41_46minBound))
, useLabel(PS_v177)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v184)
,};
Node FN_Prelude_46Bounded_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v182)
,	/* CT_v184: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46_40_41))
, useLabel(PS_v181)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Bounded_46_40_41_46minBound)
, useLabel(CF_Prelude_46Bounded_46_40_41_46maxBound)
,};
Node PP_Prelude_46Bounded_46_40_41[] = {
 };
Node PC_Prelude_46Bounded_46_40_41[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(40,41,0,0)
,};
Node PP_Prelude_46Bounded_46_40_41_46maxBound[] = {
 };
Node PC_Prelude_46Bounded_46_40_41_46maxBound[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(40,41,46,109)
, bytes2word(97,120,66,111)
, bytes2word(117,110,100,0)
,};
Node PP_Prelude_46Bounded_46_40_41_46minBound[] = {
 };
Node PC_Prelude_46Bounded_46_40_41_46minBound[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(40,41,46,109)
, bytes2word(105,110,66,111)
, bytes2word(117,110,100,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46_40_41_46minBound)
, useLabel(PC__40_41)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46_40_41_46minBound)
, useLabel(PC_Prelude_46Bounded_46_40_41_46minBound)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46_40_41_46maxBound)
, useLabel(PC__40_41)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46_40_41_46maxBound)
, useLabel(PC_Prelude_46Bounded_46_40_41_46maxBound)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46_40_41)
, useLabel(PC_Prelude_46Bounded_46_40_41)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46_40_41)
, useLabel(PC_Prelude_462)
,};

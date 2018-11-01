#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+88)
#define CT_v186	((void*)startLabel+204)
#define ST_v184	((void*)startLabel+244)
#define ST_v180	((void*)startLabel+276)
#define PS_v181	((void*)startLabel+316)
#define PS_v179	((void*)startLabel+328)
#define PS_v183	((void*)startLabel+340)
#define PS_v185	((void*)startLabel+352)
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node CF_Prelude_46Ord_46Prelude_46Integer[];
extern Node PM_Prelude[];
extern Node PC_Ratio_46_37[];
extern Node PC_Prelude_463[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_Prelude_46Real_46Prelude_46Integer_46toRational[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,HEAP_CADR_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, 60003
, useLabel(ST_v180)
,	/* CT_v182: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Real_46Prelude_46Integer_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer_46toRational),1)
, useLabel(PS_v179)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v186)
,};
Node FN_Prelude_46Real_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v184)
,	/* CT_v186: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46Real_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Integer))
, useLabel(PS_v183)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Ord_46Prelude_46Integer)
, useLabel(F0_Prelude_46Real_46Prelude_46Integer_46toRational)
,};
Node PP_Prelude_46Real_46Prelude_46Integer[] = {
 };
Node PC_Prelude_46Real_46Prelude_46Integer[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Real_46Prelude_46Integer_46toRational[] = {
 };
Node PC_Prelude_46Real_46Prelude_46Integer_46toRational[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
, bytes2word(101,103,101,114)
, bytes2word(46,116,111,82)
, bytes2word(97,116,105,111)
, bytes2word(110,97,108,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Integer_46toRational)
, useLabel(PC_Ratio_46_37)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Integer_46toRational)
, useLabel(PC_Prelude_46Real_46Prelude_46Integer_46toRational)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Integer)
, useLabel(PC_Prelude_46Real_46Prelude_46Integer)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Real_46Prelude_46Integer)
, useLabel(PC_Prelude_463)
,};

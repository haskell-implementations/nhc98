#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+72)
#define CT_v180	((void*)startLabel+172)
#define CT_v184	((void*)startLabel+276)
#define ST_v182	((void*)startLabel+312)
#define ST_v174	((void*)startLabel+344)
#define ST_v178	((void*)startLabel+384)
#define PS_v179	((void*)startLabel+424)
#define PS_v177	((void*)startLabel+436)
#define PS_v175	((void*)startLabel+448)
#define PS_v173	((void*)startLabel+460)
#define PS_v181	((void*)startLabel+472)
#define PS_v183	((void*)startLabel+484)
extern Node PM_Prelude[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v176)
,};
Node FN_Prelude_46Bounded_46Prelude_46Bool_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
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
Node CF_Prelude_46Bounded_46Prelude_46Bool_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Bool_46maxBound))
, useLabel(PS_v173)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v180)
,};
Node FN_Prelude_46Bounded_46Prelude_46Bool_46minBound[] = {
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
Node CF_Prelude_46Bounded_46Prelude_46Bool_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Bool_46minBound))
, useLabel(PS_v177)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v184)
,};
Node FN_Prelude_46Bounded_46Prelude_46Bool[] = {
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
Node CF_Prelude_46Bounded_46Prelude_46Bool[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Bool))
, useLabel(PS_v181)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Bounded_46Prelude_46Bool_46minBound)
, useLabel(CF_Prelude_46Bounded_46Prelude_46Bool_46maxBound)
,};
Node PP_Prelude_46Bounded_46Prelude_46Bool[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Bool[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Bounded_46Prelude_46Bool_46maxBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Bool_46maxBound[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,109,97,120)
, bytes2word(66,111,117,110)
, bytes2word(100,0,0,0)
,};
Node PP_Prelude_46Bounded_46Prelude_46Bool_46minBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Bool_46minBound[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,111,108)
, bytes2word(46,109,105,110)
, bytes2word(66,111,117,110)
, bytes2word(100,0,0,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Bool_46minBound)
, useLabel(PC_Prelude_46False)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Bool_46minBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Bool_46minBound)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Bool_46maxBound)
, useLabel(PC_Prelude_46True)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Bool_46maxBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Bool_46maxBound)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Bool)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Bool)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Bool)
, useLabel(PC_Prelude_462)
,};

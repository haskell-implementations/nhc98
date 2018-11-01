#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+28)
#define CT_v178	((void*)startLabel+84)
#define CT_v182	((void*)startLabel+188)
#define ST_v180	((void*)startLabel+224)
#define ST_v174	((void*)startLabel+256)
#define ST_v177	((void*)startLabel+296)
#define PS_v176	((void*)startLabel+336)
#define PS_v173	((void*)startLabel+348)
#define PS_v179	((void*)startLabel+360)
#define PS_v181	((void*)startLabel+372)
extern Node PM_Prelude[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v175)
,};
Node FN_Prelude_46Bounded_46Prelude_46Char_46maxBound[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,255,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50003
, useLabel(ST_v174)
,	/* CT_v175: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Char_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Char_46maxBound))
, useLabel(PS_v173)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v178)
,};
Node FN_Prelude_46Bounded_46Prelude_46Char_46minBound[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,0,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Char_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Char_46minBound))
, useLabel(PS_v176)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v182)
,};
Node FN_Prelude_46Bounded_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v181)
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
, useLabel(ST_v180)
,	/* CT_v182: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Char))
, useLabel(PS_v179)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Bounded_46Prelude_46Char_46minBound)
, useLabel(CF_Prelude_46Bounded_46Prelude_46Char_46maxBound)
,};
Node PP_Prelude_46Bounded_46Prelude_46Char[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Char[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Bounded_46Prelude_46Char_46maxBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Char_46maxBound[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,109,97,120)
, bytes2word(66,111,117,110)
, bytes2word(100,0,0,0)
,};
Node PP_Prelude_46Bounded_46Prelude_46Char_46minBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Char_46minBound[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,109,105,110)
, bytes2word(66,111,117,110)
, bytes2word(100,0,0,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Char_46minBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Char_46minBound)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Char_46maxBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Char_46maxBound)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Char)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Char)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Char)
, useLabel(PC_Prelude_462)
,};

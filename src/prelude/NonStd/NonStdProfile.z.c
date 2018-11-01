#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+36)
#define CT_v180	((void*)startLabel+92)
#define ST_v176	((void*)startLabel+116)
#define ST_v177	((void*)startLabel+130)
#define ST_v179	((void*)startLabel+153)
extern Node TM_NonStdProfile[];
extern void *cProfile();
extern Node FN_CString_46toCString[];
extern Node FN_Prelude_46seq[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_NonStdProfile_46cProfile[] = {
  useLabel(TM_NonStdProfile)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cProfile)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NonStdProfile_46cProfile[] = {
  CAPTAG(useLabel(FN_NonStdProfile_46cProfile),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v180)
,};
Node FN_NonStdProfile_46profile[] = {
  useLabel(TM_NonStdProfile)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NonStdProfile_46profile[] = {
  CAPTAG(useLabel(FN_NonStdProfile_46profile),2)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NonStdProfile_46cProfile))
, VAPTAG(useLabel(FN_Prelude_46seq))
,};
Node PM_NonStdProfile[] = {
 	/* ST_v176: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,80,114)
, bytes2word(111,102,105,108)
,	/* ST_v177: (byte 2) */
  bytes2word(101,0,78,111)
, bytes2word(110,83,116,100)
, bytes2word(80,114,111,102)
, bytes2word(105,108,101,46)
, bytes2word(99,80,114,111)
, bytes2word(102,105,108,101)
,	/* ST_v179: (byte 1) */
  bytes2word(0,78,111,110)
, bytes2word(83,116,100,80)
, bytes2word(114,111,102,105)
, bytes2word(108,101,46,112)
, bytes2word(114,111,102,105)
, bytes2word(108,101,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+32)
#define CT_v185	((void*)startLabel+184)
#define ST_v176	((void*)startLabel+224)
#define ST_v178	((void*)startLabel+240)
#define ST_v181	((void*)startLabel+264)
#define PS_v177	((void*)startLabel+288)
#define PS_v182	((void*)startLabel+300)
#define PS_v184	((void*)startLabel+312)
#define PS_v183	((void*)startLabel+324)
#define PS_v180	((void*)startLabel+336)
extern void *cProfile();
extern Node FN_CString_46toCString[];
extern Node FN_Prelude_46seq[];
extern Node PC_CString_46toCString[];
extern Node PC_Prelude_46seq[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_NonStdProfile_46cProfile[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(cProfile)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NonStdProfile_46cProfile[] = {
  CAPTAG(useLabel(FN_NonStdProfile_46cProfile),1)
, useLabel(PS_v177)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,};
Node FN_NonStdProfile_46profile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v181)
,	/* CT_v185: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NonStdProfile_46profile[] = {
  CAPTAG(useLabel(FN_NonStdProfile_46profile),2)
, useLabel(PS_v180)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_NonStdProfile_46cProfile))
, VAPTAG(useLabel(FN_Prelude_46seq))
,};
Node PM_NonStdProfile[] = {
 	/* ST_v176: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,80,114)
, bytes2word(111,102,105,108)
, bytes2word(101,0,0,0)
,};
Node PP_NonStdProfile_46cProfile[] = {
 };
Node PC_NonStdProfile_46cProfile[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,80,114)
, bytes2word(111,102,105,108)
, bytes2word(101,46,99,80)
, bytes2word(114,111,102,105)
, bytes2word(108,101,0,0)
,};
Node PP_NonStdProfile_46profile[] = {
 };
Node PC_NonStdProfile_46profile[] = {
 	/* ST_v181: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,80,114)
, bytes2word(111,102,105,108)
, bytes2word(101,46,112,114)
, bytes2word(111,102,105,108)
, bytes2word(101,0,0,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NonStdProfile)
, useLabel(PP_NonStdProfile_46cProfile)
, useLabel(PC_NonStdProfile_46cProfile)
,	/* PS_v182: (byte 0) */
  useLabel(PM_NonStdProfile)
, useLabel(PP_NonStdProfile_46profile)
, useLabel(PC_CString_46toCString)
,	/* PS_v184: (byte 0) */
  useLabel(PM_NonStdProfile)
, useLabel(PP_NonStdProfile_46profile)
, useLabel(PC_Prelude_46seq)
,	/* PS_v183: (byte 0) */
  useLabel(PM_NonStdProfile)
, useLabel(PP_NonStdProfile_46profile)
, useLabel(PC_NonStdProfile_46cProfile)
,	/* PS_v180: (byte 0) */
  useLabel(PM_NonStdProfile)
, useLabel(PP_NonStdProfile_46profile)
, useLabel(PC_NonStdProfile_46profile)
,};

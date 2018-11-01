#include "newmacros.h"
#include "runtime.h"

#define v353	((void*)startLabel+22)
#define v352	((void*)startLabel+26)
#define v349	((void*)startLabel+48)
#define CT_v354	((void*)startLabel+64)
#define FN_LAMBDA342	((void*)startLabel+104)
#define CT_v356	((void*)startLabel+124)
#define CF_LAMBDA342	((void*)startLabel+132)
#define v361	((void*)startLabel+158)
#define v360	((void*)startLabel+162)
#define v357	((void*)startLabel+184)
#define CT_v362	((void*)startLabel+200)
#define FN_LAMBDA343	((void*)startLabel+240)
#define CT_v364	((void*)startLabel+260)
#define CF_LAMBDA343	((void*)startLabel+268)
#define v369	((void*)startLabel+294)
#define v368	((void*)startLabel+298)
#define v365	((void*)startLabel+320)
#define CT_v370	((void*)startLabel+336)
#define FN_LAMBDA344	((void*)startLabel+376)
#define CT_v372	((void*)startLabel+396)
#define CF_LAMBDA344	((void*)startLabel+404)
#define v377	((void*)startLabel+430)
#define v376	((void*)startLabel+434)
#define v373	((void*)startLabel+456)
#define CT_v378	((void*)startLabel+472)
#define FN_LAMBDA345	((void*)startLabel+512)
#define CT_v380	((void*)startLabel+532)
#define CF_LAMBDA345	((void*)startLabel+540)
#define v385	((void*)startLabel+566)
#define v384	((void*)startLabel+570)
#define v381	((void*)startLabel+592)
#define CT_v386	((void*)startLabel+608)
#define FN_LAMBDA346	((void*)startLabel+648)
#define CT_v388	((void*)startLabel+668)
#define CF_LAMBDA346	((void*)startLabel+676)
#define v393	((void*)startLabel+702)
#define v392	((void*)startLabel+706)
#define v389	((void*)startLabel+728)
#define CT_v394	((void*)startLabel+744)
#define FN_LAMBDA347	((void*)startLabel+784)
#define CT_v396	((void*)startLabel+804)
#define CF_LAMBDA347	((void*)startLabel+812)
#define ST_v387	((void*)startLabel+816)
#define ST_v379	((void*)startLabel+869)
#define ST_v371	((void*)startLabel+922)
#define ST_v363	((void*)startLabel+975)
#define ST_v355	((void*)startLabel+1028)
#define ST_v395	((void*)startLabel+1081)
extern Node CF_NHC_46DErrNo_46nopermission[];
extern Node FN_Prelude_46elem[];
extern Node CF_Prelude_46Eq_46NHC_46DErrNo_46ErrNo[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node CF_NHC_46DErrNo_46illegalop[];
extern Node CF_NHC_46DErrNo_46full[];
extern Node CF_NHC_46DErrNo_46alreadyinuse[];
extern Node CF_NHC_46DErrNo_46doesnotexist[];
extern Node CF_NHC_46DErrNo_46alreadyexists[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v354)
,};
Node FN_IO_46isPermissionError[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v353: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v352: (byte 2) */
  bytes2word(24,0,UNPACK,4)
, bytes2word(PUSH_CVAL_P1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,5,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
,	/* v349: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v354: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_IO_46isPermissionError[] = {
  CAPTAG(useLabel(FN_IO_46isPermissionError),1)
, useLabel(CF_NHC_46DErrNo_46nopermission)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46NHC_46DErrNo_46ErrNo)
, VAPTAG(useLabel(FN_LAMBDA342))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v356)
,	/* FN_LAMBDA342: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v355)
,	/* CT_v356: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA342: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA342))
, bytes2word(1,0,0,1)
, useLabel(CT_v362)
,};
Node FN_IO_46isIllegalOperation[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v361: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v360: (byte 2) */
  bytes2word(24,0,UNPACK,4)
, bytes2word(PUSH_CVAL_P1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,5,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
,	/* v357: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v362: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_IO_46isIllegalOperation[] = {
  CAPTAG(useLabel(FN_IO_46isIllegalOperation),1)
, useLabel(CF_NHC_46DErrNo_46illegalop)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46NHC_46DErrNo_46ErrNo)
, VAPTAG(useLabel(FN_LAMBDA343))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v364)
,	/* FN_LAMBDA343: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v363)
,	/* CT_v364: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA343: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA343))
, bytes2word(1,0,0,1)
, useLabel(CT_v370)
,};
Node FN_IO_46isFullError[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v369: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v368: (byte 2) */
  bytes2word(24,0,UNPACK,4)
, bytes2word(PUSH_CVAL_P1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,5,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
,	/* v365: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v370: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_IO_46isFullError[] = {
  CAPTAG(useLabel(FN_IO_46isFullError),1)
, useLabel(CF_NHC_46DErrNo_46full)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46NHC_46DErrNo_46ErrNo)
, VAPTAG(useLabel(FN_LAMBDA344))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v372)
,	/* FN_LAMBDA344: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v371)
,	/* CT_v372: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA344: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA344))
, bytes2word(1,0,0,1)
, useLabel(CT_v378)
,};
Node FN_IO_46isAlreadyInUseError[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v377: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v376: (byte 2) */
  bytes2word(24,0,UNPACK,4)
, bytes2word(PUSH_CVAL_P1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,5,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
,	/* v373: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v378: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_IO_46isAlreadyInUseError[] = {
  CAPTAG(useLabel(FN_IO_46isAlreadyInUseError),1)
, useLabel(CF_NHC_46DErrNo_46alreadyinuse)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46NHC_46DErrNo_46ErrNo)
, VAPTAG(useLabel(FN_LAMBDA345))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v380)
,	/* FN_LAMBDA345: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v379)
,	/* CT_v380: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA345: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA345))
, bytes2word(1,0,0,1)
, useLabel(CT_v386)
,};
Node FN_IO_46isDoesNotExistError[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v385: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v384: (byte 2) */
  bytes2word(24,0,UNPACK,4)
, bytes2word(PUSH_CVAL_P1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,5,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
,	/* v381: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v386: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_IO_46isDoesNotExistError[] = {
  CAPTAG(useLabel(FN_IO_46isDoesNotExistError),1)
, useLabel(CF_NHC_46DErrNo_46doesnotexist)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46NHC_46DErrNo_46ErrNo)
, VAPTAG(useLabel(FN_LAMBDA346))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v388)
,	/* FN_LAMBDA346: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v387)
,	/* CT_v388: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA346: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA346))
, bytes2word(1,0,0,1)
, useLabel(CT_v394)
,};
Node FN_IO_46isAlreadyExistsError[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v393: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v392: (byte 2) */
  bytes2word(24,0,UNPACK,4)
, bytes2word(PUSH_CVAL_P1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,5,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,ZAP_STACK_P1,2,EVAL)
,	/* v389: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v394: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_IO_46isAlreadyExistsError[] = {
  CAPTAG(useLabel(FN_IO_46isAlreadyExistsError),1)
, useLabel(CF_NHC_46DErrNo_46alreadyexists)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46NHC_46DErrNo_46ErrNo)
, VAPTAG(useLabel(FN_LAMBDA347))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v396)
,	/* FN_LAMBDA347: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v395)
,	/* CT_v396: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA347: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA347))
,	/* ST_v387: (byte 0) */
  bytes2word(73,79,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,49,48,58)
, bytes2word(49,45,49,48)
, bytes2word(58,55,48,46)
,	/* ST_v379: (byte 1) */
  bytes2word(0,73,79,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,49,51)
, bytes2word(58,49,45,49)
, bytes2word(51,58,55,48)
,	/* ST_v371: (byte 2) */
  bytes2word(46,0,73,79)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,49)
, bytes2word(54,58,49,45)
, bytes2word(49,54,58,54)
,	/* ST_v363: (byte 3) */
  bytes2word(50,46,0,73)
, bytes2word(79,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(49,57,58,49)
, bytes2word(45,49,57,58)
,	/* ST_v355: (byte 4) */
  bytes2word(54,55,46,0)
, bytes2word(73,79,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,50,50,58)
, bytes2word(49,45,50,50)
, bytes2word(58,55,48,46)
,	/* ST_v395: (byte 1) */
  bytes2word(0,73,79,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,55,58)
, bytes2word(49,45,55,58)
, bytes2word(55,49,46,0)
,};

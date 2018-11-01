#include "newmacros.h"
#include "runtime.h"

#define v387	((void*)startLabel+30)
#define v389	((void*)startLabel+42)
#define v390	((void*)startLabel+58)
#define v391	((void*)startLabel+63)
#define v393	((void*)startLabel+78)
#define v394	((void*)startLabel+84)
#define CT_v399	((void*)startLabel+128)
#define CT_v401	((void*)startLabel+192)
#define CT_v403	((void*)startLabel+260)
#define CT_v405	((void*)startLabel+328)
#define CT_v407	((void*)startLabel+396)
#define CT_v409	((void*)startLabel+464)
#define CT_v411	((void*)startLabel+532)
#define CT_v413	((void*)startLabel+664)
#define ST_v412	((void*)startLabel+712)
#define ST_v408	((void*)startLabel+739)
#define ST_v410	((void*)startLabel+768)
#define ST_v404	((void*)startLabel+798)
#define ST_v406	((void*)startLabel+827)
#define ST_v395	((void*)startLabel+857)
#define ST_v402	((void*)startLabel+892)
#define ST_v400	((void*)startLabel+923)
extern Node TM_Prelude[];
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46Either[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v399)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v387: (byte 2) */
  bytes2word(TOP(37),BOT(37),UNPACK,1)
, bytes2word(PUSH_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v389: (byte 2) */
  bytes2word(TOP(20),BOT(20),UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
,	/* v390: (byte 2) */
  bytes2word(2,RETURN_EVAL,UNPACK,1)
,	/* v391: (byte 3) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,RETURN,UNPACK)
, bytes2word(1,PUSH_ARG,4,ZAP_ARG_I1)
, bytes2word(ZAP_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v393: (byte 2) */
  bytes2word(TOP(10),BOT(10),UNPACK,1)
,	/* v394: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v395)
,	/* CT_v399: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46compare),4)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v401)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30028
, useLabel(ST_v400)
,	/* CT_v401: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46min),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v403)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30028
, useLabel(ST_v402)
,	/* CT_v403: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46max),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v405)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30028
, useLabel(ST_v404)
,	/* CT_v405: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v407)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30028
, useLabel(ST_v406)
,	/* CT_v407: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62_61),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v409)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30028
, useLabel(ST_v408)
,	/* CT_v409: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v411)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30028
, useLabel(ST_v410)
,	/* CT_v411: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60_61),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v413)
,};
Node FN_Prelude_46Ord_46Prelude_46Either[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_P1,46,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 30028
, useLabel(ST_v412)
,	/* CT_v413: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46max),2)
,	/* ST_v412: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
,	/* ST_v408: (byte 3) */
  bytes2word(101,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
,	/* ST_v410: (byte 4) */
  bytes2word(114,46,60,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,60)
,	/* ST_v404: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,105)
, bytes2word(116,104,101,114)
,	/* ST_v406: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
, bytes2word(114,46,62,61)
,	/* ST_v395: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,105,116)
, bytes2word(104,101,114,46)
, bytes2word(99,111,109,112)
,	/* ST_v402: (byte 4) */
  bytes2word(97,114,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,109)
,	/* ST_v400: (byte 3) */
  bytes2word(97,120,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
, bytes2word(114,46,109,105)
, bytes2word(110,0,0,0)
,};

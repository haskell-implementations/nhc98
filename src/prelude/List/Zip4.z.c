#include "newmacros.h"
#include "runtime.h"

#define CT_v189	((void*)startLabel+32)
#define FN_LAMBDA186	((void*)startLabel+68)
#define CT_v191	((void*)startLabel+104)
#define F0_LAMBDA186	((void*)startLabel+112)
#define ST_v188	((void*)startLabel+116)
#define ST_v190	((void*)startLabel+126)
extern Node TM_List[];
extern Node FN_List_46zipWith4[];
extern Node TMSUB_List[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v189)
,};
Node FN_List_46zip4[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v188)
,	/* CT_v189: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip4[] = {
  VAPTAG(useLabel(FN_List_46zip4))
, CAPTAG(useLabel(FN_LAMBDA186),4)
, CAPTAG(useLabel(FN_List_46zipWith4),4)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v191)
,	/* FN_LAMBDA186: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 60019
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(0,4)
, 0
,	/* F0_LAMBDA186: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA186),4)
,	/* ST_v188: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,122,105,112)
,	/* ST_v190: (byte 2) */
  bytes2word(52,0,76,105)
, bytes2word(115,116,46,122)
, bytes2word(105,112,52,58)
, bytes2word(54,58,49,57)
, bytes2word(45,54,58,50)
, bytes2word(51,0,0,0)
,};

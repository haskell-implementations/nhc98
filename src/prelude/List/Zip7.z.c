#include "newmacros.h"
#include "runtime.h"

#define CT_v204	((void*)startLabel+32)
#define FN_LAMBDA201	((void*)startLabel+72)
#define CT_v206	((void*)startLabel+112)
#define F0_LAMBDA201	((void*)startLabel+120)
#define ST_v203	((void*)startLabel+124)
#define ST_v205	((void*)startLabel+134)
extern Node TM_List[];
extern Node FN_List_46zipWith7[];
extern Node TMSUB_List[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v204)
,};
Node FN_List_46zip7[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v203)
,	/* CT_v204: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip7[] = {
  VAPTAG(useLabel(FN_List_46zip7))
, CAPTAG(useLabel(FN_LAMBDA201),7)
, CAPTAG(useLabel(FN_List_46zipWith7),7)
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v206)
,	/* FN_LAMBDA201: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
, 60020
, useLabel(ST_v205)
,	/* CT_v206: (byte 0) */
  HW(0,7)
, 0
,	/* F0_LAMBDA201: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA201),7)
,	/* ST_v203: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,122,105,112)
,	/* ST_v205: (byte 2) */
  bytes2word(55,0,76,105)
, bytes2word(115,116,46,122)
, bytes2word(105,112,55,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,50)
, bytes2word(55,0,0,0)
,};

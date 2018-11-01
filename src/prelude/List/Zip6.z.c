#include "newmacros.h"
#include "runtime.h"

#define CT_v199	((void*)startLabel+32)
#define FN_LAMBDA196	((void*)startLabel+72)
#define CT_v201	((void*)startLabel+112)
#define F0_LAMBDA196	((void*)startLabel+120)
#define ST_v198	((void*)startLabel+124)
#define ST_v200	((void*)startLabel+134)
extern Node TM_List[];
extern Node FN_List_46zipWith6[];
extern Node TMSUB_List[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v199)
,};
Node FN_List_46zip6[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v198)
,	/* CT_v199: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip6[] = {
  VAPTAG(useLabel(FN_List_46zip6))
, CAPTAG(useLabel(FN_LAMBDA196),6)
, CAPTAG(useLabel(FN_List_46zipWith6),6)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v201)
,	/* FN_LAMBDA196: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,6,0)
, 60020
, useLabel(ST_v200)
,	/* CT_v201: (byte 0) */
  HW(0,6)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),6)
,	/* ST_v198: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,122,105,112)
,	/* ST_v200: (byte 2) */
  bytes2word(54,0,76,105)
, bytes2word(115,116,46,122)
, bytes2word(105,112,54,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,50)
, bytes2word(54,0,0,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+32)
#define FN_LAMBDA191	((void*)startLabel+68)
#define CT_v196	((void*)startLabel+108)
#define F0_LAMBDA191	((void*)startLabel+116)
#define ST_v193	((void*)startLabel+120)
#define ST_v195	((void*)startLabel+130)
extern Node TM_List[];
extern Node FN_List_46zipWith5[];
extern Node TMSUB_List[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v194)
,};
Node FN_List_46zip5[] = {
  useLabel(TM_List)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_List_46zip5[] = {
  VAPTAG(useLabel(FN_List_46zip5))
, CAPTAG(useLabel(FN_LAMBDA191),5)
, CAPTAG(useLabel(FN_List_46zipWith5),5)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v196)
,	/* FN_LAMBDA191: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,5,0)
, 60020
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(0,5)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),5)
,	/* ST_v193: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,122,105,112)
,	/* ST_v195: (byte 2) */
  bytes2word(53,0,76,105)
, bytes2word(115,116,46,122)
, bytes2word(105,112,53,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,50)
, bytes2word(53,0,0,0)
,};

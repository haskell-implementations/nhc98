#include "newmacros.h"
#include "runtime.h"

#define v188	((void*)startLabel+26)
#define v186	((void*)startLabel+30)
#define v183	((void*)startLabel+37)
#define CT_v189	((void*)startLabel+64)
#define FN_List_46Prelude_46160_46max	((void*)startLabel+104)
#define v195	((void*)startLabel+126)
#define v193	((void*)startLabel+130)
#define v190	((void*)startLabel+133)
#define CT_v196	((void*)startLabel+148)
#define F0_List_46Prelude_46160_46max	((void*)startLabel+156)
#define FN_LAMBDA181	((void*)startLabel+168)
#define CT_v199	((void*)startLabel+200)
#define CF_LAMBDA181	((void*)startLabel+208)
#define ST_v187	((void*)startLabel+212)
#define ST_v198	((void*)startLabel+227)
#define ST_v197	((void*)startLabel+254)
#define ST_v194	((void*)startLabel+279)
extern Node TM_List[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46foldl1[];
extern Node TMSUB_List[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v189)
,};
Node FN_List_46maximumBy[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v188: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v186: (byte 2) */
  bytes2word(9,0,POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v183: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v187)
,	/* CT_v189: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_List_46maximumBy[] = {
  CAPTAG(useLabel(FN_List_46maximumBy),2)
, VAPTAG(useLabel(FN_LAMBDA181))
, VAPTAG(useLabel(FN_Prelude_46error))
, CAPTAG(useLabel(FN_List_46Prelude_46160_46max),2)
, VAPTAG(useLabel(FN_Prelude_46foldl1))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v196)
,	/* FN_List_46Prelude_46160_46max: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(6),BOT(6))
,	/* v195: (byte 2) */
  bytes2word(TOP(10),BOT(10),POP_I1,JUMP)
,	/* v193: (byte 2) */
  bytes2word(5,0,POP_I1,PUSH_ARG_I2)
,	/* v190: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60036
, useLabel(ST_v194)
,	/* CT_v196: (byte 0) */
  HW(0,3)
, 0
,	/* F0_List_46Prelude_46160_46max: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46160_46max),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v199)
,	/* FN_LAMBDA181: (byte 0) */
  useLabel(TMSUB_List)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v198)
, 40034
, useLabel(ST_v197)
,	/* CT_v199: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA181: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA181))
,	/* ST_v187: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,109,97,120)
, bytes2word(105,109,117,109)
,	/* ST_v198: (byte 3) */
  bytes2word(66,121,0,76)
, bytes2word(105,115,116,46)
, bytes2word(109,97,120,105)
, bytes2word(109,117,109,66)
, bytes2word(121,58,32,101)
, bytes2word(109,112,116,121)
, bytes2word(32,108,105,115)
,	/* ST_v197: (byte 2) */
  bytes2word(116,0,76,105)
, bytes2word(115,116,46,109)
, bytes2word(97,120,105,109)
, bytes2word(117,109,66,121)
, bytes2word(58,52,58,51)
, bytes2word(52,45,52,58)
,	/* ST_v194: (byte 3) */
  bytes2word(54,49,0,76)
, bytes2word(105,115,116,46)
, bytes2word(109,97,120,105)
, bytes2word(109,117,109,66)
, bytes2word(121,58,54,58)
, bytes2word(51,54,45,56)
, bytes2word(58,53,55,0)
,};

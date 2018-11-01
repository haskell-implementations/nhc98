#include "newmacros.h"
#include "runtime.h"

#define CT_v257	((void*)startLabel+24)
#define v259	((void*)startLabel+84)
#define v260	((void*)startLabel+88)
#define v261	((void*)startLabel+92)
#define CT_v266	((void*)startLabel+200)
#define v267	((void*)startLabel+269)
#define CT_v273	((void*)startLabel+348)
#define CT_v277	((void*)startLabel+444)
#define CT_v281	((void*)startLabel+540)
#define CT_v285	((void*)startLabel+636)
#define CT_v289	((void*)startLabel+732)
#define CT_v293	((void*)startLabel+856)
#define ST_v291	((void*)startLabel+920)
#define ST_v279	((void*)startLabel+948)
#define ST_v287	((void*)startLabel+980)
#define ST_v283	((void*)startLabel+1012)
#define ST_v270	((void*)startLabel+1044)
#define ST_v256	((void*)startLabel+1076)
#define ST_v275	((void*)startLabel+1116)
#define ST_v263	((void*)startLabel+1152)
#define PS_v288	((void*)startLabel+1188)
#define PS_v286	((void*)startLabel+1200)
#define PS_v284	((void*)startLabel+1212)
#define PS_v282	((void*)startLabel+1224)
#define PS_v280	((void*)startLabel+1236)
#define PS_v278	((void*)startLabel+1248)
#define PS_v276	((void*)startLabel+1260)
#define PS_v274	((void*)startLabel+1272)
#define PS_v269	((void*)startLabel+1284)
#define PS_v271	((void*)startLabel+1296)
#define PS_v272	((void*)startLabel+1308)
#define PS_v262	((void*)startLabel+1320)
#define PS_v264	((void*)startLabel+1332)
#define PS_v255	((void*)startLabel+1344)
#define PS_v290	((void*)startLabel+1356)
#define PS_v292	((void*)startLabel+1368)
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46negate[];
extern Node FN_Prelude_46primIntegerNeg[];
extern Node FN_Prelude_46primIntegerMul[];
extern Node FN_Prelude_46primIntegerSub[];
extern Node FN_Prelude_46primIntegerAdd[];
extern Node CF_Prelude_46Eq_46Prelude_46Integer[];
extern Node CF_Prelude_46Show_46Prelude_46Integer[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primIntegerAdd[];
extern Node PC_Prelude_46primIntegerSub[];
extern Node PC_Prelude_46primIntegerMul[];
extern Node PC_Prelude_46primIntegerNeg[];
extern Node PC_Prelude_46Ord_46Prelude_46Integer_46_60[];
extern Node PC_Prelude_46Ord_46Prelude_46Integer_46compare[];
extern Node PC_Prelude_469[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v257)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46fromInteger[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 190002
, useLabel(ST_v256)
,	/* CT_v257: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46fromInteger[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46fromInteger),1)
, useLabel(PS_v255)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46signum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CADR_N1)
, bytes2word(12,ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v259: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(14),BOT(14))
,	/* v260: (byte 4) */
  bytes2word(POP_I1,PUSH_CADR_N1,18,RETURN)
,	/* v261: (byte 4) */
  bytes2word(POP_I1,PUSH_CADR_N1,12,RETURN)
, bytes2word(POP_I1,PUSH_CADR_N1,24,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, CONSTRW(1,1)
, 0
, 0
, 0
, 0
, 1
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, 150002
, useLabel(ST_v263)
,	/* CT_v266: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46signum[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46signum),1)
, useLabel(PS_v262)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46compare))
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46abs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CADR_N1)
, bytes2word(12,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(13,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
,	/* v267: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v272)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v271)
, 0
, 0
, 0
, 0
, 140002
, useLabel(ST_v270)
,	/* CT_v273: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46abs[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46abs),1)
, useLabel(PS_v269)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Integer_46_60))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate))
, bytes2word(1,0,0,1)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46negate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v276)
, 0
, 0
, 0
, 0
, 120002
, useLabel(ST_v275)
,	/* CT_v277: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46negate[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46negate),1)
, useLabel(PS_v274)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerNeg))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_42[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, 110002
, useLabel(ST_v279)
,	/* CT_v281: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_42[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42),2)
, useLabel(PS_v278)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerMul))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v285)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_45[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v284)
, 0
, 0
, 0
, 0
, 100002
, useLabel(ST_v283)
,	/* CT_v285: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_45[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_45),2)
, useLabel(PS_v282)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerSub))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Num_46Prelude_46Integer_46_43[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v288)
, 0
, 0
, 0
, 0
, 90002
, useLabel(ST_v287)
,	/* CT_v289: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Num_46Prelude_46Integer_46_43[] = {
  CAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_43),2)
, useLabel(PS_v286)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primIntegerAdd))
, bytes2word(0,0,0,0)
, useLabel(CT_v293)
,};
Node FN_Prelude_46Num_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_P1,15,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v292)
, 0
, 0
, 0
, 0
, CONSTR(0,9,0)
, 0
, 0
, 0
, 0
, 80010
, useLabel(ST_v291)
,	/* CT_v293: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_Prelude_46Num_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer))
, useLabel(PS_v290)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46Prelude_46Integer)
, useLabel(CF_Prelude_46Show_46Prelude_46Integer)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46_42)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46_43)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46_45)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46negate)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46signum)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46fromInteger)
, useLabel(F0_Prelude_46Num_46Prelude_46Integer_46abs)
,};
Node PP_Prelude_46Num_46Prelude_46Integer[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Integer[] = {
 	/* ST_v291: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,0)
,};
Node PP_Prelude_46Num_46Prelude_46Integer_46_42[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Integer_46_42[] = {
 	/* ST_v279: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(42,0,0,0)
,};
Node PP_Prelude_46Num_46Prelude_46Integer_46_43[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Integer_46_43[] = {
 	/* ST_v287: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(43,0,0,0)
,};
Node PP_Prelude_46Num_46Prelude_46Integer_46_45[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Integer_46_45[] = {
 	/* ST_v283: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(45,0,0,0)
,};
Node PP_Prelude_46Num_46Prelude_46Integer_46abs[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Integer_46abs[] = {
 	/* ST_v270: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(97,98,115,0)
,};
Node PP_Prelude_46Num_46Prelude_46Integer_46fromInteger[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Integer_46fromInteger[] = {
 	/* ST_v256: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(102,114,111,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,0)
,};
Node PP_Prelude_46Num_46Prelude_46Integer_46negate[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Integer_46negate[] = {
 	/* ST_v275: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(110,101,103,97)
, bytes2word(116,101,0,0)
,};
Node PP_Prelude_46Num_46Prelude_46Integer_46signum[] = {
 };
Node PC_Prelude_46Num_46Prelude_46Integer_46signum[] = {
 	/* ST_v263: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(78,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,46)
, bytes2word(115,105,103,110)
, bytes2word(117,109,0,0)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46_43)
, useLabel(PC_Prelude_46primIntegerAdd)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46_43)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_43)
,	/* PS_v284: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46_45)
, useLabel(PC_Prelude_46primIntegerSub)
,	/* PS_v282: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46_45)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_45)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46_42)
, useLabel(PC_Prelude_46primIntegerMul)
,	/* PS_v278: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46_42)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46_42)
,	/* PS_v276: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46negate)
, useLabel(PC_Prelude_46primIntegerNeg)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46negate)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46negate)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46abs)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46abs)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46abs)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46_60)
,	/* PS_v272: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46abs)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46negate)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46signum)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46signum)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46signum)
, useLabel(PC_Prelude_46Ord_46Prelude_46Integer_46compare)
,	/* PS_v255: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer_46fromInteger)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer_46fromInteger)
,	/* PS_v290: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer)
, useLabel(PC_Prelude_46Num_46Prelude_46Integer)
,	/* PS_v292: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Num_46Prelude_46Integer)
, useLabel(PC_Prelude_469)
,};

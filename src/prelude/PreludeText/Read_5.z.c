#include "newmacros.h"
#include "runtime.h"

#define CT_v469	((void*)startLabel+68)
#define FN_LAMBDA464	((void*)startLabel+108)
#define CT_v471	((void*)startLabel+156)
#define F0_LAMBDA464	((void*)startLabel+164)
#define FN_LAMBDA463	((void*)startLabel+200)
#define v490	((void*)startLabel+220)
#define v479	((void*)startLabel+224)
#define v491	((void*)startLabel+238)
#define v483	((void*)startLabel+242)
#define v492	((void*)startLabel+252)
#define v487	((void*)startLabel+256)
#define v480	((void*)startLabel+282)
#define v476	((void*)startLabel+287)
#define v472	((void*)startLabel+292)
#define CT_v493	((void*)startLabel+308)
#define F0_LAMBDA463	((void*)startLabel+316)
#define FN_LAMBDA462	((void*)startLabel+356)
#define CT_v497	((void*)startLabel+400)
#define F0_LAMBDA462	((void*)startLabel+408)
#define FN_LAMBDA461	((void*)startLabel+444)
#define v515	((void*)startLabel+464)
#define v505	((void*)startLabel+468)
#define v516	((void*)startLabel+482)
#define v509	((void*)startLabel+486)
#define v517	((void*)startLabel+496)
#define v513	((void*)startLabel+500)
#define v506	((void*)startLabel+526)
#define v502	((void*)startLabel+531)
#define v498	((void*)startLabel+536)
#define CT_v518	((void*)startLabel+552)
#define F0_LAMBDA461	((void*)startLabel+560)
#define FN_LAMBDA460	((void*)startLabel+600)
#define CT_v522	((void*)startLabel+648)
#define F0_LAMBDA460	((void*)startLabel+656)
#define FN_LAMBDA459	((void*)startLabel+692)
#define v540	((void*)startLabel+712)
#define v530	((void*)startLabel+716)
#define v541	((void*)startLabel+730)
#define v534	((void*)startLabel+734)
#define v542	((void*)startLabel+744)
#define v538	((void*)startLabel+748)
#define v531	((void*)startLabel+774)
#define v527	((void*)startLabel+779)
#define v523	((void*)startLabel+784)
#define CT_v543	((void*)startLabel+800)
#define F0_LAMBDA459	((void*)startLabel+808)
#define FN_LAMBDA458	((void*)startLabel+848)
#define CT_v547	((void*)startLabel+892)
#define F0_LAMBDA458	((void*)startLabel+900)
#define FN_LAMBDA457	((void*)startLabel+936)
#define v565	((void*)startLabel+956)
#define v555	((void*)startLabel+960)
#define v566	((void*)startLabel+974)
#define v559	((void*)startLabel+978)
#define v567	((void*)startLabel+988)
#define v563	((void*)startLabel+992)
#define v556	((void*)startLabel+1018)
#define v552	((void*)startLabel+1023)
#define v548	((void*)startLabel+1028)
#define CT_v568	((void*)startLabel+1044)
#define F0_LAMBDA457	((void*)startLabel+1052)
#define FN_LAMBDA456	((void*)startLabel+1092)
#define CT_v572	((void*)startLabel+1140)
#define F0_LAMBDA456	((void*)startLabel+1148)
#define FN_LAMBDA455	((void*)startLabel+1184)
#define v590	((void*)startLabel+1204)
#define v580	((void*)startLabel+1208)
#define v591	((void*)startLabel+1222)
#define v584	((void*)startLabel+1226)
#define v592	((void*)startLabel+1236)
#define v588	((void*)startLabel+1240)
#define v581	((void*)startLabel+1266)
#define v577	((void*)startLabel+1271)
#define v573	((void*)startLabel+1276)
#define CT_v593	((void*)startLabel+1292)
#define F0_LAMBDA455	((void*)startLabel+1300)
#define FN_LAMBDA454	((void*)startLabel+1340)
#define CT_v597	((void*)startLabel+1384)
#define F0_LAMBDA454	((void*)startLabel+1392)
#define FN_LAMBDA453	((void*)startLabel+1428)
#define v615	((void*)startLabel+1448)
#define v605	((void*)startLabel+1452)
#define v616	((void*)startLabel+1466)
#define v609	((void*)startLabel+1470)
#define v617	((void*)startLabel+1480)
#define v613	((void*)startLabel+1484)
#define v606	((void*)startLabel+1508)
#define v602	((void*)startLabel+1513)
#define v598	((void*)startLabel+1518)
#define CT_v618	((void*)startLabel+1552)
#define F0_LAMBDA453	((void*)startLabel+1560)
#define CT_v620	((void*)startLabel+1612)
#define CT_v622	((void*)startLabel+1700)
#define ST_v621	((void*)startLabel+1720)
#define ST_v619	((void*)startLabel+1743)
#define ST_v468	((void*)startLabel+1775)
#define ST_v470	((void*)startLabel+1808)
#define ST_v488	((void*)startLabel+1852)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_465[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v469)
,};
Node FN_Prelude_46Read_46Prelude_465_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG,6,NEEDHEAP_I32,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,5,4)
, bytes2word(HEAP_ARG_ARG,3,2,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40005
, useLabel(ST_v468)
,	/* CT_v469: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Read_46Prelude_465_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465_46readsPrec),6)
, CAPTAG(useLabel(FN_LAMBDA464),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v471)
,	/* FN_LAMBDA464: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50030
, useLabel(ST_v470)
,	/* CT_v471: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA464: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA464),6)
, CAPTAG(useLabel(FN_LAMBDA463),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v493)
,	/* FN_LAMBDA463: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v490: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v479: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v491: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v483: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v492: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v487: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v480: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v476: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v472: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v493: (byte 0) */
  HW(4,7)
, 0
,	/* F0_LAMBDA463: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA463),7)
, CAPTAG(useLabel(FN_LAMBDA462),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v497)
,	/* FN_LAMBDA462: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v497: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA462: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA462),6)
, CAPTAG(useLabel(FN_LAMBDA461),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v518)
,	/* FN_LAMBDA461: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v515: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v505: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v516: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v509: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v517: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v513: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v506: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v502: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v498: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v518: (byte 0) */
  HW(4,7)
, 0
,	/* F0_LAMBDA461: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA461),7)
, CAPTAG(useLabel(FN_LAMBDA460),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v522)
,	/* FN_LAMBDA460: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v522: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA460: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA460),6)
, CAPTAG(useLabel(FN_LAMBDA459),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v543)
,	/* FN_LAMBDA459: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v540: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v530: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v541: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v534: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v542: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v538: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v531: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v527: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v523: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v543: (byte 0) */
  HW(4,7)
, 0
,	/* F0_LAMBDA459: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA459),7)
, CAPTAG(useLabel(FN_LAMBDA458),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v547)
,	/* FN_LAMBDA458: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v547: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA458: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA458),6)
, CAPTAG(useLabel(FN_LAMBDA457),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v568)
,	/* FN_LAMBDA457: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v565: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v555: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v566: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v559: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v567: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v563: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v556: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v552: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v548: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v568: (byte 0) */
  HW(4,7)
, 0
,	/* F0_LAMBDA457: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA457),7)
, CAPTAG(useLabel(FN_LAMBDA456),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v572)
,	/* FN_LAMBDA456: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v572: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA456: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA456),6)
, CAPTAG(useLabel(FN_LAMBDA455),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v593)
,	/* FN_LAMBDA455: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v590: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v580: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v591: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v584: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v592: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v588: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v581: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v577: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v573: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v593: (byte 0) */
  HW(4,7)
, 0
,	/* F0_LAMBDA455: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA455),7)
, CAPTAG(useLabel(FN_LAMBDA454),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v597)
,	/* FN_LAMBDA454: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v597: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA454: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA454),6)
, CAPTAG(useLabel(FN_LAMBDA453),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v618)
,	/* FN_LAMBDA453: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v615: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v605: (byte 4) */
  bytes2word(POP_I1,JUMP,63,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v616: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v609: (byte 2) */
  bytes2word(40,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v617: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v613: (byte 4) */
  bytes2word(POP_I1,JUMP,26,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,7,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,5,HEAP_OFF_N1)
,	/* v606: (byte 4) */
  bytes2word(4,HEAP_ARG,7,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v602: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v598: (byte 2) */
  bytes2word(2,0,PUSH_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,5,0)
, 50037
, useLabel(ST_v488)
,	/* CT_v618: (byte 0) */
  HW(0,7)
, 0
,	/* F0_LAMBDA453: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA453),7)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v620)
,};
Node FN_Prelude_46Read_46Prelude_465_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30055
, useLabel(ST_v619)
,	/* CT_v620: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Read_46Prelude_465_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465_46readList),5)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v622)
,};
Node FN_Prelude_46Read_46Prelude_465[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30055
, useLabel(ST_v621)
,	/* CT_v622: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Read_46Prelude_465[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465),5)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465_46readList))
,	/* ST_v621: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v619: (byte 3) */
  bytes2word(46,53,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(53,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v468: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(53,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v470: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,53,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,51)
, bytes2word(48,45,49,54)
,	/* ST_v488: (byte 4) */
  bytes2word(58,54,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,53,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,51)
, bytes2word(55,45,49,54)
, bytes2word(58,54,48,0)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v572	((void*)startLabel+64)
#define FN_LAMBDA568	((void*)startLabel+108)
#define CT_v573	((void*)startLabel+148)
#define F0_LAMBDA568	((void*)startLabel+156)
#define FN_LAMBDA567	((void*)startLabel+196)
#define v591	((void*)startLabel+212)
#define v581	((void*)startLabel+216)
#define v592	((void*)startLabel+230)
#define v585	((void*)startLabel+234)
#define v593	((void*)startLabel+244)
#define v589	((void*)startLabel+248)
#define v582	((void*)startLabel+277)
#define v578	((void*)startLabel+282)
#define v574	((void*)startLabel+287)
#define CT_v594	((void*)startLabel+296)
#define F0_LAMBDA567	((void*)startLabel+304)
#define FN_LAMBDA566	((void*)startLabel+348)
#define CT_v598	((void*)startLabel+384)
#define F0_LAMBDA566	((void*)startLabel+392)
#define FN_LAMBDA565	((void*)startLabel+432)
#define v616	((void*)startLabel+448)
#define v606	((void*)startLabel+452)
#define v617	((void*)startLabel+466)
#define v610	((void*)startLabel+470)
#define v618	((void*)startLabel+480)
#define v614	((void*)startLabel+484)
#define v607	((void*)startLabel+513)
#define v603	((void*)startLabel+518)
#define v599	((void*)startLabel+523)
#define CT_v619	((void*)startLabel+532)
#define F0_LAMBDA565	((void*)startLabel+540)
#define FN_LAMBDA564	((void*)startLabel+584)
#define CT_v623	((void*)startLabel+620)
#define F0_LAMBDA564	((void*)startLabel+628)
#define FN_LAMBDA563	((void*)startLabel+668)
#define v641	((void*)startLabel+684)
#define v631	((void*)startLabel+688)
#define v642	((void*)startLabel+702)
#define v635	((void*)startLabel+706)
#define v643	((void*)startLabel+716)
#define v639	((void*)startLabel+720)
#define v632	((void*)startLabel+749)
#define v628	((void*)startLabel+754)
#define v624	((void*)startLabel+759)
#define CT_v644	((void*)startLabel+768)
#define F0_LAMBDA563	((void*)startLabel+776)
#define FN_LAMBDA562	((void*)startLabel+820)
#define CT_v648	((void*)startLabel+856)
#define F0_LAMBDA562	((void*)startLabel+864)
#define FN_LAMBDA561	((void*)startLabel+904)
#define v666	((void*)startLabel+920)
#define v656	((void*)startLabel+924)
#define v667	((void*)startLabel+938)
#define v660	((void*)startLabel+942)
#define v668	((void*)startLabel+952)
#define v664	((void*)startLabel+956)
#define v657	((void*)startLabel+985)
#define v653	((void*)startLabel+990)
#define v649	((void*)startLabel+995)
#define CT_v669	((void*)startLabel+1004)
#define F0_LAMBDA561	((void*)startLabel+1012)
#define FN_LAMBDA560	((void*)startLabel+1056)
#define CT_v673	((void*)startLabel+1092)
#define F0_LAMBDA560	((void*)startLabel+1100)
#define FN_LAMBDA559	((void*)startLabel+1140)
#define v691	((void*)startLabel+1156)
#define v681	((void*)startLabel+1160)
#define v692	((void*)startLabel+1174)
#define v685	((void*)startLabel+1178)
#define v693	((void*)startLabel+1188)
#define v689	((void*)startLabel+1192)
#define v682	((void*)startLabel+1221)
#define v678	((void*)startLabel+1226)
#define v674	((void*)startLabel+1231)
#define CT_v694	((void*)startLabel+1240)
#define F0_LAMBDA559	((void*)startLabel+1248)
#define FN_LAMBDA558	((void*)startLabel+1292)
#define CT_v698	((void*)startLabel+1328)
#define F0_LAMBDA558	((void*)startLabel+1336)
#define FN_LAMBDA557	((void*)startLabel+1376)
#define v716	((void*)startLabel+1392)
#define v706	((void*)startLabel+1396)
#define v717	((void*)startLabel+1410)
#define v710	((void*)startLabel+1414)
#define v718	((void*)startLabel+1424)
#define v714	((void*)startLabel+1428)
#define v707	((void*)startLabel+1457)
#define v703	((void*)startLabel+1462)
#define v699	((void*)startLabel+1467)
#define CT_v719	((void*)startLabel+1476)
#define F0_LAMBDA557	((void*)startLabel+1484)
#define FN_LAMBDA556	((void*)startLabel+1528)
#define CT_v723	((void*)startLabel+1564)
#define F0_LAMBDA556	((void*)startLabel+1572)
#define FN_LAMBDA555	((void*)startLabel+1612)
#define v741	((void*)startLabel+1628)
#define v731	((void*)startLabel+1632)
#define v742	((void*)startLabel+1646)
#define v735	((void*)startLabel+1650)
#define v743	((void*)startLabel+1660)
#define v739	((void*)startLabel+1664)
#define v732	((void*)startLabel+1693)
#define v728	((void*)startLabel+1698)
#define v724	((void*)startLabel+1703)
#define CT_v744	((void*)startLabel+1712)
#define F0_LAMBDA555	((void*)startLabel+1720)
#define FN_LAMBDA554	((void*)startLabel+1764)
#define CT_v748	((void*)startLabel+1800)
#define F0_LAMBDA554	((void*)startLabel+1808)
#define FN_LAMBDA553	((void*)startLabel+1848)
#define v766	((void*)startLabel+1864)
#define v756	((void*)startLabel+1868)
#define v767	((void*)startLabel+1882)
#define v760	((void*)startLabel+1886)
#define v768	((void*)startLabel+1896)
#define v764	((void*)startLabel+1900)
#define v757	((void*)startLabel+1927)
#define v753	((void*)startLabel+1932)
#define v749	((void*)startLabel+1937)
#define CT_v769	((void*)startLabel+1964)
#define F0_LAMBDA553	((void*)startLabel+1972)
#define CT_v770	((void*)startLabel+2020)
#define CT_v771	((void*)startLabel+2108)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_467[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v572)
,};
Node FN_Prelude_46Read_46Prelude_467_46readsPrec[] = {
  bytes2word(ZAP_ARG,8,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG_ARG,7)
, bytes2word(6,HEAP_ARG_ARG,5,4)
, bytes2word(HEAP_ARG_ARG,3,2,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v572: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Read_46Prelude_467_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_467_46readsPrec),8)
, CAPTAG(useLabel(FN_LAMBDA568),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v573)
,	/* FN_LAMBDA568: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,12,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v573: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA568: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA568),8)
, CAPTAG(useLabel(FN_LAMBDA567),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v594)
,	/* FN_LAMBDA567: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v591: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v581: (byte 4) */
  bytes2word(POP_I1,JUMP,68,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v592: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v585: (byte 2) */
  bytes2word(45,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v593: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v589: (byte 4) */
  bytes2word(POP_I1,JUMP,31,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,9)
,	/* v582: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v578: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v574: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v594: (byte 0) */
  HW(4,9)
, 0
,	/* F0_LAMBDA567: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA567),9)
, CAPTAG(useLabel(FN_LAMBDA566),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v598)
,	/* FN_LAMBDA566: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v598: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA566: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA566),8)
, CAPTAG(useLabel(FN_LAMBDA565),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v619)
,	/* FN_LAMBDA565: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v616: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v606: (byte 4) */
  bytes2word(POP_I1,JUMP,68,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v617: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v610: (byte 2) */
  bytes2word(45,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v618: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v614: (byte 4) */
  bytes2word(POP_I1,JUMP,31,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,9)
,	/* v607: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v603: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v599: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v619: (byte 0) */
  HW(4,9)
, 0
,	/* F0_LAMBDA565: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA565),9)
, CAPTAG(useLabel(FN_LAMBDA564),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v623)
,	/* FN_LAMBDA564: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,8,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v623: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA564: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA564),8)
, CAPTAG(useLabel(FN_LAMBDA563),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v644)
,	/* FN_LAMBDA563: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v641: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v631: (byte 4) */
  bytes2word(POP_I1,JUMP,68,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v642: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v635: (byte 2) */
  bytes2word(45,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v643: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v639: (byte 4) */
  bytes2word(POP_I1,JUMP,31,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,9)
,	/* v632: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v628: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v624: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v644: (byte 0) */
  HW(4,9)
, 0
,	/* F0_LAMBDA563: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA563),9)
, CAPTAG(useLabel(FN_LAMBDA562),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v648)
,	/* FN_LAMBDA562: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v648: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA562: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA562),8)
, CAPTAG(useLabel(FN_LAMBDA561),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v669)
,	/* FN_LAMBDA561: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v666: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v656: (byte 4) */
  bytes2word(POP_I1,JUMP,68,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v667: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v660: (byte 2) */
  bytes2word(45,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v668: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v664: (byte 4) */
  bytes2word(POP_I1,JUMP,31,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,9)
,	/* v657: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v653: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v649: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v669: (byte 0) */
  HW(4,9)
, 0
,	/* F0_LAMBDA561: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA561),9)
, CAPTAG(useLabel(FN_LAMBDA560),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v673)
,	/* FN_LAMBDA560: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,8,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v673: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA560: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA560),8)
, CAPTAG(useLabel(FN_LAMBDA559),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v694)
,	/* FN_LAMBDA559: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v691: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v681: (byte 4) */
  bytes2word(POP_I1,JUMP,68,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v692: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v685: (byte 2) */
  bytes2word(45,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v693: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v689: (byte 4) */
  bytes2word(POP_I1,JUMP,31,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,9)
,	/* v682: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v678: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v674: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v694: (byte 0) */
  HW(4,9)
, 0
,	/* F0_LAMBDA559: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA559),9)
, CAPTAG(useLabel(FN_LAMBDA558),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v698)
,	/* FN_LAMBDA558: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v698: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA558: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA558),8)
, CAPTAG(useLabel(FN_LAMBDA557),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v719)
,	/* FN_LAMBDA557: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v716: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v706: (byte 4) */
  bytes2word(POP_I1,JUMP,68,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v717: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v710: (byte 2) */
  bytes2word(45,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v718: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v714: (byte 4) */
  bytes2word(POP_I1,JUMP,31,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,9)
,	/* v707: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v703: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v699: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v719: (byte 0) */
  HW(4,9)
, 0
,	/* F0_LAMBDA557: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA557),9)
, CAPTAG(useLabel(FN_LAMBDA556),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v723)
,	/* FN_LAMBDA556: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG,5)
, bytes2word(HEAP_P1,0,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,8,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v723: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA556: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA556),8)
, CAPTAG(useLabel(FN_LAMBDA555),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v744)
,	/* FN_LAMBDA555: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v741: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v731: (byte 4) */
  bytes2word(POP_I1,JUMP,68,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v742: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v735: (byte 2) */
  bytes2word(45,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v743: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v739: (byte 4) */
  bytes2word(POP_I1,JUMP,31,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,5,HEAP_ARG,9)
,	/* v732: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v728: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v724: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v744: (byte 0) */
  HW(4,9)
, 0
,	/* F0_LAMBDA555: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA555),9)
, CAPTAG(useLabel(FN_LAMBDA554),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v748)
,	/* FN_LAMBDA554: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_P1,0,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v748: (byte 0) */
  HW(3,8)
, 0
,	/* F0_LAMBDA554: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA554),8)
, CAPTAG(useLabel(FN_LAMBDA553),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v769)
,	/* FN_LAMBDA553: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v766: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v756: (byte 4) */
  bytes2word(POP_I1,JUMP,66,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v767: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v760: (byte 2) */
  bytes2word(43,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v768: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v764: (byte 4) */
  bytes2word(POP_I1,JUMP,29,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,9,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,4)
,	/* v757: (byte 3) */
  bytes2word(HEAP_ARG,9,RETURN,POP_P1)
,	/* v753: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v749: (byte 1) */
  bytes2word(0,PUSH_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,7,0)
,	/* CT_v769: (byte 0) */
  HW(0,9)
, 0
,	/* F0_LAMBDA553: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA553),9)
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v770)
,};
Node FN_Prelude_46Read_46Prelude_467_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v770: (byte 0) */
  HW(2,7)
, 0
,};
Node F0_Prelude_46Read_46Prelude_467_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_467_46readList),7)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_467))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v771)
,};
Node FN_Prelude_46Read_46Prelude_467[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v771: (byte 0) */
  HW(2,7)
, 0
,};
Node F0_Prelude_46Read_46Prelude_467[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_467),7)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_467_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_467_46readList))
,};

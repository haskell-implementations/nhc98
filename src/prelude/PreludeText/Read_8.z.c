#include "newmacros.h"
#include "runtime.h"

#define CT_v625	((void*)startLabel+76)
#define FN_LAMBDA620	((void*)startLabel+120)
#define CT_v627	((void*)startLabel+172)
#define F0_LAMBDA620	((void*)startLabel+180)
#define FN_LAMBDA619	((void*)startLabel+224)
#define v646	((void*)startLabel+244)
#define v635	((void*)startLabel+248)
#define v647	((void*)startLabel+262)
#define v639	((void*)startLabel+266)
#define v648	((void*)startLabel+276)
#define v643	((void*)startLabel+280)
#define v636	((void*)startLabel+311)
#define v632	((void*)startLabel+316)
#define v628	((void*)startLabel+321)
#define CT_v649	((void*)startLabel+340)
#define F0_LAMBDA619	((void*)startLabel+348)
#define FN_LAMBDA618	((void*)startLabel+392)
#define CT_v653	((void*)startLabel+444)
#define F0_LAMBDA618	((void*)startLabel+452)
#define FN_LAMBDA617	((void*)startLabel+496)
#define v671	((void*)startLabel+516)
#define v661	((void*)startLabel+520)
#define v672	((void*)startLabel+534)
#define v665	((void*)startLabel+538)
#define v673	((void*)startLabel+548)
#define v669	((void*)startLabel+552)
#define v662	((void*)startLabel+583)
#define v658	((void*)startLabel+588)
#define v654	((void*)startLabel+593)
#define CT_v674	((void*)startLabel+612)
#define F0_LAMBDA617	((void*)startLabel+620)
#define FN_LAMBDA616	((void*)startLabel+664)
#define CT_v678	((void*)startLabel+716)
#define F0_LAMBDA616	((void*)startLabel+724)
#define FN_LAMBDA615	((void*)startLabel+768)
#define v696	((void*)startLabel+788)
#define v686	((void*)startLabel+792)
#define v697	((void*)startLabel+806)
#define v690	((void*)startLabel+810)
#define v698	((void*)startLabel+820)
#define v694	((void*)startLabel+824)
#define v687	((void*)startLabel+855)
#define v683	((void*)startLabel+860)
#define v679	((void*)startLabel+865)
#define CT_v699	((void*)startLabel+884)
#define F0_LAMBDA615	((void*)startLabel+892)
#define FN_LAMBDA614	((void*)startLabel+936)
#define CT_v703	((void*)startLabel+988)
#define F0_LAMBDA614	((void*)startLabel+996)
#define FN_LAMBDA613	((void*)startLabel+1040)
#define v721	((void*)startLabel+1060)
#define v711	((void*)startLabel+1064)
#define v722	((void*)startLabel+1078)
#define v715	((void*)startLabel+1082)
#define v723	((void*)startLabel+1092)
#define v719	((void*)startLabel+1096)
#define v712	((void*)startLabel+1127)
#define v708	((void*)startLabel+1132)
#define v704	((void*)startLabel+1137)
#define CT_v724	((void*)startLabel+1156)
#define F0_LAMBDA613	((void*)startLabel+1164)
#define FN_LAMBDA612	((void*)startLabel+1208)
#define CT_v728	((void*)startLabel+1260)
#define F0_LAMBDA612	((void*)startLabel+1268)
#define FN_LAMBDA611	((void*)startLabel+1312)
#define v746	((void*)startLabel+1332)
#define v736	((void*)startLabel+1336)
#define v747	((void*)startLabel+1350)
#define v740	((void*)startLabel+1354)
#define v748	((void*)startLabel+1364)
#define v744	((void*)startLabel+1368)
#define v737	((void*)startLabel+1399)
#define v733	((void*)startLabel+1404)
#define v729	((void*)startLabel+1409)
#define CT_v749	((void*)startLabel+1428)
#define F0_LAMBDA611	((void*)startLabel+1436)
#define FN_LAMBDA610	((void*)startLabel+1480)
#define CT_v753	((void*)startLabel+1532)
#define F0_LAMBDA610	((void*)startLabel+1540)
#define FN_LAMBDA609	((void*)startLabel+1584)
#define v771	((void*)startLabel+1604)
#define v761	((void*)startLabel+1608)
#define v772	((void*)startLabel+1622)
#define v765	((void*)startLabel+1626)
#define v773	((void*)startLabel+1636)
#define v769	((void*)startLabel+1640)
#define v762	((void*)startLabel+1671)
#define v758	((void*)startLabel+1676)
#define v754	((void*)startLabel+1681)
#define CT_v774	((void*)startLabel+1700)
#define F0_LAMBDA609	((void*)startLabel+1708)
#define FN_LAMBDA608	((void*)startLabel+1752)
#define CT_v778	((void*)startLabel+1804)
#define F0_LAMBDA608	((void*)startLabel+1812)
#define FN_LAMBDA607	((void*)startLabel+1856)
#define v796	((void*)startLabel+1876)
#define v786	((void*)startLabel+1880)
#define v797	((void*)startLabel+1894)
#define v790	((void*)startLabel+1898)
#define v798	((void*)startLabel+1908)
#define v794	((void*)startLabel+1912)
#define v787	((void*)startLabel+1943)
#define v783	((void*)startLabel+1948)
#define v779	((void*)startLabel+1953)
#define CT_v799	((void*)startLabel+1972)
#define F0_LAMBDA607	((void*)startLabel+1980)
#define FN_LAMBDA606	((void*)startLabel+2024)
#define CT_v803	((void*)startLabel+2076)
#define F0_LAMBDA606	((void*)startLabel+2084)
#define FN_LAMBDA605	((void*)startLabel+2128)
#define v821	((void*)startLabel+2148)
#define v811	((void*)startLabel+2152)
#define v822	((void*)startLabel+2166)
#define v815	((void*)startLabel+2170)
#define v823	((void*)startLabel+2180)
#define v819	((void*)startLabel+2184)
#define v812	((void*)startLabel+2215)
#define v808	((void*)startLabel+2220)
#define v804	((void*)startLabel+2225)
#define CT_v824	((void*)startLabel+2244)
#define F0_LAMBDA605	((void*)startLabel+2252)
#define FN_LAMBDA604	((void*)startLabel+2296)
#define CT_v828	((void*)startLabel+2348)
#define F0_LAMBDA604	((void*)startLabel+2356)
#define FN_LAMBDA603	((void*)startLabel+2400)
#define v846	((void*)startLabel+2420)
#define v836	((void*)startLabel+2424)
#define v847	((void*)startLabel+2438)
#define v840	((void*)startLabel+2442)
#define v848	((void*)startLabel+2452)
#define v844	((void*)startLabel+2456)
#define v837	((void*)startLabel+2484)
#define v833	((void*)startLabel+2489)
#define v829	((void*)startLabel+2494)
#define CT_v849	((void*)startLabel+2528)
#define F0_LAMBDA603	((void*)startLabel+2536)
#define CT_v851	((void*)startLabel+2600)
#define CT_v853	((void*)startLabel+2704)
#define ST_v852	((void*)startLabel+2724)
#define ST_v850	((void*)startLabel+2747)
#define ST_v624	((void*)startLabel+2779)
#define ST_v626	((void*)startLabel+2812)
#define ST_v644	((void*)startLabel+2856)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_468[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v625)
,};
Node FN_Prelude_46Read_46Prelude_468_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG,9,NEEDHEAP_I32,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,8,7)
, bytes2word(HEAP_ARG_ARG,6,5,HEAP_ARG_ARG)
, bytes2word(4,3,HEAP_ARG_ARG,2)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,11,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60005
, useLabel(ST_v624)
,	/* CT_v625: (byte 0) */
  HW(2,9)
, 0
,};
Node F0_Prelude_46Read_46Prelude_468_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_468_46readsPrec),9)
, CAPTAG(useLabel(FN_LAMBDA620),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v627)
,	/* FN_LAMBDA620: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(9,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 70030
, useLabel(ST_v626)
,	/* CT_v627: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA620: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA620),9)
, CAPTAG(useLabel(FN_LAMBDA619),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v649)
,	/* FN_LAMBDA619: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v646: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v635: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v647: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v639: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v648: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v643: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
,	/* v636: (byte 3) */
  bytes2word(HEAP_ARG,10,RETURN_EVAL,POP_P1)
,	/* v632: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v628: (byte 1) */
  bytes2word(0,PUSH_ARG,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v649: (byte 0) */
  HW(4,10)
, 0
,	/* F0_LAMBDA619: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA619),10)
, CAPTAG(useLabel(FN_LAMBDA618),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v653)
,	/* FN_LAMBDA618: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v653: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA618: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA618),9)
, CAPTAG(useLabel(FN_LAMBDA617),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v674)
,	/* FN_LAMBDA617: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v671: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v661: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v672: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v665: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v673: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v669: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
,	/* v662: (byte 3) */
  bytes2word(HEAP_ARG,10,RETURN_EVAL,POP_P1)
,	/* v658: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v654: (byte 1) */
  bytes2word(0,PUSH_ARG,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v674: (byte 0) */
  HW(4,10)
, 0
,	/* F0_LAMBDA617: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA617),10)
, CAPTAG(useLabel(FN_LAMBDA616),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v678)
,	/* FN_LAMBDA616: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_ARG_ARG,6)
, bytes2word(7,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v678: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA616: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA616),9)
, CAPTAG(useLabel(FN_LAMBDA615),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v699)
,	/* FN_LAMBDA615: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v696: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v686: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v697: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v690: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v698: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v694: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
,	/* v687: (byte 3) */
  bytes2word(HEAP_ARG,10,RETURN_EVAL,POP_P1)
,	/* v683: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v679: (byte 1) */
  bytes2word(0,PUSH_ARG,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v699: (byte 0) */
  HW(4,10)
, 0
,	/* F0_LAMBDA615: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA615),10)
, CAPTAG(useLabel(FN_LAMBDA614),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v703)
,	/* FN_LAMBDA614: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v703: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA614: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA614),9)
, CAPTAG(useLabel(FN_LAMBDA613),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v724)
,	/* FN_LAMBDA613: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v721: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v711: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v722: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v715: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v723: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v719: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
,	/* v712: (byte 3) */
  bytes2word(HEAP_ARG,10,RETURN_EVAL,POP_P1)
,	/* v708: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v704: (byte 1) */
  bytes2word(0,PUSH_ARG,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v724: (byte 0) */
  HW(4,10)
, 0
,	/* F0_LAMBDA613: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA613),10)
, CAPTAG(useLabel(FN_LAMBDA612),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v728)
,	/* FN_LAMBDA612: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_ARG_ARG,6)
, bytes2word(7,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v728: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA612: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA612),9)
, CAPTAG(useLabel(FN_LAMBDA611),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v749)
,	/* FN_LAMBDA611: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v746: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v736: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v747: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v740: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v748: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v744: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
,	/* v737: (byte 3) */
  bytes2word(HEAP_ARG,10,RETURN_EVAL,POP_P1)
,	/* v733: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v729: (byte 1) */
  bytes2word(0,PUSH_ARG,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v749: (byte 0) */
  HW(4,10)
, 0
,	/* F0_LAMBDA611: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA611),10)
, CAPTAG(useLabel(FN_LAMBDA610),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v753)
,	/* FN_LAMBDA610: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v753: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA610: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA610),9)
, CAPTAG(useLabel(FN_LAMBDA609),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v774)
,	/* FN_LAMBDA609: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v771: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v761: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v772: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v765: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v773: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v769: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
,	/* v762: (byte 3) */
  bytes2word(HEAP_ARG,10,RETURN_EVAL,POP_P1)
,	/* v758: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v754: (byte 1) */
  bytes2word(0,PUSH_ARG,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v774: (byte 0) */
  HW(4,10)
, 0
,	/* F0_LAMBDA609: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA609),10)
, CAPTAG(useLabel(FN_LAMBDA608),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v778)
,	/* FN_LAMBDA608: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG,5)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,6)
, bytes2word(7,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v778: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA608: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA608),9)
, CAPTAG(useLabel(FN_LAMBDA607),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v799)
,	/* FN_LAMBDA607: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v796: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v786: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v797: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v790: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v798: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v794: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
,	/* v787: (byte 3) */
  bytes2word(HEAP_ARG,10,RETURN_EVAL,POP_P1)
,	/* v783: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v779: (byte 1) */
  bytes2word(0,PUSH_ARG,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v799: (byte 0) */
  HW(4,10)
, 0
,	/* F0_LAMBDA607: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA607),10)
, CAPTAG(useLabel(FN_LAMBDA606),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v803)
,	/* FN_LAMBDA606: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_P1,0,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v803: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA606: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA606),9)
, CAPTAG(useLabel(FN_LAMBDA605),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v824)
,	/* FN_LAMBDA605: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v821: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v811: (byte 4) */
  bytes2word(POP_I1,JUMP,70,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v822: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v815: (byte 2) */
  bytes2word(47,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v823: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v819: (byte 4) */
  bytes2word(POP_I1,JUMP,33,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
,	/* v812: (byte 3) */
  bytes2word(HEAP_ARG,10,RETURN_EVAL,POP_P1)
,	/* v808: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v804: (byte 1) */
  bytes2word(0,PUSH_ARG,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v824: (byte 0) */
  HW(4,10)
, 0
,	/* F0_LAMBDA605: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA605),10)
, CAPTAG(useLabel(FN_LAMBDA604),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v828)
,	/* FN_LAMBDA604: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG,7,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v828: (byte 0) */
  HW(3,9)
, 0
,	/* F0_LAMBDA604: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA604),9)
, CAPTAG(useLabel(FN_LAMBDA603),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,10,0)
, bytes2word(9,1,8,2)
, bytes2word(7,3,6,4)
, bytes2word(5,5,4,6)
, bytes2word(3,7,2,8)
, bytes2word(1,9,0,10)
, useLabel(CT_v849)
,	/* FN_LAMBDA603: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,9,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v846: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v836: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v847: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v840: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v848: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v844: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,10,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,5,HEAP_OFF_N1)
,	/* v837: (byte 4) */
  bytes2word(4,HEAP_ARG,10,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v833: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v829: (byte 2) */
  bytes2word(2,0,PUSH_ARG,10)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,8,0)
, 70037
, useLabel(ST_v644)
,	/* CT_v849: (byte 0) */
  HW(0,10)
, 0
,	/* F0_LAMBDA603: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA603),10)
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v851)
,};
Node FN_Prelude_46Read_46Prelude_468_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v850)
,	/* CT_v851: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Read_46Prelude_468_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_468_46readList),8)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_468))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v853)
,};
Node FN_Prelude_46Read_46Prelude_468[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50010
, useLabel(ST_v852)
,	/* CT_v853: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Read_46Prelude_468[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_468),8)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_468_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_468_46readList))
,	/* ST_v852: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v850: (byte 3) */
  bytes2word(46,56,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(56,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v624: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(56,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v626: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,56,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,55,58,51)
, bytes2word(48,45,50,52)
,	/* ST_v644: (byte 4) */
  bytes2word(58,54,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,56,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,55,58,51)
, bytes2word(55,45,50,52)
, bytes2word(58,54,48,0)
,};

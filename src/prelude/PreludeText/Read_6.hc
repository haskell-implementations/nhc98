#include "newmacros.h"
#include "runtime.h"

#define CT_v520	((void*)startLabel+56)
#define FN_LAMBDA516	((void*)startLabel+96)
#define CT_v521	((void*)startLabel+136)
#define F0_LAMBDA516	((void*)startLabel+144)
#define FN_LAMBDA515	((void*)startLabel+184)
#define v539	((void*)startLabel+200)
#define v529	((void*)startLabel+204)
#define v540	((void*)startLabel+218)
#define v533	((void*)startLabel+222)
#define v541	((void*)startLabel+232)
#define v537	((void*)startLabel+236)
#define v530	((void*)startLabel+264)
#define v526	((void*)startLabel+269)
#define v522	((void*)startLabel+274)
#define CT_v542	((void*)startLabel+284)
#define F0_LAMBDA515	((void*)startLabel+292)
#define FN_LAMBDA514	((void*)startLabel+332)
#define CT_v546	((void*)startLabel+368)
#define F0_LAMBDA514	((void*)startLabel+376)
#define FN_LAMBDA513	((void*)startLabel+416)
#define v564	((void*)startLabel+432)
#define v554	((void*)startLabel+436)
#define v565	((void*)startLabel+450)
#define v558	((void*)startLabel+454)
#define v566	((void*)startLabel+464)
#define v562	((void*)startLabel+468)
#define v555	((void*)startLabel+496)
#define v551	((void*)startLabel+501)
#define v547	((void*)startLabel+506)
#define CT_v567	((void*)startLabel+516)
#define F0_LAMBDA513	((void*)startLabel+524)
#define FN_LAMBDA512	((void*)startLabel+564)
#define CT_v571	((void*)startLabel+600)
#define F0_LAMBDA512	((void*)startLabel+608)
#define FN_LAMBDA511	((void*)startLabel+648)
#define v589	((void*)startLabel+664)
#define v579	((void*)startLabel+668)
#define v590	((void*)startLabel+682)
#define v583	((void*)startLabel+686)
#define v591	((void*)startLabel+696)
#define v587	((void*)startLabel+700)
#define v580	((void*)startLabel+728)
#define v576	((void*)startLabel+733)
#define v572	((void*)startLabel+738)
#define CT_v592	((void*)startLabel+748)
#define F0_LAMBDA511	((void*)startLabel+756)
#define FN_LAMBDA510	((void*)startLabel+796)
#define CT_v596	((void*)startLabel+832)
#define F0_LAMBDA510	((void*)startLabel+840)
#define FN_LAMBDA509	((void*)startLabel+880)
#define v614	((void*)startLabel+896)
#define v604	((void*)startLabel+900)
#define v615	((void*)startLabel+914)
#define v608	((void*)startLabel+918)
#define v616	((void*)startLabel+928)
#define v612	((void*)startLabel+932)
#define v605	((void*)startLabel+960)
#define v601	((void*)startLabel+965)
#define v597	((void*)startLabel+970)
#define CT_v617	((void*)startLabel+980)
#define F0_LAMBDA509	((void*)startLabel+988)
#define FN_LAMBDA508	((void*)startLabel+1028)
#define CT_v621	((void*)startLabel+1064)
#define F0_LAMBDA508	((void*)startLabel+1072)
#define FN_LAMBDA507	((void*)startLabel+1112)
#define v639	((void*)startLabel+1128)
#define v629	((void*)startLabel+1132)
#define v640	((void*)startLabel+1146)
#define v633	((void*)startLabel+1150)
#define v641	((void*)startLabel+1160)
#define v637	((void*)startLabel+1164)
#define v630	((void*)startLabel+1192)
#define v626	((void*)startLabel+1197)
#define v622	((void*)startLabel+1202)
#define CT_v642	((void*)startLabel+1212)
#define F0_LAMBDA507	((void*)startLabel+1220)
#define FN_LAMBDA506	((void*)startLabel+1260)
#define CT_v646	((void*)startLabel+1296)
#define F0_LAMBDA506	((void*)startLabel+1304)
#define FN_LAMBDA505	((void*)startLabel+1344)
#define v664	((void*)startLabel+1360)
#define v654	((void*)startLabel+1364)
#define v665	((void*)startLabel+1378)
#define v658	((void*)startLabel+1382)
#define v666	((void*)startLabel+1392)
#define v662	((void*)startLabel+1396)
#define v655	((void*)startLabel+1424)
#define v651	((void*)startLabel+1429)
#define v647	((void*)startLabel+1434)
#define CT_v667	((void*)startLabel+1444)
#define F0_LAMBDA505	((void*)startLabel+1452)
#define FN_LAMBDA504	((void*)startLabel+1492)
#define CT_v671	((void*)startLabel+1528)
#define F0_LAMBDA504	((void*)startLabel+1536)
#define FN_LAMBDA503	((void*)startLabel+1576)
#define v689	((void*)startLabel+1592)
#define v679	((void*)startLabel+1596)
#define v690	((void*)startLabel+1610)
#define v683	((void*)startLabel+1614)
#define v691	((void*)startLabel+1624)
#define v687	((void*)startLabel+1628)
#define v680	((void*)startLabel+1653)
#define v676	((void*)startLabel+1658)
#define v672	((void*)startLabel+1663)
#define CT_v692	((void*)startLabel+1688)
#define F0_LAMBDA503	((void*)startLabel+1696)
#define CT_v693	((void*)startLabel+1744)
#define CT_v694	((void*)startLabel+1828)
extern Node FN_Prelude_46readParen[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46reads[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Read_46Prelude_466[];
extern Node FN_Prelude_46_95_46readList[];

static Node startLabel[] = {
  bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v520)
,};
Node FN_Prelude_46Read_46Prelude_466_46readsPrec[] = {
  bytes2word(ZAP_ARG,7,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG_ARG,6)
, bytes2word(5,HEAP_ARG_ARG,4,3)
, bytes2word(HEAP_ARG_ARG,2,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v520: (byte 0) */
  HW(2,7)
, 0
,};
Node F0_Prelude_46Read_46Prelude_466_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466_46readsPrec),7)
, CAPTAG(useLabel(FN_LAMBDA516),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v521)
,	/* FN_LAMBDA516: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v521: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA516: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA516),7)
, CAPTAG(useLabel(FN_LAMBDA515),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v542)
,	/* FN_LAMBDA515: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v539: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v529: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v540: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v533: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v541: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v537: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v530: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v526: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v522: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v542: (byte 0) */
  HW(4,8)
, 0
,	/* F0_LAMBDA515: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA515),8)
, CAPTAG(useLabel(FN_LAMBDA514),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v546)
,	/* FN_LAMBDA514: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v546: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA514: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA514),7)
, CAPTAG(useLabel(FN_LAMBDA513),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v567)
,	/* FN_LAMBDA513: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v564: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v554: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v565: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v558: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v566: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v562: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v555: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v551: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v547: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v567: (byte 0) */
  HW(4,8)
, 0
,	/* F0_LAMBDA513: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA513),8)
, CAPTAG(useLabel(FN_LAMBDA512),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v571)
,	/* FN_LAMBDA512: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v571: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA512: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA512),7)
, CAPTAG(useLabel(FN_LAMBDA511),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v592)
,	/* FN_LAMBDA511: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v589: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v579: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v590: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v583: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v591: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v587: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v580: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v576: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v572: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v592: (byte 0) */
  HW(4,8)
, 0
,	/* F0_LAMBDA511: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA511),8)
, CAPTAG(useLabel(FN_LAMBDA510),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v596)
,	/* FN_LAMBDA510: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v596: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA510: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA510),7)
, CAPTAG(useLabel(FN_LAMBDA509),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v617)
,	/* FN_LAMBDA509: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v614: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v604: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v615: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v608: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v616: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v612: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v605: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v601: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v597: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v617: (byte 0) */
  HW(4,8)
, 0
,	/* F0_LAMBDA509: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA509),8)
, CAPTAG(useLabel(FN_LAMBDA508),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v621)
,	/* FN_LAMBDA508: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v621: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA508: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA508),7)
, CAPTAG(useLabel(FN_LAMBDA507),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v642)
,	/* FN_LAMBDA507: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v639: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v629: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v640: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v633: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v641: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v637: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v630: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v626: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v622: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v642: (byte 0) */
  HW(4,8)
, 0
,	/* F0_LAMBDA507: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA507),8)
, CAPTAG(useLabel(FN_LAMBDA506),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v646)
,	/* FN_LAMBDA506: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_P1,0)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v646: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA506: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA506),7)
, CAPTAG(useLabel(FN_LAMBDA505),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v667)
,	/* FN_LAMBDA505: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v664: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v654: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v665: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v658: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v666: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v662: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v655: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v651: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v647: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v667: (byte 0) */
  HW(4,8)
, 0
,	/* F0_LAMBDA505: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA505),8)
, CAPTAG(useLabel(FN_LAMBDA504),2)
, VAPTAG(useLabel(FN_Prelude_46reads))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v671)
,	/* FN_LAMBDA504: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG,5)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v671: (byte 0) */
  HW(3,7)
, 0
,	/* F0_LAMBDA504: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA504),7)
, CAPTAG(useLabel(FN_LAMBDA503),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v692)
,	/* FN_LAMBDA503: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v689: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v679: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v690: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v683: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v691: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v687: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,8)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,8)
,	/* v680: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v676: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v672: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,6,0)
,	/* CT_v692: (byte 0) */
  HW(0,8)
, 0
,	/* F0_LAMBDA503: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA503),8)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v693)
,};
Node FN_Prelude_46Read_46Prelude_466_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v693: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Read_46Prelude_466_46readList[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466_46readList),6)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v694)
,};
Node FN_Prelude_46Read_46Prelude_466[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v694: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Read_46Prelude_466[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466),6)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466_46readList))
,};

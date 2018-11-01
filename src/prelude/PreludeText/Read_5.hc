#include "newmacros.h"
#include "runtime.h"

#define CT_v468	((void*)startLabel+56)
#define FN_LAMBDA464	((void*)startLabel+96)
#define CT_v469	((void*)startLabel+136)
#define F0_LAMBDA464	((void*)startLabel+144)
#define FN_LAMBDA463	((void*)startLabel+180)
#define v487	((void*)startLabel+196)
#define v477	((void*)startLabel+200)
#define v488	((void*)startLabel+214)
#define v481	((void*)startLabel+218)
#define v489	((void*)startLabel+228)
#define v485	((void*)startLabel+232)
#define v478	((void*)startLabel+258)
#define v474	((void*)startLabel+263)
#define v470	((void*)startLabel+268)
#define CT_v490	((void*)startLabel+276)
#define F0_LAMBDA463	((void*)startLabel+284)
#define FN_LAMBDA462	((void*)startLabel+324)
#define CT_v494	((void*)startLabel+356)
#define F0_LAMBDA462	((void*)startLabel+364)
#define FN_LAMBDA461	((void*)startLabel+400)
#define v512	((void*)startLabel+416)
#define v502	((void*)startLabel+420)
#define v513	((void*)startLabel+434)
#define v506	((void*)startLabel+438)
#define v514	((void*)startLabel+448)
#define v510	((void*)startLabel+452)
#define v503	((void*)startLabel+478)
#define v499	((void*)startLabel+483)
#define v495	((void*)startLabel+488)
#define CT_v515	((void*)startLabel+496)
#define F0_LAMBDA461	((void*)startLabel+504)
#define FN_LAMBDA460	((void*)startLabel+544)
#define CT_v519	((void*)startLabel+580)
#define F0_LAMBDA460	((void*)startLabel+588)
#define FN_LAMBDA459	((void*)startLabel+624)
#define v537	((void*)startLabel+640)
#define v527	((void*)startLabel+644)
#define v538	((void*)startLabel+658)
#define v531	((void*)startLabel+662)
#define v539	((void*)startLabel+672)
#define v535	((void*)startLabel+676)
#define v528	((void*)startLabel+702)
#define v524	((void*)startLabel+707)
#define v520	((void*)startLabel+712)
#define CT_v540	((void*)startLabel+720)
#define F0_LAMBDA459	((void*)startLabel+728)
#define FN_LAMBDA458	((void*)startLabel+768)
#define CT_v544	((void*)startLabel+800)
#define F0_LAMBDA458	((void*)startLabel+808)
#define FN_LAMBDA457	((void*)startLabel+844)
#define v562	((void*)startLabel+860)
#define v552	((void*)startLabel+864)
#define v563	((void*)startLabel+878)
#define v556	((void*)startLabel+882)
#define v564	((void*)startLabel+892)
#define v560	((void*)startLabel+896)
#define v553	((void*)startLabel+922)
#define v549	((void*)startLabel+927)
#define v545	((void*)startLabel+932)
#define CT_v565	((void*)startLabel+940)
#define F0_LAMBDA457	((void*)startLabel+948)
#define FN_LAMBDA456	((void*)startLabel+988)
#define CT_v569	((void*)startLabel+1024)
#define F0_LAMBDA456	((void*)startLabel+1032)
#define FN_LAMBDA455	((void*)startLabel+1068)
#define v587	((void*)startLabel+1084)
#define v577	((void*)startLabel+1088)
#define v588	((void*)startLabel+1102)
#define v581	((void*)startLabel+1106)
#define v589	((void*)startLabel+1116)
#define v585	((void*)startLabel+1120)
#define v578	((void*)startLabel+1146)
#define v574	((void*)startLabel+1151)
#define v570	((void*)startLabel+1156)
#define CT_v590	((void*)startLabel+1164)
#define F0_LAMBDA455	((void*)startLabel+1172)
#define FN_LAMBDA454	((void*)startLabel+1212)
#define CT_v594	((void*)startLabel+1244)
#define F0_LAMBDA454	((void*)startLabel+1252)
#define FN_LAMBDA453	((void*)startLabel+1288)
#define v612	((void*)startLabel+1304)
#define v602	((void*)startLabel+1308)
#define v613	((void*)startLabel+1322)
#define v606	((void*)startLabel+1326)
#define v614	((void*)startLabel+1336)
#define v610	((void*)startLabel+1340)
#define v603	((void*)startLabel+1364)
#define v599	((void*)startLabel+1369)
#define v595	((void*)startLabel+1374)
#define CT_v615	((void*)startLabel+1400)
#define F0_LAMBDA453	((void*)startLabel+1408)
#define CT_v616	((void*)startLabel+1448)
#define CT_v617	((void*)startLabel+1524)
extern Node FN_Prelude_46readParen[];
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
, useLabel(CT_v468)
,};
Node FN_Prelude_46Read_46Prelude_465_46readsPrec[] = {
  bytes2word(ZAP_ARG,6,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG_ARG,5)
, bytes2word(4,HEAP_ARG_ARG,3,2)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v468: (byte 0) */
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
, useLabel(CT_v469)
,	/* FN_LAMBDA464: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v469: (byte 0) */
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
, useLabel(CT_v490)
,	/* FN_LAMBDA463: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v487: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v477: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v488: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v481: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v489: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v485: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v478: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v474: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v470: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v490: (byte 0) */
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
, useLabel(CT_v494)
,	/* FN_LAMBDA462: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v494: (byte 0) */
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
, useLabel(CT_v515)
,	/* FN_LAMBDA461: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v512: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v502: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v513: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v506: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v514: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v510: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v503: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v499: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v495: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v515: (byte 0) */
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
, useLabel(CT_v519)
,	/* FN_LAMBDA460: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v519: (byte 0) */
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
, useLabel(CT_v540)
,	/* FN_LAMBDA459: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v537: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v527: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v538: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v531: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v539: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v535: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v528: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v524: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v520: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v540: (byte 0) */
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
, useLabel(CT_v544)
,	/* FN_LAMBDA458: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v544: (byte 0) */
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
, useLabel(CT_v565)
,	/* FN_LAMBDA457: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v562: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v552: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v563: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v556: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v564: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v560: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v553: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v549: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v545: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v565: (byte 0) */
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
, useLabel(CT_v569)
,	/* FN_LAMBDA456: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v569: (byte 0) */
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
, useLabel(CT_v590)
,	/* FN_LAMBDA455: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v587: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v577: (byte 4) */
  bytes2word(POP_I1,JUMP,65,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v588: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v581: (byte 2) */
  bytes2word(42,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v589: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v585: (byte 4) */
  bytes2word(POP_I1,JUMP,28,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,5,HEAP_ARG)
,	/* v578: (byte 2) */
  bytes2word(7,RETURN_EVAL,POP_P1,2)
,	/* v574: (byte 3) */
  bytes2word(JUMP,2,0,POP_P1)
,	/* v570: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_ARG,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v590: (byte 0) */
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
, useLabel(CT_v594)
,	/* FN_LAMBDA454: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v594: (byte 0) */
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
, useLabel(CT_v615)
,	/* FN_LAMBDA453: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v612: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v602: (byte 4) */
  bytes2word(POP_I1,JUMP,63,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v613: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v606: (byte 2) */
  bytes2word(40,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v614: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v610: (byte 4) */
  bytes2word(POP_I1,JUMP,26,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,5,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,7,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
,	/* v603: (byte 4) */
  bytes2word(4,HEAP_ARG,7,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v599: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v595: (byte 2) */
  bytes2word(2,0,PUSH_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,5,0)
,	/* CT_v615: (byte 0) */
  HW(0,7)
, 0
,	/* F0_LAMBDA453: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA453),7)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v616)
,};
Node FN_Prelude_46Read_46Prelude_465_46readList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v616: (byte 0) */
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
, useLabel(CT_v617)
,};
Node FN_Prelude_46Read_46Prelude_465[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v617: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Read_46Prelude_465[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465),5)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_465_46readList))
,};

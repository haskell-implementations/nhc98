#include "newmacros.h"
#include "runtime.h"

#define CT_v521	((void*)startLabel+68)
#define FN_LAMBDA516	((void*)startLabel+108)
#define CT_v523	((void*)startLabel+160)
#define F0_LAMBDA516	((void*)startLabel+168)
#define FN_LAMBDA515	((void*)startLabel+208)
#define v542	((void*)startLabel+228)
#define v531	((void*)startLabel+232)
#define v543	((void*)startLabel+246)
#define v535	((void*)startLabel+250)
#define v544	((void*)startLabel+260)
#define v539	((void*)startLabel+264)
#define v532	((void*)startLabel+292)
#define v528	((void*)startLabel+297)
#define v524	((void*)startLabel+302)
#define CT_v545	((void*)startLabel+320)
#define F0_LAMBDA515	((void*)startLabel+328)
#define FN_LAMBDA514	((void*)startLabel+368)
#define CT_v549	((void*)startLabel+416)
#define F0_LAMBDA514	((void*)startLabel+424)
#define FN_LAMBDA513	((void*)startLabel+464)
#define v567	((void*)startLabel+484)
#define v557	((void*)startLabel+488)
#define v568	((void*)startLabel+502)
#define v561	((void*)startLabel+506)
#define v569	((void*)startLabel+516)
#define v565	((void*)startLabel+520)
#define v558	((void*)startLabel+548)
#define v554	((void*)startLabel+553)
#define v550	((void*)startLabel+558)
#define CT_v570	((void*)startLabel+576)
#define F0_LAMBDA513	((void*)startLabel+584)
#define FN_LAMBDA512	((void*)startLabel+624)
#define CT_v574	((void*)startLabel+672)
#define F0_LAMBDA512	((void*)startLabel+680)
#define FN_LAMBDA511	((void*)startLabel+720)
#define v592	((void*)startLabel+740)
#define v582	((void*)startLabel+744)
#define v593	((void*)startLabel+758)
#define v586	((void*)startLabel+762)
#define v594	((void*)startLabel+772)
#define v590	((void*)startLabel+776)
#define v583	((void*)startLabel+804)
#define v579	((void*)startLabel+809)
#define v575	((void*)startLabel+814)
#define CT_v595	((void*)startLabel+832)
#define F0_LAMBDA511	((void*)startLabel+840)
#define FN_LAMBDA510	((void*)startLabel+880)
#define CT_v599	((void*)startLabel+928)
#define F0_LAMBDA510	((void*)startLabel+936)
#define FN_LAMBDA509	((void*)startLabel+976)
#define v617	((void*)startLabel+996)
#define v607	((void*)startLabel+1000)
#define v618	((void*)startLabel+1014)
#define v611	((void*)startLabel+1018)
#define v619	((void*)startLabel+1028)
#define v615	((void*)startLabel+1032)
#define v608	((void*)startLabel+1060)
#define v604	((void*)startLabel+1065)
#define v600	((void*)startLabel+1070)
#define CT_v620	((void*)startLabel+1088)
#define F0_LAMBDA509	((void*)startLabel+1096)
#define FN_LAMBDA508	((void*)startLabel+1136)
#define CT_v624	((void*)startLabel+1184)
#define F0_LAMBDA508	((void*)startLabel+1192)
#define FN_LAMBDA507	((void*)startLabel+1232)
#define v642	((void*)startLabel+1252)
#define v632	((void*)startLabel+1256)
#define v643	((void*)startLabel+1270)
#define v636	((void*)startLabel+1274)
#define v644	((void*)startLabel+1284)
#define v640	((void*)startLabel+1288)
#define v633	((void*)startLabel+1316)
#define v629	((void*)startLabel+1321)
#define v625	((void*)startLabel+1326)
#define CT_v645	((void*)startLabel+1344)
#define F0_LAMBDA507	((void*)startLabel+1352)
#define FN_LAMBDA506	((void*)startLabel+1392)
#define CT_v649	((void*)startLabel+1440)
#define F0_LAMBDA506	((void*)startLabel+1448)
#define FN_LAMBDA505	((void*)startLabel+1488)
#define v667	((void*)startLabel+1508)
#define v657	((void*)startLabel+1512)
#define v668	((void*)startLabel+1526)
#define v661	((void*)startLabel+1530)
#define v669	((void*)startLabel+1540)
#define v665	((void*)startLabel+1544)
#define v658	((void*)startLabel+1572)
#define v654	((void*)startLabel+1577)
#define v650	((void*)startLabel+1582)
#define CT_v670	((void*)startLabel+1600)
#define F0_LAMBDA505	((void*)startLabel+1608)
#define FN_LAMBDA504	((void*)startLabel+1648)
#define CT_v674	((void*)startLabel+1696)
#define F0_LAMBDA504	((void*)startLabel+1704)
#define FN_LAMBDA503	((void*)startLabel+1744)
#define v692	((void*)startLabel+1764)
#define v682	((void*)startLabel+1768)
#define v693	((void*)startLabel+1782)
#define v686	((void*)startLabel+1786)
#define v694	((void*)startLabel+1796)
#define v690	((void*)startLabel+1800)
#define v683	((void*)startLabel+1825)
#define v679	((void*)startLabel+1830)
#define v675	((void*)startLabel+1835)
#define CT_v695	((void*)startLabel+1868)
#define F0_LAMBDA503	((void*)startLabel+1876)
#define CT_v697	((void*)startLabel+1936)
#define CT_v699	((void*)startLabel+2032)
#define ST_v698	((void*)startLabel+2052)
#define ST_v696	((void*)startLabel+2075)
#define ST_v520	((void*)startLabel+2107)
#define ST_v522	((void*)startLabel+2140)
#define ST_v540	((void*)startLabel+2184)
extern Node TM_Prelude[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
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
, useLabel(CT_v521)
,};
Node FN_Prelude_46Read_46Prelude_466_46readsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG,7,NEEDHEAP_I32,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,6,5)
, bytes2word(HEAP_ARG_ARG,4,3,HEAP_ARG_ARG)
, bytes2word(2,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,9)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 50005
, useLabel(ST_v520)
,	/* CT_v521: (byte 0) */
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
, useLabel(CT_v523)
,	/* FN_LAMBDA516: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_IN3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60030
, useLabel(ST_v522)
,	/* CT_v523: (byte 0) */
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
, useLabel(CT_v545)
,	/* FN_LAMBDA515: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v542: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v531: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(40),BOT(40),TOP(10),BOT(10))
,	/* v543: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v535: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v544: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v539: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v532: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v528: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v524: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v545: (byte 0) */
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
, useLabel(CT_v549)
,	/* FN_LAMBDA514: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_P1,0,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v549: (byte 0) */
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
, useLabel(CT_v570)
,	/* FN_LAMBDA513: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v567: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v557: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v568: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v561: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v569: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v565: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v558: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v554: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v550: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v570: (byte 0) */
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
, useLabel(CT_v574)
,	/* FN_LAMBDA512: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v574: (byte 0) */
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
, useLabel(CT_v595)
,	/* FN_LAMBDA511: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v592: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v582: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v593: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v586: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v594: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v590: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v583: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v579: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v575: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v595: (byte 0) */
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
, useLabel(CT_v599)
,	/* FN_LAMBDA510: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_P1)
, bytes2word(0,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v599: (byte 0) */
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
, useLabel(CT_v620)
,	/* FN_LAMBDA509: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v617: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v607: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v618: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v611: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v619: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v615: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v608: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v604: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v600: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v620: (byte 0) */
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
, useLabel(CT_v624)
,	/* FN_LAMBDA508: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,HEAP_P1,0,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v624: (byte 0) */
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
, useLabel(CT_v645)
,	/* FN_LAMBDA507: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v642: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v632: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v643: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v636: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v644: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v640: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v633: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v629: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v625: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v645: (byte 0) */
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
, useLabel(CT_v649)
,	/* FN_LAMBDA506: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_P1,0)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v649: (byte 0) */
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
, useLabel(CT_v670)
,	/* FN_LAMBDA505: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v667: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v657: (byte 4) */
  bytes2word(POP_I1,JUMP,67,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(44),BOT(44),TOP(10),BOT(10))
,	/* v668: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v661: (byte 2) */
  bytes2word(44,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v669: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v665: (byte 4) */
  bytes2word(POP_I1,JUMP,30,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,12,HEAP_OFF_N1)
,	/* v658: (byte 4) */
  bytes2word(5,HEAP_ARG,8,RETURN_EVAL)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v654: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v650: (byte 2) */
  bytes2word(2,0,PUSH_ARG,8)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v670: (byte 0) */
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
, useLabel(CT_v674)
,	/* FN_LAMBDA504: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG,5)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v674: (byte 0) */
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
, useLabel(CT_v695)
,	/* FN_LAMBDA503: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,TABLESWITCH,2,NOP)
,	/* v692: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v682: (byte 4) */
  bytes2word(POP_I1,JUMP,64,0)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(EVAL,LOOKUPSWITCH,1,NOP)
, bytes2word(TOP(41),BOT(41),TOP(10),BOT(10))
,	/* v693: (byte 2) */
  bytes2word(TOP(6),BOT(6),POP_I1,JUMP)
,	/* v686: (byte 2) */
  bytes2word(41,0,POP_I1,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v694: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v690: (byte 4) */
  bytes2word(POP_I1,JUMP,27,0)
, bytes2word(POP_I1,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_CVAL_N1)
, bytes2word(4,HEAP_OFF_N1,8,HEAP_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,8)
,	/* v683: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v679: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v675: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_ARG)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTR(0,6,0)
, 60037
, useLabel(ST_v540)
,	/* CT_v695: (byte 0) */
  HW(0,8)
, 0
,	/* F0_LAMBDA503: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA503),8)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v697)
,};
Node FN_Prelude_46Read_46Prelude_466_46readList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40010
, useLabel(ST_v696)
,	/* CT_v697: (byte 0) */
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
, useLabel(CT_v699)
,};
Node FN_Prelude_46Read_46Prelude_466[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 40010
, useLabel(ST_v698)
,	/* CT_v699: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Read_46Prelude_466[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466),6)
, CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466_46readsPrec),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_466_46readList))
,	/* ST_v698: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v696: (byte 3) */
  bytes2word(46,54,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(54,46,114,101)
, bytes2word(97,100,76,105)
,	/* ST_v520: (byte 3) */
  bytes2word(115,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,82)
, bytes2word(101,97,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(54,46,114,101)
, bytes2word(97,100,115,80)
,	/* ST_v522: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,54,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,54,58,51)
, bytes2word(48,45,49,57)
,	/* ST_v540: (byte 4) */
  bytes2word(58,54,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,54,46,114)
, bytes2word(101,97,100,115)
, bytes2word(80,114,101,99)
, bytes2word(58,54,58,51)
, bytes2word(55,45,49,57)
, bytes2word(58,54,48,0)
,};

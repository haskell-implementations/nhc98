#include "newmacros.h"
#include "runtime.h"

#define CT_v1920	((void*)startLabel+136)
#define CT_v1921	((void*)startLabel+284)
#define v1927	((void*)startLabel+378)
#define v1928	((void*)startLabel+383)
#define v1930	((void*)startLabel+410)
#define v1931	((void*)startLabel+415)
#define v1933	((void*)startLabel+444)
#define v1934	((void*)startLabel+449)
#define v1936	((void*)startLabel+478)
#define v1937	((void*)startLabel+483)
#define v1939	((void*)startLabel+512)
#define v1940	((void*)startLabel+517)
#define v1942	((void*)startLabel+546)
#define v1943	((void*)startLabel+551)
#define v1945	((void*)startLabel+580)
#define v1946	((void*)startLabel+585)
#define v1948	((void*)startLabel+614)
#define v1949	((void*)startLabel+619)
#define v1951	((void*)startLabel+648)
#define v1952	((void*)startLabel+653)
#define v1954	((void*)startLabel+682)
#define v1955	((void*)startLabel+687)
#define v1957	((void*)startLabel+716)
#define v1958	((void*)startLabel+721)
#define v1960	((void*)startLabel+750)
#define v1961	((void*)startLabel+755)
#define v1963	((void*)startLabel+784)
#define v1964	((void*)startLabel+789)
#define v1966	((void*)startLabel+818)
#define v1967	((void*)startLabel+823)
#define v1968	((void*)startLabel+843)
#define v1969	((void*)startLabel+848)
#define v1970	((void*)startLabel+853)
#define v1971	((void*)startLabel+858)
#define v1972	((void*)startLabel+863)
#define v1973	((void*)startLabel+868)
#define v1974	((void*)startLabel+873)
#define v1975	((void*)startLabel+878)
#define v1976	((void*)startLabel+883)
#define v1977	((void*)startLabel+888)
#define v1978	((void*)startLabel+893)
#define v1979	((void*)startLabel+898)
#define v1980	((void*)startLabel+903)
#define v1981	((void*)startLabel+908)
#define CT_v1998	((void*)startLabel+928)
#define CT_v2005	((void*)startLabel+1520)
#define CT_v2006	((void*)startLabel+1640)
#define CT_v2007	((void*)startLabel+1740)
#define CT_v2008	((void*)startLabel+1840)
#define CT_v2009	((void*)startLabel+1940)
#define CT_v2010	((void*)startLabel+2040)
#define CT_v2017	((void*)startLabel+2340)
#define CT_v2018	((void*)startLabel+2444)
#define CT_v2019	((void*)startLabel+2572)
#define CT_v2020	((void*)startLabel+2920)
#define CT_v2021	((void*)startLabel+3076)
extern Node FN_Prelude_46maxBound[];
extern Node FN_Prelude_46minBound[];
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46_60[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_124_124[];
extern Node FN_Prelude_46Ord_46Prelude_4615[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46Eq_46Prelude_4615[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  42
, bytes2word(15,0,14,1)
, bytes2word(13,2,12,3)
, bytes2word(11,4,10,5)
, bytes2word(9,6,8,7)
, bytes2word(7,8,6,9)
, bytes2word(5,10,4,11)
, bytes2word(3,12,2,13)
, bytes2word(1,14,0,15)
, useLabel(CT_v1920)
,};
Node FN_Prelude_46Bounded_46Prelude_4615_46maxBound[] = {
  bytes2word(NEEDHEAP_P1,47,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_I3,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,7,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(9,HEAP_CVAL_I3,HEAP_ARG,10)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,11,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,12,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(13,HEAP_CVAL_I3,HEAP_ARG,14)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,31)
, bytes2word(HEAP_OFF_N1,30,HEAP_OFF_N1,29)
, bytes2word(HEAP_OFF_N1,28,HEAP_OFF_N1,27)
, bytes2word(HEAP_OFF_N1,26,HEAP_OFF_N1,25)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,23)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,21)
, bytes2word(HEAP_OFF_N1,20,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,17)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,15,0)
,	/* CT_v1920: (byte 0) */
  HW(1,15)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4615_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615_46maxBound),15)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(15,0,14,1)
, bytes2word(13,2,12,3)
, bytes2word(11,4,10,5)
, bytes2word(9,6,8,7)
, bytes2word(7,8,6,9)
, bytes2word(5,10,4,11)
, bytes2word(3,12,2,13)
, bytes2word(1,14,0,15)
, useLabel(CT_v1921)
,};
Node FN_Prelude_46Bounded_46Prelude_4615_46minBound[] = {
  bytes2word(NEEDHEAP_P1,47,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_I3,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,7,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(9,HEAP_CVAL_I3,HEAP_ARG,10)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,11,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,12,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(13,HEAP_CVAL_I3,HEAP_ARG,14)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,31)
, bytes2word(HEAP_OFF_N1,30,HEAP_OFF_N1,29)
, bytes2word(HEAP_OFF_N1,28,HEAP_OFF_N1,27)
, bytes2word(HEAP_OFF_N1,26,HEAP_OFF_N1,25)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,23)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,21)
, bytes2word(HEAP_OFF_N1,20,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,17)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,15,0)
,	/* CT_v1921: (byte 0) */
  HW(1,15)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4615_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615_46minBound),15)
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v1998)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46compare[] = {
  bytes2word(NEEDSTACK_P1,33,PUSH_ZAP_ARG,16)
, bytes2word(EVAL,UNPACK,15,PUSH_ZAP_ARG)
, bytes2word(17,EVAL,NEEDHEAP_I32,UNPACK)
, bytes2word(15,PUSH_P1,0,PUSH_P1)
, bytes2word(16,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_STACK_P1,18)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1927: (byte 2) */
  bytes2word(TOP(536),BOT(536),POP_I1,PUSH_HEAP)
,	/* v1928: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_I1,PUSH_P1,17,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,19,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1930: (byte 2) */
  bytes2word(TOP(499),BOT(499),POP_I1,PUSH_HEAP)
,	/* v1931: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,2,PUSH_P1,18)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,20,ZAP_STACK_P1)
, bytes2word(5,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1933: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(460),BOT(460))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1934: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,3)
, bytes2word(PUSH_P1,19,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,21,ZAP_STACK_P1,6)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1936: (byte 2) */
  bytes2word(TOP(421),BOT(421),POP_I1,PUSH_HEAP)
,	/* v1937: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,4,PUSH_P1,20)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(ZAP_ARG,5,ZAP_STACK_P1,22)
, bytes2word(ZAP_STACK_P1,7,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1939: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(382),BOT(382))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1940: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,5)
, bytes2word(PUSH_P1,21,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,6,ZAP_ARG,6)
, bytes2word(ZAP_STACK_P1,23,ZAP_STACK_P1,8)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1942: (byte 2) */
  bytes2word(TOP(343),BOT(343),POP_I1,PUSH_HEAP)
,	/* v1943: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,6,PUSH_P1,22)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,7)
, bytes2word(ZAP_ARG,7,ZAP_STACK_P1,24)
, bytes2word(ZAP_STACK_P1,9,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1945: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(304),BOT(304))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1946: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,7)
, bytes2word(PUSH_P1,23,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,8,ZAP_ARG,8)
, bytes2word(ZAP_STACK_P1,25,ZAP_STACK_P1,10)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1948: (byte 2) */
  bytes2word(TOP(265),BOT(265),POP_I1,PUSH_HEAP)
,	/* v1949: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,8,PUSH_P1,24)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,9)
, bytes2word(ZAP_ARG,9,ZAP_STACK_P1,26)
, bytes2word(ZAP_STACK_P1,11,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1951: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(226),BOT(226))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1952: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,9)
, bytes2word(PUSH_P1,25,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,10,ZAP_ARG,10)
, bytes2word(ZAP_STACK_P1,27,ZAP_STACK_P1,12)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1954: (byte 2) */
  bytes2word(TOP(187),BOT(187),POP_I1,PUSH_HEAP)
,	/* v1955: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,10,PUSH_P1,26)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,11)
, bytes2word(ZAP_ARG,11,ZAP_STACK_P1,28)
, bytes2word(ZAP_STACK_P1,13,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1957: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(148),BOT(148))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1958: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,11)
, bytes2word(PUSH_P1,27,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,12,ZAP_ARG,12)
, bytes2word(ZAP_STACK_P1,29,ZAP_STACK_P1,14)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1960: (byte 2) */
  bytes2word(TOP(109),BOT(109),POP_I1,PUSH_HEAP)
,	/* v1961: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,12,PUSH_P1,28)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,13)
, bytes2word(ZAP_ARG,13,ZAP_STACK_P1,30)
, bytes2word(ZAP_STACK_P1,15,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1963: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(70),BOT(70))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1964: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,13)
, bytes2word(PUSH_P1,29,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,14,ZAP_ARG,14)
, bytes2word(ZAP_STACK_P1,31,ZAP_STACK_P1,16)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1966: (byte 2) */
  bytes2word(TOP(31),BOT(31),POP_I1,PUSH_HEAP)
,	/* v1967: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,14,PUSH_P1,30)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,15)
, bytes2word(ZAP_ARG,15,ZAP_STACK_P1,32)
, bytes2word(ZAP_STACK_P1,17,EVAL,NEEDHEAP_I32)
,	/* v1968: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,POP_I1)
,	/* v1969: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v1970: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v1971: (byte 2) */
  bytes2word(2,RETURN,POP_I1,PUSH_HEAP)
,	/* v1972: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,POP_I1)
,	/* v1973: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v1974: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v1975: (byte 2) */
  bytes2word(2,RETURN,POP_I1,PUSH_HEAP)
,	/* v1976: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,POP_I1)
,	/* v1977: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v1978: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v1979: (byte 2) */
  bytes2word(2,RETURN,POP_I1,PUSH_HEAP)
,	/* v1980: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,POP_I1)
,	/* v1981: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v1998: (byte 0) */
  HW(1,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46compare),17)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v2005)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46_60_61[] = {
  bytes2word(NEEDSTACK_P1,31,PUSH_ZAP_ARG,16)
, bytes2word(EVAL,UNPACK,15,PUSH_ZAP_ARG)
, bytes2word(17,EVAL,NEEDHEAP_P2,30)
, bytes2word(1,UNPACK,15,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,15,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(15,HEAP_P1,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,16,HEAP_I1)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,16)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(17,HEAP_I2,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,17,HEAP_I2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,18,HEAP_P1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(18,HEAP_P1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,19,HEAP_P1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(19,HEAP_P1,4,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,6,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,20,HEAP_P1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(20,HEAP_P1,5,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,21,HEAP_P1)
, bytes2word(6,HEAP_CVAL_I5,HEAP_ARG,7)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(21,HEAP_P1,6,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,22,HEAP_P1)
, bytes2word(7,HEAP_CVAL_I5,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(22,HEAP_P1,7,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,9,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,23,HEAP_P1)
, bytes2word(8,HEAP_CVAL_I5,HEAP_ARG,9)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(23,HEAP_P1,8,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,10,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,24,HEAP_P1)
, bytes2word(9,HEAP_CVAL_I5,HEAP_ARG,10)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(24,HEAP_P1,9,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,11,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,25,HEAP_P1)
, bytes2word(10,HEAP_CVAL_I5,HEAP_ARG,11)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(25,HEAP_P1,10,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,12,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,26,HEAP_P1)
, bytes2word(11,HEAP_CVAL_I5,HEAP_ARG,12)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(26,HEAP_P1,11,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,13,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,27,HEAP_P1)
, bytes2word(12,HEAP_CVAL_I5,HEAP_ARG,13)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(27,HEAP_P1,12,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,14,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,28,HEAP_P1)
, bytes2word(13,HEAP_CVAL_I5,HEAP_ARG,14)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(28,HEAP_P1,13,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,15,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,29)
, bytes2word(HEAP_P1,14,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,22)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,31,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,42)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,51,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,62)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,71,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,82)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,91,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,102)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,111,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,122)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,131,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,142)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,151,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,162)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,171,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,182)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,191,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,202)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,211,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,222)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,231,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,242)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,251,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N2,6)
, bytes2word(1,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N2,15,1)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N2,26,1)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v2005: (byte 0) */
  HW(7,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_60_61),17)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v2006)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(17,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2006: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46min),17)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v2007)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(17,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2007: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46max),17)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v2008)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(17,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2008: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_62),17)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v2009)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(17,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2009: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_62_61),17)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v2010)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(17,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2010: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_60),17)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v2017)
,};
Node FN_Prelude_46Eq_46Prelude_4615_46_61_61[] = {
  bytes2word(NEEDSTACK_P1,31,PUSH_ZAP_ARG,16)
, bytes2word(EVAL,UNPACK,15,PUSH_ZAP_ARG)
, bytes2word(17,EVAL,NEEDHEAP_P1,132)
, bytes2word(UNPACK,15,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,15,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,16)
, bytes2word(HEAP_I1,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(17,HEAP_I2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,18,HEAP_P1,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,5,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,19)
, bytes2word(HEAP_P1,4,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,20,HEAP_P1,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,7,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,21)
, bytes2word(HEAP_P1,6,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(8,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,22,HEAP_P1,7)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,9,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,23)
, bytes2word(HEAP_P1,8,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(10,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,24,HEAP_P1,9)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,11,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,25)
, bytes2word(HEAP_P1,10,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(12,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,26,HEAP_P1,11)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,13,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,27)
, bytes2word(HEAP_P1,12,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(14,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,28,HEAP_P1,13)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,15,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,29)
, bytes2word(HEAP_P1,14,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(11,HEAP_OFF_N1,6,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,20,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,29,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,38)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(47,HEAP_OFF_N1,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,56,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,65,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,74)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(83,HEAP_OFF_N1,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,92,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,101,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,110)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(119,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,128,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v2017: (byte 0) */
  HW(3,17)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4615_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615_46_61_61),17)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(17,0,16,1)
, bytes2word(15,2,14,3)
, bytes2word(13,4,12,5)
, bytes2word(11,6,10,7)
, bytes2word(9,8,8,9)
, bytes2word(7,10,6,11)
, bytes2word(5,12,4,13)
, bytes2word(3,14,2,15)
, bytes2word(1,16,0,17)
, useLabel(CT_v2018)
,};
Node FN_Prelude_46Eq_46Prelude_4615_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(17,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v2018: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4615_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615_46_47_61),17)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(15,0,14,1)
, bytes2word(13,2,12,3)
, bytes2word(11,4,10,5)
, bytes2word(9,6,8,7)
, bytes2word(7,8,6,9)
, bytes2word(5,10,4,11)
, bytes2word(3,12,2,13)
, bytes2word(1,14,0,15)
, useLabel(CT_v2019)
,};
Node FN_Prelude_46Eq_46Prelude_4615[] = {
  bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2019: (byte 0) */
  HW(2,15)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4615[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615),15)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615_46_61_61),2)
, bytes2word(15,0,14,1)
, bytes2word(13,2,12,3)
, bytes2word(11,4,10,5)
, bytes2word(9,6,8,7)
, bytes2word(7,8,6,9)
, bytes2word(5,10,4,11)
, bytes2word(3,12,2,13)
, bytes2word(1,14,0,15)
, useLabel(CT_v2020)
,};
Node FN_Prelude_46Ord_46Prelude_4615[] = {
  bytes2word(NEEDHEAP_P1,176,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_I3,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,7,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(9,HEAP_CVAL_I3,HEAP_ARG,10)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,11,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,12,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(13,HEAP_CVAL_I3,HEAP_ARG,14)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,31,HEAP_OFF_N1)
, bytes2word(30,HEAP_OFF_N1,29,HEAP_OFF_N1)
, bytes2word(28,HEAP_OFF_N1,27,HEAP_OFF_N1)
, bytes2word(26,HEAP_OFF_N1,25,HEAP_OFF_N1)
, bytes2word(24,HEAP_OFF_N1,23,HEAP_OFF_N1)
, bytes2word(22,HEAP_OFF_N1,21,HEAP_OFF_N1)
, bytes2word(20,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,17,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,HEAP_ARG_ARG)
, bytes2word(9,10,HEAP_ARG_ARG,11)
, bytes2word(12,HEAP_ARG_ARG,13,14)
, bytes2word(HEAP_ARG,15,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,HEAP_ARG_ARG)
, bytes2word(9,10,HEAP_ARG_ARG,11)
, bytes2word(12,HEAP_ARG_ARG,13,14)
, bytes2word(HEAP_ARG,15,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,HEAP_ARG_ARG)
, bytes2word(9,10,HEAP_ARG_ARG,11)
, bytes2word(12,HEAP_ARG_ARG,13,14)
, bytes2word(HEAP_ARG,15,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(8,HEAP_P1,7,HEAP_P1)
, bytes2word(6,HEAP_P1,5,HEAP_P1)
, bytes2word(4,HEAP_P1,3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v2020: (byte 0) */
  HW(9,15)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615),15)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46max),2)
, bytes2word(15,0,14,1)
, bytes2word(13,2,12,3)
, bytes2word(11,4,10,5)
, bytes2word(9,6,8,7)
, bytes2word(7,8,6,9)
, bytes2word(5,10,4,11)
, bytes2word(3,12,2,13)
, bytes2word(1,14,0,15)
, useLabel(CT_v2021)
,};
Node FN_Prelude_46Bounded_46Prelude_4615[] = {
  bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v2021: (byte 0) */
  HW(2,15)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4615[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615),15)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615_46maxBound))
,};

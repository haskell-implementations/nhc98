#include "newmacros.h"
#include "runtime.h"

#define PS_Prelude_4615	((void*)startLabel+16)
#define CT_v1924	((void*)startLabel+320)
#define CT_v1929	((void*)startLabel+644)
#define v1935	((void*)startLabel+760)
#define v1936	((void*)startLabel+770)
#define v1938	((void*)startLabel+804)
#define v1939	((void*)startLabel+814)
#define v1941	((void*)startLabel+848)
#define v1942	((void*)startLabel+858)
#define v1944	((void*)startLabel+894)
#define v1945	((void*)startLabel+904)
#define v1947	((void*)startLabel+940)
#define v1948	((void*)startLabel+950)
#define v1950	((void*)startLabel+986)
#define v1951	((void*)startLabel+996)
#define v1953	((void*)startLabel+1032)
#define v1954	((void*)startLabel+1042)
#define v1956	((void*)startLabel+1078)
#define v1957	((void*)startLabel+1088)
#define v1959	((void*)startLabel+1124)
#define v1960	((void*)startLabel+1134)
#define v1962	((void*)startLabel+1170)
#define v1963	((void*)startLabel+1180)
#define v1965	((void*)startLabel+1216)
#define v1966	((void*)startLabel+1226)
#define v1968	((void*)startLabel+1262)
#define v1969	((void*)startLabel+1272)
#define v1971	((void*)startLabel+1308)
#define v1972	((void*)startLabel+1318)
#define v1974	((void*)startLabel+1354)
#define v1975	((void*)startLabel+1364)
#define v1976	((void*)startLabel+1390)
#define v1977	((void*)startLabel+1400)
#define v1978	((void*)startLabel+1410)
#define v1979	((void*)startLabel+1420)
#define v1980	((void*)startLabel+1430)
#define v1981	((void*)startLabel+1440)
#define v1982	((void*)startLabel+1450)
#define v1983	((void*)startLabel+1460)
#define v1984	((void*)startLabel+1470)
#define v1985	((void*)startLabel+1480)
#define v1986	((void*)startLabel+1490)
#define v1987	((void*)startLabel+1500)
#define v1988	((void*)startLabel+1510)
#define v1989	((void*)startLabel+1520)
#define CT_v2011	((void*)startLabel+1648)
#define CT_v2027	((void*)startLabel+2980)
#define CT_v2032	((void*)startLabel+3176)
#define CT_v2037	((void*)startLabel+3352)
#define CT_v2042	((void*)startLabel+3528)
#define CT_v2047	((void*)startLabel+3704)
#define CT_v2052	((void*)startLabel+3880)
#define CT_v2064	((void*)startLabel+4536)
#define CT_v2069	((void*)startLabel+4716)
#define CT_v2075	((void*)startLabel+4956)
#define CT_v2088	((void*)startLabel+5684)
#define CT_v2094	((void*)startLabel+5952)
#define ST_v2090	((void*)startLabel+5988)
#define ST_v1921	((void*)startLabel+6016)
#define ST_v1926	((void*)startLabel+6052)
#define ST_v2071	((void*)startLabel+6088)
#define ST_v2066	((void*)startLabel+6112)
#define ST_v2058	((void*)startLabel+6140)
#define ST_v2077	((void*)startLabel+6168)
#define ST_v2049	((void*)startLabel+6192)
#define ST_v2017	((void*)startLabel+6220)
#define ST_v2039	((void*)startLabel+6248)
#define ST_v2044	((void*)startLabel+6276)
#define ST_v1991	((void*)startLabel+6304)
#define ST_v2034	((void*)startLabel+6336)
#define ST_v2029	((void*)startLabel+6364)
#define PS_v2062	((void*)startLabel+6392)
#define PS_v2063	((void*)startLabel+6404)
#define PS_v2061	((void*)startLabel+6416)
#define PS_v2057	((void*)startLabel+6428)
#define PS_v2068	((void*)startLabel+6440)
#define PS_v2065	((void*)startLabel+6452)
#define PS_v2067	((void*)startLabel+6464)
#define PS_v2021	((void*)startLabel+6476)
#define PS_v2026	((void*)startLabel+6488)
#define PS_v2025	((void*)startLabel+6500)
#define PS_v2024	((void*)startLabel+6512)
#define PS_v2020	((void*)startLabel+6524)
#define PS_v2023	((void*)startLabel+6536)
#define PS_v2016	((void*)startLabel+6548)
#define PS_v2022	((void*)startLabel+6560)
#define PS_v1994	((void*)startLabel+6572)
#define PS_v1996	((void*)startLabel+6584)
#define PS_v2010	((void*)startLabel+6596)
#define PS_v1990	((void*)startLabel+6608)
#define PS_v2051	((void*)startLabel+6620)
#define PS_v2048	((void*)startLabel+6632)
#define PS_v2050	((void*)startLabel+6644)
#define PS_v2046	((void*)startLabel+6656)
#define PS_v2043	((void*)startLabel+6668)
#define PS_v2045	((void*)startLabel+6680)
#define PS_v2041	((void*)startLabel+6692)
#define PS_v2038	((void*)startLabel+6704)
#define PS_v2040	((void*)startLabel+6716)
#define PS_v2036	((void*)startLabel+6728)
#define PS_v2033	((void*)startLabel+6740)
#define PS_v2035	((void*)startLabel+6752)
#define PS_v2031	((void*)startLabel+6764)
#define PS_v2028	((void*)startLabel+6776)
#define PS_v2030	((void*)startLabel+6788)
#define PS_v1927	((void*)startLabel+6800)
#define PS_v1928	((void*)startLabel+6812)
#define PS_v1925	((void*)startLabel+6824)
#define PS_v1922	((void*)startLabel+6836)
#define PS_v1923	((void*)startLabel+6848)
#define PS_v1920	((void*)startLabel+6860)
#define PS_v2081	((void*)startLabel+6872)
#define PS_v2084	((void*)startLabel+6884)
#define PS_v2080	((void*)startLabel+6896)
#define PS_v2082	((void*)startLabel+6908)
#define PS_v2083	((void*)startLabel+6920)
#define PS_v2086	((void*)startLabel+6932)
#define PS_v2085	((void*)startLabel+6944)
#define PS_v2078	((void*)startLabel+6956)
#define PS_v2076	((void*)startLabel+6968)
#define PS_v2079	((void*)startLabel+6980)
#define PS_v2087	((void*)startLabel+6992)
#define PS_v2073	((void*)startLabel+7004)
#define PS_v2072	((void*)startLabel+7016)
#define PS_v2070	((void*)startLabel+7028)
#define PS_v2074	((void*)startLabel+7040)
#define PS_v2091	((void*)startLabel+7052)
#define PS_v2092	((void*)startLabel+7064)
#define PS_v2093	((void*)startLabel+7076)
#define PS_v2089	((void*)startLabel+7088)
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
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_46_124_124[];
extern Node PC_Prelude_46_60_61[];
extern Node PC_Prelude_46_60[];
extern Node PC_Prelude_46Ord_46Prelude_46Eq[];
extern Node PC_Prelude_46compare[];
extern Node PC_Prelude_46LT[];
extern Node PC_Prelude_46GT[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_46minBound[];
extern Node PC_Prelude_46maxBound[];
extern Node PC_Prelude_468[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  42
,};
Node PP_Prelude_4615[] = {
 };
Node PC_Prelude_4615[] = {
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,0,0)
,	/* PS_Prelude_4615: (byte 0) */
  useLabel(PP_Prelude_4615)
, useLabel(PP_Prelude_4615)
, useLabel(PC_Prelude_4615)
, bytes2word(15,0,14,1)
, bytes2word(13,2,12,3)
, bytes2word(11,4,10,5)
, bytes2word(9,6,8,7)
, bytes2word(7,8,6,9)
, bytes2word(5,10,4,11)
, bytes2word(3,12,2,13)
, bytes2word(1,14,0,15)
, useLabel(CT_v1924)
,};
Node FN_Prelude_46Bounded_46Prelude_4615_46maxBound[] = {
  bytes2word(NEEDHEAP_P1,111,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,9,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,10)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(11,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,12,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,13,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,14)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,95,HEAP_OFF_N1)
, bytes2word(90,HEAP_OFF_N1,85,HEAP_OFF_N1)
, bytes2word(80,HEAP_OFF_N1,75,HEAP_OFF_N1)
, bytes2word(70,HEAP_OFF_N1,65,HEAP_OFF_N1)
, bytes2word(60,HEAP_OFF_N1,55,HEAP_OFF_N1)
, bytes2word(50,HEAP_OFF_N1,45,HEAP_OFF_N1)
, bytes2word(40,HEAP_OFF_N1,35,HEAP_OFF_N1)
, bytes2word(30,HEAP_OFF_N1,25,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1923)
, 0
, 0
, 0
, 0
, CONSTR(0,15,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1922)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v1921)
,	/* CT_v1924: (byte 0) */
  HW(1,15)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4615_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615_46maxBound),15)
, useLabel(PS_v1920)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(15,0,14,1)
, bytes2word(13,2,12,3)
, bytes2word(11,4,10,5)
, bytes2word(9,6,8,7)
, bytes2word(7,8,6,9)
, bytes2word(5,10,4,11)
, bytes2word(3,12,2,13)
, bytes2word(1,14,0,15)
, useLabel(CT_v1929)
,};
Node FN_Prelude_46Bounded_46Prelude_4615_46minBound[] = {
  bytes2word(NEEDHEAP_P1,111,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,5,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,8,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,9,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,10)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(11,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,12,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,13,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,14)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,95,HEAP_OFF_N1)
, bytes2word(90,HEAP_OFF_N1,85,HEAP_OFF_N1)
, bytes2word(80,HEAP_OFF_N1,75,HEAP_OFF_N1)
, bytes2word(70,HEAP_OFF_N1,65,HEAP_OFF_N1)
, bytes2word(60,HEAP_OFF_N1,55,HEAP_OFF_N1)
, bytes2word(50,HEAP_OFF_N1,45,HEAP_OFF_N1)
, bytes2word(40,HEAP_OFF_N1,35,HEAP_OFF_N1)
, bytes2word(30,HEAP_OFF_N1,25,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v1928)
, 0
, 0
, 0
, 0
, CONSTR(0,15,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1927)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v1926)
,	/* CT_v1929: (byte 0) */
  HW(1,15)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4615_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615_46minBound),15)
, useLabel(PS_v1925)
, 0
, 0
, 0
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
, useLabel(CT_v2011)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46compare[] = {
  bytes2word(NEEDSTACK_P1,33,PUSH_ZAP_ARG,16)
, bytes2word(EVAL,UNPACK,15,PUSH_ZAP_ARG)
, bytes2word(17,EVAL,NEEDHEAP_I32,UNPACK)
, bytes2word(15,PUSH_P1,0,PUSH_P1)
, bytes2word(16,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,18,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1935: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(766),BOT(766))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1936: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_I1)
, bytes2word(PUSH_P1,17,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,19,ZAP_STACK_P1)
, bytes2word(4,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1938: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(712),BOT(712))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1939: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(2,PUSH_P1,18,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,ZAP_ARG_I3,ZAP_STACK_P1,20)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1941: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(658),BOT(658))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1942: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(3,PUSH_P1,19,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(4,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(21,ZAP_STACK_P1,6,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1944: (byte 2) */
  bytes2word(TOP(602),BOT(602),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1945: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,4,PUSH_P1)
, bytes2word(20,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,5,ZAP_ARG)
, bytes2word(5,ZAP_STACK_P1,22,ZAP_STACK_P1)
, bytes2word(7,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1947: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(546),BOT(546))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1948: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(5,PUSH_P1,21,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(6,ZAP_ARG,6,ZAP_STACK_P1)
, bytes2word(23,ZAP_STACK_P1,8,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1950: (byte 2) */
  bytes2word(TOP(490),BOT(490),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1951: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,6,PUSH_P1)
, bytes2word(22,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,7,ZAP_ARG)
, bytes2word(7,ZAP_STACK_P1,24,ZAP_STACK_P1)
, bytes2word(9,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1953: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(434),BOT(434))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1954: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(7,PUSH_P1,23,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(8,ZAP_ARG,8,ZAP_STACK_P1)
, bytes2word(25,ZAP_STACK_P1,10,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1956: (byte 2) */
  bytes2word(TOP(378),BOT(378),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1957: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,8,PUSH_P1)
, bytes2word(24,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,9,ZAP_ARG)
, bytes2word(9,ZAP_STACK_P1,26,ZAP_STACK_P1)
, bytes2word(11,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1959: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(322),BOT(322))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1960: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(9,PUSH_P1,25,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(10,ZAP_ARG,10,ZAP_STACK_P1)
, bytes2word(27,ZAP_STACK_P1,12,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1962: (byte 2) */
  bytes2word(TOP(266),BOT(266),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1963: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,10,PUSH_P1)
, bytes2word(26,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,11,ZAP_ARG)
, bytes2word(11,ZAP_STACK_P1,28,ZAP_STACK_P1)
, bytes2word(13,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1965: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(210),BOT(210))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1966: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(11,PUSH_P1,27,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(12,ZAP_ARG,12,ZAP_STACK_P1)
, bytes2word(29,ZAP_STACK_P1,14,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1968: (byte 2) */
  bytes2word(TOP(154),BOT(154),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1969: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,12,PUSH_P1)
, bytes2word(28,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,13,ZAP_ARG)
, bytes2word(13,ZAP_STACK_P1,30,ZAP_STACK_P1)
, bytes2word(15,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1971: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(98),BOT(98))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v1972: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(13,PUSH_P1,29,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(14,ZAP_ARG,14,ZAP_STACK_P1)
, bytes2word(31,ZAP_STACK_P1,16,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v1974: (byte 2) */
  bytes2word(TOP(42),BOT(42),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v1975: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_P1,14,PUSH_P1)
, bytes2word(30,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,15,ZAP_ARG)
, bytes2word(15,ZAP_STACK_P1,32,ZAP_STACK_P1)
, bytes2word(17,EVAL,NEEDHEAP_I32,APPLY)
,	/* v1976: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1977: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1978: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1979: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1980: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1981: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1982: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1983: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1984: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1985: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1986: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1987: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
,	/* v1988: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
,	/* v1989: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2010)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1996)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1994)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v1991)
,	/* CT_v2011: (byte 0) */
  HW(1,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46compare),17)
, useLabel(PS_v1990)
, 0
, 0
, 0
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
, useLabel(CT_v2027)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46_60_61[] = {
  bytes2word(NEEDSTACK_P1,31,PUSH_ZAP_ARG,16)
, bytes2word(EVAL,UNPACK,15,PUSH_ZAP_ARG)
, bytes2word(17,EVAL,NEEDHEAP_P2,174)
, bytes2word(2,UNPACK,15,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,15,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,15,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,16)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,16,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,17,HEAP_I2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(17,HEAP_I2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,18,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(18,HEAP_P1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,19,HEAP_P1)
, bytes2word(4,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,19,HEAP_P1,4)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,20)
, bytes2word(HEAP_P1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,6,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,20,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(21,HEAP_P1,6,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,7)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,21)
, bytes2word(HEAP_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,8,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,22,HEAP_P1,7)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(8,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(22,HEAP_P1,7,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,9)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,23,HEAP_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,23,HEAP_P1,8)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(10,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,24)
, bytes2word(HEAP_P1,9,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,10,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,24,HEAP_P1)
, bytes2word(9,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(25,HEAP_P1,10,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,11)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,25)
, bytes2word(HEAP_P1,10,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,12,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,26,HEAP_P1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(12,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(26,HEAP_P1,11,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,13)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,27,HEAP_P1)
, bytes2word(12,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,13,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,27,HEAP_P1,12)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(14,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,28)
, bytes2word(HEAP_P1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,14,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,28,HEAP_P1)
, bytes2word(13,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,15,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(29,HEAP_P1,14,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,27)
, bytes2word(HEAP_OFF_N1,14,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,54,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,75,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(102,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,123)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,150,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,171,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(198,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,219)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,246,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,11,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,38,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,59,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,86,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,107,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,134,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,155,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,182,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,203,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,230,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,251,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,22,2,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,43,2,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,70,2,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,91,2,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,118,2,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,139,2,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,166,2)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2026)
, 0
, 0
, 0
, 0
, useLabel(PS_v2025)
, 0
, 0
, 0
, 0
, useLabel(PS_v2024)
, 0
, 0
, 0
, 0
, useLabel(PS_v2023)
, 0
, 0
, 0
, 0
, useLabel(PS_v2022)
, 0
, 0
, 0
, 0
, useLabel(PS_v2021)
, 0
, 0
, 0
, 0
, useLabel(PS_v2020)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v2017)
,	/* CT_v2027: (byte 0) */
  HW(7,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_60_61),17)
, useLabel(PS_v2016)
, 0
, 0
, 0
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
, useLabel(CT_v2032)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2031)
, 0
, 0
, 0
, 0
, useLabel(PS_v2030)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v2029)
,	/* CT_v2032: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46min),17)
, useLabel(PS_v2028)
, 0
, 0
, 0
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
, useLabel(CT_v2037)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2036)
, 0
, 0
, 0
, 0
, useLabel(PS_v2035)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v2034)
,	/* CT_v2037: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46max),17)
, useLabel(PS_v2033)
, 0
, 0
, 0
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
, useLabel(CT_v2042)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2041)
, 0
, 0
, 0
, 0
, useLabel(PS_v2040)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v2039)
,	/* CT_v2042: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_62),17)
, useLabel(PS_v2038)
, 0
, 0
, 0
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
, useLabel(CT_v2047)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2046)
, 0
, 0
, 0
, 0
, useLabel(PS_v2045)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v2044)
,	/* CT_v2047: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_62_61),17)
, useLabel(PS_v2043)
, 0
, 0
, 0
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
, useLabel(CT_v2052)
,};
Node FN_Prelude_46Ord_46Prelude_4615_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2051)
, 0
, 0
, 0
, 0
, useLabel(PS_v2050)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v2049)
,	/* CT_v2052: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615_46_60),17)
, useLabel(PS_v2048)
, 0
, 0
, 0
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
, useLabel(CT_v2064)
,};
Node FN_Prelude_46Eq_46Prelude_4615_46_61_61[] = {
  bytes2word(NEEDSTACK_P1,31,PUSH_ZAP_ARG,16)
, bytes2word(EVAL,UNPACK,15,PUSH_ZAP_ARG)
, bytes2word(17,EVAL,NEEDHEAP_P2,52)
, bytes2word(1,UNPACK,15,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,15,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(16,HEAP_I1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,17,HEAP_I2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,18,HEAP_P1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(19,HEAP_P1,4,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,20,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(21,HEAP_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,22,HEAP_P1)
, bytes2word(7,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,9,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(23,HEAP_P1,8,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,10)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,24,HEAP_P1)
, bytes2word(9,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(25,HEAP_P1,10,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,12)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,26,HEAP_P1)
, bytes2word(11,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,13,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(27,HEAP_P1,12,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,14)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,28,HEAP_P1)
, bytes2word(13,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,15,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(29,HEAP_P1,14,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,27)
, bytes2word(HEAP_OFF_N1,14,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,48,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,69,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(90,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,111)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,132,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,153,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(174,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,195)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,216,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,237,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(2,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N2)
, bytes2word(23,1,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,44,1,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2063)
, 0
, 0
, 0
, 0
, useLabel(PS_v2062)
, 0
, 0
, 0
, 0
, useLabel(PS_v2061)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v2058)
,	/* CT_v2064: (byte 0) */
  HW(3,17)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4615_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615_46_61_61),17)
, useLabel(PS_v2057)
, 0
, 0
, 0
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
, useLabel(CT_v2069)
,};
Node FN_Prelude_46Eq_46Prelude_4615_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(25,HEAP_ARG_ARG_RET_EVAL,16,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v2068)
, 0
, 0
, 0
, 0
, useLabel(PS_v2067)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v2066)
,	/* CT_v2069: (byte 0) */
  HW(2,17)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4615_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615_46_47_61),17)
, useLabel(PS_v2065)
, 0
, 0
, 0
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
, useLabel(CT_v2075)
,};
Node FN_Prelude_46Eq_46Prelude_4615[] = {
  bytes2word(NEEDHEAP_P1,50,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2074)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2073)
, 0
, 0
, 0
, 0
, useLabel(PS_v2072)
, 0
, 0
, 0
, 0
, 40013
, useLabel(ST_v2071)
,	/* CT_v2075: (byte 0) */
  HW(2,15)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_4615[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_4615),15)
, useLabel(PS_v2070)
, 0
, 0
, 0
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
, useLabel(CT_v2088)
,};
Node FN_Prelude_46Ord_46Prelude_4615[] = {
  bytes2word(NEEDHEAP_P2,16,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,8,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,9)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(10,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,11,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,12,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,13)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(14,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,15,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,95)
, bytes2word(HEAP_OFF_N1,90,HEAP_OFF_N1,85)
, bytes2word(HEAP_OFF_N1,80,HEAP_OFF_N1,75)
, bytes2word(HEAP_OFF_N1,70,HEAP_OFF_N1,65)
, bytes2word(HEAP_OFF_N1,60,HEAP_OFF_N1,55)
, bytes2word(HEAP_OFF_N1,50,HEAP_OFF_N1,45)
, bytes2word(HEAP_OFF_N1,40,HEAP_OFF_N1,35)
, bytes2word(HEAP_OFF_N1,30,HEAP_OFF_N1,25)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,HEAP_ARG_ARG)
, bytes2word(9,10,HEAP_ARG_ARG,11)
, bytes2word(12,HEAP_ARG_ARG,13,14)
, bytes2word(HEAP_ARG,15,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,HEAP_ARG_ARG,13)
, bytes2word(14,HEAP_ARG,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG_ARG,7,8,HEAP_ARG_ARG)
, bytes2word(9,10,HEAP_ARG_ARG,11)
, bytes2word(12,HEAP_ARG_ARG,13,14)
, bytes2word(HEAP_ARG,15,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v2087)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2086)
, 0
, 0
, 0
, 0
, useLabel(PS_v2085)
, 0
, 0
, 0
, 0
, useLabel(PS_v2084)
, 0
, 0
, 0
, 0
, useLabel(PS_v2083)
, 0
, 0
, 0
, 0
, useLabel(PS_v2082)
, 0
, 0
, 0
, 0
, useLabel(PS_v2081)
, 0
, 0
, 0
, 0
, useLabel(PS_v2080)
, 0
, 0
, 0
, 0
, useLabel(PS_v2079)
, 0
, 0
, 0
, 0
, useLabel(PS_v2078)
, 0
, 0
, 0
, 0
, 40017
, useLabel(ST_v2077)
,	/* CT_v2088: (byte 0) */
  HW(9,15)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_4615[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_4615),15)
, useLabel(PS_v2076)
, 0
, 0
, 0
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
, useLabel(CT_v2094)
,};
Node FN_Prelude_46Bounded_46Prelude_4615[] = {
  bytes2word(NEEDHEAP_P1,50,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(HEAP_ARG_ARG,13,14,HEAP_ARG)
, bytes2word(15,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG_ARG,7)
, bytes2word(8,HEAP_ARG_ARG,9,10)
, bytes2word(HEAP_ARG_ARG,11,12,HEAP_ARG_ARG)
, bytes2word(13,14,HEAP_ARG,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v2093)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v2092)
, 0
, 0
, 0
, 0
, useLabel(PS_v2091)
, 0
, 0
, 0
, 0
, 40022
, useLabel(ST_v2090)
,	/* CT_v2094: (byte 0) */
  HW(2,15)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_4615[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615),15)
, useLabel(PS_v2089)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_4615_46maxBound))
,};
Node PP_Prelude_46Bounded_46Prelude_4615[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4615[] = {
 	/* ST_v2090: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,0,0)
,};
Node PP_Prelude_46Bounded_46Prelude_4615_46maxBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4615_46maxBound[] = {
 	/* ST_v1921: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,109)
, bytes2word(97,120,66,111)
, bytes2word(117,110,100,0)
,};
Node PP_Prelude_46Bounded_46Prelude_4615_46minBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_4615_46minBound[] = {
 	/* ST_v1926: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,109)
, bytes2word(105,110,66,111)
, bytes2word(117,110,100,0)
,};
Node PP_Prelude_46Eq_46Prelude_4615[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4615[] = {
 	/* ST_v2071: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(53,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_4615_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4615_46_47_61[] = {
 	/* ST_v2066: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(53,46,47,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46Prelude_4615_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Prelude_4615_46_61_61[] = {
 	/* ST_v2058: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(53,46,61,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4615[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4615[] = {
 	/* ST_v2077: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4615_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4615_46_60[] = {
 	/* ST_v2049: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,60)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4615_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4615_46_60_61[] = {
 	/* ST_v2017: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,60)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4615_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4615_46_62[] = {
 	/* ST_v2039: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,62)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4615_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4615_46_62_61[] = {
 	/* ST_v2044: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,62)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4615_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4615_46compare[] = {
 	/* ST_v1991: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4615_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4615_46max[] = {
 	/* ST_v2034: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,109)
, bytes2word(97,120,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_4615_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_4615_46min[] = {
 	/* ST_v2029: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(49,53,46,109)
, bytes2word(105,110,0,0)
,	/* PS_v2062: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615_46_61_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v2063: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615_46_61_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v2061: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615_46_61_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v2057: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615_46_61_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4615_46_61_61)
,	/* PS_v2068: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v2065: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4615_46_47_61)
,	/* PS_v2067: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615_46_47_61)
, useLabel(PC_Prelude_46Eq_46Prelude_4615)
,	/* PS_v2021: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v2026: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60_61)
, useLabel(PC_Prelude_46_124_124)
,	/* PS_v2025: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v2024: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60_61)
, useLabel(PC_Prelude_46_60_61)
,	/* PS_v2020: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60_61)
, useLabel(PC_Prelude_46_60)
,	/* PS_v2023: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v2016: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46_60_61)
,	/* PS_v2022: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,	/* PS_v1994: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v1996: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v2010: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v1990: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46compare)
,	/* PS_v2051: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v2048: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46_60)
,	/* PS_v2050: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_4615)
,	/* PS_v2046: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v2043: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46_62_61)
,	/* PS_v2045: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_4615)
,	/* PS_v2041: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v2038: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46_62)
,	/* PS_v2040: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_4615)
,	/* PS_v2036: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v2033: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46max)
,	/* PS_v2035: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_4615)
,	/* PS_v2031: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v2028: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46min)
,	/* PS_v2030: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_4615)
,	/* PS_v1927: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615_46minBound)
, useLabel(PC_Prelude_46minBound)
,	/* PS_v1928: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615_46minBound)
, useLabel(PC_Prelude_4615)
,	/* PS_v1925: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615_46minBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_4615_46minBound)
,	/* PS_v1922: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615_46maxBound)
, useLabel(PC_Prelude_46maxBound)
,	/* PS_v1923: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615_46maxBound)
, useLabel(PC_Prelude_4615)
,	/* PS_v1920: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615_46maxBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_4615_46maxBound)
,	/* PS_v2081: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46_60_61)
,	/* PS_v2084: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46compare)
,	/* PS_v2080: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46_60)
,	/* PS_v2082: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46_62_61)
,	/* PS_v2083: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46_62)
,	/* PS_v2086: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46max)
,	/* PS_v2085: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_4615_46min)
,	/* PS_v2078: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,	/* PS_v2076: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Ord_46Prelude_4615)
,	/* PS_v2079: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_46Eq_46Prelude_4615)
,	/* PS_v2087: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_4615)
, useLabel(PC_Prelude_468)
,	/* PS_v2073: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615)
, useLabel(PC_Prelude_46Eq_46Prelude_4615_46_61_61)
,	/* PS_v2072: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615)
, useLabel(PC_Prelude_46Eq_46Prelude_4615_46_47_61)
,	/* PS_v2070: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615)
, useLabel(PC_Prelude_46Eq_46Prelude_4615)
,	/* PS_v2074: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Eq_46Prelude_4615)
, useLabel(PC_Prelude_462)
,	/* PS_v2091: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615)
, useLabel(PC_Prelude_46Bounded_46Prelude_4615_46minBound)
,	/* PS_v2092: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615)
, useLabel(PC_Prelude_46Bounded_46Prelude_4615_46maxBound)
,	/* PS_v2093: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615)
, useLabel(PC_Prelude_462)
,	/* PS_v2089: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_4615)
, useLabel(PC_Prelude_46Bounded_46Prelude_4615)
,};

#include "newmacros.h"
#include "runtime.h"

#define CT_v980	((void*)startLabel+1272)
#define FN_LAMBDA944	((void*)startLabel+1376)
#define CT_v983	((void*)startLabel+1396)
#define F0_LAMBDA944	((void*)startLabel+1404)
#define FN_LAMBDA943	((void*)startLabel+1432)
#define CT_v986	((void*)startLabel+1452)
#define F0_LAMBDA943	((void*)startLabel+1460)
#define FN_LAMBDA942	((void*)startLabel+1488)
#define CT_v989	((void*)startLabel+1508)
#define F0_LAMBDA942	((void*)startLabel+1516)
#define FN_LAMBDA941	((void*)startLabel+1544)
#define CT_v992	((void*)startLabel+1564)
#define F0_LAMBDA941	((void*)startLabel+1572)
#define FN_LAMBDA940	((void*)startLabel+1600)
#define CT_v995	((void*)startLabel+1620)
#define F0_LAMBDA940	((void*)startLabel+1628)
#define FN_LAMBDA939	((void*)startLabel+1656)
#define CT_v998	((void*)startLabel+1676)
#define F0_LAMBDA939	((void*)startLabel+1684)
#define FN_LAMBDA938	((void*)startLabel+1712)
#define CT_v1001	((void*)startLabel+1732)
#define F0_LAMBDA938	((void*)startLabel+1740)
#define FN_LAMBDA937	((void*)startLabel+1768)
#define CT_v1004	((void*)startLabel+1788)
#define F0_LAMBDA937	((void*)startLabel+1796)
#define FN_LAMBDA936	((void*)startLabel+1824)
#define CT_v1007	((void*)startLabel+1844)
#define F0_LAMBDA936	((void*)startLabel+1852)
#define FN_LAMBDA935	((void*)startLabel+1880)
#define CT_v1010	((void*)startLabel+1900)
#define F0_LAMBDA935	((void*)startLabel+1908)
#define FN_LAMBDA934	((void*)startLabel+1936)
#define CT_v1013	((void*)startLabel+1956)
#define F0_LAMBDA934	((void*)startLabel+1964)
#define FN_LAMBDA933	((void*)startLabel+1992)
#define CT_v1016	((void*)startLabel+2012)
#define F0_LAMBDA933	((void*)startLabel+2020)
#define FN_LAMBDA932	((void*)startLabel+2048)
#define CT_v1023	((void*)startLabel+2140)
#define F0_LAMBDA932	((void*)startLabel+2148)
#define CT_v1045	((void*)startLabel+3376)
#define FN_LAMBDA955	((void*)startLabel+3476)
#define CT_v1049	((void*)startLabel+3520)
#define CF_LAMBDA955	((void*)startLabel+3528)
#define FN_LAMBDA954	((void*)startLabel+3556)
#define CT_v1052	((void*)startLabel+3600)
#define CF_LAMBDA954	((void*)startLabel+3608)
#define FN_LAMBDA953	((void*)startLabel+3636)
#define CT_v1055	((void*)startLabel+3680)
#define CF_LAMBDA953	((void*)startLabel+3688)
#define FN_LAMBDA952	((void*)startLabel+3716)
#define CT_v1058	((void*)startLabel+3760)
#define CF_LAMBDA952	((void*)startLabel+3768)
#define FN_LAMBDA951	((void*)startLabel+3796)
#define CT_v1061	((void*)startLabel+3840)
#define CF_LAMBDA951	((void*)startLabel+3848)
#define FN_LAMBDA950	((void*)startLabel+3876)
#define CT_v1064	((void*)startLabel+3920)
#define CF_LAMBDA950	((void*)startLabel+3928)
#define FN_LAMBDA949	((void*)startLabel+3956)
#define CT_v1067	((void*)startLabel+4000)
#define CF_LAMBDA949	((void*)startLabel+4008)
#define FN_LAMBDA948	((void*)startLabel+4036)
#define CT_v1070	((void*)startLabel+4080)
#define CF_LAMBDA948	((void*)startLabel+4088)
#define FN_LAMBDA947	((void*)startLabel+4116)
#define CT_v1073	((void*)startLabel+4160)
#define CF_LAMBDA947	((void*)startLabel+4168)
#define FN_LAMBDA946	((void*)startLabel+4196)
#define CT_v1076	((void*)startLabel+4240)
#define CF_LAMBDA946	((void*)startLabel+4248)
#define FN_LAMBDA945	((void*)startLabel+4276)
#define CT_v1079	((void*)startLabel+4320)
#define CF_LAMBDA945	((void*)startLabel+4328)
#define CT_v1084	((void*)startLabel+4472)
#define CT_v1089	((void*)startLabel+4632)
#define CT_v1097	((void*)startLabel+4956)
#define ST_v1048	((void*)startLabel+5000)
#define ST_v1091	((void*)startLabel+5004)
#define ST_v1081	((void*)startLabel+5028)
#define ST_v1086	((void*)startLabel+5060)
#define ST_v1027	((void*)startLabel+5096)
#define PP_LAMBDA948	((void*)startLabel+5130)
#define PC_LAMBDA948	((void*)startLabel+5130)
#define ST_v1069	((void*)startLabel+5130)
#define PP_LAMBDA949	((void*)startLabel+5176)
#define PC_LAMBDA949	((void*)startLabel+5176)
#define ST_v1066	((void*)startLabel+5176)
#define PP_LAMBDA950	((void*)startLabel+5222)
#define PC_LAMBDA950	((void*)startLabel+5222)
#define ST_v1063	((void*)startLabel+5222)
#define PP_LAMBDA951	((void*)startLabel+5268)
#define PC_LAMBDA951	((void*)startLabel+5268)
#define ST_v1060	((void*)startLabel+5268)
#define PP_LAMBDA952	((void*)startLabel+5314)
#define PC_LAMBDA952	((void*)startLabel+5314)
#define ST_v1057	((void*)startLabel+5314)
#define PP_LAMBDA953	((void*)startLabel+5360)
#define PC_LAMBDA953	((void*)startLabel+5360)
#define ST_v1054	((void*)startLabel+5360)
#define PP_LAMBDA954	((void*)startLabel+5406)
#define PC_LAMBDA954	((void*)startLabel+5406)
#define ST_v1051	((void*)startLabel+5406)
#define PP_LAMBDA955	((void*)startLabel+5452)
#define PC_LAMBDA955	((void*)startLabel+5452)
#define ST_v1047	((void*)startLabel+5452)
#define PP_LAMBDA945	((void*)startLabel+5498)
#define PC_LAMBDA945	((void*)startLabel+5498)
#define ST_v1078	((void*)startLabel+5498)
#define PP_LAMBDA946	((void*)startLabel+5542)
#define PC_LAMBDA946	((void*)startLabel+5542)
#define ST_v1075	((void*)startLabel+5542)
#define PP_LAMBDA947	((void*)startLabel+5586)
#define PC_LAMBDA947	((void*)startLabel+5586)
#define ST_v1072	((void*)startLabel+5586)
#define ST_v962	((void*)startLabel+5632)
#define PP_LAMBDA932	((void*)startLabel+5666)
#define PC_LAMBDA932	((void*)startLabel+5666)
#define ST_v1020	((void*)startLabel+5666)
#define PP_LAMBDA944	((void*)startLabel+5706)
#define PC_LAMBDA944	((void*)startLabel+5706)
#define ST_v982	((void*)startLabel+5706)
#define PP_LAMBDA943	((void*)startLabel+5746)
#define PC_LAMBDA943	((void*)startLabel+5746)
#define ST_v985	((void*)startLabel+5746)
#define PP_LAMBDA942	((void*)startLabel+5786)
#define PC_LAMBDA942	((void*)startLabel+5786)
#define ST_v988	((void*)startLabel+5786)
#define PP_LAMBDA941	((void*)startLabel+5826)
#define PC_LAMBDA941	((void*)startLabel+5826)
#define ST_v991	((void*)startLabel+5826)
#define PP_LAMBDA940	((void*)startLabel+5866)
#define PC_LAMBDA940	((void*)startLabel+5866)
#define ST_v994	((void*)startLabel+5866)
#define PP_LAMBDA939	((void*)startLabel+5906)
#define PC_LAMBDA939	((void*)startLabel+5906)
#define ST_v997	((void*)startLabel+5906)
#define PP_LAMBDA938	((void*)startLabel+5946)
#define PC_LAMBDA938	((void*)startLabel+5946)
#define ST_v1000	((void*)startLabel+5946)
#define PP_LAMBDA937	((void*)startLabel+5986)
#define PC_LAMBDA937	((void*)startLabel+5986)
#define ST_v1003	((void*)startLabel+5986)
#define PP_LAMBDA936	((void*)startLabel+6026)
#define PC_LAMBDA936	((void*)startLabel+6026)
#define ST_v1006	((void*)startLabel+6026)
#define PP_LAMBDA935	((void*)startLabel+6066)
#define PC_LAMBDA935	((void*)startLabel+6066)
#define ST_v1009	((void*)startLabel+6066)
#define PP_LAMBDA934	((void*)startLabel+6106)
#define PC_LAMBDA934	((void*)startLabel+6106)
#define ST_v1012	((void*)startLabel+6106)
#define PP_LAMBDA933	((void*)startLabel+6146)
#define PC_LAMBDA933	((void*)startLabel+6146)
#define ST_v1015	((void*)startLabel+6146)
#define PS_v1030	((void*)startLabel+6188)
#define PS_v1032	((void*)startLabel+6200)
#define PS_v1029	((void*)startLabel+6212)
#define PS_v1031	((void*)startLabel+6224)
#define PS_v1044	((void*)startLabel+6236)
#define PS_v1026	((void*)startLabel+6248)
#define PS_v1033	((void*)startLabel+6260)
#define PS_v1034	((void*)startLabel+6272)
#define PS_v1035	((void*)startLabel+6284)
#define PS_v1036	((void*)startLabel+6296)
#define PS_v1037	((void*)startLabel+6308)
#define PS_v1038	((void*)startLabel+6320)
#define PS_v1039	((void*)startLabel+6332)
#define PS_v1040	((void*)startLabel+6344)
#define PS_v1041	((void*)startLabel+6356)
#define PS_v1042	((void*)startLabel+6368)
#define PS_v1043	((void*)startLabel+6380)
#define PS_v977	((void*)startLabel+6392)
#define PS_v976	((void*)startLabel+6404)
#define PS_v979	((void*)startLabel+6416)
#define PS_v978	((void*)startLabel+6428)
#define PS_v961	((void*)startLabel+6440)
#define PS_v963	((void*)startLabel+6452)
#define PS_v964	((void*)startLabel+6464)
#define PS_v965	((void*)startLabel+6476)
#define PS_v966	((void*)startLabel+6488)
#define PS_v967	((void*)startLabel+6500)
#define PS_v968	((void*)startLabel+6512)
#define PS_v969	((void*)startLabel+6524)
#define PS_v970	((void*)startLabel+6536)
#define PS_v971	((void*)startLabel+6548)
#define PS_v972	((void*)startLabel+6560)
#define PS_v973	((void*)startLabel+6572)
#define PS_v974	((void*)startLabel+6584)
#define PS_v975	((void*)startLabel+6596)
#define PS_v1088	((void*)startLabel+6608)
#define PS_v1085	((void*)startLabel+6620)
#define PS_v1087	((void*)startLabel+6632)
#define PS_v1083	((void*)startLabel+6644)
#define PS_v1080	((void*)startLabel+6656)
#define PS_v1082	((void*)startLabel+6668)
#define PS_v1092	((void*)startLabel+6680)
#define PS_v1093	((void*)startLabel+6692)
#define PS_v1094	((void*)startLabel+6704)
#define PS_v1095	((void*)startLabel+6716)
#define PS_v1090	((void*)startLabel+6728)
#define PS_v1096	((void*)startLabel+6740)
#define PS_v1022	((void*)startLabel+6752)
#define PS_v1019	((void*)startLabel+6764)
#define PS_v1014	((void*)startLabel+6776)
#define PS_v1011	((void*)startLabel+6788)
#define PS_v1008	((void*)startLabel+6800)
#define PS_v1005	((void*)startLabel+6812)
#define PS_v1002	((void*)startLabel+6824)
#define PS_v999	((void*)startLabel+6836)
#define PS_v996	((void*)startLabel+6848)
#define PS_v993	((void*)startLabel+6860)
#define PS_v990	((void*)startLabel+6872)
#define PS_v987	((void*)startLabel+6884)
#define PS_v984	((void*)startLabel+6896)
#define PS_v981	((void*)startLabel+6908)
#define PS_v1077	((void*)startLabel+6920)
#define PS_v1074	((void*)startLabel+6932)
#define PS_v1071	((void*)startLabel+6944)
#define PS_v1068	((void*)startLabel+6956)
#define PS_v1065	((void*)startLabel+6968)
#define PS_v1062	((void*)startLabel+6980)
#define PS_v1059	((void*)startLabel+6992)
#define PS_v1056	((void*)startLabel+7004)
#define PS_v1053	((void*)startLabel+7016)
#define PS_v1050	((void*)startLabel+7028)
#define PS_v1046	((void*)startLabel+7040)
extern Node FN_Prelude_46showChar[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46shows[];
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Show_46Prelude_4612[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46showString[];
extern Node PC_Prelude_46showChar[];
extern Node PC_Prelude_46shows[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46showsType[];
extern Node PC_Prelude_46_95_46showList[];
extern Node PC_Prelude_46_95_46show[];
extern Node PC_Prelude_464[];
extern Node PC_Prelude_4612[];

static Node startLabel[] = {
  bytes2word(13,0,12,1)
, bytes2word(11,2,10,3)
, bytes2word(9,4,8,5)
, bytes2word(7,6,6,7)
, bytes2word(5,8,4,9)
, bytes2word(3,10,2,11)
, bytes2word(1,12,0,13)
, useLabel(CT_v980)
,};
Node FN_Prelude_46Show_46Prelude_4612_46showsType[] = {
  bytes2word(NEEDHEAP_P2,60,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,23,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(29,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,35,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(41,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,47,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(53,PUSH_HEAP,HEAP_CVAL_P1,16)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,59,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(65,PUSH_HEAP,HEAP_CVAL_P1,18)
, bytes2word(HEAP_CVAL_N1,62,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,71,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,19,HEAP_CVAL_N1,67)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(77,HEAP_CVAL_P1,20,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CHAR_P1,40,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_CHAR_P1)
, bytes2word(44,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,20,HEAP_CVAL_N1,72)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(21,HEAP_CVAL_N1,77,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_CHAR_P1,44,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_N1,82,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(21,HEAP_CVAL_N1,77,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,20,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CHAR_P1,44,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,3,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_CHAR_P1)
, bytes2word(44,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(4,HEAP_CVAL_P1,20,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CHAR_P1,44,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,5,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_CHAR_P1)
, bytes2word(44,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(6,HEAP_CVAL_P1,20,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CHAR_P1,44,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,8)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,7,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_CHAR_P1)
, bytes2word(44,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,9,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(8,HEAP_CVAL_P1,20,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CHAR_P1,44,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,10)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,9,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_CHAR_P1)
, bytes2word(44,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,11,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(10,HEAP_CVAL_P1,20,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CHAR_P1,44,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,12)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,11,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,77,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_CHAR_P1)
, bytes2word(41,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,24,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,23,HEAP_CVAL_N1,87)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(44,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(23,HEAP_CVAL_N1,87,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,63)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,23)
, bytes2word(HEAP_CVAL_N1,87,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,83,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,102,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,23,HEAP_CVAL_N1,87)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(122,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(23,HEAP_CVAL_N1,87,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,141)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,23)
, bytes2word(HEAP_CVAL_N1,87,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,161,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,180,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,23,HEAP_CVAL_N1,87)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(200,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(23,HEAP_CVAL_N1,87,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,219)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,23)
, bytes2word(HEAP_CVAL_N1,87,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,239,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,2,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,22,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,41,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,61,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,80,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,100,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,119,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,139,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,158,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,178,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,23,HEAP_CVAL_N1)
, bytes2word(87,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,197,1,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,23)
, bytes2word(HEAP_CVAL_N1,87,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,217,1)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v979)
, 0
, 0
, 0
, 0
, useLabel(PS_v978)
, 0
, 0
, 0
, 0
, useLabel(PS_v977)
, 0
, 0
, 0
, 0
, useLabel(PS_v976)
, 0
, 0
, 0
, 0
, useLabel(PS_v975)
, 0
, 0
, 0
, 0
, useLabel(PS_v974)
, 0
, 0
, 0
, 0
, useLabel(PS_v973)
, 0
, 0
, 0
, 0
, useLabel(PS_v972)
, 0
, 0
, 0
, 0
, useLabel(PS_v971)
, 0
, 0
, 0
, 0
, useLabel(PS_v970)
, 0
, 0
, 0
, 0
, useLabel(PS_v969)
, 0
, 0
, 0
, 0
, useLabel(PS_v968)
, 0
, 0
, 0
, 0
, useLabel(PS_v967)
, 0
, 0
, 0
, 0
, useLabel(PS_v966)
, 0
, 0
, 0
, 0
, useLabel(PS_v965)
, 0
, 0
, 0
, 0
, useLabel(PS_v964)
, 0
, 0
, 0
, 0
, useLabel(PS_v963)
, 0
, 0
, 0
, 0
, 200005
, useLabel(ST_v962)
,	/* CT_v980: (byte 0) */
  HW(17,13)
, 0
,};
Node F0_Prelude_46Show_46Prelude_4612_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612_46showsType),13)
, useLabel(PS_v961)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA932))
, VAPTAG(useLabel(FN_LAMBDA933))
, VAPTAG(useLabel(FN_LAMBDA934))
, VAPTAG(useLabel(FN_LAMBDA935))
, VAPTAG(useLabel(FN_LAMBDA936))
, VAPTAG(useLabel(FN_LAMBDA937))
, VAPTAG(useLabel(FN_LAMBDA938))
, VAPTAG(useLabel(FN_LAMBDA939))
, VAPTAG(useLabel(FN_LAMBDA940))
, VAPTAG(useLabel(FN_LAMBDA941))
, VAPTAG(useLabel(FN_LAMBDA942))
, VAPTAG(useLabel(FN_LAMBDA943))
, VAPTAG(useLabel(FN_LAMBDA944))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showsType))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(1,0,0,1)
, useLabel(CT_v983)
,	/* FN_LAMBDA944: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200018
, useLabel(ST_v982)
,	/* CT_v983: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA944: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA944),1)
, useLabel(PS_v981)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v986)
,	/* FN_LAMBDA943: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,11)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200020
, useLabel(ST_v985)
,	/* CT_v986: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA943: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA943),1)
, useLabel(PS_v984)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v989)
,	/* FN_LAMBDA942: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,10)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200022
, useLabel(ST_v988)
,	/* CT_v989: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA942: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA942),1)
, useLabel(PS_v987)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v992)
,	/* FN_LAMBDA941: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200024
, useLabel(ST_v991)
,	/* CT_v992: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA941: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA941),1)
, useLabel(PS_v990)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v995)
,	/* FN_LAMBDA940: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,8)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200026
, useLabel(ST_v994)
,	/* CT_v995: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA940: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA940),1)
, useLabel(PS_v993)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v998)
,	/* FN_LAMBDA939: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200028
, useLabel(ST_v997)
,	/* CT_v998: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA939: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA939),1)
, useLabel(PS_v996)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1001)
,	/* FN_LAMBDA938: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200030
, useLabel(ST_v1000)
,	/* CT_v1001: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA938: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA938),1)
, useLabel(PS_v999)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1004)
,	/* FN_LAMBDA937: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200032
, useLabel(ST_v1003)
,	/* CT_v1004: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA937: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA937),1)
, useLabel(PS_v1002)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1007)
,	/* FN_LAMBDA936: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200034
, useLabel(ST_v1006)
,	/* CT_v1007: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA936: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA936),1)
, useLabel(PS_v1005)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1010)
,	/* FN_LAMBDA935: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200036
, useLabel(ST_v1009)
,	/* CT_v1010: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA935: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA935),1)
, useLabel(PS_v1008)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1013)
,	/* FN_LAMBDA934: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200038
, useLabel(ST_v1012)
,	/* CT_v1013: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA934: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA934),1)
, useLabel(PS_v1011)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1016)
,	/* FN_LAMBDA933: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 200040
, useLabel(ST_v1015)
,	/* CT_v1016: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA933: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA933),1)
, useLabel(PS_v1014)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v1023)
,	/* FN_LAMBDA932: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,12,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,12)
, bytes2word(HEAP_P1,11,HEAP_P1,10)
, bytes2word(HEAP_P1,9,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1022)
, 0
, 0
, 0
, 0
, CONSTR(0,12,0)
, 0
, 0
, 0
, 0
, 200016
, useLabel(ST_v1020)
,	/* CT_v1023: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA932: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA932),1)
, useLabel(PS_v1019)
, 0
, 0
, 0
, bytes2word(0,0,14,0)
, bytes2word(13,1,12,2)
, bytes2word(11,3,10,4)
, bytes2word(9,5,8,6)
, bytes2word(7,7,6,8)
, bytes2word(5,9,4,10)
, bytes2word(3,11,2,12)
, bytes2word(1,13,0,14)
, useLabel(CT_v1045)
,};
Node FN_Prelude_46Show_46Prelude_4612_46showsPrec[] = {
  bytes2word(ZAP_ARG,13,NEEDSTACK_I16,PUSH_ZAP_ARG)
, bytes2word(14,EVAL,NEEDHEAP_P2,23)
, bytes2word(2,UNPACK,12,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,HEAP_CHAR_P1)
, bytes2word(40,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,15)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,15)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,15)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,4,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,3,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(15,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,4,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,5)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_N1,52,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,15,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(6,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,15)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,8,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,7,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,18,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(15,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,9)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,8,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,19)
, bytes2word(HEAP_CVAL_N1,67,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(10,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,9)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,15,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,11,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(10,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,15)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,12,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,11,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_CHAR_P1,41)
, bytes2word(HEAP_CVAL_P1,22,HEAP_CVAL_N1,82)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(24,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,44)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_N1,82,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,68,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,88,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,22,HEAP_CVAL_N1,82)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(112,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,132)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_N1,82,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,156,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,176,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,22,HEAP_CVAL_N1,82)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(200,HEAP_OFF_N1,13,HEAP_CVAL_P1)
, bytes2word(22,HEAP_CVAL_N1,82,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,220)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_N1,82,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,244,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,8,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,32,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,52,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,76,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,96,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,120,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,140,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,164,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,184,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,208,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,228,1,HEAP_OFF_N1)
, bytes2word(13,HEAP_CVAL_P1,22,HEAP_CVAL_N1)
, bytes2word(82,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N2,252,1,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_N1,82,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N2,16,2)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1044)
, 0
, 0
, 0
, 0
, useLabel(PS_v1043)
, 0
, 0
, 0
, 0
, useLabel(PS_v1042)
, 0
, 0
, 0
, 0
, useLabel(PS_v1041)
, 0
, 0
, 0
, 0
, useLabel(PS_v1040)
, 0
, 0
, 0
, 0
, useLabel(PS_v1039)
, 0
, 0
, 0
, 0
, useLabel(PS_v1038)
, 0
, 0
, 0
, 0
, useLabel(PS_v1037)
, 0
, 0
, 0
, 0
, useLabel(PS_v1036)
, 0
, 0
, 0
, 0
, useLabel(PS_v1035)
, 0
, 0
, 0
, 0
, useLabel(PS_v1034)
, 0
, 0
, 0
, 0
, useLabel(PS_v1033)
, 0
, 0
, 0
, 0
, useLabel(PS_v1032)
, 0
, 0
, 0
, 0
, useLabel(PS_v1031)
, 0
, 0
, 0
, 0
, useLabel(PS_v1030)
, 0
, 0
, 0
, 0
, useLabel(PS_v1029)
, 0
, 0
, 0
, 0
, 60005
, useLabel(ST_v1027)
,	/* CT_v1045: (byte 0) */
  HW(16,14)
, 0
,};
Node F0_Prelude_46Show_46Prelude_4612_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612_46showsPrec),14)
, useLabel(PS_v1026)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46shows))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA945))
, VAPTAG(useLabel(FN_LAMBDA946))
, VAPTAG(useLabel(FN_LAMBDA947))
, VAPTAG(useLabel(FN_LAMBDA948))
, VAPTAG(useLabel(FN_LAMBDA949))
, VAPTAG(useLabel(FN_LAMBDA950))
, VAPTAG(useLabel(FN_LAMBDA951))
, VAPTAG(useLabel(FN_LAMBDA952))
, VAPTAG(useLabel(FN_LAMBDA953))
, VAPTAG(useLabel(FN_LAMBDA954))
, VAPTAG(useLabel(FN_LAMBDA955))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v1049)
,	/* FN_LAMBDA955: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 170065
, useLabel(ST_v1047)
,	/* CT_v1049: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA955: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA955))
, useLabel(PS_v1046)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1052)
,	/* FN_LAMBDA954: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 160065
, useLabel(ST_v1051)
,	/* CT_v1052: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA954: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA954))
, useLabel(PS_v1050)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1055)
,	/* FN_LAMBDA953: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 150065
, useLabel(ST_v1054)
,	/* CT_v1055: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA953: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA953))
, useLabel(PS_v1053)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1058)
,	/* FN_LAMBDA952: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 140065
, useLabel(ST_v1057)
,	/* CT_v1058: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA952: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA952))
, useLabel(PS_v1056)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1061)
,	/* FN_LAMBDA951: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 130065
, useLabel(ST_v1060)
,	/* CT_v1061: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA951: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA951))
, useLabel(PS_v1059)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1064)
,	/* FN_LAMBDA950: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 120065
, useLabel(ST_v1063)
,	/* CT_v1064: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA950: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA950))
, useLabel(PS_v1062)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1067)
,	/* FN_LAMBDA949: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 110065
, useLabel(ST_v1066)
,	/* CT_v1067: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA949: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA949))
, useLabel(PS_v1065)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1070)
,	/* FN_LAMBDA948: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 100065
, useLabel(ST_v1069)
,	/* CT_v1070: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA948: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA948))
, useLabel(PS_v1068)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1073)
,	/* FN_LAMBDA947: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 90065
, useLabel(ST_v1072)
,	/* CT_v1073: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA947: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA947))
, useLabel(PS_v1071)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1076)
,	/* FN_LAMBDA946: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 80065
, useLabel(ST_v1075)
,	/* CT_v1076: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA946: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA946))
, useLabel(PS_v1074)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v1079)
,	/* FN_LAMBDA945: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v1048)
, 70062
, useLabel(ST_v1078)
,	/* CT_v1079: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA945: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA945))
, useLabel(PS_v1077)
, 0
, 0
, 0
, bytes2word(13,0,12,1)
, bytes2word(11,2,10,3)
, bytes2word(9,4,8,5)
, bytes2word(7,6,6,7)
, bytes2word(5,8,4,9)
, bytes2word(3,10,2,11)
, bytes2word(1,12,0,13)
, useLabel(CT_v1084)
,};
Node FN_Prelude_46Show_46Prelude_4612_46show[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_ARG,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1083)
, 0
, 0
, 0
, 0
, useLabel(PS_v1082)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v1081)
,	/* CT_v1084: (byte 0) */
  HW(2,13)
, 0
,};
Node F0_Prelude_46Show_46Prelude_4612_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612_46show),13)
, useLabel(PS_v1080)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(13,0,12,1)
, bytes2word(11,2,10,3)
, bytes2word(9,4,8,5)
, bytes2word(7,6,6,7)
, bytes2word(5,8,4,9)
, bytes2word(3,10,2,11)
, bytes2word(1,12,0,13)
, useLabel(CT_v1089)
,};
Node FN_Prelude_46Show_46Prelude_4612_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,22)
, bytes2word(HEAP_ARG,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v1088)
, 0
, 0
, 0
, 0
, useLabel(PS_v1087)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v1086)
,	/* CT_v1089: (byte 0) */
  HW(2,13)
, 0
,};
Node F0_Prelude_46Show_46Prelude_4612_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612_46showList),13)
, useLabel(PS_v1085)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(0,0,12,0)
, bytes2word(11,1,10,2)
, bytes2word(9,3,8,4)
, bytes2word(7,5,6,6)
, bytes2word(5,7,4,8)
, bytes2word(3,9,2,10)
, bytes2word(1,11,0,12)
, useLabel(CT_v1097)
,};
Node FN_Prelude_46Show_46Prelude_4612[] = {
  bytes2word(NEEDHEAP_P1,82,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG_ARG)
, bytes2word(7,8,HEAP_ARG_ARG,9)
, bytes2word(10,HEAP_ARG_ARG,11,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG_ARG,7,8)
, bytes2word(HEAP_ARG_ARG,9,10,HEAP_ARG_ARG)
, bytes2word(11,12,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v1096)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v1095)
, 0
, 0
, 0
, 0
, useLabel(PS_v1094)
, 0
, 0
, 0
, 0
, useLabel(PS_v1093)
, 0
, 0
, 0
, 0
, useLabel(PS_v1092)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v1091)
,	/* CT_v1097: (byte 0) */
  HW(4,12)
, 0
,};
Node F0_Prelude_46Show_46Prelude_4612[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612),12)
, useLabel(PS_v1090)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_4612_46show),1)
,	/* ST_v1048: (byte 0) */
  bytes2word(44,0,0,0)
,};
Node PP_Prelude_46Show_46Prelude_4612[] = {
 };
Node PC_Prelude_46Show_46Prelude_4612[] = {
 	/* ST_v1091: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,0)
,};
Node PP_Prelude_46Show_46Prelude_4612_46show[] = {
 };
Node PC_Prelude_46Show_46Prelude_4612_46show[] = {
 	/* ST_v1081: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,46)
, bytes2word(115,104,111,119)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Show_46Prelude_4612_46showList[] = {
 };
Node PC_Prelude_46Show_46Prelude_4612_46showList[] = {
 	/* ST_v1086: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,46)
, bytes2word(115,104,111,119)
, bytes2word(76,105,115,116)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Show_46Prelude_4612_46showsPrec[] = {
 };
Node PC_Prelude_46Show_46Prelude_4612_46showsPrec[] = {
 	/* ST_v1027: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
,	/* PP_LAMBDA948: (byte 2) */
 	/* PC_LAMBDA948: (byte 2) */
 	/* ST_v1069: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(49,48,58,54)
, bytes2word(53,45,49,48)
,	/* PP_LAMBDA949: (byte 4) */
 	/* PC_LAMBDA949: (byte 4) */
 	/* ST_v1066: (byte 4) */
  bytes2word(58,54,55,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
, bytes2word(99,58,49,49)
, bytes2word(58,54,53,45)
, bytes2word(49,49,58,54)
,	/* PP_LAMBDA950: (byte 2) */
 	/* PC_LAMBDA950: (byte 2) */
 	/* ST_v1063: (byte 2) */
  bytes2word(55,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(49,50,58,54)
, bytes2word(53,45,49,50)
,	/* PP_LAMBDA951: (byte 4) */
 	/* PC_LAMBDA951: (byte 4) */
 	/* ST_v1060: (byte 4) */
  bytes2word(58,54,55,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
, bytes2word(99,58,49,51)
, bytes2word(58,54,53,45)
, bytes2word(49,51,58,54)
,	/* PP_LAMBDA952: (byte 2) */
 	/* PC_LAMBDA952: (byte 2) */
 	/* ST_v1057: (byte 2) */
  bytes2word(55,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(49,52,58,54)
, bytes2word(53,45,49,52)
,	/* PP_LAMBDA953: (byte 4) */
 	/* PC_LAMBDA953: (byte 4) */
 	/* ST_v1054: (byte 4) */
  bytes2word(58,54,55,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
, bytes2word(99,58,49,53)
, bytes2word(58,54,53,45)
, bytes2word(49,53,58,54)
,	/* PP_LAMBDA954: (byte 2) */
 	/* PC_LAMBDA954: (byte 2) */
 	/* ST_v1051: (byte 2) */
  bytes2word(55,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(49,54,58,54)
, bytes2word(53,45,49,54)
,	/* PP_LAMBDA955: (byte 4) */
 	/* PC_LAMBDA955: (byte 4) */
 	/* ST_v1047: (byte 4) */
  bytes2word(58,54,55,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
, bytes2word(99,58,49,55)
, bytes2word(58,54,53,45)
, bytes2word(49,55,58,54)
,	/* PP_LAMBDA945: (byte 2) */
 	/* PC_LAMBDA945: (byte 2) */
 	/* ST_v1078: (byte 2) */
  bytes2word(55,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(55,58,54,50)
, bytes2word(45,55,58,54)
,	/* PP_LAMBDA946: (byte 2) */
 	/* PC_LAMBDA946: (byte 2) */
 	/* ST_v1075: (byte 2) */
  bytes2word(52,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(56,58,54,53)
, bytes2word(45,56,58,54)
,	/* PP_LAMBDA947: (byte 2) */
 	/* PC_LAMBDA947: (byte 2) */
 	/* ST_v1072: (byte 2) */
  bytes2word(55,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,80)
, bytes2word(114,101,99,58)
, bytes2word(57,58,54,53)
, bytes2word(45,57,58,54)
, bytes2word(55,0,0,0)
,};
Node PP_Prelude_46Show_46Prelude_4612_46showsType[] = {
 };
Node PC_Prelude_46Show_46Prelude_4612_46showsType[] = {
 	/* ST_v962: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,49,50,46)
, bytes2word(115,104,111,119)
, bytes2word(115,84,121,112)
,	/* PP_LAMBDA932: (byte 2) */
 	/* PC_LAMBDA932: (byte 2) */
 	/* ST_v1020: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,49)
,	/* PP_LAMBDA944: (byte 2) */
 	/* PC_LAMBDA944: (byte 2) */
 	/* ST_v982: (byte 2) */
  bytes2word(54,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,49)
,	/* PP_LAMBDA943: (byte 2) */
 	/* PC_LAMBDA943: (byte 2) */
 	/* ST_v985: (byte 2) */
  bytes2word(56,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,50)
,	/* PP_LAMBDA942: (byte 2) */
 	/* PC_LAMBDA942: (byte 2) */
 	/* ST_v988: (byte 2) */
  bytes2word(48,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,50)
,	/* PP_LAMBDA941: (byte 2) */
 	/* PC_LAMBDA941: (byte 2) */
 	/* ST_v991: (byte 2) */
  bytes2word(50,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,50)
,	/* PP_LAMBDA940: (byte 2) */
 	/* PC_LAMBDA940: (byte 2) */
 	/* ST_v994: (byte 2) */
  bytes2word(52,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,50)
,	/* PP_LAMBDA939: (byte 2) */
 	/* PC_LAMBDA939: (byte 2) */
 	/* ST_v997: (byte 2) */
  bytes2word(54,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,50)
,	/* PP_LAMBDA938: (byte 2) */
 	/* PC_LAMBDA938: (byte 2) */
 	/* ST_v1000: (byte 2) */
  bytes2word(56,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,51)
,	/* PP_LAMBDA937: (byte 2) */
 	/* PC_LAMBDA937: (byte 2) */
 	/* ST_v1003: (byte 2) */
  bytes2word(48,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,51)
,	/* PP_LAMBDA936: (byte 2) */
 	/* PC_LAMBDA936: (byte 2) */
 	/* ST_v1006: (byte 2) */
  bytes2word(50,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,51)
,	/* PP_LAMBDA935: (byte 2) */
 	/* PC_LAMBDA935: (byte 2) */
 	/* ST_v1009: (byte 2) */
  bytes2word(52,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,51)
,	/* PP_LAMBDA934: (byte 2) */
 	/* PC_LAMBDA934: (byte 2) */
 	/* ST_v1012: (byte 2) */
  bytes2word(54,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,51)
,	/* PP_LAMBDA933: (byte 2) */
 	/* PC_LAMBDA933: (byte 2) */
 	/* ST_v1015: (byte 2) */
  bytes2word(56,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,49)
, bytes2word(50,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(50,48,58,52)
, bytes2word(48,0,0,0)
,	/* PS_v1030: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v1032: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_Prelude_46showString)
,	/* PS_v1029: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_Prelude_46showChar)
,	/* PS_v1031: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_Prelude_46shows)
,	/* PS_v1044: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_Prelude_46_46)
,	/* PS_v1026: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_Prelude_46Show_46Prelude_4612_46showsPrec)
,	/* PS_v1033: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA945)
,	/* PS_v1034: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA946)
,	/* PS_v1035: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA947)
,	/* PS_v1036: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA948)
,	/* PS_v1037: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA949)
,	/* PS_v1038: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA950)
,	/* PS_v1039: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA951)
,	/* PS_v1040: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA952)
,	/* PS_v1041: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA953)
,	/* PS_v1042: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA954)
,	/* PS_v1043: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsPrec)
, useLabel(PC_LAMBDA955)
,	/* PS_v977: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v976: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_Prelude_46showChar)
,	/* PS_v979: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_Prelude_46_46)
,	/* PS_v978: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_Prelude_46showsType)
,	/* PS_v961: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_Prelude_46Show_46Prelude_4612_46showsType)
,	/* PS_v963: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA932)
,	/* PS_v964: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA933)
,	/* PS_v965: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA934)
,	/* PS_v966: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA935)
,	/* PS_v967: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA936)
,	/* PS_v968: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA937)
,	/* PS_v969: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA938)
,	/* PS_v970: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA939)
,	/* PS_v971: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA940)
,	/* PS_v972: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA941)
,	/* PS_v973: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA942)
,	/* PS_v974: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA943)
,	/* PS_v975: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showsType)
, useLabel(PC_LAMBDA944)
,	/* PS_v1088: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showList)
, useLabel(PC_Prelude_46_95_46showList)
,	/* PS_v1085: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showList)
, useLabel(PC_Prelude_46Show_46Prelude_4612_46showList)
,	/* PS_v1087: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46showList)
, useLabel(PC_Prelude_46Show_46Prelude_4612)
,	/* PS_v1083: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46show)
, useLabel(PC_Prelude_46_95_46show)
,	/* PS_v1080: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46show)
, useLabel(PC_Prelude_46Show_46Prelude_4612_46show)
,	/* PS_v1082: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612_46show)
, useLabel(PC_Prelude_46Show_46Prelude_4612)
,	/* PS_v1092: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612)
, useLabel(PC_Prelude_46Show_46Prelude_4612_46showsPrec)
,	/* PS_v1093: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612)
, useLabel(PC_Prelude_46Show_46Prelude_4612_46showsType)
,	/* PS_v1094: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612)
, useLabel(PC_Prelude_46Show_46Prelude_4612_46showList)
,	/* PS_v1095: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612)
, useLabel(PC_Prelude_46Show_46Prelude_4612_46show)
,	/* PS_v1090: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612)
, useLabel(PC_Prelude_46Show_46Prelude_4612)
,	/* PS_v1096: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Show_46Prelude_4612)
, useLabel(PC_Prelude_464)
,	/* PS_v1022: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA932)
, useLabel(PC_Prelude_4612)
,	/* PS_v1019: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA932)
, useLabel(PC_LAMBDA932)
,	/* PS_v1014: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA933)
, useLabel(PC_LAMBDA933)
,	/* PS_v1011: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA934)
, useLabel(PC_LAMBDA934)
,	/* PS_v1008: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA935)
, useLabel(PC_LAMBDA935)
,	/* PS_v1005: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA936)
, useLabel(PC_LAMBDA936)
,	/* PS_v1002: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA937)
, useLabel(PC_LAMBDA937)
,	/* PS_v999: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA938)
, useLabel(PC_LAMBDA938)
,	/* PS_v996: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA939)
, useLabel(PC_LAMBDA939)
,	/* PS_v993: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA940)
, useLabel(PC_LAMBDA940)
,	/* PS_v990: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA941)
, useLabel(PC_LAMBDA941)
,	/* PS_v987: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA942)
, useLabel(PC_LAMBDA942)
,	/* PS_v984: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA943)
, useLabel(PC_LAMBDA943)
,	/* PS_v981: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA944)
, useLabel(PC_LAMBDA944)
,	/* PS_v1077: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA945)
, useLabel(PC_LAMBDA945)
,	/* PS_v1074: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA946)
, useLabel(PC_LAMBDA946)
,	/* PS_v1071: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA947)
, useLabel(PC_LAMBDA947)
,	/* PS_v1068: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA948)
, useLabel(PC_LAMBDA948)
,	/* PS_v1065: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA949)
, useLabel(PC_LAMBDA949)
,	/* PS_v1062: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA950)
, useLabel(PC_LAMBDA950)
,	/* PS_v1059: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA951)
, useLabel(PC_LAMBDA951)
,	/* PS_v1056: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA952)
, useLabel(PC_LAMBDA952)
,	/* PS_v1053: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA953)
, useLabel(PC_LAMBDA953)
,	/* PS_v1050: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA954)
, useLabel(PC_LAMBDA954)
,	/* PS_v1046: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA955)
, useLabel(PC_LAMBDA955)
,};

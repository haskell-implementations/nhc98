#include "newmacros.h"
#include "runtime.h"

#define v226	((void*)startLabel+18)
#define v227	((void*)startLabel+46)
#define CT_v235	((void*)startLabel+244)
#define FN_LAMBDA223	((void*)startLabel+296)
#define CT_v242	((void*)startLabel+432)
#define F0_LAMBDA223	((void*)startLabel+440)
#define FN_LAMBDA222	((void*)startLabel+488)
#define CT_v245	((void*)startLabel+556)
#define F0_LAMBDA222	((void*)startLabel+564)
#define FN_List_46Prelude_46162_46interleave	((void*)startLabel+596)
#define v247	((void*)startLabel+608)
#define v248	((void*)startLabel+647)
#define CT_v258	((void*)startLabel+940)
#define F0_List_46Prelude_46162_46interleave	((void*)startLabel+948)
#define FN_LAMBDA221	((void*)startLabel+1000)
#define CT_v262	((void*)startLabel+1068)
#define F0_LAMBDA221	((void*)startLabel+1076)
#define ST_v229	((void*)startLabel+1096)
#define PP_LAMBDA221	((void*)startLabel+1114)
#define PC_LAMBDA221	((void*)startLabel+1114)
#define ST_v260	((void*)startLabel+1114)
#define PP_LAMBDA222	((void*)startLabel+1138)
#define PC_LAMBDA222	((void*)startLabel+1138)
#define PP_LAMBDA223	((void*)startLabel+1138)
#define PC_LAMBDA223	((void*)startLabel+1138)
#define ST_v237	((void*)startLabel+1138)
#define PP_List_46Prelude_46162_46interleave	((void*)startLabel+1166)
#define PC_List_46Prelude_46162_46interleave	((void*)startLabel+1166)
#define ST_v250	((void*)startLabel+1166)
#define PS_v234	((void*)startLabel+1196)
#define PS_v231	((void*)startLabel+1208)
#define PS_v232	((void*)startLabel+1220)
#define PS_v228	((void*)startLabel+1232)
#define PS_v233	((void*)startLabel+1244)
#define PS_v255	((void*)startLabel+1256)
#define PS_v257	((void*)startLabel+1268)
#define PS_v256	((void*)startLabel+1280)
#define PS_v252	((void*)startLabel+1292)
#define PS_v253	((void*)startLabel+1304)
#define PS_v249	((void*)startLabel+1316)
#define PS_v254	((void*)startLabel+1328)
#define PS_v261	((void*)startLabel+1340)
#define PS_v259	((void*)startLabel+1352)
#define PS_v244	((void*)startLabel+1364)
#define PS_v243	((void*)startLabel+1376)
#define PS_v240	((void*)startLabel+1388)
#define PS_v241	((void*)startLabel+1400)
#define PS_v239	((void*)startLabel+1412)
#define PS_v238	((void*)startLabel+1424)
#define PS_v236	((void*)startLabel+1436)
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_43_43[];
extern Node PM_List[];
extern Node PC_Prelude_46_95foldr[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46map[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v235)
,};
Node FN_List_46permutations[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v226: (byte 2) */
  bytes2word(TOP(32),BOT(32),POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,15,HEAP_OFF_N1)
,	/* v227: (byte 2) */
  bytes2word(11,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v234)
, 0
, 0
, 0
, 0
, useLabel(PS_v228)
, 0
, 0
, 0
, 0
, useLabel(PS_v233)
, 0
, 0
, 0
, 0
, useLabel(PS_v232)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v231)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v229)
,	/* CT_v235: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46permutations[] = {
  CAPTAG(useLabel(FN_List_46permutations),1)
, useLabel(PS_v228)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA223),2)
, VAPTAG(useLabel(FN_List_46permutations))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v242)
,	/* FN_LAMBDA223: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(23,HEAP_OFF_N1,14,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v241)
, 0
, 0
, 0
, 0
, useLabel(PS_v240)
, 0
, 0
, 0
, 0
, useLabel(PS_v239)
, 0
, 0
, 0
, 0
, useLabel(PS_v238)
, 0
, 0
, 0
, 0
, 70028
, useLabel(ST_v237)
,	/* CT_v242: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),3)
, useLabel(PS_v236)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA222),2)
, CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v245)
,	/* FN_LAMBDA222: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v244)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, 70028
, useLabel(ST_v237)
,	/* CT_v245: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA222: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA222),2)
, useLabel(PS_v243)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,	/* FN_List_46Prelude_46162_46interleave: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(59,TABLESWITCH,2,NOP)
,	/* v247: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(43),BOT(43))
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,11,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
,	/* v248: (byte 3) */
  bytes2word(HEAP_OFF_N1,11,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,0,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,13,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_ARG,1,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(24,HEAP_OFF_N1,14,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(38,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v257)
, 0
, 0
, 0
, 0
, useLabel(PS_v256)
, 0
, 0
, 0
, 0
, useLabel(PS_v255)
, 0
, 0
, 0
, 0
, useLabel(PS_v249)
, 0
, 0
, 0
, 0
, useLabel(PS_v254)
, 0
, 0
, 0
, 0
, useLabel(PS_v253)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v252)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 90009
, useLabel(ST_v250)
,	/* CT_v258: (byte 0) */
  HW(5,2)
, 0
,	/* F0_List_46Prelude_46162_46interleave: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, useLabel(PS_v249)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA221),1)
, CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,	/* FN_LAMBDA221: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, 100050
, useLabel(ST_v260)
,	/* CT_v262: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA221: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA221),2)
, useLabel(PS_v259)
, 0
, 0
, 0
,};
Node PP_List_46permutations[] = {
 };
Node PC_List_46permutations[] = {
 	/* ST_v229: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,112,101,114)
, bytes2word(109,117,116,97)
, bytes2word(116,105,111,110)
,	/* PP_LAMBDA221: (byte 2) */
 	/* PC_LAMBDA221: (byte 2) */
 	/* ST_v260: (byte 2) */
  bytes2word(115,0,76,105)
, bytes2word(115,116,46,112)
, bytes2word(101,114,109,117)
, bytes2word(116,97,116,105)
, bytes2word(111,110,115,58)
, bytes2word(49,48,58,53)
,	/* PP_LAMBDA222: (byte 2) */
 	/* PC_LAMBDA222: (byte 2) */
 	/* PP_LAMBDA223: (byte 2) */
 	/* PC_LAMBDA223: (byte 2) */
 	/* ST_v237: (byte 2) */
  bytes2word(48,0,76,105)
, bytes2word(115,116,46,112)
, bytes2word(101,114,109,117)
, bytes2word(116,97,116,105)
, bytes2word(111,110,115,58)
, bytes2word(55,58,50,56)
, bytes2word(45,55,58,55)
,	/* PP_List_46Prelude_46162_46interleave: (byte 2) */
 	/* PC_List_46Prelude_46162_46interleave: (byte 2) */
 	/* ST_v250: (byte 2) */
  bytes2word(57,0,76,105)
, bytes2word(115,116,46,112)
, bytes2word(101,114,109,117)
, bytes2word(116,97,116,105)
, bytes2word(111,110,115,58)
, bytes2word(57,58,57,45)
, bytes2word(49,48,58,54)
, bytes2word(57,0,0,0)
,	/* PS_v234: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46permutations)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v231: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46permutations)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v232: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46permutations)
, useLabel(PC_Prelude_46_58)
,	/* PS_v228: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46permutations)
, useLabel(PC_List_46permutations)
,	/* PS_v233: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46permutations)
, useLabel(PC_LAMBDA223)
,	/* PS_v255: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46Prelude_46162_46interleave)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v257: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46Prelude_46162_46interleave)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v256: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46Prelude_46162_46interleave)
, useLabel(PC_Prelude_46map)
,	/* PS_v252: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46Prelude_46162_46interleave)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v253: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46Prelude_46162_46interleave)
, useLabel(PC_Prelude_46_58)
,	/* PS_v249: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46Prelude_46162_46interleave)
, useLabel(PC_List_46Prelude_46162_46interleave)
,	/* PS_v254: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46Prelude_46162_46interleave)
, useLabel(PC_LAMBDA221)
,	/* PS_v261: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA221)
, useLabel(PC_Prelude_46_58)
,	/* PS_v259: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA221)
, useLabel(PC_LAMBDA221)
,	/* PS_v244: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA222)
, useLabel(PC_Prelude_46_58)
,	/* PS_v243: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA222)
, useLabel(PC_LAMBDA222)
,	/* PS_v240: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA223)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v241: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA223)
, useLabel(PC_Prelude_46_95foldr)
,	/* PS_v239: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA223)
, useLabel(PC_List_46Prelude_46162_46interleave)
,	/* PS_v238: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA223)
, useLabel(PC_LAMBDA222)
,	/* PS_v236: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_LAMBDA223)
, useLabel(PC_LAMBDA223)
,};

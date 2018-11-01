#include "newmacros.h"
#include "runtime.h"

#define PS_NHC_46Binary_46File	((void*)startLabel+20)
#define PS_NHC_46Binary_46Memory	((void*)startLabel+52)
#define FN_NHC_46Binary_46toBinLocation	((void*)startLabel+92)
#define v210	((void*)startLabel+108)
#define v211	((void*)startLabel+118)
#define CT_v218	((void*)startLabel+224)
#define F0_NHC_46Binary_46toBinLocation	((void*)startLabel+232)
#define v220	((void*)startLabel+270)
#define v221	((void*)startLabel+307)
#define CT_v230	((void*)startLabel+528)
#define FN_LAMBDA205	((void*)startLabel+568)
#define CT_v234	((void*)startLabel+612)
#define CF_LAMBDA205	((void*)startLabel+620)
#define ST_v233	((void*)startLabel+640)
#define ST_v223	((void*)startLabel+644)
#define PP_LAMBDA205	((void*)startLabel+671)
#define PC_LAMBDA205	((void*)startLabel+671)
#define ST_v232	((void*)startLabel+671)
#define PP_NHC_46Binary_46toBinLocation	((void*)startLabel+710)
#define PC_NHC_46Binary_46toBinLocation	((void*)startLabel+710)
#define ST_v213	((void*)startLabel+710)
#define PS_v227	((void*)startLabel+736)
#define PS_v228	((void*)startLabel+748)
#define PS_v225	((void*)startLabel+760)
#define PS_v229	((void*)startLabel+772)
#define PS_v222	((void*)startLabel+784)
#define PS_v226	((void*)startLabel+796)
#define PS_v216	((void*)startLabel+808)
#define PS_v217	((void*)startLabel+820)
#define PS_v212	((void*)startLabel+832)
#define PS_v231	((void*)startLabel+844)
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Binary_46RW[];
extern Node PC_Prelude_463[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  42
,};
Node PP_NHC_46Binary_46File[] = {
 };
Node PC_NHC_46Binary_46File[] = {
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,70)
, bytes2word(105,108,101,0)
,	/* PS_NHC_46Binary_46File: (byte 0) */
  useLabel(PP_NHC_46Binary_46File)
, useLabel(PP_NHC_46Binary_46File)
, useLabel(PC_NHC_46Binary_46File)
,};
Node PP_NHC_46Binary_46Memory[] = {
 };
Node PC_NHC_46Binary_46Memory[] = {
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,77)
, bytes2word(101,109,111,114)
, bytes2word(121,0,0,0)
,	/* PS_NHC_46Binary_46Memory: (byte 0) */
  useLabel(PP_NHC_46Binary_46Memory)
, useLabel(PP_NHC_46Binary_46Memory)
, useLabel(PC_NHC_46Binary_46Memory)
,};
Node C0_NHC_46Binary_46Memory[] = {
  CONSTR(0,0,0)
, useLabel(PS_NHC_46Binary_46Memory)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v218)
,	/* FN_NHC_46Binary_46toBinLocation: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(3,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v210: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v211: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_P1,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v217)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v216)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 130001
, useLabel(ST_v213)
,	/* CT_v218: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46toBinLocation: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46toBinLocation),1)
, useLabel(PS_v212)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v230)
,};
Node FN_NHC_46Binary_46fromBinLocation[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v220: (byte 2) */
  bytes2word(TOP(41),BOT(41),POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,32,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,20,HEAP_OFF_N1,16)
,	/* v221: (byte 3) */
  bytes2word(HEAP_OFF_N1,12,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_N1,42,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,32,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_I1,HEAP_I2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v229)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v228)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v227)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v226)
, 0
, 0
, 0
, 0
, useLabel(PS_v225)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v223)
,	/* CT_v230: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Binary_46fromBinLocation[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46fromBinLocation),1)
, useLabel(PS_v222)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA205))
, bytes2word(0,0,0,0)
, useLabel(CT_v234)
,	/* FN_LAMBDA205: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v233)
, 100042
, useLabel(ST_v232)
,	/* CT_v234: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA205: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA205))
, useLabel(PS_v231)
, 0
, 0
, 0
,	/* ST_v233: (byte 0) */
  bytes2word(0,0,0,0)
,};
Node PP_NHC_46Binary_46fromBinLocation[] = {
 };
Node PC_NHC_46Binary_46fromBinLocation[] = {
 	/* ST_v223: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,102)
, bytes2word(114,111,109,66)
, bytes2word(105,110,76,111)
, bytes2word(99,97,116,105)
,	/* PP_LAMBDA205: (byte 3) */
 	/* PC_LAMBDA205: (byte 3) */
 	/* ST_v232: (byte 3) */
  bytes2word(111,110,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,102,114)
, bytes2word(111,109,66,105)
, bytes2word(110,76,111,99)
, bytes2word(97,116,105,111)
, bytes2word(110,58,49,48)
, bytes2word(58,52,50,45)
, bytes2word(49,48,58,52)
,	/* PP_NHC_46Binary_46toBinLocation: (byte 2) */
 	/* PC_NHC_46Binary_46toBinLocation: (byte 2) */
 	/* ST_v213: (byte 2) */
  bytes2word(51,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,116,111,66)
, bytes2word(105,110,76,111)
, bytes2word(99,97,116,105)
, bytes2word(111,110,0,0)
,	/* PS_v227: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46fromBinLocation)
, useLabel(PC_NHC_46Binary_46RW)
,	/* PS_v228: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46fromBinLocation)
, useLabel(PC_Prelude_463)
,	/* PS_v225: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46fromBinLocation)
, useLabel(PC_Prelude_46False)
,	/* PS_v229: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46fromBinLocation)
, useLabel(PC_Prelude_46True)
,	/* PS_v222: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46fromBinLocation)
, useLabel(PC_NHC_46Binary_46fromBinLocation)
,	/* PS_v226: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46fromBinLocation)
, useLabel(PC_LAMBDA205)
,	/* PS_v216: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46toBinLocation)
, useLabel(PC_NHC_46Binary_46Memory)
,	/* PS_v217: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46toBinLocation)
, useLabel(PC_NHC_46Binary_46File)
,	/* PS_v212: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46toBinLocation)
, useLabel(PC_NHC_46Binary_46toBinLocation)
,	/* PS_v231: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_LAMBDA205)
, useLabel(PC_LAMBDA205)
,};

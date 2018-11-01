#include "newmacros.h"
#include "runtime.h"

#define CT_v185	((void*)startLabel+208)
#define ST_v179	((void*)startLabel+264)
#define PS_v184	((void*)startLabel+280)
#define PS_v183	((void*)startLabel+292)
#define PS_v182	((void*)startLabel+304)
#define PS_v178	((void*)startLabel+316)
#define PS_v181	((void*)startLabel+328)
#define PS_v180	((void*)startLabel+340)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Numeric_46readInt[];
extern Node F0_Char_46isOctDigit[];
extern Node F0_Char_46digitToInt[];
extern Node PM_Numeric[];
extern Node PC_Numeric_46readInt[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v185)
,};
Node FN_Numeric_46readOct[] = {
  bytes2word(NEEDHEAP_P1,35,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CADR_N1,28)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(33,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_P1,13)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 8
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v179)
,	/* CT_v185: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Numeric_46readOct[] = {
  CAPTAG(useLabel(FN_Numeric_46readOct),1)
, useLabel(PS_v178)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Numeric_46readInt),1)
, useLabel(F0_Char_46isOctDigit)
, useLabel(F0_Char_46digitToInt)
,};
Node PP_Numeric_46readOct[] = {
 };
Node PC_Numeric_46readOct[] = {
 	/* ST_v179: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
, bytes2word(79,99,116,0)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readOct)
, useLabel(PC_Numeric_46readInt)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readOct)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readOct)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readOct)
, useLabel(PC_Numeric_46readOct)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readOct)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v180: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46readOct)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,};

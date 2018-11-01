#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+72)
#define ST_v184	((void*)startLabel+104)
#define PS_v185	((void*)startLabel+116)
#define PS_v183	((void*)startLabel+128)
extern Node FN_Prelude_46_62_62_61[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v186)
,};
Node FN_Prelude_46_61_60_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,PUSH_ARG_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v184)
,	/* CT_v186: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46_61_60_60[] = {
  CAPTAG(useLabel(FN_Prelude_46_61_60_60),3)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
,};
Node PP_Prelude_46_61_60_60[] = {
 };
Node PC_Prelude_46_61_60_60[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(61,60,60,0)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_61_60_60)
, useLabel(PC_Prelude_46_62_62_61)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_61_60_60)
, useLabel(PC_Prelude_46_61_60_60)
,};

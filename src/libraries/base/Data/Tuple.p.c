#include "newmacros.h"
#include "runtime.h"

#define CT_v209	((void*)startLabel+80)
#define ST_v202	((void*)startLabel+108)
#define ST_v206	((void*)startLabel+120)
#define PS_v208	((void*)startLabel+136)
#define PS_v205	((void*)startLabel+148)
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v209)
,};
Node FN_Data_46Tuple_46swap[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 1110001
, useLabel(ST_v206)
,	/* CT_v209: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Tuple_46swap[] = {
  CAPTAG(useLabel(FN_Data_46Tuple_46swap),1)
, useLabel(PS_v205)
, 0
, 0
, 0
,};
Node PM_Data_46Tuple[] = {
 	/* ST_v202: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,84,117,112)
, bytes2word(108,101,0,0)
,};
Node PP_Data_46Tuple_46swap[] = {
 };
Node PC_Data_46Tuple_46swap[] = {
 	/* ST_v206: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,84,117,112)
, bytes2word(108,101,46,115)
, bytes2word(119,97,112,0)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Data_46Tuple)
, useLabel(PP_Data_46Tuple_46swap)
, useLabel(PC_Prelude_462)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Data_46Tuple)
, useLabel(PP_Data_46Tuple_46swap)
, useLabel(PC_Data_46Tuple_46swap)
,};

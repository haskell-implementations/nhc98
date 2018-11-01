#include "newmacros.h"
#include "runtime.h"

#define CT_v207	((void*)startLabel+44)
#define ST_v202	((void*)startLabel+56)
#define ST_v205	((void*)startLabel+67)
extern Node TM_Data_46Tuple[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v207)
,};
Node FN_Data_46Tuple_46swap[] = {
  useLabel(TM_Data_46Tuple)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 1110001
, useLabel(ST_v205)
,	/* CT_v207: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Tuple_46swap[] = {
  CAPTAG(useLabel(FN_Data_46Tuple_46swap),1)
,};
Node PM_Data_46Tuple[] = {
 	/* ST_v202: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,84,117,112)
,	/* ST_v205: (byte 3) */
  bytes2word(108,101,0,68)
, bytes2word(97,116,97,46)
, bytes2word(84,117,112,108)
, bytes2word(101,46,115,119)
, bytes2word(97,112,0,0)
,};

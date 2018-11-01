#include "newmacros.h"
#include "runtime.h"

#define v180	((void*)startLabel+26)
#define v181	((void*)startLabel+33)
#define CT_v184	((void*)startLabel+56)
#define FN_LAMBDA177	((void*)startLabel+88)
#define CT_v187	((void*)startLabel+120)
#define CF_LAMBDA177	((void*)startLabel+128)
#define ST_v182	((void*)startLabel+132)
#define ST_v185	((void*)startLabel+147)
#define ST_v186	((void*)startLabel+172)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46foldl[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Prelude_46foldl1[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v180: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v181: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_I1)
, bytes2word(HEAP_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v182)
,	/* CT_v184: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46foldl1[] = {
  CAPTAG(useLabel(FN_Prelude_46foldl1),2)
, VAPTAG(useLabel(FN_LAMBDA177))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46foldl))
, bytes2word(0,0,0,0)
, useLabel(CT_v187)
,	/* FN_LAMBDA177: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v186)
, 50027
, useLabel(ST_v185)
,	/* CT_v187: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA177: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA177))
,	/* ST_v182: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,111,108,100)
,	/* ST_v185: (byte 3) */
  bytes2word(108,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,102)
, bytes2word(111,108,100,108)
, bytes2word(49,58,53,58)
, bytes2word(50,55,45,53)
,	/* ST_v186: (byte 4) */
  bytes2word(58,53,56,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(102,111,108,100)
, bytes2word(108,49,58,32)
, bytes2word(101,109,112,116)
, bytes2word(121,32,108,105)
, bytes2word(115,116,0,0)
,};

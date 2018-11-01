#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+32)
#define FN_LAMBDA181	((void*)startLabel+64)
#define CT_v186	((void*)startLabel+100)
#define F0_LAMBDA181	((void*)startLabel+108)
#define ST_v183	((void*)startLabel+112)
#define ST_v185	((void*)startLabel+125)
extern Node TM_Prelude[];
extern Node FN_Prelude_46zipWith3[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v184)
,};
Node FN_Prelude_46zip3[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46zip3[] = {
  VAPTAG(useLabel(FN_Prelude_46zip3))
, CAPTAG(useLabel(FN_LAMBDA181),3)
, CAPTAG(useLabel(FN_Prelude_46zipWith3),3)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v186)
,	/* FN_LAMBDA181: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
, 60023
, useLabel(ST_v185)
,	/* CT_v186: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA181: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA181),3)
,	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(122,105,112,51)
,	/* ST_v185: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,122,105,112)
, bytes2word(51,58,54,58)
, bytes2word(50,51,45,54)
, bytes2word(58,50,54,0)
,};

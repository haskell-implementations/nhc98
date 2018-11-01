#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+124)
#define ST_v187	((void*)startLabel+164)
#define PS_v189	((void*)startLabel+176)
#define PS_v188	((void*)startLabel+188)
#define PS_v190	((void*)startLabel+200)
#define PS_v186	((void*)startLabel+212)
extern Node FN_Monad_46mplus[];
extern Node FN_Monad_46mzero[];
extern Node FN_Prelude_46foldr[];
extern Node PM_Monad[];
extern Node PC_Monad_46mzero[];
extern Node PC_Monad_46mplus[];
extern Node PC_Prelude_46foldr[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Monad_46msum[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v187)
,	/* CT_v191: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Monad_46msum[] = {
  CAPTAG(useLabel(FN_Monad_46msum),2)
, useLabel(PS_v186)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Monad_46mplus))
, VAPTAG(useLabel(FN_Monad_46mzero))
, VAPTAG(useLabel(FN_Prelude_46foldr))
,};
Node PP_Monad_46msum[] = {
 };
Node PC_Monad_46msum[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,109,115)
, bytes2word(117,109,0,0)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46msum)
, useLabel(PC_Monad_46mzero)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46msum)
, useLabel(PC_Monad_46mplus)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46msum)
, useLabel(PC_Prelude_46foldr)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46msum)
, useLabel(PC_Monad_46msum)
,};

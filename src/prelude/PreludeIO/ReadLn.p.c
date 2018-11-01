#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+84)
#define FN_LAMBDA190	((void*)startLabel+136)
#define CT_v202	((void*)startLabel+244)
#define F0_LAMBDA190	((void*)startLabel+252)
#define FN_LAMBDA189	((void*)startLabel+292)
#define CT_v206	((void*)startLabel+344)
#define F0_LAMBDA189	((void*)startLabel+352)
#define ST_v193	((void*)startLabel+376)
#define PP_LAMBDA190	((void*)startLabel+391)
#define PC_LAMBDA190	((void*)startLabel+391)
#define ST_v198	((void*)startLabel+391)
#define PP_LAMBDA189	((void*)startLabel+416)
#define PC_LAMBDA189	((void*)startLabel+416)
#define ST_v204	((void*)startLabel+416)
#define PS_v192	((void*)startLabel+444)
#define PS_v195	((void*)startLabel+456)
#define PS_v194	((void*)startLabel+468)
#define PS_v205	((void*)startLabel+480)
#define PS_v203	((void*)startLabel+492)
#define PS_v199	((void*)startLabel+504)
#define PS_v201	((void*)startLabel+516)
#define PS_v200	((void*)startLabel+528)
#define PS_v197	((void*)startLabel+540)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getLine[];
extern Node FN_Prelude_46readIO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node PC_Prelude_46readIO[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v196)
,};
Node FN_Prelude_46readLn[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v193)
,	/* CT_v196: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46readLn[] = {
  CAPTAG(useLabel(FN_Prelude_46readLn),1)
, useLabel(PS_v192)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA190),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getLine)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v202)
,	/* FN_LAMBDA190: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,11,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, 60028
, useLabel(ST_v198)
,	/* CT_v202: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA190: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA190),2)
, useLabel(PS_v197)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46readIO))
, CAPTAG(useLabel(FN_LAMBDA189),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v206)
,	/* FN_LAMBDA189: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, 70028
, useLabel(ST_v204)
,	/* CT_v206: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA189: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA189),1)
, useLabel(PS_v203)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
Node PP_Prelude_46readLn[] = {
 };
Node PC_Prelude_46readLn[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
,	/* PP_LAMBDA190: (byte 3) */
 	/* PC_LAMBDA190: (byte 3) */
 	/* ST_v198: (byte 3) */
  bytes2word(76,110,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,114)
, bytes2word(101,97,100,76)
, bytes2word(110,58,54,58)
, bytes2word(50,56,45,54)
,	/* PP_LAMBDA189: (byte 4) */
 	/* PC_LAMBDA189: (byte 4) */
 	/* ST_v204: (byte 4) */
  bytes2word(58,51,52,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(76,110,58,55)
, bytes2word(58,50,56,45)
, bytes2word(55,58,51,53)
, bytes2word(0,0,0,0)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46readLn)
, useLabel(PC_Prelude_46readLn)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46readLn)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46readLn)
, useLabel(PC_LAMBDA190)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA189)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46return)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA189)
, useLabel(PC_LAMBDA189)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA190)
, useLabel(PC_Prelude_46readIO)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA190)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA190)
, useLabel(PC_LAMBDA189)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA190)
, useLabel(PC_LAMBDA190)
,};

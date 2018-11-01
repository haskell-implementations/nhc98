#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+56)
#define FN_LAMBDA180	((void*)startLabel+92)
#define CT_v186	((void*)startLabel+124)
#define CF_LAMBDA180	((void*)startLabel+132)
#define ST_v185	((void*)startLabel+136)
#define ST_v182	((void*)startLabel+138)
#define ST_v184	((void*)startLabel+156)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_System_46cExitWith[];
extern Node FN_NonStdTrace_46trace[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_Prelude_46primError[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,HEAP_CVAL_IN3)
, bytes2word(HEAP_INT_N1,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 80001
, useLabel(ST_v182)
,	/* CT_v183: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46primError[] = {
  CAPTAG(useLabel(FN_Prelude_46primError),1)
, VAPTAG(useLabel(FN_LAMBDA180))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_System_46cExitWith))
, VAPTAG(useLabel(FN_NonStdTrace_46trace))
, bytes2word(0,0,0,0)
, useLabel(CT_v186)
,	/* FN_LAMBDA180: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v185)
, 80027
, useLabel(ST_v184)
,	/* CT_v186: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA180: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA180))
,	/* ST_v185: (byte 0) */
 	/* ST_v182: (byte 2) */
  bytes2word(10,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,112,114)
, bytes2word(105,109,69,114)
,	/* ST_v184: (byte 4) */
  bytes2word(114,111,114,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(69,114,114,111)
, bytes2word(114,58,56,58)
, bytes2word(50,55,45,56)
, bytes2word(58,51,48,0)
,};

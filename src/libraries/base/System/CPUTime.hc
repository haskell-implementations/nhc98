#include "newmacros.h"
#include "runtime.h"

#define FN_System_46CPUTime_46realToInteger	((void*)startLabel+12)
#define CT_v186	((void*)startLabel+36)
#define F0_System_46CPUTime_46realToInteger	((void*)startLabel+44)
extern Node FN_Prelude_46realToFrac[];
extern Node CF_Prelude_46Fractional_46Prelude_46Double[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Double_46round[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v186)
,	/* FN_System_46CPUTime_46realToInteger: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v186: (byte 0) */
  HW(5,2)
, 0
,	/* F0_System_46CPUTime_46realToInteger: (byte 0) */
  CAPTAG(useLabel(FN_System_46CPUTime_46realToInteger),2)
, VAPTAG(useLabel(FN_Prelude_46realToFrac))
, useLabel(CF_Prelude_46Fractional_46Prelude_46Double)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46round))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
,};

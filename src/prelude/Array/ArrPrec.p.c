#include "newmacros.h"
#include "runtime.h"

#define CT_v162	((void*)startLabel+28)
#define ST_v161	((void*)startLabel+56)
#define PS_v160	((void*)startLabel+72)
extern Node PM_Array[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v162)
,};
Node FN_Array_46arrPrec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,10,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v161)
,	/* CT_v162: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Array_46arrPrec[] = {
  VAPTAG(useLabel(FN_Array_46arrPrec))
, useLabel(PS_v160)
, 0
, 0
, 0
,};
Node PP_Array_46arrPrec[] = {
 };
Node PC_Array_46arrPrec[] = {
 	/* ST_v161: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,97,114)
, bytes2word(114,80,114,101)
, bytes2word(99,0,0,0)
,	/* PS_v160: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46arrPrec)
, useLabel(PC_Array_46arrPrec)
,};

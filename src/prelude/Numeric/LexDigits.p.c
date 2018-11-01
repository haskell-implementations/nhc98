#include "newmacros.h"
#include "runtime.h"

#define CT_v168	((void*)startLabel+60)
#define ST_v166	((void*)startLabel+96)
#define PS_v167	((void*)startLabel+116)
#define PS_v165	((void*)startLabel+128)
extern Node FN_Numeric_46nonnull[];
extern Node F0_Char_46isDigit[];
extern Node PM_Numeric[];
extern Node PC_Numeric_46nonnull[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v168)
,};
Node FN_Numeric_46lexDigits[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v167)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v166)
,	/* CT_v168: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Numeric_46lexDigits[] = {
  VAPTAG(useLabel(FN_Numeric_46lexDigits))
, useLabel(PS_v165)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Numeric_46nonnull),1)
, useLabel(F0_Char_46isDigit)
,};
Node PP_Numeric_46lexDigits[] = {
 };
Node PC_Numeric_46lexDigits[] = {
 	/* ST_v166: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(108,101,120,68)
, bytes2word(105,103,105,116)
, bytes2word(115,0,0,0)
,	/* PS_v167: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46lexDigits)
, useLabel(PC_Numeric_46nonnull)
,	/* PS_v165: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46lexDigits)
, useLabel(PC_Numeric_46lexDigits)
,};

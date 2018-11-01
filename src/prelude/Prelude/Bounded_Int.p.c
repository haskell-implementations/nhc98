#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+52)
#define CT_v184	((void*)startLabel+132)
#define CT_v188	((void*)startLabel+236)
#define ST_v186	((void*)startLabel+272)
#define ST_v180	((void*)startLabel+300)
#define ST_v183	((void*)startLabel+340)
#define PS_v182	((void*)startLabel+380)
#define PS_v179	((void*)startLabel+392)
#define PS_v185	((void*)startLabel+404)
#define PS_v187	((void*)startLabel+416)
extern Node PM_Prelude[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v181)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int_46maxBound[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,8,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 2147483647
, 70003
, useLabel(ST_v180)
,	/* CT_v181: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int_46maxBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int_46maxBound))
, useLabel(PS_v179)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v184)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int_46minBound[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,8,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, -2147483648
, 60003
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int_46minBound[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int_46minBound))
, useLabel(PS_v182)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Bounded_46Prelude_46Int[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 50010
, useLabel(ST_v186)
,	/* CT_v188: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Bounded_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_46Int))
, useLabel(PS_v185)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Bounded_46Prelude_46Int_46minBound)
, useLabel(CF_Prelude_46Bounded_46Prelude_46Int_46maxBound)
,};
Node PP_Prelude_46Bounded_46Prelude_46Int[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Int[] = {
 	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,0)
,};
Node PP_Prelude_46Bounded_46Prelude_46Int_46maxBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Int_46maxBound[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(109,97,120,66)
, bytes2word(111,117,110,100)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Bounded_46Prelude_46Int_46minBound[] = {
 };
Node PC_Prelude_46Bounded_46Prelude_46Int_46minBound[] = {
 	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(109,105,110,66)
, bytes2word(111,117,110,100)
, bytes2word(0,0,0,0)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Int_46minBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Int_46minBound)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Int_46maxBound)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Int_46maxBound)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Int)
, useLabel(PC_Prelude_46Bounded_46Prelude_46Int)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Bounded_46Prelude_46Int)
, useLabel(PC_Prelude_462)
,};

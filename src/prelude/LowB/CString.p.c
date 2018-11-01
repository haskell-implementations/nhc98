#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+84)
#define CT_v186	((void*)startLabel+304)
#define ST_v174	((void*)startLabel+340)
#define ST_v176	((void*)startLabel+348)
#define ST_v181	((void*)startLabel+368)
#define PS_v185	((void*)startLabel+388)
#define PS_v184	((void*)startLabel+400)
#define PS_v182	((void*)startLabel+412)
#define PS_v183	((void*)startLabel+424)
#define PS_v180	((void*)startLabel+436)
#define PS_v177	((void*)startLabel+448)
#define PS_v178	((void*)startLabel+460)
#define PS_v175	((void*)startLabel+472)
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46init[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46PackedString_46packString[];
extern Node PC_NHC_46PackedString_46packString[];
extern Node PC_Prelude_46_43_43[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];
extern Node PC_NHC_46PackedString_46unpackPS[];
extern Node PC_Prelude_46init[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_CString_46fromCString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v176)
,	/* CT_v179: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_CString_46fromCString[] = {
  CAPTAG(useLabel(FN_CString_46fromCString),1)
, useLabel(PS_v175)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_Prelude_46init))
, bytes2word(1,0,0,1)
, useLabel(CT_v186)
,};
Node FN_CString_46toCString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CHAR_P1)
, bytes2word(0,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v181)
,	/* CT_v186: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_CString_46toCString[] = {
  CAPTAG(useLabel(FN_CString_46toCString),1)
, useLabel(PS_v180)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
,};
Node PM_CString[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(67,83,116,114)
, bytes2word(105,110,103,0)
,};
Node PP_CString_46fromCString[] = {
 };
Node PC_CString_46fromCString[] = {
 	/* ST_v176: (byte 0) */
  bytes2word(67,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(102,114,111,109)
, bytes2word(67,83,116,114)
, bytes2word(105,110,103,0)
,};
Node PP_CString_46toCString[] = {
 };
Node PC_CString_46toCString[] = {
 	/* ST_v181: (byte 0) */
  bytes2word(67,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(116,111,67,83)
, bytes2word(116,114,105,110)
, bytes2word(103,0,0,0)
,	/* PS_v185: (byte 0) */
  useLabel(PM_CString)
, useLabel(PP_CString_46toCString)
, useLabel(PC_NHC_46PackedString_46packString)
,	/* PS_v184: (byte 0) */
  useLabel(PM_CString)
, useLabel(PP_CString_46toCString)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v182: (byte 0) */
  useLabel(PM_CString)
, useLabel(PP_CString_46toCString)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v183: (byte 0) */
  useLabel(PM_CString)
, useLabel(PP_CString_46toCString)
, useLabel(PC_Prelude_46_58)
,	/* PS_v180: (byte 0) */
  useLabel(PM_CString)
, useLabel(PP_CString_46toCString)
, useLabel(PC_CString_46toCString)
,	/* PS_v177: (byte 0) */
  useLabel(PM_CString)
, useLabel(PP_CString_46fromCString)
, useLabel(PC_NHC_46PackedString_46unpackPS)
,	/* PS_v178: (byte 0) */
  useLabel(PM_CString)
, useLabel(PP_CString_46fromCString)
, useLabel(PC_Prelude_46init)
,	/* PS_v175: (byte 0) */
  useLabel(PM_CString)
, useLabel(PP_CString_46fromCString)
, useLabel(PC_CString_46fromCString)
,};

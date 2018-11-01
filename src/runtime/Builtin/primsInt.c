#include <stdio.h>
#include <math.h>
#include "HsFFI.h"

/* Int8 */
int     primEqInt8  (HsInt8 d1, HsInt8 d2)	{ return (d1==d2); }
int     primLtInt8  (HsInt8 d1, HsInt8 d2)	{ return (d1<d2); }
int     primLeInt8  (HsInt8 d1, HsInt8 d2)	{ return (d1<=d2); }
int     primGtInt8  (HsInt8 d1, HsInt8 d2)	{ return (d1>d2); }
int     primGeInt8  (HsInt8 d1, HsInt8 d2)	{ return (d1>=d2); }
HsInt8  primAddInt8 (HsInt8 d1, HsInt8 d2)	{ return (d1+d2); }
HsInt8  primSubInt8 (HsInt8 d1, HsInt8 d2)	{ return (d1-d2); }
HsInt8  primMulInt8 (HsInt8 d1, HsInt8 d2)	{ return (d1*d2); }

HsInt8  primAbsInt8	(HsInt8 d)		{ return (d<0?-d:d); }
HsInt8  primSignumInt8	(HsInt8 d)		{ return (d<0?-1:(d==0?0:1)); }
HsInt8  primQuotInt8	(HsInt8 d1, HsInt8 d2)	{ return (d1/d2); }
HsInt8  primRemInt8	(HsInt8 d1, HsInt8 d2)	{ return (d1%d2); }


/* Int16 */
int     primEqInt16  (HsInt16 d1, HsInt16 d2)	{ return (d1==d2); }
int     primLtInt16  (HsInt16 d1, HsInt16 d2)	{ return (d1<d2); }
int     primLeInt16  (HsInt16 d1, HsInt16 d2)	{ return (d1<=d2); }
int     primGtInt16  (HsInt16 d1, HsInt16 d2)	{ return (d1>d2); }
int     primGeInt16  (HsInt16 d1, HsInt16 d2)	{ return (d1>=d2); }
HsInt16 primAddInt16 (HsInt16 d1, HsInt16 d2)	{ return (d1+d2); }
HsInt16 primSubInt16 (HsInt16 d1, HsInt16 d2)	{ return (d1-d2); }
HsInt16 primMulInt16 (HsInt16 d1, HsInt16 d2)	{ return (d1*d2); }

HsInt16 primAbsInt16	(HsInt16 d)		{ return (d<0?-d:d); }
HsInt16 primSignumInt16	(HsInt16 d)		{ return (d<0?-1:(d==0?0:1)); }
HsInt16 primQuotInt16	(HsInt16 d1, HsInt16 d2){ return (d1/d2); }
HsInt16 primRemInt16	(HsInt16 d1, HsInt16 d2){ return (d1%d2); }


/* Int32 */
int     primEqInt32  (HsInt32 d1, HsInt32 d2)	{ return (d1==d2); }
int     primLtInt32  (HsInt32 d1, HsInt32 d2)	{ return (d1<d2); }
int     primLeInt32  (HsInt32 d1, HsInt32 d2)	{ return (d1<=d2); }
int     primGtInt32  (HsInt32 d1, HsInt32 d2)	{ return (d1>d2); }
int     primGeInt32  (HsInt32 d1, HsInt32 d2)	{ return (d1>=d2); }
HsInt32 primAddInt32 (HsInt32 d1, HsInt32 d2)	{ return (d1+d2); }
HsInt32 primSubInt32 (HsInt32 d1, HsInt32 d2)	{ return (d1-d2); }
HsInt32 primMulInt32 (HsInt32 d1, HsInt32 d2)	{ return (d1*d2); }

HsInt32 primAbsInt32	(HsInt32 d)		{ return (d<0?-d:d); }
HsInt32 primSignumInt32	(HsInt32 d)		{ return (d<0?-1:(d==0?0:1)); }
HsInt32 primQuotInt32	(HsInt32 d1, HsInt32 d2){ return (d1/d2); }
HsInt32 primRemInt32	(HsInt32 d1, HsInt32 d2){ return (d1%d2); }


/* Int64 */
int     primEqInt64  (HsInt64 d1, HsInt64 d2)	{ return (d1==d2); }
int     primLtInt64  (HsInt64 d1, HsInt64 d2)	{ return (d1<d2); }
int     primLeInt64  (HsInt64 d1, HsInt64 d2)	{ return (d1<=d2); }
int     primGtInt64  (HsInt64 d1, HsInt64 d2)	{ return (d1>d2); }
int     primGeInt64  (HsInt64 d1, HsInt64 d2)	{ return (d1>=d2); }
HsInt64 primAddInt64 (HsInt64 d1, HsInt64 d2)	{ return (d1+d2); }
HsInt64 primSubInt64 (HsInt64 d1, HsInt64 d2)	{ return (d1-d2); }
HsInt64 primMulInt64 (HsInt64 d1, HsInt64 d2)	{ return (d1*d2); }

HsInt64 primAbsInt64	(HsInt64 d)		{ return (d<0?-d:d); }
HsInt64 primSignumInt64	(HsInt64 d)		{ return (d<0?-1:(d==0?0:1)); }
HsInt64 primQuotInt64	(HsInt64 d1, HsInt64 d2){ return (d1/d2); }
HsInt64 primRemInt64	(HsInt64 d1, HsInt64 d2){ return (d1%d2); }



/* Integer conversions */

extern HsInt64	primIntegerToInt64   (void* d);
extern void*	primIntegerFromInt64 (HsInt64 d);
#define FR_INT(i)	primIntegerToInt64(d)
#define TO_INT(i)	primIntegerFromInt64(d)
HsInt8	primInt8FromInteger  (void* d)		{
    HsInt64 i = FR_INT(d);
    if ((i < HS_INT8_MIN) || (i > HS_INT8_MAX))
	fprintf (stderr,"Warning: fromInteger truncates to fit Int8 value\n");
    return (HsInt8)i; }
HsInt16	primInt16FromInteger (void* d)		{
    HsInt64 i = FR_INT(d);
    if ((i < HS_INT16_MIN) || (i > HS_INT16_MAX))
	fprintf (stderr,"Warning: fromInteger truncates to fit Int16 value\n");
    return (HsInt16)i; }
HsInt32	primInt32FromInteger (void* d)		{
    HsInt64 i = FR_INT(d);
    if ((i < HS_INT32_MIN) || (i > HS_INT32_MAX))
	fprintf (stderr,"Warning: fromInteger truncates to fit Int32 value\n");
    return (HsInt32)i; }
HsInt64	primInt64FromInteger (void* d)		{
    HsInt64 i = FR_INT(d);
    if ((i < HS_INT64_MIN) || (i > HS_INT64_MAX))
	fprintf (stderr,"Warning: fromInteger truncates to fit Int64 value\n");
    return (HsInt64)i; }
void*	primInt8ToInteger  (HsInt8 d)		{ return TO_INT((HsInt64)d); }
void*	primInt16ToInteger (HsInt16 d)		{ return TO_INT((HsInt64)d); }
void*	primInt32ToInteger (HsInt32 d)		{ return TO_INT((HsInt64)d); }
void*	primInt64ToInteger (HsInt64 d)		{ return TO_INT(d); }



/* Enum conversions */

int	primFromEnumInt8	(HsInt8 d)	{ return (int)d; }
int	primFromEnumInt16	(HsInt16 d)	{ return (int)d; }
int	primFromEnumInt32	(HsInt32 d)	{
    if ((d < HS_INT_MIN) || (d > HS_INT_MAX))
	fprintf (stderr,"Warning: fromEnum truncates Int32 value to fit Int\n");
    return (int)d; }
int	primFromEnumInt64	(HsInt64 d)	{
    if ((d < HS_INT_MIN) || (d > HS_INT_MAX))
	fprintf (stderr,"Warning: fromEnum truncates Int64 value to fit Int\n");
    return (int)d; }
HsInt8	primToEnumInt8	  (int d)		{
    if ((d < HS_INT8_MIN) || (d > HS_INT8_MAX))
	fprintf (stderr,"Warning: toEnum truncates Int value to fit Int8\n");
    return (HsInt8)d; }
HsInt16	primToEnumInt16	  (int d)		{
    if ((d < HS_INT16_MIN) || (d > HS_INT16_MAX))
	fprintf (stderr,"Warning: toEnum truncates Int value to fit Int16\n");
    return (HsInt16)d; }
HsInt32	primToEnumInt32	  (int d)		{
    if ((d < HS_INT32_MIN) || (d > HS_INT32_MAX))
	fprintf (stderr,"Warning: toEnum truncates Int value to fit Int32\n");
    return (HsInt32)d; }
HsInt64	primToEnumInt64	  (int d)		{ return (HsInt64)d; }


#include <stdio.h>
#include <math.h>
#include "HsFFI.h"

/* Word8 */
int     primEqWord8  (HsWord8 d1, HsWord8 d2)		{ return (d1==d2); }
int     primLtWord8  (HsWord8 d1, HsWord8 d2)		{ return (d1<d2); }
int     primLeWord8  (HsWord8 d1, HsWord8 d2)		{ return (d1<=d2); }
int     primGtWord8  (HsWord8 d1, HsWord8 d2)		{ return (d1>d2); }
int     primGeWord8  (HsWord8 d1, HsWord8 d2)		{ return (d1>=d2); }
HsWord8 primAddWord8 (HsWord8 d1, HsWord8 d2)		{ return (d1+d2); }
HsWord8 primSubWord8 (HsWord8 d1, HsWord8 d2)		{ return (d1-d2); }
HsWord8 primMulWord8 (HsWord8 d1, HsWord8 d2)		{ return (d1*d2); }

HsWord8 primSignumWord8 (HsWord8 d)			{ return (d==0?0:1); }
HsWord8 primQuotWord8 (HsWord8 d1, HsWord8 d2)		{ return (d1/d2); }
HsWord8 primRemWord8  (HsWord8 d1, HsWord8 d2)		{ return (d1%d2); }


/* Word16 */
int      primEqWord16  (HsWord16 d1, HsWord16 d2)	{ return (d1==d2); }
int      primLtWord16  (HsWord16 d1, HsWord16 d2)	{ return (d1<d2); }
int      primLeWord16  (HsWord16 d1, HsWord16 d2)	{ return (d1<=d2); }
int      primGtWord16  (HsWord16 d1, HsWord16 d2)	{ return (d1>d2); }
int      primGeWord16  (HsWord16 d1, HsWord16 d2)	{ return (d1>=d2); }
HsWord16 primAddWord16 (HsWord16 d1, HsWord16 d2)	{ return (d1+d2); }
HsWord16 primSubWord16 (HsWord16 d1, HsWord16 d2)	{ return (d1-d2); }
HsWord16 primMulWord16 (HsWord16 d1, HsWord16 d2)	{ return (d1*d2); }

HsWord16 primSignumWord16 (HsWord16 d)			{ return (d==0?0:1); }
HsWord16 primQuotWord16 (HsWord16 d1, HsWord16 d2)	{ return (d1/d2); }
HsWord16 primRemWord16  (HsWord16 d1, HsWord16 d2)	{ return (d1%d2); }


/* Word32 */
int      primEqWord32  (HsWord32 d1, HsWord32 d2)	{ return (d1==d2); }
int      primLtWord32  (HsWord32 d1, HsWord32 d2)	{ return (d1<d2); }
int      primLeWord32  (HsWord32 d1, HsWord32 d2)	{ return (d1<=d2); }
int      primGtWord32  (HsWord32 d1, HsWord32 d2)	{ return (d1>d2); }
int      primGeWord32  (HsWord32 d1, HsWord32 d2)	{ return (d1>=d2); }
HsWord32 primAddWord32 (HsWord32 d1, HsWord32 d2)	{ return (d1+d2); }
HsWord32 primSubWord32 (HsWord32 d1, HsWord32 d2)	{ return (d1-d2); }
HsWord32 primMulWord32 (HsWord32 d1, HsWord32 d2)	{ return (d1*d2); }

HsWord32 primSignumWord32 (HsWord32 d)			{ return (d==0?0:1); }
HsWord32 primQuotWord32 (HsWord32 d1, HsWord32 d2)	{ return (d1/d2); }
HsWord32 primRemWord32  (HsWord32 d1, HsWord32 d2)	{ return (d1%d2); }


/* Word64 */
int      primEqWord64  (HsWord64 d1, HsWord64 d2)	{ return (d1==d2); }
int      primLtWord64  (HsWord64 d1, HsWord64 d2)	{ return (d1<d2); }
int      primLeWord64  (HsWord64 d1, HsWord64 d2)	{ return (d1<=d2); }
int      primGtWord64  (HsWord64 d1, HsWord64 d2)	{ return (d1>d2); }
int      primGeWord64  (HsWord64 d1, HsWord64 d2)	{ return (d1>=d2); }
HsWord64 primAddWord64 (HsWord64 d1, HsWord64 d2)	{ return (d1+d2); }
HsWord64 primSubWord64 (HsWord64 d1, HsWord64 d2)	{ return (d1-d2); }
HsWord64 primMulWord64 (HsWord64 d1, HsWord64 d2)	{ return (d1*d2); }

HsWord64 primSignumWord64 (HsWord64 d)			{ return (d==0?0:1); }
HsWord64 primQuotWord64 (HsWord64 d1, HsWord64 d2)	{ return (d1/d2); }
HsWord64 primRemWord64  (HsWord64 d1, HsWord64 d2)	{ return (d1%d2); }


/* Integer conversions */

extern HsWord64	primIntegerToWord64	(void* d);
extern void*	primIntegerFromWord64	(HsWord64 d);
#define FR_INT(d)	primIntegerToWord64(d)
#define TO_INT(d)	primIntegerFromWord64(d)
HsWord8   primWord8FromInteger  (void* d)	{
    HsWord64 i = (HsWord64)FR_INT(d);
    if ((i < 0) || (i > HS_WORD8_MAX))
        fprintf (stderr,"Warning: fromInteger truncates to fit Word8 value\n");
    return (HsWord8)i; }
HsWord16  primWord16FromInteger (void* d)	{
    HsWord64 i = (HsWord64)FR_INT(d);
    if ((i < 0) || (i > HS_WORD16_MAX))
        fprintf (stderr,"Warning: fromInteger truncates to fit Word16 value\n");
    return (HsWord16)i; }
HsWord32  primWord32FromInteger (void* d)	{
    HsWord64 i = (HsWord64)FR_INT(d);
    if ((i < 0) || (i > HS_WORD32_MAX))
        fprintf (stderr,"Warning: fromInteger truncates to fit Word32 value\n");
    return (HsWord32)i; }
HsWord64  primWord64FromInteger (void* d)	{
    HsWord64 i = (HsWord64)FR_INT(d);
    if ((i < 0) || (i > HS_WORD64_MAX))
        fprintf (stderr,"Warning: fromInteger truncates to fit Word64 value\n");
    return (HsWord64)i; }
void*     primWord8ToInteger  (HsWord8 d)	{ return TO_INT((HsInt64)d); }
void*     primWord16ToInteger (HsWord16 d)	{ return TO_INT((HsInt64)d); }
void*     primWord32ToInteger (HsWord32 d)	{ return TO_INT((HsInt64)d); }
void*     primWord64ToInteger (HsWord64 d)	{ return TO_INT((HsInt64)d); }



/* Enum conversions */

int     primFromEnumWord8        (HsWord8 d)      { return (int)d; }
int     primFromEnumWord16       (HsWord16 d)     { return (int)d; }
int     primFromEnumWord32       (HsWord32 d)     {
    if ((d < HS_INT_MIN) || (d > HS_INT_MAX))
        fprintf (stderr,"Warning: fromEnum truncates Word32 value\n");
    return (int)d; }
int     primFromEnumWord64       (HsWord64 d)     {
    if ((d < HS_INT_MIN) || (d > HS_INT_MAX))
        fprintf (stderr,"Warning: fromEnum truncates Word64 value\n");
    return (int)d; }
HsWord8  primToEnumWord8    (int d)               {
    if ((d < 0) || (d > HS_WORD8_MAX))
        fprintf (stderr,"Warning: toEnum truncates Int value to fit Word8\n");
    return (HsWord8)d; }
HsWord16 primToEnumWord16   (int d)               {
    if ((d < 0) || (d > HS_WORD16_MAX))
        fprintf (stderr,"Warning: toEnum truncates Int value to fit Word16\n");
    return (HsWord16)d; }
HsWord32 primToEnumWord32   (int d)               {
    if ((d < 0) || (d > HS_WORD32_MAX))
        fprintf (stderr,"Warning: toEnum truncates Int value to fit Word32\n");
    return (HsWord32)d; }
HsWord64 primToEnumWord64   (int d)               { return (HsWord64)d; }


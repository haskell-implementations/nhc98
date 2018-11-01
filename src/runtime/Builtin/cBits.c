#include <errno.h>
#include "haskell2c.h"

/* primIntAnd :: Int -> Int -> Int */
C_HEADER(primIntAnd) {
    unsigned x,y;
    NodePtr n = C_GETARG1(1);
    IND_REMOVE(n);
    x = (unsigned)GET_INT_VALUE(n);

    n = C_GETARG1(2);
    IND_REMOVE(n);
    y = (unsigned)GET_INT_VALUE(n);

    C_RETURN(nhc_mkInt(x&y));
}

/* primIntOr :: Int -> Int -> Int */
C_HEADER(primIntOr) {
    unsigned x,y;
    NodePtr n = C_GETARG1(1);
    IND_REMOVE(n);
    x = (unsigned)GET_INT_VALUE(n);

    n = C_GETARG1(2);
    IND_REMOVE(n);
    y = (unsigned)GET_INT_VALUE(n);

    C_RETURN(nhc_mkInt(x|y));
}

/* primIntXor :: Int -> Int -> Int */
C_HEADER(primIntXor) {
    unsigned x,y;
    NodePtr n = C_GETARG1(1);
    IND_REMOVE(n);
    x = (unsigned)GET_INT_VALUE(n);

    n = C_GETARG1(2);
    IND_REMOVE(n);
    y = (unsigned)GET_INT_VALUE(n);

    C_RETURN(nhc_mkInt(x^y));
}

/* primIntCompl :: Int -> Int */
C_HEADER(primIntCompl) {
    unsigned x;
    NodePtr n = C_GETARG1(1);
    IND_REMOVE(n);
    x = (unsigned)GET_INT_VALUE(n);

    C_RETURN(nhc_mkInt(~x));
}

/* primIntLsh :: Int -> Int -> Int */
C_HEADER(primIntLsh) {
    int s; unsigned i;
    NodePtr n = C_GETARG1(1);
    IND_REMOVE(n);
    i = (unsigned)GET_INT_VALUE(n);

    n = C_GETARG1(2);
    IND_REMOVE(n);
    s = GET_INT_VALUE(n);

    C_RETURN(nhc_mkInt(i<<s));
}

/* primIntRsh :: Int -> Int -> Int */
C_HEADER(primIntRsh) {
    int s; unsigned i;
    NodePtr n = C_GETARG1(1);
    IND_REMOVE(n);
    i = (unsigned)GET_INT_VALUE(n);

    n = C_GETARG1(2);
    IND_REMOVE(n);
    s = GET_INT_VALUE(n);

    C_RETURN(nhc_mkInt(i>>s));
}

unsigned int nhc_primIntAnd (unsigned int a, unsigned int b) { return (a&b); }
unsigned int nhc_primIntOr  (unsigned int a, unsigned int b) { return (a|b); }
unsigned int nhc_primIntXor (unsigned int a, unsigned int b) { return (a^b); }
unsigned int nhc_primIntLsh (unsigned int a, unsigned int b) { return (a<<b); }
unsigned int nhc_primIntRsh (unsigned int a, unsigned int b) { return (a>>b); }
unsigned int nhc_primIntCompl (unsigned int a)               { return (~a); }


char nhc_primInt8And (char a, char b) { return (a&b); }
char nhc_primInt8Or  (char a, char b) { return (a|b); }
char nhc_primInt8Xor (char a, char b) { return (a^b); }
char nhc_primInt8Lsh (char a, int b)  { return (a<<b); }
char nhc_primInt8Rsh (char a, int b)  { return (a>>b); }
char nhc_primInt8Compl (char a)       { return (~a); }

short nhc_primInt16And (short a, short b) { return (a&b); }
short nhc_primInt16Or  (short a, short b) { return (a|b); }
short nhc_primInt16Xor (short a, short b) { return (a^b); }
short nhc_primInt16Lsh (short a, int b)   { return (a<<b); }
short nhc_primInt16Rsh (short a, int b)   { return (a>>b); }
short nhc_primInt16Compl (short a)        { return (~a); }

long nhc_primInt32And (long a, long b) { return (a&b); }
long nhc_primInt32Or  (long a, long b) { return (a|b); }
long nhc_primInt32Xor (long a, long b) { return (a^b); }
long nhc_primInt32Lsh (long a, int b)  { return (a<<b); }
long nhc_primInt32Rsh (long a, int b)  { return (a>>b); }
long nhc_primInt32Compl (long a)       { return (~a); }

long long nhc_primInt64And (long long a, long long b) { return (a&b); }
long long nhc_primInt64Or  (long long a, long long b) { return (a|b); }
long long nhc_primInt64Xor (long long a, long long b) { return (a^b); }
long long nhc_primInt64Lsh (long long a, int b)       { return (a<<b); }
long long nhc_primInt64Rsh (long long a, int b)       { return (a>>b); }
long long nhc_primInt64Compl (long long a)            { return (~a); }


unsigned char nhc_primWord8And (unsigned char a, unsigned char b)
							 { return (a&b); }
unsigned char nhc_primWord8Or  (unsigned char a, unsigned char b)
							 { return (a|b); }
unsigned char nhc_primWord8Xor (unsigned char a, unsigned char b)
							 { return (a^b); }
unsigned char nhc_primWord8Lsh (unsigned char a, int b)  { return (a<<b); }
unsigned char nhc_primWord8Rsh (unsigned char a, int b)  { return (a>>b); }
unsigned char nhc_primWord8Compl (unsigned char a)       { return (~a); }

unsigned short nhc_primWord16And (unsigned short a, unsigned short b)
							 { return (a&b); }
unsigned short nhc_primWord16Or  (unsigned short a, unsigned short b)
							 { return (a|b); }
unsigned short nhc_primWord16Xor (unsigned short a, unsigned short b)
							 { return (a^b); }
unsigned short nhc_primWord16Lsh (unsigned short a, int b)   { return (a<<b); }
unsigned short nhc_primWord16Rsh (unsigned short a, int b)   { return (a>>b); }
unsigned short nhc_primWord16Compl (unsigned short a)        { return (~a); }

unsigned long nhc_primWord32And (unsigned long a, unsigned long b)
							 { return (a&b); }
unsigned long nhc_primWord32Or  (unsigned long a, unsigned long b)
							 { return (a|b); }
unsigned long nhc_primWord32Xor (unsigned long a, unsigned long b)
							 { return (a^b); }
unsigned long nhc_primWord32Lsh (unsigned long a, int b)  { return (a<<b); }
unsigned long nhc_primWord32Rsh (unsigned long a, int b)  { return (a>>b); }
unsigned long nhc_primWord32Compl (unsigned long a)       { return (~a); }

unsigned long long nhc_primWord64And
		 (unsigned long long a, unsigned long long b) { return (a&b); }
unsigned long long nhc_primWord64Or
		 (unsigned long long a, unsigned long long b) { return (a|b); }
unsigned long long nhc_primWord64Xor
		 (unsigned long long a, unsigned long long b) { return (a^b); }
unsigned long long nhc_primWord64Lsh
		 (unsigned long long a, int b)       { return (a<<b); }
unsigned long long nhc_primWord64Rsh
		 (unsigned long long a, int b)       { return (a>>b); }
unsigned long long nhc_primWord64Compl
		 (unsigned long long a)            { return (~a); }


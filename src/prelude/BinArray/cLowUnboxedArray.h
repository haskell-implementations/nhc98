/* cLowUnboxedArray.h */
/*     stuff for stateful unboxed arrays */

struct UnboxedArray {
  int free;
  int write;
  unsigned end;
  unsigned *block;
};

typedef struct UnboxedArray *UBA;
extern void finaliseUBA (UBA);

#ifdef HIGH_BYTE_FIRST
#if !defined(htonl)
#define htonl(x) x
#define ntohl(x) x
#endif
#else
#if !defined(htonl)
extern unsigned htonl(unsigned);
extern unsigned ntohl(unsigned);
#endif
#endif

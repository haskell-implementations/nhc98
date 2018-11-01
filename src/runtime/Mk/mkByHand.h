#include <string.h>

NodePtr nhc_mkCInt(Int i);
#define nhc_sizeCInt 1

#define nhc_mkBool(b) (b?nhc_mkTrue():nhc_mkFalse())
#define nhc_sizeBool 0

#define nhc_mkChar(c) ((NodePtr)GET_CHAR(c))
#define nhc_sizeChar 0

extern NodePtr nhc_mkHandlePosn(fpos_t *);
extern fpos_t *nhc_getHandlePosn(NodePtr);
#define nhc_sizeHandlePosn (1+EXTRA+((sizeof(fpos_t)+sizeof(Node)-1)/sizeof(Node)))

extern NodePtr nhc_mkSmallIntegerU(Int i);
#define nhc_sizeSmallIntegerU (1+EXTRA+1)

extern NodePtr nhc_mkInt(Int i);
#define nhc_sizeInt (1+EXTRA+1)

extern NodePtr nhc_mkDouble(double d);
#define nhc_sizeDouble (1+EXTRA+2)

extern NodePtr nhc_mkFloat(float f);
#define nhc_sizeFloat (1+EXTRA+1)

int nhc_sizePackedString(int length);
NodePtr nhc_allocPackedString(int length);
void nhc_copyPackedString(int length, NodePtr dst, char *src);
NodePtr nhc_mkPackedString(int length, char *str);
char *nhc_getPackedString(NodePtr n);

#define nhc_mkString(s)   nhc_mkPackedString((s==(char*)0?1:strlen(s)+1),s)	/* MW */
extern NodePtr nhc_mkForeign(void *x, gcCval f);		/* MW */
extern NodePtr nhc_mkStablePtr(NodePtr x);			/* MW */
extern NodePtr nhc_getStablePtr(NodePtr x);			/* MW */

#define nhc_mkInt8(i)	nhc_mkInt((char)i)
#define nhc_mkInt16(i)	nhc_mkInt((short)i)
#define nhc_mkInt32(i)	nhc_mkInt((long)i)
extern NodePtr nhc_mkInt64(long long i);
#define nhc_sizeInt64 (1+EXTRA+2)

#define nhc_mkWord8(i)	nhc_mkInt(i)
#define nhc_mkWord16(i)	nhc_mkInt(i)
#define nhc_mkWord32(i)	nhc_mkInt(i)
#define nhc_mkWord64(i)	nhc_mkInt64(i)

extern long long nhc_get_64bit_value (NodePtr n);

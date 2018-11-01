/* basic unsafe utilities, defined in IOExtras */
#include "cinterface.h"
#include "mk.h"

void	performGC	()	{ C_GC(0); C_RETURN(nhc_mkUnit()); }
int	unsafePtrEq	(void* a, void* b)	{ return (a==b); }

/* basic error handling via C's errno */
#include <errno.h>
int	getErrNo		(void)	{ return errno; }

int	excludeFinalisers=0;
void	blockFinalisers		(void)	{ excludeFinalisers++; }
void	unblockFinalisers	(void)	{ excludeFinalisers--; }

#include <haskell2c.h>
#include "cLowBinary.h"

int hs_sizeBin (BinHandle bh)
{ int n;
  
   unsigned curpos;
   closecache(bh);
   if (bh->file) {
     curpos = vtell(bh);		/* store current position */
     n = lseek(bh->loc.fd,0,SEEK_END);	/* jump to end of file */
   } else {
     curpos = mtell(bh);		/* store current position */
     n = bh->attrib.size;
   }
   opencache(bh);			/* then skip back again */
   bh->cptr = curpos - forceCacheTo(bh,curpos);
  return n;
}

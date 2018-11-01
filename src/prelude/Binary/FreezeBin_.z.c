#include <haskell2c.h>
#include "cLowBinary.h"

void hs_freezeBin (BinHandle bh)
{ 
   closecache(bh);
   if (bh->file) {
     if (bh->mode != RO) {
       char c; int i;
       c = (char)(bh->highwater%8);
       i = (c ? 1+(bh->highwater/8) : (bh->highwater/8));
       c = (c ? 16-c : 8);
       lseek(bh->loc.fd,i,SEEK_SET);
       write(bh->loc.fd,&c,1);
     }
   }
   bh->mode = RO;
   opencache(bh);
  return;
}

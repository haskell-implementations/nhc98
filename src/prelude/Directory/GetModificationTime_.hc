#include <haskell2c.h>
#include <sys/stat.h>
#include <unistd.h>

NodePtr hs_primGetModTime (char* fp)
{ int err;
  
   struct stat st;
   err = stat(fp,&st);
  return nhc_mkTuple2(nhc_mkInt(err),nhc_mkInt(st.st_mtime));
}

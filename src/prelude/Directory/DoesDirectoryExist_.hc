#include <haskell2c.h>
#include <sys/types.h>
#include <sys/stat.h>
#define TRUE   1
#define FALSE  0

int hs_doesDirectoryExist (char* fp)
{ int b;
  
   struct stat st;
   int err = stat(fp,&st);
   if ((err==0) && S_ISDIR(st.st_mode)) b=TRUE;
   else {
     err=0;	/* MUST reset err flag! */
     b=FALSE;
   }
  return b;
}

#include <haskell2c.h>
#include <sys/types.h>
#include <sys/stat.h>
#define TRUE  1
#define FALSE 0

NodePtr hs_getperms (char* fp)
{ int err;
  int r;
  int w;
  int x;
  int s;
  
   struct stat st;
   err = stat(fp,&st);
   if (err==0) {
     if (S_IREAD  & st.st_mode) r=TRUE; else r=FALSE;
     if (S_IWRITE & st.st_mode) w=TRUE; else w=FALSE;
     if (S_IEXEC  & st.st_mode) {
       if (S_ISDIR(st.st_mode)) {
          x=FALSE; s=TRUE;
       } else {
          x=TRUE; s=FALSE;
       }
     }
   }
  return nhc_mkTuple2(nhc_mkInt(err),nhc_mkTuple4(nhc_mkBool(r),nhc_mkBool(w),nhc_mkBool(x),nhc_mkBool(s)));
}

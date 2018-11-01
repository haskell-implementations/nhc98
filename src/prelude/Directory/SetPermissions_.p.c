#include <haskell2c.h>
#include <sys/types.h>
#include <sys/stat.h>

int hs_setperms (int r,int w,int x,int s,char* fp)
{ int err;
  
   struct stat st;
   mode_t m;
   err = stat(fp,&st);
   if (err==0) {
     m = st.st_mode & ~(S_IREAD|S_IWRITE|S_IEXEC); /* blank out modes */
     if (r)    m |= S_IREAD;
     if (w)    m |= S_IWRITE;
     if (x||s) m |= S_IEXEC;
     err = chmod(fp,m);
   }
  return err;
}

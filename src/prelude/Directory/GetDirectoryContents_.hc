#include <haskell2c.h>
#include <dirent.h>

int hs_closedir (DIR* d)
{ int err;
  
   if (d==NULL) err=0; else err=closedir(d);
  return err;
}


NodePtr hs_opendir (char* fp)
{ int err;
  DIR* d;
  
   d = opendir(fp);
   if (d==NULL) err=-1; else err=0;
  return nhc_mkTuple2(nhc_mkInt(err),nhc_mkCInt((int)allocForeignObj((void*)d,(gcCval)hs_closedir,gcNow)));
}


NodePtr hs_readdir (DIR* d)
{ int err;
  char* fp;
  
   struct dirent *e;
   e = readdir(d);
   if (e==NULL) {
      err=-1;
      fp="";
   } else {
     err=0;
     fp=e->d_name;
   }
  return nhc_mkTuple2(nhc_mkInt(err),nhc_mkString(fp));
}

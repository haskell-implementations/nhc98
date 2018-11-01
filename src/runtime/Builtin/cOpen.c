#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "haskell2c.h"


/* foreign import openFileC :: CString -> IOMode -> IO ForeignObj */
/*   Note: the return value is a ForeignObj, which is not strictly
 *   legal by the FFI standard.  However, it makes sense here, because
 *   the finaliser is in C, not in Haskell.
 */
void* openFileC (char* filename, int iom)
{
  char *type;
  FILE *fp;
  ForeignObj *fo;

  switch (iom) {
    case ReadMode:      type = "r";  break;
    case WriteMode:     type = "w";  break;
    case AppendMode:    type = "a";  break;
    case ReadWriteMode: type = "r+"; break;
  }
/*fprintf(stderr,"fopen: attempting to open file %s for %s\n",filename,type);*/

  fp = fopen(filename,type);
  if(fp) {
    FileDesc *a;
    /*fprintf(stderr,"fopen: succeeded\n");*/
    a = (FileDesc *)malloc(sizeof(FileDesc));
    a->fp = fp;
    a->bm = _IOFBF;
    a->size = -1;
    a->path = strdup(filename);
    fo = allocForeignObj(a,gcFile,gcNow);
    /*fprintf(stderr,"[openFileC: succeeded %x %x]\n",a,a->fp);*/
  } else {
    fo = allocForeignObj((void*)0,(void*)0,gcNone);
    /*fprintf(stderr,"fopen: failed to open file %s for %s\n",filename,type);*/
  }
  return (void*)nhc_mkCInt((int)fo);
}

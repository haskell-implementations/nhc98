#include "haskell2c.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>

/* foreign import hPutBufC "hPutBufC" :: IO.Handle -> Ptr a -> Int -> IO Int */
int hPutBufC (FileDesc *f, void *s, int i)
{
    int err;
    err = fwrite(s,sizeof(char),i,f->fp);
    return err;
}

/* foreign import hGetBuf "hGetBufC" :: IO.Handle -> Ptr a -> Int -> IO Int */
int hGetBufC (FileDesc *f, void *s, int i)
{
    int err;
    err = fread(s,sizeof(char),i,f->fp);
    return err;
}

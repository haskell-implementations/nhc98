#include <stdlib.h>
#include <stdio.h>


void *alloca (unsigned size)
{
  fprintf(stderr,"Failure alloca %d called:-(\n",size);
  abort();
}

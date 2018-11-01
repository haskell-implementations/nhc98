#include <stdlib.h>
#include <stdio.h>
#ifdef __hppa__
#define _POSIX_SOURCE
#endif
#include <sys/types.h>
#include <sys/times.h>

#include "runtime.h"

void timerClear(timer *t)
{
  t->l = 0;
  t->h = 0;
}

void timerRead(timer *t)
{
  struct tms buffer;
  if(times(&buffer)==(clock_t)-1) {
    fprintf(stderr,"times failed.");
    exit(-1);
  }
  t->l = (unsigned int)buffer.tms_utime;
  t->h = 0;
}
    
void timerStart(timer *t)
{
  timer t2;
  timerRead(&t2);
  t->l -= t2.l;
}

void timerStop(timer *t)
{
  timer t2;
  timerRead(&t2);
  t->l += t2.l;
}

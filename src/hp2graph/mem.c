#include "hp2graph.h"

Token clone(SharedToken token)
{
 Token t = strdup(token);
 if(!t) {
   fprintf(stderr,"Out of memory when cloning a string at %d\n",lexline);
   abort();
 }
 return t;
}

char *append(char *s1, char *s2)
{
 char *r = malloc(strlen(s1) + strlen(s2) + 1);
 if(r) {
   strcpy(r,s1);
   strcat(r,s2);
 } else {
   fprintf(stderr,"Out of memory when appending %s and %s\n",s1,s2);
   abort();
 }
 return r;
}


void *new(int s)
{
  return malloc(s);
}

void *xmalloc(int s)
{
  void *vp =  malloc(s);
  if(!vp) {
    fprintf(stderr,"Out of memory.");
    abort();
  }
  return vp;
}

void *extend(void *p, int s)
{
  if(p) 
    return realloc(p, s);
  else
    return malloc(s);
}

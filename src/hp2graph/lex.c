#include "hp2graph.h"
#include <ctype.h>

#define LEXBUFFER 8192

static char  lexbuffer[2*LEXBUFFER+1];
static SharedToken lexpos;
static SharedToken lexlast;
static int   lexeof=1;
int   lexline=1;
SharedToken lextoken;
static FILE *lexFile;

void initlex(FILE *fp)
{
  lexpos = 0;
  lexeof = 0;
  lexline = 1;
  lexFile = fp;
}

static int skipblank(void)
{
  char *start;
  char c;

 whileblank:
  if(lexpos) {
    for(start = lexpos; (c=*lexpos) && isspace(c);  lexpos++)
      if(c=='\n') lexline++;
  } else
    c = 0;

  if(!c) {
    int last;
    if(lexeof || !(last = fread(lexpos=&lexbuffer[LEXBUFFER],1,LEXBUFFER,lexFile))) {
      lextoken = 0;
      return (lexeof = 1);
    }
    lexlast = &lexbuffer[LEXBUFFER+last];
    *lexlast = 0;
    goto whileblank;
  }
  return 0;
}


SharedToken getToken(void)
{
  SharedToken start;
  int startline = lexline;
  SharedToken stop;
  char c;

  if(skipblank())
    return lextoken;

  for(start = lexpos; (c=*lexpos) && !isspace(c);  lexpos++)
    ;
  
  if(!c) {
    int last;
    int len = lexpos - start; /* Don't copy trailing '\0' */
    start = memcpy(&lexbuffer[LEXBUFFER]-len,start,len);
    if(lexeof || !(last = fread(lexpos=&lexbuffer[LEXBUFFER],1,LEXBUFFER,lexFile))) {
      lexeof = 1;
      lexpos = 0;
      lexbuffer[LEXBUFFER] = 0;
      return lextoken=start;
    }
    lexbuffer[LEXBUFFER+last] = 0;
    for( ; (c=*lexpos) && !isspace(c);  lexpos++)
      ;
    if(!c) {
      fprintf(stderr,"Token starting att line %d is more than %d characters\n",startline,LEXBUFFER);
      abort();
    }
  }
  if(c) {
    if(c=='\n') lexline++;
    *lexpos++ = 0;
  }
  return lextoken=start;
}


SharedToken getString(void)
{
  SharedToken start;
  int startline = lexline;
  SharedToken stop;
  char c;

  if(skipblank() || *lexpos != '"') {
    fprintf(stderr,"Expecting string at %d.\n",lexline);
    abort();
  }
  lexpos++;  /* skip " */

  for(start = lexpos; (c=*lexpos) && c!='"' && lexpos[-1]!='\\' ;  lexpos++)
    ;
  
  if(!c) {
    int last;
    int len = lexpos - start; /* Don't copy trailing '\0' */
    start = memcpy(start-len,start,len);
    if(lexeof || !(last = fread(lexpos=&lexbuffer[LEXBUFFER],1,LEXBUFFER,lexFile))) {
      lexeof = 1;
      lexpos = 0;
      lexbuffer[LEXBUFFER] = 0;
      return lextoken=start;
    }
    for( ; (c=*lexpos) &&  c!='"' && lexpos[-1]!='\\';  lexpos++)
      ;
    if(!c) {
      fprintf(stderr,"String starting att line %d is more than %d characters\n",startline,LEXBUFFER);
      abort();
    }
  }
  if(c=='"') {
    *lexpos++ = 0; /* overwrite terminating " */
  } else {
    fprintf(stderr,"No terminating '\"' for string that started at %d.\n",startline);
    abort();
  }
  return lextoken=start;
}

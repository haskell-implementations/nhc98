#include "hp2graph.h"

int commentsize = 0;
Comment *commentdata = 0;

static int commentmax = 32;

void addComment(double t, Token s)
{
  if(!commentdata || commentsize == commentmax) {
    commentmax *= 2;
    if(!(commentdata = (Comment *)extend(commentdata, commentmax*sizeof(Comment)))) {
      fprintf(stderr,"Out of memory when allocating memory for COMMENT at %d\n",lexline);
      abort();
    }
  }
  commentdata[commentsize  ].time=t;
  commentdata[commentsize++].comment=s;
}


#include <string.h>
#include "mk.h"

int nhc_sizePackedString(int length)
{
  int size = (length + sizeof(Node) -1) / sizeof(Node);
  return (1+EXTRA+size);
}


NodePtr nhc_allocPackedString(int length)
{
  NodePtr n;
  int size = (length + sizeof(Node) -1) / sizeof(Node);
  int extra = size * sizeof(Node) - length;

  n = C_ALLOC(1+EXTRA+size);
  *n = CONSTRW(size,extra);
  INIT_PROFINFO(n,&dummyProfInfo)
  return n;
}

void nhc_copyPackedString(int length, NodePtr dst, char *src)
{
  if (src==(char*)0)
    memcpy((char*)&dst[1+EXTRA],"\0",1);
  else
    memcpy((char*)&dst[1+EXTRA],src,length);
}

NodePtr nhc_mkPackedString(int length, char *str)
{
  NodePtr n = nhc_allocPackedString(length);
  nhc_copyPackedString(length,n,str);
  return n;
}

char *nhc_getPackedString(NodePtr n)
{
  return (char*)&n[1+EXTRA];
}








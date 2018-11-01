#include "haskell2c.h"

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#if 0
#include <sys/types.h>
#include <stdio.h>
#include <ctype.h>
#endif
#include <errno.h>

#include <sys/param.h>
#ifdef MAXHOSTNAMELEN
#define HOSTNAME_LEN		MAXHOSTNAMELEN
#else
#define HOSTNAME_LEN		64
#endif


#define SOCKET_OPEN_ERROR	-1
#define SOCKET_CONNECT_ERROR	-2
#define SOCKET_RESOLVER_ERROR	-3

int inet_address(char *host, u_short port, struct sockaddr_in *address)
{
    char hostname[HOSTNAME_LEN];
    char *the_host;
    struct hostent *hp;
    
    memset(address, 0, sizeof(*address));

    if (host == NULL) {
	(void) gethostname(hostname, HOSTNAME_LEN);
	the_host = hostname;
    } else
	the_host = host;
	
    if (host != NULL && host[0] >= '0' && host[0] <= '9')
	address->sin_addr.s_addr = inet_addr(host);
    else {
	if ((hp = gethostbyname(the_host)) == NULL)
	    return(SOCKET_RESOLVER_ERROR);
		
	memcpy(&address->sin_addr, hp->h_addr, hp->h_length);
    }

    address->sin_family = AF_INET;
    address->sin_port = htons(port);

    return 0;
}

static int host_connect(int sd, char *host, short port)
{
    struct sockaddr_in sin;
    int errno_save;

    if (inet_address(host, port, &sin) == SOCKET_RESOLVER_ERROR) {
        errno_save = errno;
	close(sd);
        errno= errno_save;
	return(SOCKET_RESOLVER_ERROR);
    }

    if (connect(sd, (struct sockaddr *) &sin, sizeof(sin)) == -1) {
        errno_save = errno;
	close(sd);
        errno= errno_save;
	return(SOCKET_CONNECT_ERROR);
    }
    return(sd);
}

int sockopen(char *host, short port, int type)
{
    int sd ;

    if ((sd = socket(AF_INET, type, 0)) == -1)
	return(SOCKET_OPEN_ERROR);
	
    return(host_connect(sd, host, port));
}

/* cOpenSocket primitive 3 :: CString -> Int -> SocketType -> (Either IOError Handle) */

C_HEADER(cOpenSocket)
{
  NodePtr hostptr,portptr,typeptr,nodeptr;
  char *host;
  int type;
  short port;
  int fdesc;
  FILE *fp;

  C_CHECK(nhc_sizeLeft+nhc_sizeIOErrorOpen + nhc_sizeRight+nhc_sizeInt);

  hostptr = C_GETARG1(1);
  IND_REMOVE(hostptr);
  host = (char*)&hostptr[1+EXTRA];

  portptr = C_GETARG1(2);
  IND_REMOVE(portptr);
  port = (short)GET_INT_VALUE(portptr);

  typeptr = C_GETARG1(3);
  IND_REMOVE(typeptr);
  switch(GET_CONSTR(typeptr)) {
  case SocketStream:   type = SOCK_STREAM;  break;
  case SocketDatagram: type = SOCK_DGRAM;  break;
  case SocketRaw:      type = SOCK_RAW;  break;
  }

#ifdef PROFILE
  if(replay) {
    REPLAY(fp);
    if(fp == 0)
      REPLAY(errno);
  } else {
#endif
    fdesc = sockopen(host, port, type);
    if(fdesc<0)
      fp = 0;
    else
      fp = fdopen(fdesc,"rb+");
#ifdef PROFILE
  }
  if(record) {
    RECORD(fp);
    if(fp == 0)
      RECORD(errno);
  }
#endif
  if(fp) {
    FileDesc *a;
    ForeignObj *fo;
    a = (FileDesc*)malloc(sizeof(FileDesc));
    a->fp = fp;
    a->bm = _IOFBF;
    a->size = -1;
    a->path = "<socket>";
    fo = allocForeignObj(a,gcFile,gcNow);
    nodeptr = nhc_mkRight(nhc_mkCInt((int)fo));
  } else {
    nodeptr = nhc_mkLeft(nhc_mkIOErrorOpen(hostptr,typeptr,nhc_mkInt(errno)));
  }
  C_RETURN(nodeptr);
}








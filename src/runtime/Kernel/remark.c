#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "node.h"
/* #include "runtime.h"   -- already included in node.h */
/* #include "newmacros.h" -- already included in node.h */
#include "mark.h"
#include "profile.h"

#ifdef PROFILE

/*                             In the new heap                    outside the heap */

typedef struct {
  int keep;
  char *function;
  NodePtr node;
  int who;
} Remark;

static int maxRemarkStack;
static int posRemarkStack;
static Remark *remarkStack;

#define STARTREMARKSTACK 256

void pushRemarkStack(int keep, char *function,NodePtr node,int who)
{
  if(posRemarkStack >= maxRemarkStack) {
    if(remarkStack) {
      maxRemarkStack *=2;
      remarkStack = realloc(remarkStack,sizeof(Remark) * maxRemarkStack);
    } else {
      maxRemarkStack = STARTREMARKSTACK;
      remarkStack = malloc(sizeof(Remark) * maxRemarkStack);
    }
    if(!remarkStack) {
      fprintf(stderr,"pushRemarkStack run out of memory!\n");
      exit(-1);
    }
  }
  remarkStack[posRemarkStack  ].keep = keep;
  remarkStack[posRemarkStack  ].function = function;
  remarkStack[posRemarkStack  ].node = node;
  remarkStack[posRemarkStack++].who = who;
}

void remarkInit(void)
{
  posRemarkStack = 0;
}

extern Int debug;

void remarkRest(void)
{
  while(posRemarkStack--) {
    remark(&remarkStack[posRemarkStack].node
	   ,remarkStack[posRemarkStack].keep
	   ,remarkStack[posRemarkStack].function
	   ,remarkStack[posRemarkStack].who);
  }
}


NodePtr remark(NodePtr *inode, int newKeep, char *newMember,int who)
{
  NodePtr node = *inode;
  NodePtr pptr = &hpLowLimit[1];
  NodePtr newpptr;

  hpLowLimit[1] = 0;

  EDB(if(debug) {fprintf(stderr,"\nremark %x:",(UInt)node); fflush(stderr);})
  Q(node,"remark")
  SQ("remark")

 InspectNode:
  EDB(if(debug) {fprintf(stderr,"Inspect %lx:",(UInt)node); fflush(stderr);})
  if(node > hpEnd) {
    fprintf(stderr,"InspectNode(r) %lx > hpEnd %lx\n",(UInt)node,(UInt)hpEnd);
    exit(-1);
  }
  { UInt tag;
    IND_REMOVE(node);
    tag = EXT_LARGETAG(*node);

    if(OUTSIDE(node))
      goto NextNode;
    if(memberAdr(newKeep,newMember,GET_INFO(node)->rinfo))
      goto NextNode;

    Q(node,"inspect")
    switch(tag) {
    case CON_DATA|VAP_TAG0: case CON_PTRS|VAP_TAG0: case CON_CDATA|VAP_TAG0: case CON_WORDS|VAP_TAG0:
    case CON_DATA|VAP_TAG1: case CON_PTRS|VAP_TAG1: case CON_CDATA|VAP_TAG1: case CON_WORDS|VAP_TAG1:
      EDB(if(debug) {fprintf(stderr,"VAP/CAP:"); fflush(stderr);})
      { GET_INFO(node)->rinfo = findRetainer(GET_INFO(node)->rinfo,newKeep,newMember);
      } goto NextNode;
    case CON_DATA|CON_TAG:    case CON_CDATA|CON_TAG:
      EDB(if(debug) {fprintf(stderr,"CON:"); fflush(stderr);})
      { Coninfo coninfo = GET_CONINFO(node);
        UInt psize  = CONINFO_PSIZE(coninfo);
	GET_INFO(node)->rinfo = findRetainer(GET_INFO(node)->rinfo,newKeep,newMember);
        if(psize) {
          newpptr = node+psize+EXTRA;
          EDB(if(debug) {fprintf(stderr,"newpptr = %x:",(UInt)newpptr); fflush(stderr);})
          goto PushNode;
        }
      } goto NextNode;
    case CON_PTRS|CON_TAG:
      EDB(if(debug) {fprintf(stderr,"CON:"); fflush(stderr);})
      { Coninfo coninfo = GET_CONINFO(node);
        UInt psize  = CONINFO_LARGESIZEU(coninfo);
	GET_INFO(node)->rinfo = findRetainer(GET_INFO(node)->rinfo,newKeep,newMember);
        if(psize) {
          newpptr = node+psize+EXTRA;
          EDB(if(debug) {fprintf(stderr,"newpptr = %x:",(UInt)newpptr); fflush(stderr);})
          goto PushNode;
        }
      } goto NextNode;
    case CON_WORDS|CON_TAG:
      EDB(if(debug) {fprintf(stderr,"CON WORDS:"); fflush(stderr);})
      { GET_INFO(node)->rinfo = findRetainer(GET_INFO(node)->rinfo,newKeep,newMember);
      } goto NextNode;
      break;
    default:
      fprintf(stderr,"IND_TAG in remark! (1)\n");
      exit(-1);
    }
  }

 NextNode:
  EDB(if(debug) {fprintf(stderr,"Nextnode %x:",(UInt)node); fflush(stderr);})
  { Node tmp = *pptr;
    *pptr-- = (Node)node;
    if(ifmarked(pptr)) {        /* PopNode: */
      EDB(if(debug) {fprintf(stderr,"PopNode %x:",(UInt)node); fflush(stderr);})
      if(tmp) {
        node = -EXTRA+(NodePtr)pptr;
        pptr = (NodePtr)tmp;
        goto NextNode;
      } else {
        *inode = node;
        EDB(if(debug) {fprintf(stderr,"return1 %x\n",(UInt)node); fflush(stderr);})
        return node;
      }
    } else {
      node = (NodePtr)*pptr;
      *pptr = tmp;
      goto InspectNode;
    }
  }

 PushNode:
  EDB(if(debug) {fprintf(stderr,"PushNode %x:",(UInt)node); fflush(stderr);})
  node = (NodePtr)*newpptr;
  *newpptr = (Node)pptr;
  pptr = newpptr;
  goto InspectNode;
}

#endif

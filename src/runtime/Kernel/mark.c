#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "node.h"
/* #include "newmacros.h"  -- already included in node.h */
/* #include "runtime.h"    -- already included in node.h */
/* #include "bytecode.h"   -- need value for GA1EVAL */
/*                         -- already included in node.h via newmacros.h */
#include "mark.h"
#include "mutlib.h"
#include "profile.h"

GcConst oldCaf = GcEnd;
GcConst newCaf = GcEnd;

void addCaf2(UInt cons)
{
  GcConst cptr = (GcConst)cons;
  if(!cptr->next) {
    cptr->next = newCaf;
    newCaf = cptr;
  }
}

void addCaf(Finfo finfo)
{
  addCaf2((UInt)FINFO_CONST(finfo));
}


UInt marked(NodePtr node)   /* True if marked, false otherwise,  mark the node */
{
  UInt off = node - hpLowLimit;
  UInt mask = 1l << (off & WORDMASK);

  off >>= WORDSHIFT;
  if(bitTable[off] & mask)
    return 1;
  bitTable[off] |= mask;
  return 0;
}


UInt ifmarked(NodePtr node)   /* True if marked, false otherwise */
{
  UInt off = node - hpLowLimit;
  UInt mask = 1l << (off & WORDMASK);
  off >>= WORDSHIFT;
  if(bitTable[off] & mask)
    return 1;
  return 0;
}

void unmarked(NodePtr node)   /* Clear mark for node */
{
  UInt off = node - hpLowLimit;
  UInt mask = 1l << (off & WORDMASK);
  off >>= WORDSHIFT;
  bitTable[off] &= ~mask;
}

void markClear(void)
{
  NodePtr p;
  for(p = bitTable; p < hpEnd; *p++ = 0)
    ;
  hpEnd[-1] = ~0;
  marked(hpLowLimit);
}

#ifdef PROFILE
static Retainer *profileRetainer;
static int maxRetainerStack;
static int posRetainerStack;
static Retainer **RetainerStack;

#define STARTRETAINERSTACK 256

void pushRetainerStack(Retainer *retainer,NodePtr node)
{
  if(posRetainerStack >= maxRetainerStack) {
    if(RetainerStack) {
      maxRetainerStack *=2;
      RetainerStack = realloc(RetainerStack,sizeof(Retainer *) * maxRetainerStack);
    } else {
      maxRetainerStack = STARTRETAINERSTACK;
      RetainerStack = malloc(sizeof(Retainer *) * maxRetainerStack);
    }
    if(!RetainerStack) {
      fprintf(stderr,"pushRetainerStack run out of memory!\n");
      exit(-1);
    }
  }
  RetainerStack[posRetainerStack++] = retainer;
}

Retainer *popRetainerStack(NodePtr node)
{
  Retainer *retainer = profileRetainer;
  if(posRetainerStack) {
    retainer = RetainerStack[--posRetainerStack];
  } else
    fprintf(stderr,"popRetainerStack on empty stack ignored!\n");

  return retainer;
}

#endif

NodePtr ind_remove(NodePtr np)
{
    NodePtr op;
    int n = 0;

    while ((*np & 0x2) == 0) {
	n++;
	op = np;
	np = (NodePtr)*np;
	if (np == NULL) {
	    fprintf(stderr, "Hmm np = NULL, op = %p after %d loops\n",
		    op, n);
	    return np;
	    /* **np;*/
	}
    }
    return np;
}




extern NodePtr prevLow,prevHigh;
Int debug = 0;

NodePtr mark(NodePtr *inode)
{
  NodePtr node = *inode;
  NodePtr pptr = &hpLowLimit[1];
  NodePtr newpptr;

  hpLowLimit[1] = 0;

  EDB(if(debug) {fprintf(stderr,"\nmark %lx:",(UInt)node); fflush(stderr);})
  Q(node,"mark")
  SQ("mark")

  WHEN_DYNAMIC(posRetainerStack = 0;)

 InspectNode:
  EDB(if(debug) {fprintf(stderr,"Inspect %lx:",(UInt)node); fflush(stderr);})
  if(node > hpEnd) {
    fprintf(stderr,"InspectNode %lx > hpEnd %lx\n",(UInt)node,(UInt)hpEnd);
    exit(-1);
  }
  { UInt tag;
    IND_REMOVE(node);
    tag = EXT_LARGETAG(*node);
    if(OUTSIDE(node)) {
      if(tag & VAP_TAG) {
	Cinfo cinfo;
	EDB(if(debug) {fprintf(stderr,"VAP(0):"); fflush(stderr);})
	  cinfo = GET_CINFO(node);
	addCaf(CINFO_FINFO(cinfo));
      }
      goto NextNode;
    }


#ifdef DYNAMIC
    if (pactive && useUnique && GET_INFO(node)->unique == 0) {
      GET_INFO(node)->unique = ++unique;
    }
#endif

    if(marked(node)) {
#ifdef DYNAMIC
      if(pactive && ((profile | filter) & PROFILE_RETAINER)
         && !memberAdr(profileRetainer->keep,profileRetainer->member[0],(Retainer *)GET_INFO(node)->rinfo)) {
        pushRemarkStack(profileRetainer->keep,profileRetainer->member[0],node,0);
      }
#endif
      goto NextNode;
    }
    WHEN_DYNAMIC(GET_INFO(node)->rinfo = profileRetainer;)
    Q(node,"inspect")
    switch(tag) {
    case CON_DATA|VAP_TAG0: case CON_PTRS|VAP_TAG0: case CON_CDATA|VAP_TAG0: case CON_WORDS|VAP_TAG0:
    case CON_DATA|VAP_TAG1: case CON_PTRS|VAP_TAG1: case CON_CDATA|VAP_TAG1: case CON_WORDS|VAP_TAG1:
      EDB(if(debug) {fprintf(stderr,"VAP/CAP:"); fflush(stderr);})
      { Cinfo cinfo = GET_CINFO(node);
	Int size = (Int)CINFO_SIZE(cinfo);
        Finfo finfo = CINFO_FINFO(cinfo);

/* !!! SPACE FOR WADLER HERE !!! */

#if 1
/*
 * Check if it is a selector with an evaluated argument.
 * Note : The constructor might have its pointer reversed already.
 *           Don't fix selector, no space savings are possible in any case.
 *        Selector on Selecor on Constructor should be optimised.
 *           Do Pointer reversing down the list as long as all applicatins are selectors
 *           and no application is marked. If we find a constructor then fix all applications
 *           otherwise just restore everything.
 *        All marked applications on the way down must be unmarked on the way up otherwise garbage
 *        might survive.
 *
 * 0: NEEDSTACK_I16
 * 1: SELECTOR_EVAL
 * 2: SELECT pos
 * 4: RETURN_EVAL
 *
 */

#define SELECTOR_INS  1
#define SELECTOR_ARG  3

#if 1
#define WHEN_WADLER(x)
#else
#define WHEN_WADLER(x) x
#endif

	if(!ZAPPED(node) &&                                       /* Don't do wadler on things under evaluation */
	   !CINFO_NEED(cinfo) &&                                  /* All arguments must be available, ie one */
	   (FINFO_CODE(finfo))[SELECTOR_INS] == SELECTOR_EVAL) {  /* and it must be a selector */
	  NodePtr app = node;
	  NodePtr arg = GET_POINTER_ARG1(node,1);
	  IND_REMOVE(arg);
	  WHEN_WADLER(fprintf(stderr,"START  node  %08lx:%08lx %08lx\n",node,node[0],node[EXTRA+1]);)
	  WHEN_WADLER(fprintf(stderr,"WADLER 1     %08lx %08lx\n",app,arg);)
	  while((GET_TAG(arg) & VAP_TAG) &&     /* An application ... */
		!ZAPPED(arg) &&                 /* not under evaluation ... */
		((VAP_CODE(arg))[SELECTOR_INS] == SELECTOR_EVAL)) {  /* ... that is a selector */
	    if(INSIDE(arg) && !ifmarked(arg)) { /* ... and it wasn't marked */
	      NodePtr tmp = (NodePtr)arg[EXTRA+1];      /* Pointer reversal and one step down */
	      WHEN_WADLER(fprintf(stderr,"WADLER   2    %08lx %08lx\n",app,arg);)
	      marked(arg);
	      arg[EXTRA+1]=(Node)app;
	      app = arg;
	      arg = tmp;
	      IND_REMOVE(arg);
	    } else
	      goto restore;	      
	  }
	  WHEN_WADLER(fprintf(stderr,"WADLER 3     %08lx %08lx\n",app,arg);)
	  /*
	   *  arg is either an unmarked constructor or something else
	   */

	  while(GET_TAG(arg) == CON_TAG && (INSIDE(arg) && !ifmarked(arg))) {
	    Int pos;
	    WHEN_WADLER(fprintf(stderr,"WADLER   4   %08lx %08lx(%08lx)\n",app,arg,*arg);)
	    WHEN_WADLER(fprintf(stderr,"WADLER   4b [%08lx %08lx]\n",hpLowLimit,bitTable);)
	    pos = FINFO_CODE(GET_FINFO(app))[SELECTOR_ARG];
	    WHEN_WADLER(fprintf(stderr,"WADLER   4c  pos = %08lx\n",pos);)
#if PARANOID
	    switch(GET_LARGETAG(arg)) {
	    case CON_DATA  | CON_TAG :
	    case CON_CDATA | CON_TAG :
	      WHEN_WADLER(fprintf(stderr,"WADLER   4d size = %08lx\n",CONINFO_SIZE(*arg));)
	      WHEN_WADLER({Int i; for(i=1; i<= CONINFO_SIZE(*arg);i++) { fprintf(stderr,"%08lx:%08lx\n",&(arg[EXTRA+i]),arg[EXTRA+i]);}});
	      if(CONINFO_SIZE(*arg)<pos) {
		fprintf(stderr,"pos (%d) > size (%d)  %08lx:%08lx\n",pos,CONINFO_SIZE(*arg),arg,*arg);
		exit(-1);
	      } break;
	    case CON_PTRS  | CON_TAG :
	    case CON_WORDS | CON_TAG :
	      WHEN_WADLER(fprintf(stderr,"WADLER   4e size = %08lx\n",CONINFO_LARGESIZEU(*arg));)
	      WHEN_WADLER({Int i; for(i=1; i<= CONINFO_LARGESIZEU(*arg);i++) { fprintf(stderr,"%08lx:%08lx\n",&(arg[EXTRA+i]),arg[EXTRA+i]);}});
	      if(CONINFO_LARGESIZEU(*arg)<pos) {
		fprintf(stderr,"pos (%d) > size (%d)  %08lx:%08lx\n",pos,CONINFO_LARGESIZEU(*arg),arg,*arg);
		exit(-1);
	      } break;
            default: fprintf(stderr,"Shit happend! app = %08lx arg = %08lx\n",app,arg);
	             exit(-1);
	    }
	      
#endif
	    WHEN_WADLER(fprintf(stderr,"WADLER   4f arg = %08lx\n",arg);)
	    arg = GET_POINTER_ARG1(arg,pos);  /* Get part .. */
	    WHEN_WADLER(fprintf(stderr,"WADLER   4g arg = %08lx\n",arg);)
	    IND_REMOVE(arg);
	    WHEN_WADLER(fprintf(stderr,"WADLER   4h arg = %08lx\n",arg);)

	    WHEN_WADLER(fprintf(stderr,"WADLER   4i app = %08lx:%08lx\n",app,*app);)
#ifdef PROFILE
	    SAVE_PROFINFO(app);
	    app[1] = (Node)-(Int)(app+SIZE_VAP1);            /* .. insert padding cell */ 
            WHEN_WADLER(fprintf(stderr,"WADLER   4j app[1] = %08lx\n",(Node)-(Int)(app+SIZE_VAP1));)
#endif
	    app[0] = (Node)arg;                                 /* .. overwrite Selector */
    	    unmarked(app);              /* .. and unmark, no marked indirection nodes. */
	    if(app == node) {            /* All done ..  */
	      WHEN_WADLER(fprintf(stderr,"END(1) node  %08lx:%08lx %08lx\n",node,node[0],node[EXTRA+1]);)
	      goto InspectNode;
	    }
	    app = (NodePtr)app[EXTRA+1];      /* .. otherwise back up one step */
	  }
	  WHEN_WADLER(fprintf(stderr,"WADLER 5     %08lx %08lx\n",app,arg);)
	  /*
           * arg is not a constructor or it is already marked
	   */
	restore:
	  node[EXTRA+1] = (Node)0;                    /* End conition */
	  do {
	    NodePtr tmp = (NodePtr)app[EXTRA+1];  /* Get back pointer */
	    WHEN_WADLER(fprintf(stderr,"WADLER   6   %08lx %08lx\n",app,arg);)
	    app[EXTRA+1] = (Node)arg;
	    arg = app;
	    unmarked(arg);
	    app = tmp;
	  } while (app);
	  marked(arg);  /* Not as efficient as it should be */
	  WHEN_WADLER(fprintf(stderr,"WADLER 7     %08lx %08lx\n",app,arg);)
	  WHEN_WADLER(fprintf(stderr,"END(2) node  %08lx:%08lx %08lx\n",node,node[0],node[EXTRA+1]);)
	}
#endif

/*********************************/

        addCaf(finfo);
        WHEN_DYNAMIC(if(pactive) GET_INFO(node)->rinfo = profileRetainer;)
        if(size) {
	  WHEN_PROFILE(marked(node+EXTRA);) /* Mark last word in info */
          newpptr = node+size+EXTRA;
	  EDB(if(debug) {fprintf(stderr,"node = %lx newpptr = %lx:",(UInt)node,(UInt)newpptr); fflush(stderr);})
#ifdef DYNAMIC
          if(pactive && ((profile | filter) & PROFILE_RETAINER)) {
            extern int countAp;
            NodePtr *consttable = FINFO_CONST(finfo);
            char *string = ((char **)consttable)[-1];
            pushRetainerStack(profileRetainer,node);
            if(countAp || *string != '@')
              profileRetainer = findRetainer(0,keepFunction(string),string);
          }
#endif
          goto PushNode;
        }
      } goto NextNode;
    case CON_CDATA|CON_TAG:
      EDB(if(debug) {fprintf(stderr,"CON CDATA:"); fflush(stderr);})
      { Coninfo coninfo = GET_CONINFO(node);
        Int psize  = (Int)CONINFO_PSIZE(coninfo);
        WHEN_DYNAMIC(if(pactive) GET_INFO(node)->rinfo = profileRetainer;)
        EDB(if(debug) {fprintf(stderr,"psize = %d:",psize); fflush(stderr);})
        markForeignObj((ForeignObj *)*(node+psize+1+EXTRA));
	WHEN_PROFILE(marked(node+EXTRA);) /* Mark last word in info */
        if(psize) {
          newpptr = node+psize+EXTRA;
          EDB(if(debug) {fprintf(stderr,"node = %lx newpptr = %lx:",(UInt)node,(UInt)newpptr); fflush(stderr);})
          goto PushNode;
        }
      } goto NextNode;
    case CON_DATA|CON_TAG:
      EDB(if(debug) {fprintf(stderr,"CON DATA:"); fflush(stderr);})
      { Coninfo coninfo = GET_CONINFO(node);
        Int psize  = (Int)CONINFO_PSIZE(coninfo);

        WHEN_DYNAMIC(if(pactive) GET_INFO(node)->rinfo = profileRetainer;)
        if(psize) {
	  WHEN_PROFILE(marked(node+EXTRA);) /* Mark last word in info */
          newpptr = node+psize+EXTRA;
          EDB(if(debug) {fprintf(stderr,"node = %lx newpptr = %lx:",(UInt)node,(UInt)newpptr); fflush(stderr);})
          goto PushNode;
        }
      } goto NextNode;
    case CON_PTRS|CON_TAG:
      EDB(if(debug) {fprintf(stderr,"CON PTRS:"); fflush(stderr);})
      { Coninfo coninfo = GET_CONINFO(node);
        Int psize  = (Int)CONINFO_LARGESIZEU(coninfo);
        WHEN_DYNAMIC(if(pactive) GET_INFO(node)->rinfo = profileRetainer;)
        EDB(if(debug) {fprintf(stderr,"psize = %d:",psize); fflush(stderr);})
        if(psize) {
	  WHEN_PROFILE(marked(node+EXTRA);) /* Mark last word in info */
          newpptr = node+psize+EXTRA;
          EDB(if(debug) {fprintf(stderr,"node = %lx newpptr = %lx:",(UInt)node,(UInt)newpptr); fflush(stderr);})
          goto PushNode;
        }
      } goto NextNode;
    case CON_WORDS|CON_TAG:
      EDB(if(debug) {fprintf(stderr,"CON WORDS:"); fflush(stderr);})

/* Check if it is a known integer */
      { Int i;
        if(*node == CONSTRW(1,0) && (i=node[EXTRA+1]) >= -10 && i <= 255) { /* Table int (includes all characters) */
          unmarked(node);
          node = GET_INT(i);
          goto NextNode;
        }
      }

#ifdef DYNAMIC
      { EDB(Coninfo coninfo = GET_CONINFO(node);)
        EDB(Int size  = (Int)CONINFO_LARGESIZEU(coninfo);)
        if(pactive) GET_INFO(node)->rinfo = profileRetainer;
        EDB(if(debug) {fprintf(stderr,"size = %d:",size); fflush(stderr);})
      } goto NextNode;
#endif
      break;
    default:
      fprintf(stderr,"IND_TAG in mark! (1)\n");
      exit(-1);
    }
  }

 NextNode:
  EDB(if(debug) {fprintf(stderr,"Nextnode %lx:",(UInt)node); fflush(stderr);})
  { Node tmp = *pptr;
    *pptr-- = (Node)node;

    if(ifmarked(pptr)) {         /* PopNode: */
      EDB(if(debug) {fprintf(stderr,"PopNode %lx:",(UInt)node); fflush(stderr);})
      if(tmp) {
        node = -EXTRA+(NodePtr)pptr; /* skip over info */
        pptr = (NodePtr)tmp;
#ifdef DYNAMIC
	if(pactive && ((profile | filter) & PROFILE_RETAINER)  && (GET_TAG(node) & VAP_TAG)) {
	  profileRetainer = popRetainerStack(node);
	}
#endif
        goto NextNode;
      } else {
        *inode = node;
        EDB(if(debug) {fprintf(stderr,"return1 %lx\n",(UInt)node); fflush(stderr);})
        return node;
      }
    } else {
      node = (NodePtr)*pptr;
      *pptr = tmp;
      goto InspectNode;
    }
  }

 PushNode:
  EDB(if(debug) {fprintf(stderr,"PushNode %lx:",(UInt)node); fflush(stderr);})
  node = (NodePtr)*newpptr;
  *newpptr = (Node)pptr;
  pptr = newpptr;
  goto InspectNode;
}

void markCaf(void)
{
  while(newCaf != GcEnd) {
    GcConst cptr = newCaf;
    Int size = cptr->sizeArity;
    Int i;
    size = FSTHW(size);

#ifdef DYNAMIC
    if((profile | filter) & PROFILE_RETAINER) {
      char *function = (char *)(newCaf[-1].ptr[0]);   /* ((char **)newCaf)[-1]; didn't work */
      profileRetainer = findRetainer(0,keepFunction(function),function);
    }
#endif
    newCaf = cptr->next;
    cptr->next = oldCaf;
    oldCaf = cptr;

    {
      NodePtr *nptr = &cptr->ptr[0];
      if(GET_TAG(nptr) == IND_TAG)
	mark(nptr);
      i = EXTRA+1;
      size += EXTRA+1;
    }

    for(; i<size; i++) {
      NodePtr nptr = cptr->ptr[i];
      switch(EXT_TAG(nptr)) {
      case VAP_TAG0: case VAP_TAG1:
	{ Cinfo cinfo = EXT_CINFO(nptr);
	  addCaf(CINFO_FINFO(cinfo));
	} break;
      case CON_TAG:
	fprintf(stderr,"CON_TAG in markCaf(1) cptr = %p sizeArity = %08x i = %2ld %p:%p\n",cptr,cptr->sizeArity,i,&cptr->ptr[i],nptr);
	exit(-1);
      case IND_TAG:
	mark(&cptr->ptr[i]);
	break;
      }
    }
  }
}

/*

         |         |                   /-----------\
         |     ----+-------------->--->|VAP Node   |
if scc   :sccptr'  :             /     \-----------/
         |fp'      |            /
fp,sp -> |ip'      |  vapptr --/
         -----------

 */

void markStack(NodePtr *sp)
{
  NodePtr *sptr;
  for(sptr = sp; sptr < spStart; ) {
    NodePtr *fp;
    sptr++;                /* skip ip */
    fp = (NodePtr *)*sptr++; /* Fetch fp */

#ifdef DYNAMIC
      if(pactive && ((profile|filter)&PROFILE_RETAINER)) {
	NodePtr *cp = VAP_CONST(fp[2]);  /* fp[0] == ip, fp[1] == fp' */
	char *function = ((char **)cp)[-1];
	profileRetainer = findRetainer(0,keepFunction(function),function);
      }
#endif

    EDB(if(bellGc>1) { fprintf(stderr,"."); fflush(stderr); })

    while(sptr != fp) {
      EDB(if(debug) {fprintf(stderr,"\n  %4x: ",(UInt)sptr); printGraf(*sptr,3,10);fprintf(stderr,"\n"); })
      mark(sptr);
      sptr++;
    }
  }
}

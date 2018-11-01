#include <stdlib.h>
#include "haskell2c.h"
#include "newmacros.h"
#include "stableptr.h"

#ifdef PROFILE
static SInfo apply1ProfInfo = { "Runtime","buildClosure","<APPLY.VAP>"};
static SInfo apply2ProfInfo = { "Runtime","buildClosure","<APPLY.$>"};
static SInfo apply3ProfInfo = { "Runtime","buildClosure","<APPLY.CAP>"};
#endif

#define getNode() derefStablePtr(*block++)

StablePtr buildClosure (int args, StablePtr* block)
{
    int need, size;
    Cinfo cinfo;
    NodePtr vap, nodeptr;
 
    if (args<0) {
        fprintf(stderr,"buildClosure() called with negative argument\n");
        exit(1);
    }

    C_CHECK(2*(args+1));

    nodeptr = getNode();
    IND_REMOVE(nodeptr);
    UPDATE_PROFINFO(nodeptr)

    cinfo = GET_CINFO(nodeptr);
 
    {
        int c = (GET_LARGETAG(nodeptr));
        switch(c) {
        case CON_DATA | CON_TAG:
        case CON_CDATA | CON_TAG:
            fprintf(stderr, "Strange: con in apply:\n");
#if TRACE
            prGraph(nodeptr, 3, 3);
#endif
            fprintf(stderr, "\n");
            /*startDbg(GET_POINTER_ARG1(nodeptr, 2));*/
            exit(-1);
        }
    }
#if 1
    if(GET_TAG(nodeptr)&VAP_TAG && !CINFO_NEED(cinfo)) {  /* Probably not needed */
        fprintf(stderr,"VAP in Apply?\n");
        vap = nodeptr;
        goto build_apply;
    }
#endif
 
    need = CINFO_NEED(cinfo);
    size = CINFO_SIZE(cinfo);
    nodeptr = nodeptr+1+EXTRA;  /* Skip tag (and optional profile info) */
    if(need <= args) {
        INIT_PROFINFO(Hp,&apply1ProfInfo)
        vap = Hp;
        *Hp++ = (Node)((UInt)2*need+(UInt)cinfo)+(UInt)VAP_TAG;
        Hp += EXTRA; 
        while(size-->0)
            *Hp++ = *nodeptr++;
        args -= need;
        while(need--)
            *Hp++ = (Node)getNode();
    build_apply:
        while(args--) {
            INIT_PROFINFO(Hp,&apply2ProfInfo)
            *Hp++ = (Node)(C_VAPTAG(PRIM_APPLY));
            Hp += EXTRA;
            *Hp ++ = (Node) vap;
            vap = &Hp[-2-EXTRA];
            *Hp++ = (Node)getNode();
        }
    } else { /* need > args */
        INIT_PROFINFO(Hp,&apply3ProfInfo)
        vap = Hp;
        *Hp++ = (Node)(2*(UInt)args+(UInt)VAP_TAG+(UInt)cinfo);
        Hp +=EXTRA;
        while(size-->0)
            *Hp++ = *nodeptr++;
        while(args-->0)
            *Hp++ = (Node)getNode();
    }
    return makeStablePtr(vap);
}

void eval(StablePtr x)
{
  CodePtr IP=Ip;		/* save global instruction pointer */
  C_PUSH(derefStablePtr(x));
  C_EVALTOS(derefStablePtr(x));
  C_POP();
  Ip=IP;			/* restore instruction pointer */
}

StablePtr makeInt (int x) { return makeStablePtr(nhc_mkInt(x)); }
int unmakeInt (StablePtr x)
{
  NodePtr n = derefStablePtr(x);
  IND_REMOVE(n);
  return GET_INT_VALUE(n);
}

StablePtr makeChar (char x) { return makeStablePtr(nhc_mkChar(x)); }
char unmakeChar (StablePtr x)
{
  NodePtr n = derefStablePtr(x);
  IND_REMOVE(n);
  return GET_CHAR_VALUE(n);
}

StablePtr makeBool (int x) { return makeStablePtr(nhc_mkBool(x)); }
int unmakeBool (StablePtr x)
{
  NodePtr n = derefStablePtr(x);
  IND_REMOVE(n);
  return GET_BOOL_VALUE(n);
}

/* ***********************************************************
StablePtr makeFloat (float x) { return makeStablePtr(nhc_mkFloat(x)); }
float unmakeFloat (StablePtr x)
{
  NodePtr n = derefStablePtr(x);
  IND_REMOVE(n);
  return GET_FLOAT_VALUE(n);
}

StablePtr makeDouble (double x) { return makeStablePtr(nhc_mkDouble(x)); }
double unmakeDouble (StablePtr x)
{
  NodePtr n = derefStablePtr(x);
  IND_REMOVE(n);
  return GET_DOUBLE_VALUE(n);
}

StablePtr makePackedString (char* x) { return makeStablePtr(nhc_mkString(x)); }
char* unmakePackedString (StablePtr x)
{
  NodePtr n = derefStablePtr(x);
  IND_REMOVE(n);
  return GET_STRING_VALUE(n);
}
   *********************************************************** */

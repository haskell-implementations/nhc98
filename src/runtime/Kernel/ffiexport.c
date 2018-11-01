#include "haskell2c.h"
#include "newmacros.h"
#include "stableptr.h"

#if 0

#ifdef PROFILE
static SInfo apply1ProfInfo = { "Runtime","foreign_export","<APPLY.VAP>"};
static SInfo apply2ProfInfo = { "Runtime","foreign_export","<APPLY.$>"};
static SInfo apply3ProfInfo = { "Runtime","foreign_export","<APPLY.CAP>"};
#endif

NodePtr buildExportClosure (int args, NodePtr* buffer)
{
    int need, size;
    Cinfo cinfo;
    NodePtr vap, nodeptr;
 
    if (args<0) {
        fprintf(stderr,"buildExportClosure() called with negative argument\n");
        exit(1);
    }

    C_CHECK(2*(args+1));

    nodeptr = *buffer++;
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
            *Hp++ = (Node)*buffer++;
    build_apply:
        while(args--) {
            INIT_PROFINFO(Hp,&apply2ProfInfo)
            *Hp++ = (Node)(C_VAPTAG(PRIM_APPLY));
            Hp += EXTRA;
            *Hp++ = (Node) vap;
            vap = &Hp[-2-EXTRA];
            *Hp++ = (Node)*buffer++;
        }
    } else { /* need > args */
        INIT_PROFINFO(Hp,&apply3ProfInfo)
        vap = Hp;
        *Hp++ = (Node)(2*(UInt)args+(UInt)VAP_TAG+(UInt)cinfo);
        Hp +=EXTRA;
        while(size-->0)
            *Hp++ = *nodeptr++;
        while(args-->0)
            *Hp++ = (Node)*buffer++;
    }
    return vap;
}
#endif

NodePtr evalExport(NodePtr x)
{
  CodePtr IP=Ip;		/* save global instruction pointer */
  StablePtr p = makeStablePtr(x);
  Fp = Sp;
  C_PUSH(x);
  C_EVALTOS(x);
  C_POP();
  Ip=IP;			/* restore instruction pointer */
  x = derefStablePtr(p);
  freeStablePtr(p);
  return x;
}

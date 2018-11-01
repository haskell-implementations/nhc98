#include "cinterface.h"
#include "mutlib.h"
/*#include "node.h"       -- already included in cinterface.h */
/*#include "newmacros.h"  -- already included in node.h */
/*#include "runtime.h"    -- already included in node.h */

NodePtr miniStack[10];
int miniSp=0;
#define miniPush(x)	miniStack[miniSp++]=x
#define miniPop		miniStack[--miniSp]
#define miniClear	miniSp=0

int buildClosure() {
    int need, size, args=miniSp-1;
    Cinfo cinfo;
    NodePtr vap, nodeptr;
 
    if (args<1) {
        fprintf(stderr,"C program code called buildClosure() too directly\n");
        exit(1);
    }

    C_CHECK(2*(args+1));

    nodeptr = miniPop;
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
            *Hp++ = (Node)miniPop;
    build_apply:
        while(args--) {
            INIT_PROFINFO(Hp,&apply2ProfInfo)
            *Hp++ = (Node)(C_VAPTAG(PRIM_APPLY));
            Hp += EXTRA;
            *Hp ++ = (Node) vap;
            vap = &Hp[-2-EXTRA];
            *Hp++ = (Node)miniPop;
        }
    } else { /* need > args */
        INIT_PROFINFO(Hp,&apply3ProfInfo)
        vap = Hp;
        *Hp++ = (Node)(2*(UInt)args+(UInt)VAP_TAG+(UInt)cinfo);
        Hp +=EXTRA;
        while(size-->0)
            *Hp++ = *nodeptr++;
        while(args-->0)
            *Hp++ = (Node)miniPop;
    }
    return stableInsert(vap);
}

int buildClosure1(NodePtr f, NodePtr x) {
    miniClear;
    miniPush(x); miniPush(f);
    return buildClosure();
}

int buildClosure2(NodePtr f, NodePtr x, NodePtr y) {
    miniClear;
    miniPush(y); miniPush(x); miniPush(f);
    return buildClosure();
}

int buildClosure3(NodePtr f, NodePtr x, NodePtr y, NodePtr z) {
    miniClear;
    miniPush(z); miniPush(y); miniPush(x); miniPush(f);
    return buildClosure();
}

int buildClosure4(NodePtr f, NodePtr x, NodePtr y, NodePtr z, NodePtr t) {
    miniClear;
    miniPush(t); miniPush(z); miniPush(y); miniPush(x); miniPush(f);
    return buildClosure();
}


void eval(NodePtr x)
{
  C_PUSH(x);
  C_EVALTOS(x);
  C_POP();
}

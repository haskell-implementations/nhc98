
#ifndef _HASKELL2C_H
#define _HASKELL2C_H

#include "mutlib.h"
#include "cinterface.h"

#define INTEGER1(haskellName,cName) \
    C_HEADER(haskellName) \
    { \
      NodePtr nodeptr; \
      MP_INT *a; \
      nodeptr = C_GETARG1(1); \
      IND_REMOVE(nodeptr); \
      C_CHECK_STMT(1+(Int)CONINFO_LARGESIZEU(*nodeptr)+EXTRA,nodeptr = C_GETARG1(1);); \
      a = (MP_INT*)nodeptr; \
      nodeptr = C_HP; \
      C_HP = cName ((MP_INT *)nodeptr, a); \
      C_RETURN(nodeptr); \
    }

#define INTEGER1_C(haskellName,cName) \
    NodePtr haskellName (NodePtr x) \
    { \
      NodePtr result; \
      MP_INT *a; \
      a = (MP_INT*)x; \
      C_CHECK(1+(Int)CONINFO_LARGESIZEU(*x)+EXTRA); \
      result = C_HP; \
      C_HP = cName ((MP_INT *)result, a); \
      return (result); \
    }


#define INTEGER2(haskellName,cName,need) \
    C_HEADER(haskellName) \
    { \
      NodePtr nodeptr; \
      MP_INT *u,*v; \
      Int size; \
      nodeptr = C_GETARG1(1); \
      IND_REMOVE(nodeptr); \
      u = (MP_INT*)nodeptr; \
      nodeptr = C_GETARG1(2); \
      IND_REMOVE(nodeptr);  \
      v = (MP_INT*)nodeptr; \
      size = need(u,v); \
      C_CHECK_STMT(size,u = (MP_INT*)C_GETARG1(1);v = (MP_INT*)C_GETARG1(2);); \
      nodeptr = C_HP; \
      C_HP = cName ((MP_INT *)nodeptr, u, v); \
      C_RETURN(nodeptr); \
    }

#define INTEGER2_C(haskellName,cName,need) \
    NodePtr haskellName (NodePtr x, NodePtr y) \
    { \
      NodePtr result; \
      MP_INT *u,*v; \
      Int size; \
      u = (MP_INT*)x; \
      v = (MP_INT*)y; \
      size = need(u,v); \
      C_CHECK(size); \
      result = C_HP; \
      C_HP = cName ((MP_INT *)result, u, v); \
      return (result); \
    }


#define INTEGER2CMP(haskellName,cOp) \
    C_HEADER(haskellName) \
    { \
      NodePtr nodeptr; \
      MP_INT *a,*b; \
      nodeptr = C_GETARG1(1); \
      IND_REMOVE(nodeptr); \
      a = (MP_INT*)nodeptr; \
      nodeptr = C_GETARG1(2); \
      IND_REMOVE(nodeptr);  \
      b = (MP_INT*)nodeptr; \
      C_RETURN(GET_BOOL(cOp)); \
    }


#define INTEGER2CMP_C(haskellName,cOp) \
    int haskellName (NodePtr x, NodePtr y)  \
    { \
      MP_INT *a,*b; \
      a = (MP_INT*)x; \
      b = (MP_INT*)y; \
      return (cOp); \
    }

#endif

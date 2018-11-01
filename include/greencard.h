#ifndef _GREENCARD_H
#define _GREENCARD_H
#include "cinterface.h"
#include "mk.h"
#include "stableptr.h"

/* stuff for calling Haskell from C */

extern HaskellRef  buildClosure (int, HaskellRef*);
extern void        eval (HaskellRef);
extern HaskellRef  makeInt (int);
extern int         unmakeInt (HaskellRef);
extern HaskellRef  makeChar (char);
extern char        unmakeChar (HaskellRef);
extern HaskellRef  makeBool (int);
extern int         unmakeBool (HaskellRef);

#endif

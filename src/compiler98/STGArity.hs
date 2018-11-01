module STGArity(stgArity) where

import State
import IntState
import Id
import PosCode
import Building

stgArity :: IntState -> [(Id,PosLambda)] -> ([(Id,PosLambda)],IntState)
stgArity state code =
  case mapS arityBinding code () (state,[],()) of
    (bs,(state,_,_)) -> (bs,state)

arityBinding (fun,PosLambda pos int env args exp) =
    pushEnv (map snd args) >>>
    arityExp exp >>>= \ exp ->
    popEnv >>>
    unitS (fun,PosLambda pos int env args exp)
arityBinding b@(fun,PosPrimitive pos f) =
    unitS b
arityBinding b@(fun,PosForeign pos f ar t c ie) =
    unitS b

arityExp (PosExpLambda pos int envs args exp)  =
  pushEnv (map snd args) >>>
  arityExp exp >>>= \ exp ->
  popEnv >>>
  unitS (PosExpLambda pos int envs args exp)
arityExp (PosExpLet rec pos bindings exp) =
  pushEnv (map fst bindings) >>>
  mapS arityBinding bindings >>>= \ bindings ->
  arityExp exp >>>= \ exp ->
  popEnv >>>
  unitS (PosExpLet rec pos bindings exp)
arityExp (PosExpCase pos exp alts) =
  mapS arityAlt alts >>>= \ alts ->
  arityExp exp >>>= \ exp ->
  unitS (PosExpCase pos exp alts)
arityExp (PosExpFatBar b exp1 exp2) =
  arityExp exp2 >>>= \ exp2 ->
  arityExp exp1 >>>= \ exp1 ->
  unitS (PosExpFatBar b exp1 exp2)
arityExp (PosExpFail) =
  unitS (PosExpFail)
arityExp (PosExpIf  pos g exp1 exp2 exp3) =
  arityExp exp2 >>>= \ exp2 ->
  arityExp exp3 >>>= \ exp3 ->
  arityExp exp1 >>>= \ exp1 ->
  unitS (PosExpIf pos g exp1 exp2 exp3)
arityExp (PosExpApp pos (PosExpApp _ es1:es2)) = -- Can be  be created in lift
  arityExp (PosExpApp pos (es1++es2))
arityExp (PosExpApp epos (atom@(PosVar pos i):atoms)) =
  mapS arityExp atoms >>>= \ atoms ->
  arityArity i >>>= \ qarity ->
  case qarity of
    Nothing ->  -- assume it alway is strict (we lift _everything_ :-)
      unitS  (PosExpApp epos (atom:atoms))
    Just arity ->
      if length atoms <= arity then
        unitS (PosExpThunk epos False (atom:atoms))
      else
        case splitAt arity atoms of
          (args,eargs) ->
            unitS (PosExpApp epos (PosExpThunk pos False (atom:args):eargs))
arityExp (PosExpApp pos es) = -- complicated function
  mapS arityExp es >>>= \ es ->
  unitS (PosExpApp pos es)
arityExp (PosExpThunk pos False es) = -- prim/con
  mapS arityExp es >>>= \ es ->
  unitS (PosExpThunk pos False es)
arityExp (PosExpThunk pos True es) | compiler==Nhc98 = 
  mapS arityExp es >>>= \ es ->
  unitS (PosExpThunk pos True es)
arityExp e = unitS e

arityAlt (PosAltCon pos con args exp) =
  pushEnv (map snd args) >>>
  arityExp exp >>>= \ (exp) ->
  popEnv >>>
  unitS (PosAltCon pos con args exp)
arityAlt (PosAltInt pos int b exp) =
  arityExp exp >>>= \ (exp) ->
  unitS (PosAltInt pos int b exp)


------

pushEnv args down up@(state,env,bs) =
  (state,args:env,bs)

popEnv down up@(state,(_:env),bs) =
  (state,env,bs)

arityArity i down up@(state,env,bs) =
  if any (i `elem`) env then
    (Nothing,up)
  else
    (Just (arityIS state i),up)

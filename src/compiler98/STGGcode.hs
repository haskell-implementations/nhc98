module STGGcode where -- (stgGcode) where

import Util.Extra(pos2Int)
import Maybe
import Id
import State
import PosCode
import Gcode
import GcodeLow(con0,cap0,caf)
import STGState
import STGBuild
import ForeignCode(ImpExp(..))

stgGcode prof state code = 
  case {- mapS -} gBindingTop code () (Thread prof 0 0 [] state [] [] 0 0 [] ([],Nothing)) of
    (bs,(Thread prof fun _ _ state _ _ _ _ _ (fs,_))) -> (bs,state,fs)
  
gBindingTop (fun,PosLambda pos _ [] args@[arg] exp@(PosExpCase cpos (PosVar vpos var) [PosAltCon apoc con posargs (PosVar vpos2 var2)])) =
    gOnly con >>>= \ only ->
    if only && any ((var2 ==).snd) posargs then -- Selector function
      let no = fromJust (lookup var2 (zip (map snd posargs) [1..]))
      in unitS (STARTFUN (pos2Int pos) fun : needstack 1 [ SELECTOR_EVAL, SELECT no ])
    else     -- Ugly duplication of code
      setFun (fromEnum fun) >>>
      pushEnv (zip (map (fromEnum.snd) args) (map Arg [1..])) >>>
      gExp exp >>>= \ exp ->
      popEnv >>>
      maxDepth >>>= \ d ->
      unitS (STARTFUN (pos2Int pos) fun : needstack d ( exp ++ [RETURN_EVAL]))
gBindingTop (fun,PosLambda pos _ env args exp) =
    setFun (fromEnum fun) >>>
    pushEnv (zip (map (fromEnum.snd) args) (map Arg [1..])) >>>
    gExp exp >>>= \ exp ->
    popEnv >>>
    maxDepth >>>= \ d ->
    unitS (STARTFUN (pos2Int pos) fun : needstack d (exp ++ [RETURN_EVAL]))
gBindingTop (fun,PosPrimitive pos fn) =
    setFun (fromEnum fun) >>>
    gArity (fromEnum fun) >>>= \ (Just arity) ->
    unitS (STARTFUN (pos2Int pos) fun: concatMap ( \ p -> [PUSH_ARG p, EVAL, POP 1] ) [1 .. arity] ++
	   [PRIMITIVE, DATA_CLABEL (fromEnum fn), RETURN_EVAL ])
gBindingTop (fun,PosForeign pos fn _ str c ie) =
    setFun (fromEnum fun) >>>
    gArity (fromEnum fun) >>>= \ (Just arity) ->
    makeForeign str arity fn c ie >>>
    case ie of
      Imported ->
        unitS
          (STARTFUN (pos2Int pos) fun:
           concatMap ( \ p -> [PUSH_ARG p, EVAL, POP 1] ) [1 .. arity] ++
           [ PRIMITIVE , DATA_FLABEL (fromEnum fn), RETURN_EVAL ])
      Exported ->
        unitS []

gExp (PosExpLet _ pos bindings exp) =
   \ down (Thread prof fun maxDepth failstack state env lateenv depth heap depthstack fs) ->
    let (bBuild_bEnv,Thread prof' fun' maxDepth' failstack' state' _ _ _ heap' depthstack' fs')
            = mapS stgBodyPush bindings
                   down (Thread prof fun maxDepth failstack state newEnv (addLate:lateenv) depth heap depthstack fs)
                   
        (bBuild,addLate) = unzip bBuild_bEnv
        addId = map fst bindings
	addEnv = map ( \ v -> (fromEnum v,HeapLate)) addId
        newEnv = addEnv:env
        size = length addId
    in
--      strace ("STGGCode PosExpLet addLate " ++ show (map fst addLate) ++ " addId " ++ show addId) $
      (pushStack (map fromEnum addId) >>>
       gExp exp >>>= \ eBuild ->
       popEnv >>>
       decDepth size >>>
       unitS (concat bBuild ++ eBuild ++ [SLIDE size])
       ) down (Thread prof' fun' maxDepth' failstack' state' env lateenv depth heap' depthstack' fs')

gExp (PosExpCase pos exp alts) =
  gExp exp >>>= \ exp ->
  getFail >>>= \ fd ->
  pushDH >>>
  gUnique >>>= \ c ->
  mapS (gAlt c) alts >>>= \ alts ->
  popDH >>>
  case unzip alts of
    (il,alts) -> 
      unitS (exp ++ EVAL : CASE il fd : concat alts ++ [LABEL (fromEnum c)])

gExp (PosExpFatBar esc exp1 exp2) =
  pushDH >>>
  pushFail >>>= \ fail ->
  gUnique >>>= \ after ->
  gExp exp1 >>>= \ exp1 ->
  popFail >>>
  popDH >>>
  gExp exp2 >>>= \ exp2 ->
  unitS (exp1 ++ JUMP (fromEnum after) : LABEL fail : exp2 ++ [LABEL (fromEnum after)])

gExp (PosExpFail) =
  getFail >>>= \ (Just (fail,d)) ->
  unitS [POP d, JUMP fail]

gExp (PosExpIf  pos _ exp1 exp2 exp3) =
  gUnique >>>= \ false ->
  gUnique >>>= \ after ->
  pushDH >>>
  gExp exp1 >>>= \ exp1 ->
  cloneDH >>>
  gExp exp2 >>>= \ exp2 ->
  popDH >>>
  gExp exp3 >>>= \ exp3 ->
  unitS (exp1 ++ EVAL:JUMPFALSE (fromEnum false): exp2 ++ JUMP (fromEnum after):LABEL (fromEnum false):exp3 ++ [LABEL (fromEnum after)]) -- DAVID

gExp (PosExpThunk pos _ [PosPrim _ STRING _,PosString _ s]) =
  incDepth >>>
  unitS [PUSH_STRING s, PRIM STRING]

gExp (PosExpThunk pos _ [PosPrim _ SEQ _,a1,a2]) =
  gExp a1 >>>= \ a1 ->
  decDepth 1 >>>
  gExp a2 >>>= \ a2 ->
  unitS (a1 ++ EVAL : POP 1 : a2)

gExp (PosExpThunk pos _ (PosPrim _ p _:args)) = -- must be right number of arguments
   mapS ( \ a -> gExp a >>>= \ a -> unitS (a ++ [EVAL])) (reverse args) >>>= \ args ->
   decDepth (length args - 1) >>>
   unitS (concat args ++ [PRIM p])

gExp (PosExpApp pos (fun:args)) =
  mapS gAtom (reverse args) >>>= \ args ->
  gExp fun >>>= \ fun ->
  decDepth (length args) >>>
  unitS (concat args ++ fun ++ [EVAL,APPLY (length args)])

gExp exp@(PosExpThunk _ _ (tag@(PosCon _ v):args)) = -- Should evaluate strict arguments (already done ?) !!! 
  stgExpPush exp

gExp exp@(PosExpThunk _ _ (tag@(PosVar _ v):args)) =
-- \#ifdef DBGTRANS
--  gState >>>= \state ->
--  let vid = tidIS state v in
--  if False {-vid `elem` [t_ap n | n <- [1..10]]-} then 
--    -- expensive test - change!
--    {- this has been removed already by Jan;
--       the idea was probably to make the ap combinators strict in
--       their arguments to make them more efficient -} 
--      mapS (\a -> gExp a >>>= \a' -> unitS (a' ++ [EVAL])) args >>>= \args' ->
--      getExtra v >>>= \(_, extra) ->
--      unitS (concat args' ++ [PUSH_HEAP, HEAP_VAP v] ++ extra
--	      ++ map HEAP (reverse [1..length args]) ++ [SLIDE (length args)])
--  else
--      stgExpPush exp
--  \#else
  stgExpPush exp
-- \#endif

gExp atom =
  gAtom atom

gAlt c (PosAltCon pos con args exp) = 
  let nargs = length args
  in 
    cloneDH >>>
    decDepth 1 >>> -- UNPACK remove one element
    pushStack (reverse (map (fromEnum.snd) args)) >>>
    gUnique >>>= \ u -> 
    gExp exp >>>= \ exp ->
    decDepth nargs >>>
    popEnv >>>
    unitS ((GALT_CON (fromEnum con), fromEnum u), LABEL (fromEnum u) : UNPACK nargs : exp ++ [SLIDE nargs,JUMP (fromEnum c)])
gAlt c (PosAltInt pos i _    exp) =
  cloneDH >>>
  gUnique >>>= \ u -> 
  decDepth 1 >>> -- POP 1 remove one element
  gExp exp >>>= \ (exp) ->
  unitS ((GALT_INT i, fromEnum u), LABEL (fromEnum u) : POP 1 : exp ++ [JUMP (fromEnum c)])

gAtom (PosExpThunk pos _ [e]) =
  gAtom e
gAtom (PosCon pos i) =
  incDepth >>> unitS [PUSH_GLB con0 (fromEnum i)]
gAtom (PosVar pos i) =
  gWhere (fromEnum i) >>>= \ w ->
  case w of
    Nothing -> incDepth >>>
		 gArity (fromEnum i) >>>= \ a ->
		   if isJust a && fromJust a == 0 then 
		     unitS [PUSH_GLB caf (fromEnum i)]
		   else
		     unitS [PUSH_GLB cap0 (fromEnum i)]
    Just (Arg i) -> incDepth >>> unitS [PUSH_ARG (fromEnum i)]
    Just (Stack i) -> incDepth >>> unitS [PUSH (fromEnum i)]
gAtom (PosInt pos i) = incDepth >>> unitS [PUSH_INT i]
gAtom (PosChar pos i) = incDepth >>> unitS [PUSH_CHAR i]
gAtom (PosFloat pos f) = incDepth >>> unitS [PUSH_FLOAT f]
gAtom (PosDouble pos d) = incDepth >>> unitS [PUSH_DOUBLE d]
-- \#ifdef DBGTRANS
-- gAtom (PosInteger pos i) = incDepth >>> unitS [PUSH_INT (fromInteger i)]
-- \#else
gAtom (PosInteger pos i) = incDepth >>> unitS [PUSH_INTEGER i]
-- \#endif
gAtom atom = stgExpPush atom

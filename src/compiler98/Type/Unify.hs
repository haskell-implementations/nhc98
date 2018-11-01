{- ---------------------------------------------------------------------------
The main unification functions for NTs
-}
module Type.Unify(unify,unifyr) where

import NT(NT(..),NewType(..),freeNT,anyVarNT)
import Type.Subst
import IntState hiding (NewType)
import Id(Id)
import qualified Data.Map as Map
import Flags


unify :: IntState -> Map.Map Id NT -> (NT,NT) 
      -> Either (Map.Map Id NT, String) (Map.Map Id NT)

unify state phi (t1@(NTany tvn1),t2) =
  case applySubst phi tvn1 of
    Nothing     -> extendV state phi tvn1 (subst phi t2)
    Just phitvn -> unify state phi (phitvn,subst phi t2)

unify state phi (t1@(NTvar tvn1 _),(NTany tvn2)) =
  case applySubst phi tvn2 of
    Nothing     -> extendV state phi tvn2 (subst phi t1)
    Just phitvn -> unify state phi (phitvn,subst phi t1)

unify state phi (t1@(NTvar tvn1 _),t2) =
  case applySubst phi tvn1 of
    Nothing     -> extendV state phi tvn1 (subst phi t2)
    Just phitvn -> unify state phi (phitvn,subst phi t2)

unify state phi (t1@(NTcons _ _ _),t2@(NTany tvn2)) =
  case applySubst phi tvn2 of
    Nothing     -> extendV state phi tvn2 (subst phi t1)
    Just phitvn -> unify state phi (phitvn,subst phi t1)

unify state phi (t1@(NTcons _ _ _),t2@(NTvar tvn2 _)) =
  case applySubst phi tvn2 of
    Nothing     -> extendV state phi tvn2 (subst phi t1)
    Just phitvn -> unify state phi (phitvn,subst phi t1)

unify state phi (t1@(NTcons c1 _ ts1),t2@(NTcons c2 _ ts2)) =
  if c1 == c2 && isNotTypeSynonym state c1
  then if length ts1 == length ts2 -- length check because of constructor classes
       then unifyl state phi (zip ts1 ts2)
       else
         case lookupIS state c1 of
           Just info ->
             Left (phi, "can not unify " ++ show (tidI info) ++ " with " ++ 
                        show (length ts1) ++ " and " ++ show (length ts2) ++ 
                        " arguments")
  else
    case (unifyExpand state c1,unifyExpand state c2) of
      (Left s1       ,Left s2       )          ->
          let flags = getFlags state 
          {- this happens because of circular dependency complications ...  -}
          in if sUnifyHack flags && s1 == s2 then unifyl state phi (zip ts1 ts2)
                      else Left (phi,"type clash between " ++ s1 ++ " and " ++ s2)
      (Left  _       ,Right (d2,nt2))          -> 
        unify state phi (t1            ,expand nt2 ts2)
      (Right (d1,nt1),Left _        )          -> 
        unify state phi (expand nt1 ts1,t2            )
      (Right (d1,nt1),Right (d2,nt2)) | d2<=d1 -> 
        unify state phi (expand nt1 ts1,t2            )
      (Right (d1,nt1),Right (d2,nt2))          -> 
        unify state phi (t1            ,expand nt2 ts2)

unify state phi (t1@(NTcons c1 _ ts1),t2@(NTapp ta2 tb2)) =
  case expandAll state t1 of
    t1@(NTcons c1 k ts1) ->
--      strace ("unify(1) " ++ show t1 ++ " " ++ show t2) $
      case ts1 of
        [] ->
          case lookupIS state c1 of
            Just info ->
              Left (phi, "type clash between type applicationa and " ++ show (tidI info))
        _ ->  unifyl state phi [(NTcons c1 k (init ts1),ta2),(last ts1,tb2)]


unify state phi (t1@(NTapp ta1 tb1),t2@(NTany tvn2)) =
--  strace ("unify(2) " ++ show t1 ++ " " ++ show t2) $
  case applySubst phi tvn2 of
    Nothing     -> extendV state phi tvn2 (subst phi t1)
    Just phitvn -> unify state phi (phitvn,subst phi t1)

unify state phi (t1@(NTapp ta1 tb1),t2@(NTvar tvn2 _)) =
--  strace ("unify(3) " ++ show t1 ++ " " ++ show t2) $
  case applySubst phi tvn2 of
    Nothing     -> extendV state phi tvn2 (subst phi t1)
    Just phitvn -> unify state phi (phitvn,subst phi t1)

unify state phi (t1@(NTapp ta1 tb1),t2@(NTcons c2 _ ts2)) =
  case expandAll state t2 of
    t2@(NTcons c2 k ts2) ->
--      strace ("unify(4) " ++ show t1 ++ " " ++ show t2) $
      case ts2 of
        [] ->
          case lookupIS state c2 of
            Just info ->
              Left (phi, "type clash between " ++ show (tidI info) ++ " and type application ")
        _ -> unifyl state phi [(ta1,NTcons c2 k (init ts2)),(tb1,last ts2)]

unify state phi (t1@(NTapp ta1 tb1),t2@(NTapp ta2 tb2)) =
--  strace ("unify(5) " ++ show t1 ++ " " ++ show t2) $
  unifyl state phi [(ta1,ta2),(tb1,tb2)]

unify state phi (t1@(NTexist tvn1 _),(NTexist tvn2 _)) =
  if tvn1 == tvn2 then
    Right phi
  else
   Left (phi,"type clash between existential types")

unify state phi ((NTexist _ _),(NTcons c _ _)) =
  case lookupIS state c of
    Just info ->
      Left (phi, "type clash between " ++ show (tidI info) ++ " and existential type ")

unify state phi ((NTcons c _ _),(NTexist _ _)) =
  case lookupIS state c of
    Just info ->
      Left (phi, "type clash between " ++ show (tidI info) ++ " and existential type ")

unify state phi ((NTexist _ _),(NTapp _ _)) =
   Left (phi,"type clash between existential type and type application")

unify state phi ((NTapp _ _),(NTexist _ _)) =
   Left (phi,"type clash between existential type and type application")

unify state phi (t1@(NTexist e _),t2@(NTany tvn2)) =
-- strace ("unify exist " ++ show e ++ " any " ++ show tvn2) $ 
  case applySubst phi tvn2 of
    Nothing     -> extendV state phi tvn2 (subst phi t1)
    Just phitvn -> unify state phi (phitvn,subst phi t1)

unify state phi (t1@(NTexist e _),t2@(NTvar tvn2 _)) =
-- strace ("unify exist " ++ show e ++ " var " ++ show tvn2) $ 
  case applySubst phi tvn2 of
    Nothing     -> extendV state phi tvn2 (subst phi t1)
    Just phitvn -> unify state phi (phitvn,subst phi t1)

unify state phi _ = error "unify phi _"


unifyl :: IntState -> Map.Map Id NT -> [(NT,NT)] 
       -> Either (Map.Map Id NT, String) (Map.Map Id NT)

unifyl state phi eqns = foldr unify' (Right phi) eqns
        where
            unify' eqn (Right phi) = unify state  phi eqn
            unify' eqn (Left err) = Left err


{- unify a list of NTs from left to right -}

unifyr :: IntState -> Map.Map Id NT -> [NT] 
       -> Either (Map.Map Id NT, String) (Map.Map Id NT)

unifyr state phi [] = Right phi
unifyr state phi [e] = Right phi
unifyr state phi (e1:e2:es) =
       case unify state  phi (e1,e2) of
          Left err -> Left err
          Right phi' -> unifyr state phi' (e1:es)


------

-- expand any type synonym at top, so that none is at top in result
expandAll :: IntState -> NT -> NT
expandAll state t@(NTcons tcon _ ts) =
  case unifyExpand state tcon of
    Left _ -> t
    Right (d,nt) -> expandAll state (expand nt ts)
expandAll state t = t

isNotTypeSynonym :: IntState -> Id -> Bool
isNotTypeSynonym state con =
  case unifyExpand state con of
    Right _ -> False
    Left _ -> True

-- expand all type synonyms, so that none is left in result
fullyExpand :: IntState -> NT -> NT
fullyExpand state t = 
  case expandAll state t of
    NTstrict t -> NTstrict (fullyExpand state t)
    NTapp t1 t2 -> NTapp (fullyExpand state t1) (fullyExpand state t2)
    NTcons id k ts -> NTcons id k (map (fullyExpand state) ts)
    t -> t

{-
If tcon is a type synoym, then unifyExpand returns the depth and the
definition body of the type synoym.
Otherwise it returns the printable name of tcon.
-}
unifyExpand :: IntState -> Id -> Either String (Int,NewType)

unifyExpand state tcon =
    case lookupIS state tcon of
      Just info ->
        case depthI info of
          Just d -> Right (d,ntI info)
          Nothing -> Left (show (tidI info))


{-
Replaces the free variables of the type given as first argument by
the types given as second argument.
Precondition: no free variable of the first type should occur in any
of the other types (ids of their free variables should be higher).
Otherwise evaluation of the function will not terminate.
-}

expand :: NewType -> [NT] -> NT

expand (NewType free [] ctxs [nt]) ts = subst (list2Subst (zip free ts)) nt

{-
Extends substitution by subtitution of `t' for `tvn'.
Performs occurrence check and assures that replacement of `tvn' is a type
variable, if `t' expands to a type variable.
-}
extendV :: IntState -> Map.Map Id NT -> Id -> NT 
        -> Either (Map.Map Id NT, String) (Map.Map Id NT)

extendV state phi tvn t = 
  let t' = expandAll state t
  in case anyVarNT t' of
       Just tvn' -> if tvn' == tvn
                    then Right phi
                    else Right (addSubst phi tvn  t')
       Nothing   -> 
         if tvn `elem` freeNT t' 
           then let t'' = fullyExpand state t' 
                -- expansion may have less free variables
                in if tvn `elem` freeNT t''
                then Left (phi,"(type-variable occurrence check fails)")
                else Right (addSubst phi tvn t'')
           else Right (addSubst phi tvn t)  -- do not expand unnecessarily


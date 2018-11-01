module CaseOpt where

import PosCode
import State
import IntState
import Info
import Syntax
import SyntaxUtil
import Maybe
import Id

optFatBar :: PosExp -> PosExp -> State0 d (IntState, b) (PosExp, (IntState, b))
optFatBar e1 e2 =
  failExp e1 >>>= \ canfail ->
  if canfail
  then failExp e2 >>>= \ canfail ->
       unitS (PosExpFatBar canfail e1 e2)
  else unitS e1


failExp :: PosExp -> d -> (IntState, b) -> (Bool, (IntState, b))
failExp (PosExpCase pos exp alts) =
  anyMissing alts >>>= \ notfull ->
  mapS failAlt alts >>>= \ alts ->
  unitS (notfull || or alts)
failExp (PosExpFatBar b exp1 exp2)     = unitS b
failExp (PosExpFail)                   = unitS True
     -- Might need to check if exp1 is True, in which case there can be no fail
failExp (PosExpIf  pos g exp1 exp2 exp3) = failExp exp3 -- the fail is always in the else branch
failExp (PosExpLet rec pos bindings exp)   = failExp exp -- used in lhs-patterns
failExp e = unitS False

failAlt :: PosAlt -> d -> (IntState, b) -> (Bool, (IntState, b))
failAlt (PosAltCon pos con args exp) = failExp exp
failAlt (PosAltInt pos int b    exp) = failExp exp

anyMissing :: [PosAlt] -> t -> (IntState, b) -> (Bool, (IntState, b))
anyMissing (PosAltInt pos int b exp:alts) down up@(state,_) = (True,up)
anyMissing (PosAltCon pos con args exp:alts) down up@(state,_) =
  let all = ( constrsI . fromJust . lookupIS state
            . belongstoI . fromJust . lookupIS state
            ) con
      has = con : map ( \ (PosAltCon pos con args exp) -> con ) alts
      missing = (not . null . filter (`notElem` has)) all
  in (missing,up)


---

singleVars :: Exp Id -> t -> (IntState, b) -> (Maybe [Maybe (Pos, Id)], (IntState, b))
singleVars (ExpApplication _ (ExpCon _ con:es)) down up@(state,_) =
  ( if ( (1==) . length . constrsI . fromJust . lookupIS state
                   . belongstoI . fromJust . lookupIS state) con -- only one constructor
       && all isVar es   -- and all arguments are variables (or wildcards)
    then Just (map getPosI es)
    else Nothing
  , up
  )
singleVars _ down up = (Nothing,up)

getPosI :: Exp id -> Maybe (Pos, id)
getPosI (ExpVar pos i) = Just (pos, i)
getPosI (PatWildcard pos) = Nothing

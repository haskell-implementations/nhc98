module CaseHelp(Pattern(..), alt2fun,getTrans,sortCon,sortInt,splitPattern,varExp,varExpT
                ,dropPatAs, isExpVar, needLet) where

import Syntax
import PosCode
import State
import IntState
import qualified Data.Map as Map
import CaseLib
import SyntaxPos
import SyntaxUtil
import Id

alt2fun :: Alt Id -> Fun Id
alt2fun (Alt pat gdexps decls) = Fun [pat] gdexps decls

noVar :: Id
noVar = error "noVar"

-- The following two functions could be simplified no.
-- the expression is always simple if trans isn't empty.

varExpT :: [a] -> PosExp -> CaseFun ([a],Id,PosExp->PosExp,PosExp)
varExpT [] e =
  unitS ([],noVar,id,e)
varExpT trans e@(PosVar pos v) =
  unitS (trans,v,id,e)
varExpT trans e =
 caseUnique >>>= \ v ->
 let pos = getPos e
 in unitS (trans,v,PosExpLet False pos [(v,PosLambda pos LamFLIntro [] [] e)],PosVar pos v)

varExp :: PosExp -> CaseFun (Id,PosExp->PosExp,PosExp)
varExp  e@(PosVar pos v) =
  unitS (v,id,e)
varExp  e =
 caseUnique >>>= \ v ->
 let pos = getPos e
 in unitS (v,PosExpLet False pos [(v,PosLambda pos LamFLIntro [] [] e)],PosVar pos v)

getTrans :: ExpI -> [Id]
getTrans (ExpVar _ ident) = [ident]
getTrans (PatAs _ ident p) = ident : getTrans p
getTrans _ = []

isIf :: ExpI -> Bool
isIf p = not (isVar p || isCon p || isExpInt p || isNK p || isExpIrr p)

data Pattern =
    PatternVar [(Exp Id,Fun Id)]
  | PatternCon [(Exp Id,Fun Id)]
  | PatternInt Bool [(Exp Id,Fun Id)]
  | PatternNK  [(Exp Id,Fun Id)]
  | PatternIf  [(Exp Id,Fun Id)]
  | PatternIrr  (Exp Id,Fun Id)

patternTypes :: [(ExpI->Bool ,[(ExpI,Fun Id)] -> [Pattern])]
patternTypes =
        [(isVar,(:[]).PatternVar)
        ,(isCon,(:[]).PatternCon)
        ,(isExpInt,(:[]).PatternInt True)
        ,(isExpChar,(:[]).PatternInt False)
        ,(isNK,(:[]).PatternNK)
        ,(isExpIrr,map PatternIrr)
        ,(isIf,(:[]).PatternIf)]

splitPattern :: (ExpI,ExpI) -> IntState -> [Fun Id] -> [Pattern]
splitPattern list state funs =
  (split patternTypes (map (splitFuns list state) funs))
 where
  split pt [] = []
  split [] funs = split patternTypes funs
  split ((p,t):pt) funs =
    case span (p . dropPatAs . fst) funs of
      ([],funs) -> split pt funs
      (vs,funs) -> t vs ++ split pt funs

splitFuns :: (ExpI,ExpI) -> IntState -> Fun Id -> (ExpI,Fun Id)
splitFuns list state (Fun (p:ps) gdexps decls) =
  (simplifyPat list state p,Fun ps gdexps decls)

simplifyPat :: (ExpI,ExpI) -> IntState -> ExpI -> ExpI
simplifyPat list state (ExpList pos ls) =
        case ls of
          [] -> fst list
          (x:xs) -> ExpApplication pos [snd list,x,ExpList pos xs]
simplifyPat list state (ExpLit pos (LitString b str)) =
        case str of
          [] -> fst list
          (x:xs) -> ExpApplication pos [snd list, ExpLit pos (LitInt b (fromEnum x)),ExpLit pos (LitString b xs)]
-- simplifyPat list state (ExpLit pos (LitChar b i)) = ExpLit pos (LitInt b (fromEnum i))
simplifyPat list state (PatAs pos ident pat) = PatAs pos ident (simplifyPat list state pat)
simplifyPat list state (ExpApplication pos (ExpApplication _ es':es)) = ExpApplication pos  (map (simplifyPat list state) (es'++es))
simplifyPat list state (ExpDict pat) = simplifyPat list state pat
simplifyPat list state pat = pat

sortInt :: [(ExpI,Fun Id)] -> [(Int,[Fun Id])]
sortInt funs =
  (stableSort
  .map ( \ (pat,fun) -> (getInt pat,fun))
  ) funs
 where
  getInt (PatAs _ _ p) = getInt p
  getInt (ExpLit _ (LitInt b i)) = i
  getInt (ExpLit _ (LitChar b i)) = fromEnum i

sortCon :: [(ExpI,Fun Id)] -> [(Id,[([Pos], Fun Id)])]
sortCon funs =
  (stableSort
  . map ( \ (pat,Fun pats gdexps decls) ->
                 case getConArg pat of
                   (con,args) -> (con,(map getPos args,Fun (args++pats) gdexps decls)))
  ) funs
 where
  getConArg (ExpCon _ con) = (con,[])
  getConArg (PatAs _ _ p) = getConArg p
  getConArg (ExpApplication _ (ExpCon _ con:ps)) = (con,ps)

stableSort :: Ord a => [(a, b)] -> [(a, [b])]
stableSort xs = -- I hope !!
 let add (c,f) t = Map.insertWith (++) c [f] t
 in Map.toList (foldr add Map.empty xs)


needLet :: Pattern -> Bool
needLet (PatternVar  patfuns) = any (not . null . getTrans . fst) patfuns
needLet (PatternCon  patfuns) = any (not . null . getTrans . fst) patfuns
needLet (PatternInt _ patfuns) = any (not . null . getTrans . fst) patfuns
needLet (PatternNK   patfuns) = any (not . null . getTrans . fst) patfuns
needLet (PatternIf   patfuns) = any (not . null . getTrans . fst) patfuns
needLet (PatternIrr (pat,fun)) = (not . null . getTrans) pat

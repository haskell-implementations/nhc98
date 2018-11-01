module NplusK where

import Syntax
import TokenId



hasNplusK (DeclFun pos tid [Fun pats gdexps (DeclsParse w)]) =
    any npkPat pats || any npkGdExp gdexps || any hasNplusK w
  where
    npkPat (ExpRecord exp _) = npkExp exp
    npkPat (ExpApplication _ exps) = any npkExp exps
    npkPat (ExpInfixList _ exps) = any npkExp exps
    npkPat (ExpList _ exps) = any npkExp exps
    npkPat (PatAs _ _ pat) = npkPat pat
    npkPat (PatIrrefutable _ pat) = npkPat pat
    npkPat (PatNplusK _ _ _ _ _) = True
    npkPat _ = False

    npkExp (ExpLambda _ pats exp) = any npkPat pats || npkExp exp
    npkExp (ExpLet _ (DeclsParse decls) exp) = any hasNplusK decls || npkExp exp
    npkExp (ExpDo _ stmts) = any npkStmt stmts
    npkExp (ExpCase _ exp alts) = npkExp exp || any npkAlt alts
    npkExp (ExpFatbar exp1 exp2) = npkExp exp1 || npkExp exp2
    npkExp ExpFail = False
    npkExp (ExpIf _ c t e) = any npkExp [c,t,e]
    npkExp (ExpType _ exp _ _) = npkExp exp
    npkExp (ExpRecord exp _) = npkExp exp
    npkExp (ExpApplication _ exps) = any npkExp exps
    npkExp (ExpInfixList _ exps) = any npkExp exps
    npkExp (ExpList _ exps) = any npkExp exps
    npkExp _ = False

    npkGdExp (gd,exp) = npkExp exp

    npkAlt (Alt pat gdexps (DeclsParse w)) = npkPat pat || any npkGdExp gdexps || any hasNplusK w

    npkStmt _ = False   -- WRONG!!

hasNplusK _ = False


{-  This section removed.

transNplusK f@(DeclFun pos tid [Fun pats gdexps (DeclsParse w)]) =
    let (pats',defs) = unzip (map (npkPat (`elem` w')) pats)
    in
    if pats'==pats then f
    else DeclFun ps tid [Fun pats' gdexps (DeclsParse (concat defs++w))]

  where

    w' = concatMap stripLhs w

    npkPat inUse 
-}


-- Make the function (caf) definition    n | n'>=k  = n'-k
buildNplusK pos n n' k (DeclsParse decls) =
    DeclsParse
        ((DeclFun pos n
            [Fun []
                 [ (ExpApplication pos [ExpVar pos t_lessequal, k, ExpVar pos n']
                   ,ExpApplication pos [ExpVar pos tminus, ExpVar pos n', k])
                 ]
                 (DeclsParse [])])
        : decls)


-- Translate  f (n+k) = rhs(n)
-- to         f  n'   = rhs(n)
--              where n | n'>=k  = n'-k

-- Translate  do (n+k) <- exp
--               stmts(n)
-- to         do n'<- exp
--               n <- return (let n | n'>=k  = n'-k in n)
--               stmts(n)

transNkStmt :: Pat a -> (ns,d,[Pat a]) -> (ns,d,[Pat a])
transNkStmt pat (ns,d,pat0) =
  case pat of
      (ExpApplication p pats) -> let (ns',d',pats') = foldr transNkStmt (ns,d,[]) pats
                                 in (ns',d', (ExpApplication p pats': pat0))
      (ExpInfixList p pats) ->   let (ns',d',pats') = foldr transNkStmt (ns,d,[]) pats
                                 in (ns',d', (ExpInfixList p pats': pat0))
      (ExpList p pats) ->        let (ns',d',pats') = foldr transNkStmt (ns,d,[]) pats
                                 in (ns',d', (ExpList p pats': pat0))
      (PatAs p tid pat) ->       let (ns',d',[pat']) = transNkStmt pat (ns,d,undefined)
                                 in (ns',d', (PatAs p tid pat': pat0))
      (PatIrrefutable p pat) ->  let (ns',d',[pat']) = transNkStmt pat (ns,d,undefined)
                                 in (ns',d', (PatIrrefutable p pat': pat0))
  --  (PatNplusK p tid int) ->   let
      _ ->                       (ns, d, (pat: pat0))

-- Translate  \(n+k)-> exp(n)
-- to         \n'-> let n | n'>=k  = n'-k in exp(n)

-- Translate  case exp0 of
--              (n+k) | gd(n) -> exp(n)
-- to         case exp0 of
--              n' -> let n | n'>=k  = n'-k in
--                    case n of
--                      n | gd(n) -> exp(n)


-- One-level test for (n+k) in pattern
npkPat (ExpApplication _ exps) = any npkPat exps
npkPat (ExpInfixList _ exps) = any npkPat exps
npkPat (ExpList _ exps) = any npkPat exps
npkPat (PatAs _ _ pat) = npkPat pat
npkPat (PatIrrefutable _ pat) = npkPat pat
npkPat (PatNplusK _ _ _ _ _) = True
npkPat _ = False

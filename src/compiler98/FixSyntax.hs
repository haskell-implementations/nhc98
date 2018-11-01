{- ---------------------------------------------------------------------------}
{- |
Small tweaks based on type information.
optimisation: evaluation of `fromInteger' where possible
Also removes data constructors defined by newtype.
-}
module FixSyntax(fixSyntax) where

import qualified Data.Map as Map
import Maybe
import Syntax
import IdKind(IdKind(..))
import State
import IntState(IntState,lookupIS,tidIS,strIS)
import TokenId
import Info(isData,isMethod,tidI)
import FSLib(FSMonad,startfs,fsState,fsTidFun,fsExpAppl,fsClsTypSel,fsExp2,fsId
            ,fsRealData,fsList,ExpList)
import Ratio
import Machine
import Id(Id)
import NT(NT(..))


litFloatInteger :: a {-boxed-} -> Integer -> Lit a
litFloatInteger b v = LitFloat b (fromInteger v)


litFloatRational :: a {-boxed-} -> Ratio Integer -> Lit a
litFloatRational b v = LitFloat b (fromRational v)


-- | main function of this pass
fixSyntax :: Decls Id
          -> IntState
          -> ((TokenId,IdKind) -> Id)
          -> ([Decl Id]  -- modified declarations
             ,IntState   -- modified internal state
             ,Map.Map TokenId Id)

fixSyntax topdecls state tidFun =
  startfs fsTopDecls topdecls state tidFun


fsTopDecls :: Decls Id -> FSMonad [Decl Id]
fsTopDecls (DeclsScc depends) =
  unitS (concat :: ([[Decl Id]] -> [Decl Id])) =>>>
                -- concat must be typed for hbc ?
  mapS fsTopDepend depends


fsTopDepend :: DeclsDepend Id -> FSMonad [Decl Id]
fsTopDepend (DeclsNoRec d) = fsDecl d >>>= \ d -> unitS [d]
fsTopDepend (DeclsRec  ds) = mapS fsDecl ds


fsDecls :: Decls Id -> FSMonad (Decls Id)
fsDecls (DeclsScc depends) = unitS DeclsScc =>>> mapS fsDepend depends


fsDepend :: DeclsDepend Id -> FSMonad (DeclsDepend Id)
fsDepend (DeclsNoRec d) = unitS DeclsNoRec =>>> fsDecl d
fsDepend (DeclsRec  ds) = unitS DeclsRec   =>>> mapS fsDecl ds


fsDecl :: Decl Id -> FSMonad (Decl Id)
fsDecl d@(DeclPrimitive pos fun arity t) =
  unitS d
fsDecl d@(DeclForeignImp pos _ _ fun arity cast t _) =
  unitS d
fsDecl d@(DeclForeignExp pos _ _ fun t) =
  unitS d
fsDecl (DeclFun pos fun funs) =
  unitS (DeclFun pos fun) =>>> mapS fsFun funs
fsDecl (DeclPat (Alt pat rhs decls)) =
  fsPat pat >>>= \ pat ->
  fsRhs rhs >>>= \ rhs ->
  fsDecls decls >>>= \ decls ->
  unitS (DeclPat (Alt pat rhs decls))


fsFun :: Fun Id -> FSMonad (Fun Id)
fsFun  (Fun pats rhs decls) =
  mapS fsPat pats >>>= \ pats ->
  fsRhs rhs >>>= \ rhs ->
  fsDecls decls >>>= \ decls ->
  unitS (Fun pats rhs decls)


fsRhs :: Rhs Id -> FSMonad (Rhs Id)
fsRhs (Unguarded e) = fsExp False e >>>= \e -> unitS (Unguarded e)
fsRhs (PatGuard gdexps) = 
  mapS fsPatGdExp gdexps >>>= \gdexps -> unitS (PatGuard gdexps)

fsPatGdExp :: ([Qual Id],Exp Id) -> FSMonad ([Qual Id],Exp Id)
fsPatGdExp (qs,e) =
  mapS fsQual qs >>>= \ qs ->
  fsExp False e >>>= \ e ->
  unitS (qs,e)

fsQual :: Qual Id -> FSMonad (Qual Id)
fsQual (QualExp e)      = fsExp False e >>>= unitS . QualExp
fsQual (QualPatExp p e) = fsPat p >>>= \p->
                          fsExp False e >>>=  unitS . QualPatExp p
fsQual (QualLet ds)     = fsDecls ds >>>= unitS . QualLet


-- | fsPat is exactly like fsExp, except that dictionary selectors with
-- a statically known dict are not compiled away.  (Need to keep them
-- for e.g. numeric pattern-matching.)
fsPat :: Exp Id -> FSMonad (Exp Id)
fsPat exp = fsExp True exp

-- | fsExp takes a boolean argument, indicating whether we are in a pattern
-- (True) or in an expression (False).
fsExp :: Bool -> Exp Id -> FSMonad (Exp Id)

fsExp _ (ExpLambda pos pats exp)  =
  mapS fsPat pats >>>= \ pats ->
  fsExp False exp >>>= \ exp ->
  unitS (ExpLambda pos pats exp)

fsExp _ (ExpLet pos decls exp)    =
  fsDecls decls >>>= \ decls ->
  fsExp False exp >>>= \ exp ->
  unitS (ExpLet pos decls exp)

fsExp k (ExpDict exp)    =
  fsExp k exp >>>= \ exp ->
  unitS (ExpDict exp)

fsExp _ (ExpCase pos exp alts) =
  unitS (ExpCase pos) =>>> fsExp False exp =>>> mapS fsAlt alts

fsExp _ (ExpIf pos c e1 e2)       =
  unitS (ExpIf pos) =>>> fsExp False c =>>> fsExp False e1 =>>> fsExp False e2

fsExp k exp@(ExpApplication _ _) =
  fsExp' k exp

---
--- No ExpList anymore
---
fsExp k (ExpList  pos es)         =
  mapS (fsExp k) es >>>= \ es ->
  fsList >>>= \ (nil,cons,_,_) ->
  unitS (foldr (\ h t -> ExpApplication pos [cons,h,t]) nil es)

--- Change con into (con)
fsExp k e@(ExpCon pos ident) = fsExp k (ExpApplication pos [e])

--- Change Char into Int
--fsExp _ (ExpLit pos (LitChar b i)) = unitS (ExpLit pos (LitInt b (fromEnum i)))
fsExp _ (Exp2   pos      i1 i2) =  fsExp2 pos i1 i2

fsExp _ (PatAs pos i pat)        =  unitS (PatAs pos i) =>>> fsPat pat
fsExp _ (PatIrrefutable pos pat) = unitS (PatIrrefutable pos) =>>> fsPat pat

-- Change typeRep into something that builds the type
fsExp _ (ExpTypeRep pos nt) =
    fsList >>>= \ list ->
    fsState >>>= \ state ->
    unitS $ makeTypeRep pos list state nt

fsExp _ e                 = unitS e


makeTypeRep :: Pos -> ExpList -> IntState -> NT -> Exp Id
makeTypeRep pos (eNil,eCons,eTyCon,eTyGen) state nt = rep (deTypeType nt)
    where
    deTypeType (NTcons _ _ [t]) = t

    rep (NTvar i kind) =
         case lookupIS state i of
            Just info -> tyCon (show (tidI info)) []
            Nothing   -> tyGen $ 'v':(show i)
    rep (NTapp x y) =  app (rep x) (rep y)
    rep (NTstrict _) = error "rep: NTstrict"
    rep (NTcons i k xs) =
        let iStr = strIS state i
        in tyCon iStr (map rep xs)
    rep (NTexist _ _) = error "rep: NTexists"
    rep (NTany _)      = error "rep: NTany"
    rep _           = error "rep: ???"

    foldAp [nt]   = rep nt
    foldAp (x:xs) =
        let xs' = foldAp xs
        in app (rep x) xs'

    app x y = ExpApplication pos [eTyCon, string "Prelude.->", list [x, y]]
    tyCon s ts = ExpApplication pos [eTyCon, string s, list ts]
    tyGen s = ExpApplication pos [eTyGen, string s]
    string s = ExpLit pos (LitString Boxed s)

    list []     = eNil
    list (x:xs) = ExpApplication pos [eCons, x, list xs]

-- | Auxiliary for fsExp guaranteed to get ExpApplications only.
fsExp' k (ExpApplication pos (ExpApplication _ xs:ys)) =
  fsExp' k (ExpApplication pos (xs++ys))

--- fromInteger {Int Integer Float Double} constant
fsExp' k exp@(ExpApplication pos [v@(ExpVar _ qfromInteger)
                                 ,(ExpDict v2@(Exp2 _ qNum qType))
                                 ,l@(ExpLit pl (LitInteger b i))]) =
  fsState >>>= \ state ->
    if tidIS state qfromInteger == tfromInteger && tidIS state qNum == tNum
    then     if tidIS state qType == tInt
             && not (k && (abs(i)>32767))        then unitS (ExpLit pl (LitInt b (fromInteger i)))
        else if tidIS state qType == tIntHash    then unitS (ExpLit pl (LitInt UnBoxed (fromInteger i)))
        else if tidIS state qType == tInteger    then unitS l
        else if tidIS state qType == tFloat      then unitS (ExpLit pl (litFloatInteger b i))
        else if tidIS state qType == tFloatHash  then unitS (ExpLit pl (litFloatInteger UnBoxed i))
        else if tidIS state qType == tDouble     then unitS (ExpLit pl (LitDouble b (fromInteger i)))
        else if tidIS state qType == tDoubleHash then unitS (ExpLit pl (LitDouble UnBoxed (fromInteger i)))
        else if tidIS state qType == tRational   then unitS (ExpLit pl (LitRational b (fromInteger i)))
        else fsExp' k (ExpApplication pos [v,ExpDict (ExpApplication pos [v2]),l])  -- Match (sel (class.type dicts) args)
    else fsExp' k (ExpApplication pos [v,ExpDict (ExpApplication pos [v2]),l])

--- fromRational {Float Double Rational} constant
fsExp' k (ExpApplication pos [v@(ExpVar _ qfromRational)
                             ,(ExpDict v2@(Exp2 _ qFractional qType))
                             ,l@(ExpLit pl (LitRational b i))]) =
  fsState >>>= \ state ->
  fsTidFun >>>= \ tidFun ->
 -- strace (strPos pos++": normal literal Rational expr/pat\n") $
    if tidIS state qfromRational == tfromRational && tidIS state qFractional == tFractional
    then
        if tidIS state qType == tFloat      then unitS (ExpLit pl (litFloatRational b i))
        else if tidIS state qType == tFloatHash  then unitS (ExpLit pl (litFloatRational UnBoxed i))
        else if tidIS state qType == tDouble     then unitS (ExpLit pl (LitDouble b (fromRational i)))
        else if tidIS state qType == tDoubleHash then unitS (ExpLit pl (LitDouble UnBoxed (fromRational i)))
        else if tidIS state qType == tRational   then {- let ratioFun  = ExpVar pl (tidFun (tRatioCon,Var))
                                                          qIntegral = tidFun (tIntegral,TClass)
                                                          dict      = ExpDict (Exp2 pl qFractional qIntegral)
                                                          num       = ExpLit pl (LitInteger b (numerator i))
                                                          denom     = ExpLit pl (LitInteger b (denominator i))
                                                      in unitS (ExpApplication pl [dict, num, denom]) -}
                                                      unitS l -- results in a nasty hack in Case
        else fsExp' k (ExpApplication pos [v,ExpDict (ExpApplication pos [v2]),l])  -- Match (sel (class.type dicts) args)
    else fsExp' k (ExpApplication pos [v,ExpDict (ExpApplication pos [v2]),l])

--- negate {Int Integer Float Double Rational} constant

fsExp' k (ExpApplication pos [v@(ExpVar pos3 qnegate)
                             ,d@(ExpDict v2@(Exp2 _ qNum qType))
                             ,p]) =
  fsState >>>= \ state ->
  if tidIS state qnegate == tnegate && tidIS state qNum == tNum  then
    fsExp k p >>>= \ p ->
    case p of
      ExpLit pos (LitInt b i)      -> unitS (ExpLit pos (LitInt b (-i)))
      ExpLit pos (LitInteger b i)  -> unitS (ExpLit pos (LitInteger b (-i)))
      ExpLit pos (LitFloat b i)    -> unitS (ExpLit pos (LitFloat b (-i)))
      ExpLit pos (LitDouble b i)   -> unitS (ExpLit pos (LitDouble b (-i)))
      ExpLit pos (LitRational b i) -> unitS (ExpLit pos (LitRational b (-i)))
      -- negate (fromInteger v) in a pattern is a special case:
      -- If the fromInteger was not elided in the recursive call
      -- (e.g. instance Num UserType) then we need to keep the dictionary
      -- for later, when we lookup the (==) method to match the pattern.
      ExpApplication _ [ExpVar _ _,ExpLit _ _] ->
          unitS (ExpApplication pos [v,d,p])
      _ -> fsExp' k (ExpApplication pos [v,ExpDict (ExpApplication pos3 [v2]),p])  -- Will do p once more :-(
   else
     fsExp' k (ExpApplication pos [v,ExpDict (ExpApplication pos3 [v2]),p])

--
-- Transforms (sel class.type args) into (sel (class.type) args)
--
fsExp' k (ExpApplication pos (v@(ExpVar _ _):ExpDict v2@(Exp2 _ _ _):es)) =
  fsExp' k (ExpApplication pos (v:ExpDict (ExpApplication pos [v2]):es))
  -- Match (sel (class.type dicts) args)

--
-- Transforms (sel (class.type dicts) args) into ((class.type.sel dicts) args)
--
fsExp' k (ExpApplication pos (ExpVar sp sel
                             :ExpDict (ExpApplication ap (Exp2 _ cls qtyp:args))
                             :es)) =
  fsState >>>= \ state ->
  if (isMethod . fromJust . lookupIS state) sel &&
     (isData . fromJust . lookupIS state) qtyp && not k then
    fsClsTypSel sp cls qtyp sel >>>= \ fun ->
    mapS (fsExp k) (args++es) >>>= \ args ->
    fsExpAppl pos (fun:args)
  else
    fsExp2 ap cls qtyp >>>= \ fun ->
    mapS (fsExp k) args >>>= \ args ->
    fsExpAppl ap (fun:args) >>>= \ appl ->
    mapS (fsExp k) es >>>= \ es ->
    fsExpAppl pos (ExpVar sp sel : ExpDict appl :es)

{-
Check if data constructor is from newtype definition.
If it is, then remove it or replace it by the identity function.
-}
fsExp' k (ExpApplication pos (econ@(ExpCon cpos con):xs)) =
  fsRealData con >>>= \ realdata ->
  if realdata then
    mapS (fsExp k) xs >>>= \ xs ->
    fsExpAppl pos (econ:xs)
  else
    if length xs < 1 then
      fsId -- because argument not available, have to replace by identity
    else
      mapS (fsExp k) xs >>>= \ xs ->
      fsExpAppl pos xs
      -- ABOVE
      -- Can be an application if newtype is isomorphic to a function type
      -- No! \[x] -> unitS x should do, but that doesn't matter.

---
--- Nothing to do
---
fsExp' k (ExpApplication pos xs) =
  mapS (fsExp k) xs >>>= \ xs ->
  fsExpAppl pos xs



fsAlt :: Alt Id -> FSMonad (Alt Id)
fsAlt (Alt pat rhs decls)  =
  fsPat pat >>>= \ pat ->
  fsDecls decls >>>= \ decls ->
  fsRhs rhs >>>= \ rhs ->
  unitS (Alt pat rhs decls)

{- End FixSyntax ------------------------------------------------------------}

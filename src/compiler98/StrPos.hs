{- |
Convert STG-code into a string for readable output.
-}
module StrPos(strPCode,strPCode',strPExp) where

import Util.Extra(mixLine,mixSpace,mix)
import PosCode
import Id
import Char
-- \#if defined(__HBC__)
-- import ForeignCode -- for ImpExp's Show instance
-- import Syntax  -- for CallConv's Show instance
-- \#endif

strPCode :: Show a => (Id -> String,Id -> a) -> [(Id,PosLambda)] -> [Char]
strPCode p code = mixLine (map (strPBinding p "") code)

strPCode' ::           (Id -> String)        -> [(Id,PosLambda)] -> [Char]
strPCode' p code = mixLine (map (strPBinding' p "") code)


strPLambda :: (Id -> String) -> String -> PosLambda -> String
strPLambda p o (PosLambda pos lamfl fvs bvs e) =
    (case lamfl of
        LamFLNone -> ""
        LamFLIntro -> "INT "
        LamFLLambda -> "LAMBDA "
    ) ++
    "{" ++ mixSpace (map (p.snd) fvs) ++ "} \\ {" ++ mixSpace (map (p.snd) bvs) ++ "} ->\n" ++
    strPExp p (' ':o) e
strPLambda p o (PosPrimitive pos fun) =
    "primitive " ++ p fun ++ "\n"
strPLambda p o (PosForeign pos fun arity str c ie) =
    "foreign "++show ie++" "++show c++" \""++str++"\" " ++ p fun ++ "\n"

strPBinding :: (Show a) =>
                (Id -> String, Id -> a) -> String -> (Id, PosLambda) -> String
strPBinding' :: (Id -> String)          -> String -> PosBinding      -> String
strPBinding  (p,a) o (i,l) = o ++ p i ++ "["++show (a i)++"] = " ++ strPLambda p o l ++ "\n"
strPBinding' p     o (i,l) = o ++ p i ++ " = " ++ strPLambda p o l ++ "\n"


strPExp :: (Id -> String) -> String -> PosExp -> String
strPExp p o (PosExpDict e) = "{d}" ++ strPExp p o e
strPExp p o (PosExpLet rec pos bs e) = o ++ sLet ++ concatMap ((++"\n").strPBinding' p (' ':o)) bs ++ strPExp p o e
    where
    sLet = if rec then "letrec\n" else "let\n"
strPExp p o (PosExpCase pos e args) = o ++ "case " ++ strPExp p "" e ++ " of\n" ++ mixLine (map  (strPAlt p (' ':o)) args)
strPExp p o (PosExpApp pos args) = o ++ "@(" ++  mix ", " (map (strPExp p (' ':o)) args) ++ ")"
strPExp p o (PosExpThunk pos ap args) = o ++ (if ap then "APPLY" else "") ++ "<" ++ mixSpace (map (strPExp p (' ':o)) args) ++ ">"
strPExp p o (PosExpFatBar b e1 e2) = o ++ "fatbar" ++ (if b then " that can fail\n" else "\n")
                                       ++ strPExp p (' ':o) e1 ++ "\n" ++ o ++ "--\n" ++ strPExp p (' ':o) e2
strPExp p o (PosExpFail) = o ++ "fail"
strPExp p o (PosExpIf pos guard e1 e2 e3) =  o ++ "if "++(if guard then "[guard] " else "") ++ strPExp p (' ':o) e1 ++ o ++
   "\n" ++ o ++ "then " ++ strPExp p (' ':o) e2++ o ++ "\n" ++ o ++ "else " ++ strPExp p (' ':o) e3
strPExp p o (PosExpLambda pos int bes bvs e) =
   o ++ "(" ++ (if int then "INT " else "") ++ "{" ++ mixSpace (map (p.snd) bes) ++ "} \\ {" ++ mixSpace (map (p.snd) bvs) ++
   "} ->\n" ++ strPExp p (' ':o) e ++ ")"
strPExp p o (PosPrim pos prim _) = o ++ strPrim prim
strPExp p o (PosVar  pos i) =  o ++ p i
strPExp p o (PosCon  pos c) =  o ++ p c ++ "{c}"
strPExp p o (PosInt  pos i) =  o ++ show i
strPExp p o (PosChar  pos i) =  o ++ "'" ++ [((toEnum i) :: Char)] ++ "'"
strPExp p o (PosFloat pos i) =  o ++ show i++"F"
strPExp p o (PosDouble pos i) =  o ++ show i
strPExp p o (PosString pos s) =  o ++ show s
strPExp p o (PosInteger pos i) =  o ++ show i++"L"

strPAlt :: (Id -> String) -> String -> PosAlt -> String
strPAlt p o (PosAltCon pos c args e) = o ++ p c ++ concatMap ((' ':).p.snd) args ++ " ->\n" ++ strPExp p (' ':o) e
strPAlt p o (PosAltInt pos i int  e) = o ++ on ++ " ->\n" ++ strPExp p (' ':o) e
    where on = if int then show i else show (chr i)



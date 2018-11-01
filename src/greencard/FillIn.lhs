%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%
\begin{code}
module FillIn
	( ProtoProc, ppProtoProc, fillinProc
	, Consts, genConsts, genConsts2
	) where

#if !defined(__HASKELL98__)
#define mplus (++)
#define isAlphaNum isAlphanum
#endif

import Char (isLower, isAlphaNum)
import Decl (Sig, Call, CCode, Fail, Result)
import Proc (Proc, ppProc)
import Name (Name)
import Type (Type(..), typeArgs, typeResult)
import DIS  (DIS(..), DISEnv, apply, freeVarsOfDIS, expandDIS ,simplify)
import NameSupply
import ListUtils (prefix)
import Casm (BaseTy(..))

import Pretty
import PrettyUtils( indent, joinedBy, ppAssign, vcatMap )

import Maybe( fromMaybe )
import Char ( toLower )
import List( intersperse )

#if defined(__HASKELL98__)
import Monad (MonadPlus(mplus))
#endif

-- #if defined(__GLASGOW_HASKELL__) && __GLASGOW_HASKELL__ <= 202
-- import PrelBase(maybe) -- workaround for GHC 2.02
-- #endif


\end{code}

%************************************************************************
%*									*
\subsection{The interface}
%*									*
%************************************************************************

Note that we expand the DIS before we generate the ccode.

\begin{code}

type ProtoProc = (Sig, Maybe Call, Maybe CCode, Fail, Maybe Result)

\end{code}

\begin{code}

fillinProc :: DISEnv -> [String] -> ProtoProc -> Proc
fillinProc env prefixes (sig@(nm, ty), mbcall, mbccode, fs, mbres) 
             = ((mangleName prefixes nm, ty), call, ccode, fs, res)
 where
  (call', res') = expandType env ty
  xp            = expandDIS env
  call          = map xp $ fromMaybe call' mbcall
  res           = xp     $ fromMaybe res' mbres

  ccode = fromMaybe (expandCCode nm call res) mbccode

\end{code}

%************************************************************************
%*									*
\subsection{Generating constants}
%*									*
%************************************************************************

Exactly as described in the paper:

\begin{code}

type Consts = (Type, [(Name, Name)])

genConsts :: DISEnv -> Consts -> [ProtoProc]
genConsts env (ty, cs)
  = [ ( (hname, ty), Nothing, Just ["res1="++cname], [], Nothing)
    | (hname, cname) <- cs
    ]
 where 
  dis0 = fst $ initNS (typeToDIS env ty) (nameSupply "res")
  dis1 = expandDIS env dis0

\end{code}

\begin{code}

genConsts2 :: DISEnv -> [String] -> Consts -> Int -> (Proc, Doc)
genConsts2 env prefixes (ty, cs) i
  = ( ( (hname, intTy `Arrow` ty)
      , [Apply (BaseDIS Int) [Declare "int" (Var "i")]]
      , [render body]
      , []
      , resdis 
      )
    , vcatMap text [ mangleName prefixes c ++ " = " ++ hname ++ " " ++ show i 
                   | ((c,_),i) <- zip cs [0..] ]
    )
 where 
  hname = "consts_" ++ show i
  intTy = TypeVar "Int"

  resdis = expandDIS env $ fst $ initNS (typeToDIS env ty) (nameSupply "res")

  Apply (BaseDIS k) [Declare cty (Var res)] = simplify resdis

  body =  text "static" <+> text cty <+> text "consts[] = {"
       $$ indent (map (text.snd) cs `joinedBy` \ x y -> x <> comma $$ y)
       $$ text "};"
       $$ ppAssign res (text "consts[i]") <> semi

\end{code}


%************************************************************************
%*									*
\subsection{Generating DISs from Types}
%*									*
%************************************************************************

@expandType@ turns a type into a DIS.  It is used when auto-expanding
missing @%call@ and @%result@ statements.

\begin{code}

expandType :: DISEnv -> Type -> ([DIS], DIS)
expandType env ty = (call, res)
 where
  ty_args = typeArgs   ty
  ty_res  = typeResult ty

  call = fst $ initNS (mapM (typeToDIS env) ty_args) (nameSupply "arg")
  res  = fst $ initNS (typeToDIS env ty_res) (nameSupply "res")

typeToDIS :: DISEnv -> Type -> NSM DIS

typeToDIS env (TypeTuple ts) = 
  do ds <- mapM (typeToDIS env) ts
     return (apply Tuple ds)

typeToDIS env (TypeList t) = 
  do ptr <- getNewName
     len <- getNewName
     return (apply (Var ("listLen" ++ show t)) [Var ptr, Var len])

typeToDIS env (TypeVar typeName) =
  do ns <- getNewNames arity
     return (apply (Var disName) (map Var ns))
 where
  arity :: Int
  arity = maybe 1 (length . fst) x

  disName :: Name 
  disName = lowerName typeName

  x :: Maybe ([Name], DIS)
  x = lookup disName env

typeToDIS env (TypeApply (TypeVar f) args) =
  do ds <- mapM (typeToDIS env) args
     ns <- getNewNames (max 0 (arity - length ds))
     return (apply (Var disName) (ds ++ map Var ns))
 where
  arity :: Int
  arity = maybe 1 (length . fst) x

  disName :: Name 
  disName = lowerName f

  x :: Maybe ([Name], DIS)
  x = lookup disName env

\end{code}

%************************************************************************
%*                                                                      *
\subsection{Filling in CCode lines}
%*                                                                      *
%************************************************************************

NB: The DISs should have been expanded before we call this puppy.

\begin{code}

expandCCode :: String -> [DIS] -> DIS -> [String]
expandCCode name ds rs = 
  [ lhs ++ name ++ "(" ++ concat (intersperse ", " args) ++ ");" ]
  where
    args = concatMap leafVarsOfDIS ds
    res  = leafVarsOfDIS rs
    lhs | null res  = "" 
	| otherwise = head res ++ " = "

-- like freeVarsOfDIS but omits "functions"

leafVarsOfDIS :: DIS -> [Name]
leafVarsOfDIS = free
 where
  free (Apply d ds) = concatMap free ds
  free (Var nm)     = [nm]
  free (Exp e)      = let vs = noDups (varsInExp e)
                      in vs
  free _            = []
  varsInExp []      = []
  varsInExp ('%':c:cs)
    | isLower c     = nm: varsInExp rest
    | c=='%'        = varsInExp cs
    where (cs1, rest) = span isAlphaNum cs
          nm = c:cs1
  varsInExp (c:cs)  = varsInExp cs
  noDups = noDups' []
    where noDups' a [] = a
          noDups' a (x:xs)
            | x `elem` a = noDups'   a   xs
            | otherwise  = noDups' (x:a) xs


\end{code}

%************************************************************************
%*                                                                      *
\subsection{Name Mangling}
%*                                                                      *
%************************************************************************

Convert a Type name to a DIS name

\begin{code}

lowerName :: Name -> Name
lowerName [] = []
lowerName (c:cs) = toLower c : cs

\end{code}

Convert C name to Haskell name by stripping prefixes and 
converting first letter to lowercase.

\begin{code}

mangleName :: [String] -> String -> String
mangleName ps n = lowerName (stripPrefixes ps n)

stripPrefixes :: [String] -> String -> String
stripPrefixes ps n = fromMaybe n $ foldr mplus Nothing
                                 [ prefix p n | p <- ps ]

\end{code}


%************************************************************************
%*                                                                      *
\subsection{Pretty printing}
%*                                                                      *
%************************************************************************

A gruesome hack to print it...

\begin{code}

ppProtoProc :: ProtoProc -> Doc
ppProtoProc (sig@(nm, ty), mbcall, mbccode, fs, mbres) 
             = ppProc (sig, call, ccode, fs, res)
 where
  call  = fromMaybe [Var ""] mbcall
  res   = fromMaybe (Var "") mbres
  ccode = fromMaybe [] mbccode

\end{code}


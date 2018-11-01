%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%

\begin{code}

module Decl
	( Decl(..)
	, Sig
	, Call
	, CCode
	, Fail
	, Result
        , showDecls
	) where

import Name( Name )
import DIS ( DIS, ppDIS'  )
import Type( Type, ppType )

import Pretty

-- #if defined(__GLASGOW_HASKELL__) && __GLASGOW_HASKELL__ <= 202
-- import PrelBase(maybe) -- workaround for GHC 2.02
-- #endif

\end{code}

\begin{code}

data Decl
  = ProcSpec Sig (Maybe Call) (Maybe CCode) (Maybe Fail) (Maybe Result)
  | Haskell String
  | C       String
  | DisDef Name [Name] DIS
  | Constant Type [(Name, Name)]          -- Haskell, C name
  | Prefix Name
  | Include Name 
  deriving ( Show )
 
type Sig        = (Name, Type)

type Call       = [DIS]

type CCode      = [String]

type Fail       = [(String, String)]

type Result     = DIS

\end{code}


\begin{code}

showDecls :: Maybe [Decl] -> String
showDecls n@Nothing = show n
showDecls (Just ds) = unlines (map show ds)

ppMain :: Decl -> Doc
ppMain (ProcSpec (n, t) mbcall mbcode mbfail mbres) 
  =  text "%fun" <+> text n <+> text "::" <+> ppType t 
  $$ (maybe empty (\ds -> text "%call" <+> hsep (map (ppDIS' True) ds)) mbcall) 
  $$ (maybe empty (\cexp -> text "%code" <+> prefix "% " cexp) mbcode)  
  $$ (maybe empty (\fs -> hsep (map (\(a, b) -> text "%fail" <+> braces (text a) <+> braces (text b)) fs)) mbfail) 
  $$ (maybe empty (\d -> text "%result" <+> ppDIS' True d) mbres) 
  $$ text "\n"
ppMain x = empty

prefix :: String -> [String] -> Doc
prefix pre = foldl (\x y-> x $$ text pre <> text y) empty

\end{code}

%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%

\begin{code}

module Type
    ( Type(..), typeApply
    , ppType
    , typeArgs, typeResult
    , isPureType
    ) where

import Name

import Pretty
import PrettyUtils( ppTuple, ppParen )

\end{code}

\begin{code}

data Type       
  = Arrow Type Type
  | TypeList  Type
  | TypeTuple [Type]
  | TypeApply Type [Type]  -- non-empty arglist
  | TypeVar Name 
  deriving ( Show )

typeApply :: Type -> [Type] -> Type
typeApply f [] = f
typeApply f args = TypeApply f args

\end{code}

%************************************************************************
%*                                                                      *
\subsection{Pretty-printing types}
%*                                                                      *
%************************************************************************

\begin{code}

ppType :: Type -> Doc

ppType = ppType' False

ppType' :: Bool -> Type -> Doc

ppType' d (Arrow a b)	   = ppParen d (ppType' True a <+> text "->" <+> ppType' False b)
ppType' d (TypeList t)     = brackets (ppType' False t)
ppType' d (TypeTuple ts)   = ppTuple (map (ppType' False) ts)
ppType' d (TypeApply f ts) = ppParen d (hsep $ map (ppType' True) (f:ts))
ppType' d (TypeVar s)	   = text s

\end{code}

%************************************************************************
%*                                                                      *
\subsection{Separating the arguments from the result in a type}
%*                                                                      *
%************************************************************************

\begin{code}

typeResult :: Type -> Type
typeResult (Arrow t1 t2) = typeResult t2
typeResult x             = x

typeArgs :: Type -> [Type]
typeArgs (Arrow t1 t2) = t1 : typeArgs t2
typeArgs x             = []

isPureType :: Type -> Bool
isPureType t = case typeResult t of 
               TypeApply (TypeVar "IO") _ -> False
               _ -> True

\end{code}


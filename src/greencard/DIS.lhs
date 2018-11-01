%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%

\begin{code}
module DIS
    ( DIS(..)
    , apply
    , ppDIS, ppDIS'
    , expandDIS, DISEnv
    , freeVarsOfDIS 
    , simplify
    ) where

import Casm( BaseTy(..), ppBaseTy )
import Name( Name ) 

import Pretty
import PrettyUtils( ppTuple, commaList, textline )

#if !defined(__HASKELL98__)
#define isAlphaNum isAlphanum
#endif
import Char( isAlphaNum, isLower )

\end{code}

I'd like to get rid of this definition

\begin{code}
-- The DIS table maps a user defined DIS to its definition.
type DISTable = [(Name, ([Name], DIS))]
\end{code}

%************************************************************************
%*                                                                      *
\subsection{DIS data structure}
%*                                                                      *
%************************************************************************

\begin{code}

data DIS 
  = Apply DIS [DIS]    -- args never empty
  | BaseDIS BaseTy
  | Constructor Name
  | Declare String DIS		-- declared DIS can only be a Var or an Exp
  | Exp String
  | Record Name [Name]
  | Tuple 
  | UserDIS Bool Name Name	-- bool is whether user functions are pure
  | Var Name
 deriving ( Show )

\end{code}

Always use this constructor to maintain the invariant that the
args part of an apply is non-empty.

\begin{code}

apply :: DIS -> [DIS] -> DIS
apply f [] = f
apply f as = Apply f as

\end{code}

%************************************************************************
%*                                                                      *
\subsection{Pretty Printing of DISs}
%*                                                                      *
%************************************************************************

\begin{code}

ppDIS :: DIS -> Doc
ppDIS = ppDIS' False

-- @ppDIS'@ Can either print the type casts or not.

ppDIS' :: Bool -> DIS -> Doc
ppDIS' showCasts dis = pp dis
 where

  pp (Apply Tuple ds)            = ppTuple (pps ds)
  pp (Apply (Record name fs) ds) = text name <+> braces (commaList fields)
   where
    fields = zipWith (\n d -> textline [n, "="] <+> d) fs (pps ds)
  pp (Apply d ds)                = parens (pp d <+> hsep (pps ds))
  pp (BaseDIS n)   		 = text "%%" <> text (show n)
  pp (Constructor nm)  		 = text nm
  pp (Declare s d)		 = text "declare" <+> quotes (text s) <+>
				   pp d <+> text "in"
  pp (Exp s)      		 = quotes (text s)
  pp (Record nm fs)    		 = text "<record>"
  pp Tuple             		 = text "()" -- unit
  pp (UserDIS True n1 n2) 	 = text ('<':n1++'/':n2++'>':[])
  pp (UserDIS False n1 n2) 	 = text ('<':'<':n1++'/':n2++'>':'>':[])
  pp (Var nm)      		 = text nm

  pps = map pp

\end{code}

%************************************************************************
%*                                                                      *
\subsection{Free Variables}
%*                                                                      *
%************************************************************************

\begin{code}

freeVarsOfDIS :: DIS -> [Name]
freeVarsOfDIS = free
 where
  free (Apply d ds)  = free d ++ concatMap free ds
  free (Var nm)      = [nm]
  free (Declare s d) = free d
  free _             = []

\end{code}

%************************************************************************
%*                                                                      *
\subsection{Expanding DISs}
%*                                                                      *
%************************************************************************

Expanding a DIS is rather like evaluating an expression: we walk over
the DIS with an environment replacing disnames and arguments with
values from the environment.

The result is a DIS in normal 

\begin{code}

type DISEnv = [(Name, ([Name], DIS))]
type ArgEnv = [(Name, DIS)]

expandDIS :: DISEnv -> DIS -> DIS
expandDIS denv d = expandDIS' denv [] d

expandDIS' :: DISEnv -> ArgEnv -> DIS -> DIS
expandDIS' denv aenv d = xp d
 where

  -- dis application
  xp (Apply f@(Var nm) ds)
    = case (lookup nm denv) of 
      Just (args, d)       -> if length args == length ds
                              then expandDIS' denv (zip args (xps ds)) d
                              else error ("Argument list mismatch while calling "
					 ++ nm
                                         ++ " in DIS "
                                         ++ show d
                                         )
      Nothing              -> Apply f (xps ds)

  xp (Apply d ds) = Apply (xp d) (xps ds)

  xp v@(Var nm) 
    = case (lookup nm aenv) of 
      Just d               -> d
      Nothing              -> v

  xp (Declare ctype v@(Var nm))
    = Declare (subst ctype) (case (lookup nm aenv) of
                             Just d   -> d
                             Nothing  -> v)

  xp (Declare ctype (Exp s))
    = Declare (subst ctype) (Exp (subst s))

  xp (Exp s)
    = Exp (subst s)

  xp (UserDIS p f t)
    = UserDIS p (subst f) (subst t)

  xp (BaseDIS (Foreign f))
    = BaseDIS (Foreign (subst f))

  -- everything else is already in normal form
  xp d = d

  xps = map xp

  -- substitute for anything of the form %[a-z][a-zA-Z0-9]*
  subst :: String -> String
  subst ('%':c:cs)
    | isLower c
    = case lookup nm aenv of
      Just (Exp c) -> c ++ subst rest
      Just (Var v) -> '%':v ++ subst rest
      Just d'      -> error ("Can't substitute " ++ show d' ++ " for " ++ nm ++ " in DIS " ++ show d)
      Nothing      -> error ("Unknown variable " ++ nm ++ " in DIS " ++ show d)
   where
    (cs0, rest) = span isAlphaNum cs
    nm = c:cs0
  subst ('%':'%':cs) = '%':'%': subst cs  -- escape code
  subst (c:cs)       = c : subst cs
  subst ""           = ""

\end{code}

%************************************************************************
%*                                                                      *
\subsection{Simplify DISs}
%*                                                                      *
%************************************************************************

Simplify a DIS by:
  *  pushing outer declarations down to leaves,
  *  overriding inner ones,
  *  removing declarations of literals (which have no effect),
  *  and where userDISs are applied to many args, converting args to a tuple

\begin{code}

simplify :: DIS -> DIS
simplify dis = simpl [] dis
  where
    simpl :: [(Name,DIS)] -> DIS -> DIS
    simpl env (Apply decl@(Declare cty (Var v)) [d]) =
      case lookup v env of
        Just _  -> simpl env d
        Nothing -> simpl ((v,decl):env) d
    simpl env (Apply (Declare cty (Exp v)) [d]) = simpl env d
    simpl env (Apply u@(UserDIS p f t) ds)
        | length ds > 1 = Apply u [Apply Tuple (map (simpl env) ds)]
    simpl env (Apply d ds) = Apply (simpl env d) (map (simpl env) ds)
    simpl env d@(Var "iO") = d
    simpl env (Var v) =
      case lookup v env of
        Just d  -> d
        Nothing -> error ("No C type decl for variable "++v++" in DIS:\n"
                          ++show dis)
    simpl env d@(Exp s) = inner env d s
    simpl env d = d

    inner env d [] = d
    inner env d ('%':c:cs)
      | isLower c
      = case lookup nm env of
        Just decl -> Apply decl [inner env d rest]
        Nothing   -> error ("No C type decl for variable "++nm++" in literal:\n"
                            ++show d)
      where
        (cs0, rest) = span isAlphaNum cs
        nm = c:cs0
    inner env d (c:cs) = inner env d cs
    

\end{code}

%************************************************************************
%*                                                                      *
\subsection{Example DISs}
%*                                                                      *
%************************************************************************

\begin{code}

dis1 = Apply (BaseDIS Int) [Declare "int" (Var "x")]
dis2 = Apply (BaseDIS Float) [Declare "float" (Var "y")]
dis3 = Apply Tuple [dis1,dis2]

disenv1 =
  [ ( "int",   (["x"], dis1) )
  , ( "float", (["y"], dis2) )
  ]

dis4 = Apply (Var "int") [Var "arg1"]
dis5 = expandDIS disenv1 dis4

\end{code}



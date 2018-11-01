%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%

\begin{code}

module Casm
	( Casm(..)
	, BaseTy(..)
	, lookupBaseTy, ppBaseTy, baseTyToCall, baseTyToRtn, baseToCType
	, Param(..)
	, ppCasm
	, Target(..)
	) where

import Pretty
import PrettyUtils
import Maybe( fromMaybe )
import Target( Target(..) )

\end{code}

%************************************************************************
%*									*
\subsection{Data structures}
%*									*
%************************************************************************

\begin{code}

data Casm 
  = Casm
      String   -- a unique label - in case we need to generate decls
      Bool     -- Are we going to be GC safe?
      Doc      -- initialisation code
      Doc      -- C code
    --Doc      -- cleanup code
      [Param]  -- arguments
      [Param]  -- results

\end{code}

\begin{code}

data BaseTy
  = Int
  | Char
  | Bool
  | Float
  | Double
  | PackedString
  | Word
  | Addr
  | StablePtr
  | Foreign String -- freeing function
  deriving (Show)

lookupBaseTy :: String -> BaseTy
lookupBaseTy s = fromMaybe err (lookup s baseNames)
 where
  err = error ("unrecognised basic type %%" ++ s)

-- No entry for Foreign!
baseNames :: [(String, BaseTy)]
baseNames =
  [ ("Int",    Int)
  , ("Char",   Char)
  , ("Bool",   Bool)
  , ("Float",  Float)
  , ("Double", Double)
  , ("PackedString", PackedString)
  , ("Word",   Word)
  , ("Addr",   Addr)
  , ("StablePtr", StablePtr)
  ]

ppBaseTy :: BaseTy -> Doc
ppBaseTy b = text ("%%" ++ show b)

baseToCType :: BaseTy -> String
baseToCType Int          = "int"
baseToCType Char         = "char"
baseToCType Bool         = "int"
baseToCType Float        = "float"
baseToCType Double       = "double"
baseToCType PackedString = "char *"
baseToCType Word         = "unsigned int"
baseToCType Addr         = "void *"
baseToCType StablePtr    = "StablePtr"
baseToCType (Foreign _)  = "void *"

baseTyToCall :: BaseTy -> String
baseTyToCall Int          = "GET_INT_VALUE(nodeptr)"
baseTyToCall Char         = "GET_CHAR_VALUE(nodeptr)"
baseTyToCall Bool         = "GET_BOOL_VALUE(nodeptr)"
baseTyToCall Float        = "get_float_value(nodeptr)"
baseTyToCall Double       = "get_double_value(nodeptr)"
baseTyToCall PackedString = "getPackedString(nodeptr)"
baseTyToCall Word         = "GET_INT_VALUE(nodeptr)"
baseTyToCall Addr         = "getVoidStar(nodeptr)"
baseTyToCall StablePtr    = "stableInsert(getStablePtr(nodeptr))"
baseTyToCall (Foreign _)  = "(derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr)))"

baseTyToRtn :: BaseTy -> String -> String
baseTyToRtn Int          v = "nhc_mkInt("++v++")"
baseTyToRtn Char         v = "nhc_mkChar("++v++")"
baseTyToRtn Bool         v = "nhc_mkBool("++v++")"
baseTyToRtn Float        v = "nhc_mkFloat("++v++")"
baseTyToRtn Double       v = "nhc_mkDouble("++v++")"
baseTyToRtn PackedString v = "nhc_mkString("++v++")"
baseTyToRtn Word         v = "nhc_mkInt("++v++")"
baseTyToRtn Addr         v = "nhc_mkAddr("++v++")"
baseTyToRtn StablePtr    v = "nhc_mkStablePtr(stableRef("++v++"))"
baseTyToRtn (Foreign f)  v = "nhc_mkCInt((int)allocForeignObj((void*)"++v++",(gcCval)"++f++",gcNow))"

\end{code}

\begin{code}

data Param = 
  Param
    String	-- Haskell Name
    String      -- C Expression
    BaseTy	-- Haskell type
    deriving Show

getBaseTy :: Param -> BaseTy
getBaseTy (Param _ _ b) = b

\end{code}


%************************************************************************
%*									*
\subsection{The main entry points}
%*									*
%************************************************************************

ToDo:

o If the arg names overlap with the result names, we should either:

  a) not redeclare the result holder (assuming the same name is used)
  
  or

  b) report an error

  We should not:

  c) ignore it

  since it is almost certainly not what the user wanted and they
  can easily rename to avoid the warning.


\begin{code}

ppCasm :: Target -> Casm -> (Doc, Doc, Doc, Doc)
ppCasm Hugs (Casm name gcsafe init ccode args results) =
  ( text name <+> textline [ a | Param a _ _ <- args ]
  , text "primitive" <+> text name <+> text "::" <+> typ
  , ppPrimDecl name
      (  init
      $$ vcatMap unpack args
      $$ ppBlock
           (  ccode
           $$ vcatMap pack (reverse results)
           $$ apply "hugs_returnIO" (text $ show $ length results) <> semi
           )
      )
  , ppStruct [doubleQuotes $ text name, text (show arity), text name]
  )
 where
  typ   = ppType (map getBaseTy args) (map getBaseTy results)

  -- The IO monad takes 2 extra arguments
  arity = length args + 2

ppCasm GHC (Casm name gcsafe init ccode args results) =
  ( wrap (
      casm 
    	(  declareResult
        $$ init
    	$$ hsep (zipWith initArg args [0..])		
    	$$ ppBlock 
             (  ccode <> semi						
    	     $$ push
             )
        ) [ text a | Param a _ _ <- args ]
      $$ pop
      $$ text "returnPrimIO" <+> ppTuple [ text n | (Param n _ _) <- results ]
      )
  , empty
  , empty
  , empty
  )
  where
    wrap d = text "primIOToIO(" $$ indent d <> text ")"
    casm 	| gcsafe       = casmgcsafe
         	| otherwise    = casmstd
    (declareResult, push, pop) = resultPassing results
    initArg (Param n _ _) p    = ppAssign n (text ("%" ++ show p))

ppCasm NHC (Casm name gcsafe init ccode args results) =
  ( text name <+> textline [ a | Param a _ _ <- args ]
  , text name <+> text "primitive" <+> text arity <+> text "::" <+> typ
  , ppPrimDecl name
      (  init
      $$ vcatMap unpack args
      $$ ppBlock
           (  ccode
           $$ vcatMap pack (reverse results)
           $$ apply "hugs_returnIO" (text $ show $ length results) <> semi
           )
      )
  , ppStruct [doubleQuotes $ text name, text (show arity), text name]
  )
 where
  typ   = ppType (map getBaseTy args) (map getBaseTy results)
  arity = show (length args)

\end{code}

%************************************************************************
%*									*
\subsection{Hugs code for constructing a casm}
%*									*
%************************************************************************

The only complication in printing the type is that we replace Stable
Pointers with type variables.  Fortunately, any type variables will do
(since the type var doesn't affect how we pack or unpack) so we just
use @a1@ ... @am@ for the arguments and @r1@ ... @rn@ for the results.

\begin{code}

ppType :: [BaseTy] -> [BaseTy] -> Doc
ppType args res = (zipWith baseToType atvs args ++ [r]) `sepdBy` text " -> "
 where
  r = text "IO" <+> ppTuple (zipWith baseToType rtvs res)
  atvs = [ 'a':show i | i <- [1..] ]
  rtvs = [ 'r':show i | i <- [1..] ]


baseToType :: String -> BaseTy -> Doc
baseToType tv StablePtr   = text "StablePtr" <+> text tv
baseToType tv Word        = text tv
baseToType tv (Foreign _) = text "ForeignObj"
baseToType tv b           = text (show b)

\end{code}

\begin{code}

unpack :: Param -> Doc
unpack (Param _ expr (Foreign free)) = ppAssign expr (text "hugs->getForeign()")
unpack (Param _ expr hty) = ppAssign expr src
 where
  src = text ("hugs->get" ++ show hty ++ "()")

pack :: Param -> Doc
pack (Param _ expr (Foreign free)) 
  =  text "hugs->putForeign" <> ppTuple [text expr, text free] <> semi
pack (Param _ expr hty)
  =  apply ("hugs->put" ++ show hty) (text expr) <> semi

\end{code}

\begin{code}

ppPrimDecl :: String -> Doc -> Doc
ppPrimDecl name body 
    =  apply "PROTO_PRIM" (text name) <> semi
    $$ apply "primFun" (text name)
    $$ char '{'
    $$ indent body
    $$ char '}'

\end{code}

%************************************************************************
%*									*
\subsection{GHC code for returning multiple results from a casm}
%*									*
%************************************************************************

resultPassing decides which policy to use for returning results from C.
There are three possibilities:

\begin{enumerate}
\item Returning nothing is easy:

  casm ``...'' >> returnPrimIO ()

\item Returning one thing is easy too:

  casm ``...'' >>= \ x -> returnPrimIO x

\item Returning many things is tricky.  We pack up all the bits into a
  struct and return a pointer to the struct.  We then read each returned
  value out of the struct.  Blech!

  casm ``static struct { int res1; float res2; } gc_result;
         ...;
         gc_result.x = x;
         gc_result.y = y;
         %r = &gc_result;'' >>= \ gc_result ->
  casm ``%r = (struct { int res1; float res2; }*)%0 -> x;'' (gc_result::Addr) >>= \ x ->
  casm ``%r = (struct { int res1; float res2; }*)%0 -> y;'' (gc_result::Addr) >>= \ y ->
  returnPrimIO (x,y)

\end{itemize}

\begin{code}

resultPassing :: [Param] -> ( Doc	-- How to declare the var
                            , Doc	-- How to save the vars in C
                            , Doc)      -- How to get them back in Haskell

resultPassing [] =				-- No vars
  ( empty
  , empty
  , text ">>"
  )

resultPassing [x@(Param n _ _)] =	       	-- One var
  ( empty
  , ppAssign "%r" (text n)
  , textline [">>= \\ ", n, " ->"]
  )

resultPassing xs = 				-- Many vars
  ( text "static" <+> structTy <+> text "gc_result;"
  , vcatMap copyIn xs $$ text "%r = &gc_result;"
  , text ">>= \\ gc_result ->" $$ vcatMap copyOut xs		
  )
 where
  structTy = text "struct" <+> braces (semiList (map decl xs))
   where
    decl :: Param -> Doc
    decl (Param n _ b) = ppCDecl (baseToCType b) n

  -- Copy a return value into corresponding place in struct.
  copyIn :: Param -> Doc
  copyIn (Param n e k) = ppAssign ("gc_result." ++ n) (text e)

  -- Copy a return value out of its place in the struct.
  copyOut :: Param -> Doc
  copyOut (Param n _ k) =
	(casmstd (ppAssign "%r" ("%0" `deRef` n)) [text "(gc_result :: Addr)"])
    <+> textline [">>= \\", n, "->"]
   where
    deRef arg n = ppCast (structTy <> char '*') (text arg) <> text "->" <> text n

\end{code}

%************************************************************************
%*									*
\subsection{GHC Specific Utilities}
%*									*
%************************************************************************

\begin{code}

casmstd :: Doc -> [Doc] -> Doc
casmstd d args = (("_casm_ ``", "''") `around` indent d) <+> hsep args

casmgcsafe :: Doc -> [Doc] -> Doc
casmgcsafe d args = (("_casm_GC_ ``", "''") `around` indent d) <+> hsep args

\end{code}

%************************************************************************
%*									*
\subsection{Utilities}
%*									*
%************************************************************************

\begin{code}

apply :: String -> Doc -> Doc
apply f e = text f <> parens e

\end{code}

%************************************************************************
%*									*
\subsection{Tests}
%*									*
%************************************************************************

\begin{code}

tst t = putStrLn $ render (call $$ decl $$ entry $$ c)
 where
  (call, decl, entry, c) = ppCasm Hugs t

t1 = Casm 
       "foo"
       False
       (text "int x; void* q; char p; void* q")
       (text "p = foo(&q,x,y);")
     --(text "free q")
       [ Param "x" "x" Int   , Param "q" "q" Addr] 
       [ Param "p" "'p'" Char, Param "q" "q" Addr] 

\end{code}


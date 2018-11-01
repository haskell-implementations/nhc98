%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%

\begin{code}

module Proc
	( Proc, ppProc
	, genProc
	) where

import Maybe( maybeToList, fromJust, isJust )
import List( unzip4 )
import Pretty
import PrettyUtils
	( indent, textline
	, sepdBy, joinedBy
        , vcatMap
	, ppCIf, ppCDecl
	, ppCase, ppCases, ppIf, ppTuple, ppApply, ppRecord
	, ppBind, ppReturn
	)

import Name
import Type( Type(..), isPureType, ppType )
import DIS( DIS(..), ppDIS, ppDIS' ,simplify )
import Decl
import Casm
import NameSupply
import Target( Target )
--import NHCBackend (genProcNHC)

#if !defined(__HASKELL98__)
#define fmap map
#endif

\end{code}

%************************************************************************
%*									*
\subsection{Generating function declarations}
%*									*
%************************************************************************


\begin{code}

type Proc = (Sig, Call, CCode, Fail, Result)

\end{code}

\begin{code}

ppProc :: Proc -> Doc
ppProc ((n, t), ds, cexp, fs, res) = 
     text "%fun" <+> text n <+> text "::" <+> ppType t 
  $$ text "%call" <+> hsep (map (ppDIS' True) ds) 
  $$ text "%code" <+> prefix "% " cexp
  $$ hsep (map (\(a, b) -> text "%fail" <+> doubleQuotes (text a) 
                                        <+> doubleQuotes (text b)) fs)
  $$ text "%result" <+> ppDIS' True res
  where prefix :: String -> [String] -> Doc
        prefix pre = foldl (\x y-> x $$ text pre <> text y) empty

\end{code}

@genProc target gcSafe proc@ returns a triple @(hcode, ccode, entry)@
where

o @hcode@ is a Haskell function (and type declaration) which marshalls
  its arguments, performs a casm and unmarshalls the results.

o @ccode@ is any C code that has to be generated as part of the casm.
  (It is empty if the target is GHC.)

o @entry@ is a Hugs-specific piece of C --- the entry for the primtable.

\begin{code}

genProc :: Target -> Bool -> Proc -> (Doc, Doc, Doc)
--genProc NHC    gcSafe proc   = genProcNHC proc
genProc target gcSafe ((name, typ), ds, ctext, ofs, res)
  = ( text name <+> text "::" <+> ppType typ			
      $$ text name <+> hsep av   <+> text "="  			
      $$ indent (
             wrap 
      	   $ unpack						
      	   $ mkResult
           $ call 
      	   )
      $$ hdecl
    , cdecl
    , entry <> comma
    )
 where
    wrap d = if isPureType typ then unsafe d else d

    unsafe :: Doc -> Doc
    unsafe d = text "unsafePerformIO(" $$ indent d <> text ")"

    (av, unpack, adecls, as)               = marshallDISs ds
    (pack, rv, rdecls, rs)		   = unmarshallDIS res
    (fdecls, fs, if_no_failc, if_no_failh) = failureHandling ofs
    results                                = rs ++ fs

    casm = Casm ("prim_" ++ name) gcSafe 
                (adecls <> rdecls <> fdecls) 
	        (vcatMap text ctext $$ if_no_failc)
                as
                results
    (call, hdecl, cdecl, entry) = ppCasm target casm

    tuple = ppTuple [ text v | Param v _ k <- results ]

    -- The unmarshalling code avoids generating code of the
    -- form "call >>= \ (res1, ... resm) -> (res1, ... resm)"
    -- by performing a very simple-minded test.
    mkResult call
      | null ofs && render tuple == render rv && render (pack empty) == ""
      = call
      | otherwise
      = call `ppBind` (tuple, if_no_failh (pack $ ppReturn rv))

\end{code}

%************************************************************************
%*									*
\subsection{Error Handling}
%*									*
%************************************************************************

\begin{code}
    
failureHandling :: Fail -> (Doc, [Param], Doc, Doc -> Doc)
failureHandling [] = (empty, [], empty, id)
failureHandling rs = 
  ( ppCDecl "int" fn $$ ppCDecl "char*" fs
  , [Param fn fn Int, Param fs fs Addr]
  , ppCIf [ ( textline [ fn, "== (", p, ")" ]	-- ***FIXED assignment/test bug!
            , textline [ fs, "=", s, ";" ] 
            )
          | (p, s) <- rs ] 
          (Just (textline [ fn, "= 0;" ]))
  , \d -> ppIf (textline ["(", fn, "/= 0)"])
               (textline ["unmarshall_string_", fs, ">>= fail . userError"])
               d
  )
  where
    fn = "gc_failed"
    fs = "gc_failstring"

\end{code}


%************************************************************************
%*									*
\subsection{Generating the packing and unpacking of DISs}
%*									*
%************************************************************************

\begin{code}

marshallDISs  :: [DIS] -> ([Doc], Doc -> Doc, Doc, [Param])
marshallDISs ds = (ns, foldr (.) id ms, hsep decls, concat pss)
 where
  (ns, ms, decls, pss) = unzip4 foo
  (foo, _) = initNS (mapM (marshall.simplify) ds) (nameSupply "gc_arg")

unmarshallDIS :: DIS   -> (Doc -> Doc, Doc, Doc, [Param])
unmarshallDIS d = foo
 where
  (foo, _) = initNS ((unmarshall.simplify) d) (nameSupply "gc_res")

\end{code}


%************************************************************************
%*									*
\subsection{Marshalling code}
%*									*
%************************************************************************

@marshall dis@ returns a triple @(root, unpack, leaves)@ where

****EEEEEK!
[Based on what is written below, I think it actually generates a 4-tuple,
  (pat,unpack,decls,leaves)
]

o @pat@ is a pattern to match against
o @unpack@ is the code to do the unpacking
o @decls@ is a bunch of C declarations for the variables it unpacks into
o @leaves@ is the list of values it generates

eg @marshall (%%Int (declare "int" x), %%Float (declare "float" "0.0"),
               <fromfoo/tofoo> (int z))@
   returns something like this:
@
  ( (x,y,gc_arg1)
  , \ rest -> case fromfoo gc_arg1 of { z -> rest }
  , text "int x; float arg2; int z;"
  , [ Param "x" "x" Int, Param "arg2" "0.0" Float), Param "z" "z" Int ]
  )
@

****EEEEEK!
[This example needs changing to reflect the new DIS structure.]

\begin{code}

marshall :: DIS -> NSM (Doc, Doc -> Doc, Doc, [Param])

marshall (Var v) -- no baseTy info so it's not a casm argument (very weird)
  = return ( text v, id, empty, [])

marshall (Apply (BaseDIS k) [ Declare cty (Var v) ]) 
  = return ( text v, id, ppCDecl cty v, [Param v v k])

marshall (Apply (BaseDIS k) [ Declare cty (Exp e) ]) = do
  v <- getNewName
  return ( text v, id, empty, [Param v e k])

marshall Tuple = do             -- trivial case, probably not used
  return (ppTuple [], id, empty, [])

marshall (Apply Tuple ds) = do
  bits <- mapM marshall ds
  let (ns, ms, decls, pss) = unzip4 bits
  return (ppTuple ns, compose ms, hsep decls, concat pss)

marshall (Apply (Constructor c) ds) = do
  bits <- mapM marshall ds
  let (ns, ms, decls, pss) = unzip4 bits
  return (ppApply (text c) ns, compose ms, hsep decls, concat pss)

marshall (Apply (Record c fs) ds) = do
  bits <- mapM marshall ds
  let (ns, ms, decls, pss) = unzip4 bits
  return (ppRecord (text c) (map text fs) ns, compose ms, hsep decls, concat pss)

marshall (Apply (UserDIS _ n1 n2) ds) = do
--error ("Unrecognised userDIS <" ++n1++"/"++n2++">")
  bits <- mapM marshall ds
  let (ns, ms, decls, pss) = unzip4 bits
  return (ppApply (text n1) ns, compose ms, hsep decls, concat pss)

marshall (Apply (BaseDIS b) ds) = 
  error ("Unrecognised baseDIS %%"++show b)

marshall (Apply (Var ('%':t)) ds)
  | t == "Maybe"
  = case ds of [ Exp nothing, just ] -> marshallMaybe (text nothing) just
  | t == "Foreign"
  = case ds of -- This is just a special case of giving a kind
    [Exp cty, Var v, Exp free] 
      -> return (text v, id, ppCDecl cty v, [Param v v (Foreign free)])
    _ -> error "Malformed %Foreign"
  | otherwise
  = error ("Unrecognised DIS %" ++ t)

marshall dis@(Apply (Var t) [Var t']) = error $ "Don't know how to marshall " ++ show (ppDIS dis)

marshall (Apply (Var t) ds) = do
  nm   <- fmap text getNewName
  bits <- mapM marshall ds
  let (ns, ms, decls, pss) = unzip4 bits
  return (nm, \e -> ppApply fun [nm] `ppBind` (ppTuple ns, compose ms e), hsep decls, concat pss)
 where
  fun = text ("marshall_" ++ t)

marshall dis = error $ "Don't know how to marshall " ++ show (ppDIS dis)

\end{code}

The marshalling of @%Maybe nothing just@ is a little different.
We generate code like this:
@
      case x of 
      Nothing -> return nothing -- should be a tuple
      Just j  -> <unpack j> >>= \ ... ->
                 return (j1,..jn)
                                             >>= \ (j1 ... jn) -> <hole>
@
where @j1@ ... @jn@ are the leaf vars of the Just dis.

\begin{code}

marshallMaybe :: Doc -> DIS -> NSM (Doc, Doc -> Doc, Doc, [Param])
marshallMaybe nothing just = do
      nm <- fmap text getNewName
      (j, unpackj, decls, ps) <- marshall just
      let js = ppTuple [ text n | Param n _ _ <- ps ]
	  unpack = ppCases nm
		 [ (text "Nothing",            ppReturn nothing)
		 , (ppApply (text "Just") [j], unpackj (ppReturn js))
		 ]
      return (nm, \ hole -> parens unpack `ppBind` (js, hole), decls, ps)

\end{code}

%************************************************************************
%*									*
\subsection{UnMarshalling code}
%*									*
%************************************************************************

@unmarshall dis@ returns a quadruple @(pack, returnValue, decls, leaves)@ where

o @decls@ is a bunch of C declarations for resturn values

o @leaves@ is a list of parameters that should be returned from the casm.

o @pack@ is an expression builder which constructs parts of the result
  (by calling user marshalling code).   It is of the form:

  \ hole ->
       text "unmarshall_T1 x1 >>= \ y1 ->"
    $$ text "unmarshall_T2 x2 >>= \ y2 ->"
    $$ hole

o @returnValue@ is an expression which builds the return values from the
  @leaves@.

\begin{code}

unmarshall :: DIS -> NSM (Doc -> Doc, Doc, Doc, [Param])

unmarshall (Var v) -- no kind info so it's not a casm argument
  = return ( id, text v, empty, [])

unmarshall (Apply (BaseDIS k) [ Declare cty (Var v) ])
  = return ( id, text v, ppCDecl cty v, [Param v v k])

unmarshall (Apply (BaseDIS k) [ Declare cty (Exp e) ]) = do
  v <- getNewName
  return ( id, text v, empty, [Param v e k])

unmarshall Tuple = do
  return ( id, ppTuple [], empty, concat [])

unmarshall (Apply Tuple ds) = do
  bits <- mapM unmarshall ds
  let (packs, ms, decls, pss) = unzip4 bits
  return ( compose packs, ppTuple ms, hsep decls, concat pss)

unmarshall (Apply (Constructor c) ds) = do
  bits <- mapM unmarshall ds
  let (packs, ms, decls, pss) = unzip4 bits
  return (compose packs, ppApply (text c) ms, hsep decls, concat pss)

unmarshall (Apply (Record c fs) ds) = do
  bits <- mapM unmarshall ds
  let (packs, ms, decls, pss) = unzip4 bits
  return (compose packs, ppRecord (text c) (map text fs) ms, hsep decls, concat pss)

unmarshall (Apply (UserDIS _ n1 n2) ds) = 
  error ("Unrecognised userDIS <" ++n1++"/"++n2++">")

unmarshall (Apply (BaseDIS b) ds) = 
  error ("Unrecognised baseDIS %%"++show b)


unmarshall (Apply (Var ('%':t)) ds)
  | t == "Maybe"
  = case ds of [ Exp nothing, just ] -> unmarshallMaybe (text nothing) just
  | t == "Foreign"
  = case ds of -- This is just a special case of giving a kind
    [Exp cty, Var v, Exp free] 
      -> return (id, text v, ppCDecl cty v, [Param v v (Foreign free)])
    _ -> error "Malformed %Foreign"
  | otherwise
  = error ("Unrecognised DIS %" ++ t)

unmarshall dis@(Apply (Var t) [Var t']) = error $ "Don't know how to unmarshall " ++ show (ppDIS dis)

unmarshall (Apply (Var t) ds) = do
  nm   <- fmap text getNewName
  bits <- mapM unmarshall ds
  let (packs, ms, decls, pss) = unzip4 bits
      pack c = ppApply fun ms `ppBind` (nm, c)
  return (compose packs . pack, nm, hsep decls, concat pss)
 where
  fun = text ("unmarshall_" ++ t)

unmarshall dis = error $ "Don't know how to unmarshall " ++ show (ppDIS dis)

\end{code}

Again, the unmarshalling of @%Maybe nothing just@ is a little different.
We generate code like this:
@
  if (nothing == (j1, ...jn))
  then return Nothing
  else <pack j1 .. jn>
       return Just ( ... )              >>= \ v -> <hole>
@
where @j1@ ... @jn@ are the leaf vars of the Just dis.

\begin{code}

unmarshallMaybe :: Doc -> DIS -> NSM (Doc -> Doc, Doc, Doc, [Param])
unmarshallMaybe nothing just = do
  nm   <- fmap text getNewName
  (pack, m, decls, ps) <- unmarshall just
  let js = [ text n | Param n _ _ <- ps ]
  return ( \ hole ->
             parens (
               ppIf (nothing <+> text "==" <+> ppTuple js)
                  (text "return Nothing")
                  (pack $ ppReturn (ppApply (text "Just") [m])))
             `ppBind` (nm, hole)
         , nm
	 , decls
         , ps
         )

\end{code}


%************************************************************************
%*									*
\subsection{Utilities}
%*									*
%************************************************************************

\begin{code}

compose :: [ (a -> a) ] -> (a -> a)
compose = foldr (.) id 

\end{code}

%************************************************************************
%*									*
\subsection{Examples}
%*									*
%************************************************************************

\begin{code}

-- type Proc = (Sig, Call, [String], Fail, Result)

proc1 :: Proc
proc1 = 
    ( ("foo", TypeVar "Int" `Arrow` TypeVar "Float")
    , [tuple [int "arg1", int "arg2"]]
    , ["res=(float)(arg1+arg2);"]
    , [("res>42","\"loser\"")]
    , tuple [flt "res1", int "res2"]
    )
 where
  int nm   = Apply (BaseDIS Int) [Declare "int" (Var nm)]
  flt nm   = Apply (BaseDIS Float) [Declare "float" (Var nm)]
  tuple ds = Apply Tuple ds


tst :: Proc -> IO ()
tst p = case genProc Hugs False p of { (d1,d2,d3) ->
        putStr $ render (d1 $$ d2 $$ d3)
        }

\end{code}

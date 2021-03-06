%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%
\begin{code}
module Process
	( processFile
	) where

import List ( intersperse, sortBy )
import Maybe( catMaybes, listToMaybe, fromMaybe, isJust )
import Monad
import ListUtils ( prefix )
import Pretty
import PrettyUtils( indent, textline, ppStruct, vcatMap, vsepMap, vsep )
import IO( hPutStr, hPutChar, stderr )

import HandParse( gcParse  )
import HandLex  ( gcLex    )
import Decl ( Decl(..), showDecls )
import Name ( Name )
import DIS  ( DIS, expandDIS, DISEnv )
import Proc ( Proc, ppProc, genProc )
import FillIn( ProtoProc, fillinProc, ppProtoProc, Consts, genConsts, genConsts2 )
import Target( Target(..) )
import NHCBackend (cNhc, hNhc)

-- #if defined(__GLASGOW_HASKELL__) && __GLASGOW_HASKELL__ <= 202
-- import PrelBase(maybe) -- workaround for GHC 2.02
-- #endif

#if defined(__HASKELL98__)
#  if !defined(__HBC__)
import IO(hPutStrLn)
#  else
hPutStrLn h s = hPutStr h s >> hPutChar h '\n'
#  endif
#define MPLUS `mplus`
#else
#define MPLUS ++
#define fmap map
#define fail error
hPutStrLn h s = hPutStr h s >> hPutChar h '\n'
#endif

\end{code}

%************************************************************************
%*									*
\subsection{Processing a file}
%*									*
%************************************************************************

\begin{code}

processFile :: Target -> Bool -> Bool -> [String] -> String -> String -> IO ()
processFile target debug verbose path file csuf = do
  mbrawdecls <- tryRead path file
  emit debug (showDecls mbrawdecls)
  disDefs    <- getDISdefs verbose path file
  case mbrawdecls of
   Nothing -> fail ("Can't read file " ++ file)
   Just rawdecls -> do
    let
      protoProcs = [ (sig, mbcall, mbccode, fs, mbres)
	         | ProcSpec sig mbcall mbccode mbfs mbres <- rawdecls
                 , let fs = fromMaybe [] mbfs
	         ]
      consts   = [ (ty, consts)
	         | Constant ty consts <- rawdecls
	         ]
      hs       = [ h | Haskell h <- rawdecls ]
      cs       = [ c | C c       <- rawdecls ]
      includes = [ i | Include i <- rawdecls ]
      prefixes = sortBy lengthCmp $ "" : [n | Prefix n <- rawdecls]
       where
        lengthCmp x y = compare (length y) (length x) 

      constProcs = concatMap (genConsts disDefs) consts
      --(constProcs,constFuns) = unzip $ zipWith (genConsts2 disDefs prefixes) consts [1..]

      procs = map (fillinProc disDefs prefixes) 
                  (protoProcs ++ constProcs)
--                  protoProcs 
--              ++ constProcs

      (hdecls, ccode, entries) = unzip3 (map (genProc target False) procs)

    emit debug (render (vsepMap ppProtoProc protoProcs))
    emit debug (render (vsepMap ppProtoProc constProcs))
--    emit debug (render (vsepMap ppProc constProcs))
--    emit debug (render (vcat constFuns))
    emit debug (render (vsepMap ppProc      procs))

    case target of
     GHC  -> do
       writeFile (file ++ ".hs") haskell
       emit debug (render (vsep hdecls))
      where
       haskell = unlines ["{-# OPTIONS -#include " ++ s ++ " #-}"
                         | s <- includes 
                         ]
                 ++ unlines hs 
--                 ++ render (vcat hdecls $$ vcat constFuns)
                 ++ render (vcat hdecls)

     Hugs -> do
       writeFile (file ++ ".hs") haskell 
       writeFile (file ++ ".c")  c
       emit debug (render (vsep hdecls))
       emit debug (render (vsep ccode))
      where
       haskell = unlines hs ++
		 render (  text "needPrims_hugs" -- Tell Hugs to look for a DLL
                        $$ vcat hdecls
--                      $$ vcat constFuns
                        )

       c       = unlines cs ++
                 render (  ppHeader includes
                        $$ vcat ccode 
			$$ ppPrimTable entries
                        $$ ppFooter
                        )
     NHC ->
      let hfile = (file++"_.hs")
          cfile = (file++"_."++csuf)
   --     haskell = unlines hs ++ render (vcat hdecls)
   --     c       = unlines cs ++ render (vcat ccode)
      in
      writeFile   cfile "#include <haskell2c.h>\n" >>
      (writeFile  hfile . render . vsepMap (hNhc debug disDefs prefixes)) rawdecls >>
      (appendFile cfile . render . vsepMap (cNhc debug disDefs prefixes)) rawdecls
   -- writeFile   hfile haskell >>
   -- appendFile  cfile c

\end{code}

\begin{code}

ppPrimTable :: [Doc] -> Doc
ppPrimTable entries
  =  text "static struct primitive primTable[] = {"
  $$ indent (  vcat entries
            $$ ppStruct [text "0", text "0", text "0"]
            )
  $$ text "};"

ppHeader :: [String] -> Doc
ppHeader includes = vcatMap text $
  [ "/* Code generated by GreenCard 2 for Hugs */" 
  , "#include \"GreenCard.h\""
  ]
  ++ [ "#include " ++ i | i <- includes ]

ppFooter :: Doc
ppFooter = vcatMap text $
  [ "static struct primInfo prims = { 0, primTable, 0 };"
  , ""
  , "DLLEXPORT(void) initModule(HugsAPI2 *);"
  , "DLLEXPORT(void) initModule(HugsAPI2 *hugsAPI) {"
  , "    hugs = hugsAPI;"
  , "    hugs->registerPrims(&prims);"
  , "}"
  , ""
  ]

\end{code}

\begin{code}

emit :: Bool -> String -> IO ()
emit True  xs = hPutStrLn stderr xs
emit False _  = return ()

\end{code}

%************************************************************************
%*									*
\subsection{Collecting DIS definitions}
%*									*
%************************************************************************

Collecting all the DIS definitions from all readable files on the
import graph.

\begin{code}

getDISdefs :: Bool -> [String] -> String -> IO [(Name, ([Name], DIS))]
getDISdefs verbose path file = do
  imports <- chaseImports path [file] []
  emit verbose ("Imports: " ++ show imports)
  rawdecls <- mapM (tryRead path) imports
  let defs = [ (nm, (args, dis))
             | Just decls <- rawdecls
             , DisDef nm args dis <- decls
             ]
  emit verbose ("DIS definitions:\n" ++ unlines (map show defs))
  return defs

\end{code}

%************************************************************************
%*									*
\subsection{Chasing Imports}
%*									*
%************************************************************************

Chase a set of possibly recursive module imports maintaining a list of
files to try and a list of files that have been found.

\begin{code}

chaseImports :: [String] -> [String] -> [String] -> IO [String]
chaseImports path [] seen 
  = return seen

chaseImports path (file:files) seen 
  | file `elem` seen
  = chaseImports path files seen

  | otherwise
  = do
      imports <- getImports path file
      --putStrLn (concat $ ["File ", file, " imports: "] ++ imports)
      chaseImports path (imports ++ files) (file:seen)

getImports :: [String] -> String -> IO [String]
getImports path file = do
  decls <- fmap (fromMaybe []) (tryRead path file)
  --print decls
  return (catMaybes [mbImportName s | Haskell s <- decls])

\end{code}
      
\begin{code}

tryRead :: [String] -> String -> IO (Maybe [Decl])
tryRead path name = do
  res <- mapM mbReadFile (allFileNames path name [".gc", ".lhs", ".hs"])
  maybe sorry (return . Just . gcParse . gcLex) (listToMaybe (catMaybes res))
 where 
  sorry = do --putStrLn (concat (["Could not find \"", name, "\" in: "] 
             --                  ++ (intersperse ":" path)))
             return Nothing

mbImportName :: String -> Maybe String
mbImportName xs = maybe Nothing (Just . head) (iq MPLUS i)
  where
    iq	= prefix ["import", "qualified"] wxs
    i	= prefix ["import"] wxs
    wxs = words xs  -- (tokens xs)

tokens :: String -> [String]
tokens s = case lex s of
           [] -> []
           [("","")] -> []
           [(t,s')] -> t : tokens s'

\end{code}

All filenames with prefix from @path@ and suffix from @exts@.

\begin{code}

allFileNames :: [String] -> String -> [String] -> [String]
allFileNames path file exts 
  = [d ++ hierarch file ++ ext | d <- path, ext <- exts]

hierarch :: String -> String
hierarch ('.':xs) = '/': hierarch xs
hierarch (x:xs)   = x  : hierarch xs
hierarch []       = []

\end{code}

Try reading a file

\begin{code}

mbReadFile :: String -> IO (Maybe String)
mbReadFile name = catch (readFile name >>= return . Just)
                        (const (return Nothing))

\end{code}

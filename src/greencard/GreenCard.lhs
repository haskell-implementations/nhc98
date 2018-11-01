%
% Copyright (C) 1997 Thomas Nordin and Alastair Reid
%

\begin{code}

module Main(main) where

import Package
import System( getArgs )
import GetOptSOF
import Process( processFile )
import Target( Target(..) )
import ListUtils( split, dropSuffix )

\end{code}


%************************************************************************
%*									*
\subsection{Main program}
%*									*
%************************************************************************


Driver code.

\begin{code}
main = 
  do argv <- getArgs
     greencard (snd (getOpts options [] argv))

main2 str = greencard (snd (getOpts options [] (words str)))

tstg file = main2 (unwords [file, "--debug", "--include-dir .", "--target ghc"])
tstn file = main2 (unwords [file, "--debug", "--include-dir .", "--target nhc98"])
tsth file = main2 (unwords [file, "--debug", "--include-dir .", "--target Hugs"])

greencard :: [CLIOptions] -> IO ()
greencard opts = 
  if optversion	then putStrLn ver   	else
  if opthelp	then putStrLn usage 	else
  case optfiles of
  [] -> putStrLn usage
  (fname:_) -> 
    case targets of
    ["Hugs"] -> greencard' Hugs fname
    ["ghc"]  -> greencard' GHC  fname
    ["nhc98"]-> greencard' NHC  fname
    ["nhc13"]-> greencard' NHC  fname
    []       -> greencard' NHC  fname 
    _        -> putStrLn "<target> must be `Hugs' or `ghc' or `nhc98' or `nhc13'"
 where
    greencard' target fname =
      processFile target optdebug optverbose ("./" : optincludedirs) (dropSuffix fname ".gc") optCsuffix
    
    ver		= name ++ " " ++ version
    usage	= "Usage: green-card [OPTION]... FILE..."
    optversion	= any (DumpVersion==)	opts
    opthelp	= any (DumpHelp==)	opts
    optdebug	= any (DumpDebug==)	opts
    optverbose	= any (DumpVerbose==)	opts
    optgcsafe	= any (DumpGCSafe==)	opts

    targets     = [t | OptTarget t <- opts ]
    
    optfiles	= [f | OptFile f <- opts]
    optCsuffix  = head [x | OptCSuffix x <- opts]
    optincludedirs = 
      map ensuredir $ [d | OptIncludeDirs d <- reverse opts]
    --map ensuredir $ concat [split ':' d | OptIncludeDirs d <- reverse opts]
    ensuredir d =
      case reverse d of
        ('/':_) -> d
        _       -> d++"/"


\end{code}

The command-line options recognised by Green Card.

\begin{code}

options = 
  (prefixed "-" $ 
   opts
      [prefixed "-" $
       opts 
        ["version"	-= DumpVersion,
         "help"		-= DumpHelp,
         "debug"	-= DumpDebug,
         "verbose"	-= DumpVerbose,
         "fgc-safe"	-= DumpGCSafe,
	 "target"       -=== OptTarget,
         "include-dir"	-=== OptIncludeDirs,
         "c-suffix"	-=== OptCSuffix
        ],
      "h"		-= DumpHelp,
      "d"		-= DumpDebug,
      "v"		-= DumpVerbose,
      "g"		-= DumpGCSafe,
      "t"		-== OptTarget,
      "i"		-== OptIncludeDirs,
      "I"		-== OptIncludeDirs,
      "P"		-== OptIncludeDirs
     ]) `orOpt`
    ((const True)  -? OptFile)

data CLIOptions	= DumpVersion
		| DumpHelp
		| DumpDebug
		| DumpVerbose
		| DumpGCSafe
		| OptTarget String
		| OptCSuffix String
		| OptIncludeDirs String
		| OptFile String deriving Eq

\end{code}


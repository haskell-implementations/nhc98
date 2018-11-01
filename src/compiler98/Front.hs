{-
The front phase of the compiler this needs to

- do lexical analysis
- parse the program source code
- do "need" analysis which determines which symbols are needed by the program

It is especially useful to have this as a seperate phase because it is used repeatedly
by Make.lhs in doing dependency analysis.

There are two public items

  front      - the function to do the front end of the compiler
  FrontData  - the useful data extracted from the front end
-}

module Front(front, FrontData(..)) where

import System
import IO

import Util.Extra
import Flags
import Syntax hiding (TokenId)
import Info
import Error
import qualified Data.Map as Map
import qualified Data.Set as Set
import Parse.Lexical(lexical)
import Parse.Parse(parseProg)
import Parse.ParseCore(parseit)
import Parse.Pragma(parsePragmas)
import Need(needProg,NeedTable)
import Import(HideDeclIds,importOne)
import Language.Preprocessor.Unlit(unlit)
import Overlap(Overlap)
import SysDeps(PackedString)
import PrettySyntax(ppModule, prettyPrintTokenId)
import Data.PackedString(unpackPS)
import Phase
import TokenId
import Language.Preprocessor.Cpphs
import System.FilePath
import System.Console.GetOpt

{-
FrontData is the data returns by the front end
FIXME: unsure about some things here ...

   fParsedPrg       the abstract syntax tree of the parsed program
   fNeed            the table of values needed by this module
   fQualFun         ... unsure find out what this does!!
   fOverlap         ... unsure find out what this does!!
   fExpFun          ... unsure find out what this does!!
   fImports         a list of things that need to be imported, which is of the form
                          [(mrps, needFun, hideFun)]
                    where
                         mrps          the reversed packed string of the imported module
                         needFun       .. unsure find out what this does!!
                         hideFun       .. unsure find out what this does!!
-}

data FrontData = FrontData { fParsedPrg :: Module TokenId,
                             fNeed :: NeedTable,
                             fQualFun :: TokenId -> [TokenId],
                             fOverlap :: Overlap,
                             fExpFun :: (TokenId -> Bool) -> TokenId -> IdKind -> IE,
                             fImports :: [(PackedString,
                                          (PackedString, PackedString, Set.Set TokenId) -> [[TokenId]] -> Bool,
                                           HideDeclIds)],
                             fModName :: String,
                             fFlags :: Flags,
                             fFileFlags :: FileFlags }

{-
front is the proper front end of the compiler.
   flags             compiler flags
   filename          the filename of the module to load and parse
   returns           a FrontData representing what was loaded from the file
-}
front :: Flags -> FilePath -> IO FrontData
front flags filename = do

  -- assume unlit for .lhs files
  flags <- return $ flags{sUnlit = sUnlit flags || (takeExtension filename == ".lhs")}

  -- do lexical analysis, giving a list of tokens
  beginPhase "lex"
  mainChar      -- :: String
           <- tryReadFile "" filename

  -- read any pragma's that might be around
  let pragmas = parsePragmas mainChar
  let (flagchanges, _, _) = getOpt Permute allOpts (concatMap words pragmas)
  flags <- return $ foldr ($) flags flagchanges

  mainCpp       -- :: String -- The string after running cpphs (if necessary)
           <- if sCpp flags then cpphs flags filename mainChar else return mainChar

  lexdata       -- :: [PosToken]
           <- return $ lexical (sUnderscore flags) filename
                     $ (if sUnlit flags then unlit filename else id)
                     $ mainCpp

  pF (sLex flags) "Lexical"
       (mixSpace (map (\ (p,l,_,_) -> strPos p ++ ':':show l) lexdata))

  -- parse the source code giving an abstract syntax tree of the program
  beginPhase "parse"
  parsedPrg     -- :: Module TokenId
            <- catchError2 (parseit parseProg lexdata) (showErr filename)
  pF (sParse flags) "Parse" (prettyPrintTokenId flags ppModule parsedPrg)

  -- change the module decl to say to export everything, if that's appropriate ...
  -- FIXME: bit of a hack really, should be a nicer way to do it
  -- FIXME: shouldn't this be just before exporting the interface?
  parsedPrg <- if sExportAll flags then
                  case parsedPrg of
                      Module pos modidl _ impdecls fixdecls topdecls ->
                          let exports = Just [ExportModid pos modidl] in
                          return (Module pos modidl exports impdecls fixdecls topdecls)
                else
                  return parsedPrg


  -- Perform "need" analysis (what imported entities are required?)
  -- Second argument may contain error message or parse tree
  beginPhase "need"
  (need         -- :: NeedTable
   ,qualFun     -- :: TokenId -> [TokenId]
   ,overlap     -- :: Overlap
   ,info)       -- :: Either String (expFun,imports)
         <- return (needProg flags parsedPrg)
  (expFun       -- :: (TokenId->Bool) -> TokenId -> IdKind -> IE
   ,imports)    -- :: [ ( PackedString
                --      , (PackedString, PackedString, Tree (TokenId,IdKind))
                --            -> [[TokenId]] -> Bool
                --      , HideDeclIds
                --      )
                --    ]
            <- catchError info ("In file: " ++ filename) id
  pF (sNeed flags) "Need (after reading source module)"
            (show (Map.toList need))

  let (Module _ (Visible modid) _ _ _ _ ) = parsedPrg
      modName = reverse (unpackPS modid)
      fileflags = getFileFlags flags filename modName

  return (FrontData parsedPrg need qualFun overlap expFun imports modName flags fileflags)


cpphs :: Flags -> FilePath -> String -> IO String
cpphs flags filename contents = return $ runCpphs opts filename contents
      where
          opts = defaultCpphsOptions {defines = macros,
                  boolopts = defaultBoolOptions{ansi=True, stripC89=False, stripEol=False}}
          macros = [("__HASKELL__","98"), ("__HASKELL_98__", "1"), ("__HASKELL98__", "1"), ("__YHC__", "1")]

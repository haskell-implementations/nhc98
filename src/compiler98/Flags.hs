{- ---------------------------------------------------------------------------
Flags are all the choices and information given to the compiler in the
argument list. Here a data type Flags is defined for holding this information,
a function processArgs to obtain a value of type Flags from the argument list,
and a simple function pF for printing information demanded by a flag.
-}
module Flags
  ( FileFlags(..)
  , Flags(..)
  , processArgs
--  , processMoreArgs
--  , splitArgs
  , pF
  , printUsage
  , getFileFlags
  , allOpts
  , calcRootPath
  ) where

import IO
import Util.OsOnly(fixRootDir,fixTypeFile,fixObjectFile)
import Char(isDigit)
import System.FilePath
import Util.Text
import Util.Extra
import Building (Compiler(..),compiler)
import System.Console.GetOpt

{- File flags are things which are specific to each compiled file -}
data FileFlags = FileFF {
      sSourceFile :: String,   -- name of source file as given
      sModuleName :: String,   -- name of the module
      sTypeFile :: String,     -- full path to the .hi file
      sObjectFile :: String,   -- full path to the .hbc file
      sCoreFile :: String,     -- full path to the .ycr file
      sWrapFile :: String      -- full path to the .c wrapper
    }

instance Show FileFlags where
    show ff = unlines [ "sourceFile = "++sSourceFile ff,
                        "moduleName = "++sModuleName ff,
                        "typeFile = "++sTypeFile ff,
                        "objFile = "++sObjectFile ff,
                        "coreFile = "++sCoreFile ff,
                        "wrapFile = "++sWrapFile ff]

getFileFlags :: Flags -> FilePath -> String -> FileFlags
getFileFlags flags sourcefile modname | compiler==Yhc =
    FileFF sourcefile modname typefile objfile corefile wrapfile
  where
    typefile = fileForModule (sTypeDst flags) "hi"
    objfile = fileForModule (sObjectDst flags) "hbc"
    corefile = fileForModule (sObjectDst flags) "ycr"
    wrapfile = fileForModule (sWrapDst flags) "c"
    -- if modname == "Main" that means that the file may not be "Main", but could be something else
    name = if modname == "Main" then takeBaseName sourcefile else modname
    rootPath = calcRootPath sourcefile modname
    fileForModule root ext =
            if sHideObj flags then
                addExtension (combine rootPath (joinPath [ext, name])) ext
            else
                replaceExtension (combine (rootPath </> root)
                                          (joinPath $ splitList "." name)) ext

getFileFlags flags sourcefile modname | compiler==Nhc98 =
    case sFileArgs flags of
      [source] -> FileFF source modname (hiFile source) (hcFile source)
                                       (core source)   undefined
      [source,hi,hc]
                   -> FileFF source modname hi hc (core source) undefined
      [realfile,source,hi,hc]
                   -> FileFF realfile modname hi hc (core source) undefined
      _ -> error (printUsage undefined)
  where
    hiFile f = let (rootdir,file) = fixRootDir (sUnix flags) f
               in fixTypeFile (sUnix flags) rootdir file
    hcFile f = let (rootdir,file) = fixRootDir (sUnix flags) f
               in fixObjectFile (sUnix flags) rootdir file
    core f   = f++".ycr"


-- | Figure out how far up the directory tree you have to go to get the root
calcRootPath :: FilePath -> String -> FilePath
calcRootPath filename modname = joinPath $ take tsize orig
    where
        orig = splitPath filename
        tsize = length orig - depthmod + depthfil - 1
        depthmod = length $ filter (== '.') modname
        depthfil = length $ filter (== '.') $ takeFileName $ dropExtension filename


{- Flags are flags that apply to every file -}
data Flags = FF
  {sRootFile   :: String	-- full path to root source code
  ,sFileArgs   :: [String]	-- all filenames given on commandline
  ,sIncludes   :: [String]
  ,sPreludes   :: [String]
  ,sBasePath   :: String

  ,sTypeDst     :: String --  where generated .hi should go
  ,sObjectDst   :: String --  where generated bcode should be
  ,sWrapDst     :: String -- b-code    where generated wrappers should go
  ,sHideObj     :: Bool -- hide object code

--v Flags to control actions
  ,sViewCore    :: [String]

--v Flags to control compilation
  ,sRedefine   :: Bool   -- allow redefinitions of imported identifiers
  ,sCompileOne :: Bool   -- compile one file only
  ,sUnix       :: Bool   -- either unix or RiscOS
  ,sUnlit      :: Bool   -- unliterate the source code
  ,sCpp        :: Bool   -- preprocess the source code
  ,sHiSuffix   :: String -- set the interface file suffix (usually .hi)
  ,sHat        :: Bool

  ,sProfile    :: Bool	-- turn on heap profiling
  ,sTprof      :: Bool	-- turn on time profiling
  ,sZap        :: Bool	-- zap unused args / stack positions
  ,sPrelude    :: Bool	-- keep prelude defns in interface file
  ,sLib        :: Bool	-- compiling a library
  ,sPart       :: Bool  -- compiling part of a lib
  ,sKeepCase   :: Bool	-- don't lift case, we fix those later

  ,sUnifyHack  :: Bool  -- enables type hackery that's required to make the prelude compile ...
  ,sDotNet     :: Bool  -- generate .NET IL (implies -no-bytecode)
  ,sNoBytecode :: Bool  -- don't generate any bytecode (typically used with -core)

--v Flags for machine architecture / configuration
  ,sAnsiC      :: Bool	-- generate bytecode via ANSI-C
  ,sNplusK     :: Bool	-- allow (n+k) patterns
  ,sUnderscore :: Bool	-- force H'98 underscores
  ,sPuns       :: Bool	-- allow named-field puns
  ,s98         :: Bool  -- Haskell 98 mode

--v debugging flags - show program / import tables (after each compiler phase)
  ,sLex        :: Bool  -- input    after lexing
  ,sILex       :: Bool  -- input    after lexing imported interface files
  ,sParse      :: Bool  -- ast      after parsing
  ,sNeed       :: Bool  -- need table   before imports
  ,sINeed      :: Bool  -- need table   after all imports
  ,sIINeed     :: Bool  -- need table   after each import
  ,sIRename    :: Bool  -- rename table after all imports
  ,sIIRename   :: Bool  -- rename table after each import
  ,sImport     :: Bool  -- imported filenames
  ,sRImport    :: Bool  -- imports  actually used
  ,sDepend     :: Bool  -- imported ids (not currently used)
  ,sRename     :: Bool  -- ast      after rename
  ,sDerive     :: Bool  -- ast      after deriving
  ,sRemove     :: Bool  -- ast      after named-field removal
  ,sScc        :: Bool  -- ast      after strongly-connected-components
  ,sType       :: Bool  -- ast      after type check
  ,sFixSyntax  :: Bool  -- ast      after removing newtypes
  ,sLift       :: Bool  -- stg tree after lambda lifting
  ,sCase       :: Bool  -- stg tree after case pattern simplification
  ,sPrim       :: Bool  -- stg tree after inserting primitives
  ,sArity      :: Bool  -- stg tree after arity analysis
  ,sAtom       :: Bool  -- stg tree after only atoms in applications
  ,sFree       :: Bool  -- stg code with explicit free variables

  -- | Yhc
  ,sBcodeCompile :: Bool -- b-code
  ,sBcodeMem   :: Bool  -- b-code       after NNEDHEAP analysis
  ,sBcodeFlatten :: Bool -- b-code      after flattening
  ,sBcodeWrapper :: Bool -- b-code      generate wrappers
  ,sBcodeRel :: Bool

  -- | nhc98
  ,sGcode      :: Bool	-- g-code
  ,sGcodeFix   :: Bool	-- g-code	after large constant fix
  ,sGcodeMem   :: Bool	-- g-code	after NEEDHEAP analysis
  ,sGcodeOpt1  :: Bool	-- g-code	after optimisation phase 1
  ,sGcodeRel   :: Bool	-- g-code	after relative offset analysis
  ,sGcodeOpt2  :: Bool	-- g-code	after optimisation phase 2

  ,sFunNames   :: Bool	-- insert position and name of functions in the code

--v debugging flags - show symbol table (after each compiler phase)
  ,sIBound     :: Bool  -- after all imports
  ,sIIBound    :: Bool  -- after each import
  ,sRBound     :: Bool  -- after rename
  ,sDBound     :: Bool  -- after deriving
  ,sEBound     :: Bool  -- after extract
  ,sTBound     :: Bool  -- after type checking
  ,sFSBound    :: Bool  -- after fixsyntax
  ,sLBound     :: Bool  -- after lambda-lifting
  ,sCBound     :: Bool  -- after case
  ,sPBound     :: Bool  -- after inserting prims
  ,sABound     :: Bool  -- after only atoms in applications

--v miscellaneous flags
  ,sShowType   :: Bool  -- report type of "main" (for hmake interactive)
  ,sShowWidth  :: Int   -- width for showing intermediate program
  ,sShowIndent :: Int   -- indentation for nesting shown intermediate program
  ,sShowQualified :: Bool -- show qualified ids as far as possible

  ,sShowCore  :: Bool -- show Core
  ,sGenCore :: Bool -- generate a .ycr file
  ,sLinkCore :: Bool -- link all the core files together

--v warnings flags
  ,sWarnFFI   :: Bool

--export control flags
  ,sExportAll :: Bool -- ignore what the module decl says, just export the lot

  ,sHelp :: Bool
  ,sVersion :: Bool
  }
  deriving (Show)

{- Default values for flags -}
defaultFlags = FF
  {sRootFile   = ""
  ,sFileArgs   = []
  ,sIncludes   = []
  ,sPreludes   = []
  ,sBasePath   = ""

  ,sTypeDst    = "."
  ,sObjectDst  = "."
  ,sWrapDst    = "."
  ,sHideObj    = False

--v Flags to control actions
  ,sViewCore   = []

--v Flags to control compilation
  ,sRedefine   = False
  ,sPart       = False
  ,sCompileOne = False
  ,sUnix       = True
  ,sUnlit      = False
  ,sCpp        = False
  ,sHiSuffix   = "hi"
  ,sHat        = False

  ,sProfile    = False
  ,sTprof      = False
  ,sZap        = True
  ,sPrelude    = False
  ,sLib        = False
  ,sKeepCase   = False

  ,sUnifyHack  = False
  ,sDotNet     = False
  ,sNoBytecode = False

--v Flags for machine architecture / configuration
  ,sAnsiC      = True
  ,sNplusK     = True
  ,sUnderscore = False
  ,sPuns       = False
  ,s98         = False

--v debugging flags - show program / import tables (after each compiler phase)
  ,sLex        = False
  ,sILex       = False
  ,sParse      = False
  ,sNeed       = False
  ,sINeed      = False
  ,sIINeed     = False
  ,sIRename    = False
  ,sIIRename   = False
  ,sImport     = False
  ,sRImport    = False
  ,sDepend     = False
  ,sRename     = False
  ,sDerive     = False
  ,sRemove     = False
  ,sScc        = False
  ,sType       = False
  ,sFixSyntax  = False
  ,sLift       = False
  ,sCase       = False
  ,sPrim       = False
  ,sArity      = False
  ,sAtom       = False
  ,sFree       = False

  -- Yhc
  ,sBcodeCompile = False
  ,sBcodeMem     = False
  ,sBcodeFlatten = False
  ,sBcodeWrapper = False
  ,sBcodeRel     = False

  -- nhc98
  ,sGcode      = False
  ,sGcodeFix   = False
  ,sGcodeMem   = False
  ,sGcodeOpt1  = False
  ,sGcodeRel   = False
  ,sGcodeOpt2  = False

  ,sFunNames   = False

--v debugging flags - show symbol table (after each compiler phase)
  ,sIBound     = False
  ,sIIBound    = False
  ,sRBound     = False
  ,sDBound     = False
  ,sEBound     = False
  ,sTBound     = False
  ,sFSBound    = False
  ,sLBound     = False
  ,sCBound     = False
  ,sPBound     = False
  ,sABound     = False

--v miscellaneous flags
  ,sShowType      = False
  ,sShowWidth     = 80
  ,sShowIndent    = 2
  ,sShowQualified = True

  ,sShowCore  = False
  ,sGenCore   = False
  ,sLinkCore  = False

--v warnings flags
  ,sWarnFFI   = True

--export control flags
  ,sExportAll = False

  ,sHelp      = False
  ,sVersion   = False
  }

-- All option descriptions
allOpts :: [ OptDescr (Flags->Flags) ]
allOpts =
--  OptGroup "Help Options"
  [ Option "v"  ["version"]
           (NoArg (\f -> f{sVersion=True})) "Show version information"
  , Option "?h" ["help"]
           (NoArg (\f -> f{sHelp=True})) "Show options and usage information"

--  OptGroup "Inputs and Outputs"
  , Option "I" ["includes","imports"]
           (ReqArg (\x f-> f{sIncludes = x:sIncludes f}) "dir")
           "Include/import directories"
  , Option "P" ["preludes"]
           (ReqArg (\x f-> f{sPreludes = x:sPreludes f}) "dir")
           "Prelude directories"
  , Option "d" ["dst","objdir"]
           (ReqArg (\x f-> f{sObjectDst=x}) "dir")
           "destination path for generated bytecode files"
  , Option "i" ["hidst","hidir"]
           (ReqArg (\x f-> f{sTypeDst=x}) "dir")
           "destination path for generated .hi files"
  , Option "w" ["wrapdst","ffidir"]
           (ReqArg (\x f-> f{sWrapDst=x}) "dir")
           "destination path for generated FFI wrapper"
  , Option ""  ["hide"]
           (NoArg (\f -> f{sHideObj=True})) "hide object files"

--  OptGroup "Generation Options"
  , Option ""  ["hat"]
           (NoArg (\f -> f{sHat=True})) "compile with Hat debugging support"
  , Option ""  ["dotnet"]
           (NoArg (\f -> f{sDotNet=True})) "Generate .NET IL code (implies -no-bytecode)"
  , Option ""  ["no-bytecode"]
           (NoArg (\f -> f{sNoBytecode=True})) "Do not generate any bytecode"
  , Option "W" ["genwrapper"]
           (NoArg (\f -> f{sBcodeWrapper=True})) "generate FFI wrapper"
  , Option ""  ["hi-suffix","hisuf"]
           (ReqArg (\x f -> f{sHiSuffix=x}) "SUF")
           "change the default \".hi\" suffix"
  , Option ""  ["exportall"]
           (NoArg (\f -> f{sExportAll=True}))
           "export all identifiers from a module, ignoring export list"

--  OptGroup "Action Flags"
  , Option ""  ["viewcore"]
           (ReqArg (\x f -> f{sViewCore= x:sViewCore f}) "FILE")
           "View named Core file (.ycr)"
  , Option "c" ["compile"]
           (NoArg (\f -> f{sCompileOne=True})) "Compile one file only"

--  OptGroup "Compilation Options"
  , Option ""  ["redefine"]
           (NoArg (\f-> f{sRedefine=True}))
           "Don't complain if redefining an imported identifier"
  , Option ""  ["nounix"]
           (NoArg (\f -> f{sUnix=False})) "Use unix file names"
  , Option ""  ["unlit"]
           (NoArg (\f -> f{sUnlit=True})) "Unliterate the source code"
  , Option ""  ["cpp"]
           (NoArg (\f -> f{sCpp=True})) "Pre-process the file first"
  , Option ""  ["prelude"]
           (NoArg (\f -> f{sPrelude=True}))
           "Keep prelude definitions in interface file"
  , Option ""  ["lib"]
           (NoArg (\f -> f{sLib=True}))
           "Compiling a lib, don't complain if importing modules with \
          \ names that differ from their filename."
  , Option ""  ["part"]
           (NoArg (\f -> f{sPart=True}))
                  "Compiling part of a lib, so don't complain if module \
                  \ name differs from file name and don't create profiling \
                  \ information for this module"
  , Option ""  ["unifyhack"]
           (NoArg (\f -> f{sUnifyHack=True}))
           "Enable nasty type hack needed to make the prelude compile"
  , Option "" ["zap"]
           (NoArg (\f -> f{sZap=True})) "Zap unused args/stack positions"
  , Option "" ["nozap"]
           (NoArg (\f -> f{sZap=False})) "Don't zap unused args/stack positions"

--  OptGroup "Profiling"
  , Option "p" ["profile"]
           (NoArg (\f -> f{sProfile=True})) "Generate code for heap profiling"
  , Option "z" ["tprof"]
           (NoArg (\f -> f{sTprof=True})) "Generate code for time profiling"

--  OptGroup "Compliance Options"
  , Option ""  ["ansiC"]
           (NoArg (\f -> f{sAnsiC=True})) "Generate bytecode via ANSI-C"
  , Option ""  ["noansiC"]
           (NoArg (\f -> f{sAnsiC=False})) "Generate bytecode via assembler"
  , Option ""  ["nplusk","nkpat"]
           (NoArg (\f -> f{sNplusK=True})) "Allow (n+k) patterns"
  , Option ""  ["nonplusk","nonkpat"]
           (NoArg (\f -> f{sNplusK=False})) "Disallow (n+k) patterns"
  , Option ""  ["underscore"]
           (NoArg (\f -> f{sUnderscore=True})) "H98 underscore-is-lower-case"
  , Option ""  ["nounderscore"]
           (NoArg (\f -> f{sUnderscore=False})) "Enable underscore-is-invisible"
  , Option ""  ["puns"]
           (NoArg (\f -> f{sPuns=True})) "Enable pre-98 named-field puns"
  , Option ""  ["nopuns"]
           (NoArg (\f -> f{sPuns=False})) "Disable named-field puns"
  , Option ""  ["98"]
           (NoArg (\f -> f{s98=True})) "Haskell 98 compliance"
  , Option ""  ["no98"]
           (NoArg (\f -> f{s98=False})) "Turn off strict Haskell 98 compliance"

--  OptGroup "Core Options"
  , Option ""  ["core"]
           (NoArg (\f -> f{sGenCore=True})) "generate a .ycr binary file"
  , Option ""  ["showcore"]
           (NoArg (\f -> f{sShowCore=True})) "show the Core language"
  , Option ""  ["linkcore"]
           (NoArg (\f -> f{sLinkCore=True,sGenCore=True}))
                  "generate a linked .yca binary file"

--  OptGroup "Debug Options"
  , Option ""  ["lex"]
           (NoArg (\f -> f{sLex=True})) "show lexical input"
  , Option ""  ["parse"]
           (NoArg (\f -> f{sParse=True})) "show syntax tree after parser"
  , Option ""  ["need"]
           (NoArg (\f -> f{sNeed=True})) "show need table before import"
  , Option ""  ["ineed"]
           (NoArg (\f -> f{sINeed=True})) "show need table after import"
  , Option ""  ["irename"]
           (NoArg (\f -> f{sIRename=True})) "show rename table after import"
  , Option ""  ["iineed"]
           (NoArg (\f -> f{sIINeed=True}))
           "show need table between all import files"
  , Option ""  ["iirename"]
           (NoArg (\f -> f{sIIRename=True}))
           "show rename table between all imports"
  , Option ""  ["rename"]
           (NoArg (\f -> f{sRename=True})) "show syntax tree after rename"
  , Option ""  ["derive"]
           (NoArg (\f -> f{sDerive=True})) "show syntax tree after derive"
  , Option ""  ["remove"]
           (NoArg (\f -> f{sRemove=True}))
            "show syntax tree after fields are translated into selectors"
  , Option ""  ["scc"]
           (NoArg (\f -> f{sScc=True}))
           "show syntax tree after splitting into strongly connected groups"
  , Option ""  ["type"]
           (NoArg (\f -> f{sType=True})) "show syntax tree after type check"
  , Option ""  ["fixsyntax"]
           (NoArg (\f -> f{sFixSyntax=True}))
           "show syntax tree after removing newtype constructors and fixing \
           \ Class.Type.method"
  , Option ""  ["lift"]
           (NoArg (\f -> f{sLift=True})) "show syntax tree after lambda lifting"
  , Option ""  ["case"]
           (NoArg (\f -> f{sCase=True}))
           "show stg tree after simplification of patterns"
  , Option ""  ["prim"]
           (NoArg (\f -> f{sPrim=True}))
           "show stg tree after inserting primitive functions"
  , Option ""  ["bcodecompile"]
           (NoArg (\f -> f{sBcodeCompile=True})) "show B code after compile"
  , Option ""  ["bcodemem"]
           (NoArg (\f -> f{sBcodeMem=True}))
           "show B code after heap usage analysis"
  , Option ""  ["bcodeflatten"]
           (NoArg (\f -> f{sBcodeFlatten=True})) "show B code after flattening"
  , Option ""  ["bcoderel"]
           (NoArg (\f -> f{sBcodeRel=True}))
           "show B code after converting to relative jumps"
  , Option ""  ["keepcase"]
           (NoArg (\f -> f{sKeepCase=True}))
           "Don't lift case, we fix those later"
  , Option ""  ["arity"]
           (NoArg (\f -> f{sArity=True})) "show stg tree after arity"
  , Option ""  ["ibound"]
           (NoArg (\f -> f{sIBound=True})) "show symbol table after import"
  , Option ""  ["iibound"]
           (NoArg (\f -> f{sIIBound=True}))
           "show symbol table between all import files"
  , Option ""  ["rbound"]
           (NoArg (\f -> f{sRBound=True})) "show symbol table after rename"
  , Option ""  ["dbound"]
           (NoArg (\f -> f{sDBound=True})) "show symbol table after derive"
  , Option ""  ["pbound"]
           (NoArg (\f -> f{sPBound=True}))
           "show symbol table after inserting primitive functions"
  , Option ""  ["ebound"]
           (NoArg (\f -> f{sEBound=True})) "show symbol table after extract"
  , Option ""  ["tbound"]
           (NoArg (\f -> f{sTBound=True})) "show symbol table after type check"
  , Option ""  ["fsbound"]
           (NoArg (\f -> f{sFSBound=True}))
           "show symbol table after adding Class.Type.method info"
  , Option ""  ["lbound"]
           (NoArg (\f -> f{sLBound=True}))
           "show symbol table after lambda lifting"
  , Option ""  ["cbound"]
           (NoArg (\f -> f{sCBound=True}))
           "show symbol table after simplification of pattern"
  , Option ""  ["abound"]
           (NoArg (\f -> f{sABound=True}))
           "show symbol table after only atoms in applications"
  , Option ""  ["import"]
           (NoArg (\f -> f{sImport=True})) "print name of imported files"
  , Option ""  ["depend"]
           (NoArg (\f -> f{sDepend=True}))
           "print imported identifiers that are used (alpha quality)"
  , Option ""  ["free"]
           (NoArg (\f -> f{sFree=True}))
           "show stg tree with explicitly free variables"
  , Option ""  ["atom"]
           (NoArg (\f -> f{sAtom=True}))
           "show stg tree after only atoms in applications"
  , Option ""  ["funnames"]
           (NoArg (\f -> f{sFunNames=True}))
           "insert position and name of functions in the code"
  , Option ""  ["ilex"]
           (NoArg ( \f -> f{sILex=True})) "show lexical input"
  , Option ""  ["report-imports"]
           (NoArg (\f -> f{sRImport=True})) "show only imports actually used"
  , Option ""  ["showtype"]
           (NoArg (\f -> f{sShowType=True})) "report type of \"main\""
  , Option ""  ["showwidth"]
           (ReqArg (\x f -> f{sShowWidth=read x}) "NUM")
           "set width for showing intermediate program"
  , Option ""  ["showindent"]
           (ReqArg (\x f -> f{sShowIndent=read x}) "NUM")
           "set indentation for nesting"
  , Option ""  ["showqualified"]
           (NoArg (\f -> f{sShowQualified=True}))
           "show qualified ids as far as possible"
  , Option ""  ["noshowqualified"]
           (NoArg (\f -> f{sShowQualified=False})) "show always unqualified ids"

--  OptGroup "Warning Options"
  , Option ""  ["warnFFI"]
           (NoArg (\f -> f{sWarnFFI=True})) "warn about FFI type errors"
  , Option ""  ["nowarnFFI"]
           (NoArg (\f -> f{sWarnFFI=False})) "suppress FFI warnings "
  ]


-- Parse etc.
processArgs :: [String] -> Flags
processArgs ss =
    let (funs, nonopts, errors) = getOpt Permute allOpts ss
    in (if not (null errors) then
           error ("Could not parse cmd-line options: "++unlines errors)
        else if compiler==Yhc && length nonopts > 1 then
           warning (FlagWarn $ "ignoring extra options or files:\n"
                    ++unlines (tail nonopts))
        else if compiler==Nhc98 && length nonopts > 4 then
           warning (FlagWarn $ "ignoring extra options or files:\n"
                    ++unlines (drop 4 nonopts))
        else if compiler==Yhc && not (null nonopts) then
           (\f-> f{sRootFile=head nonopts})
        else
           (\f-> f{sFileArgs=nonopts})
       ) (foldr ($) defaultFlags funs)


printUsage :: Bool -> String
printUsage _ | compiler==Yhc =
    flip usageInfo allOpts (unlines $
        [ "yhc - York Haskell Compiler"
        , "A cross platform Haskell compiler"
        , ""
        , "  yhc [options] file"
        , ""
        , "file: Name of the source file to compile, i.e. main.hs"
        , "options: "
        ])
printUsage _ | compiler==Nhc98 =
    usageInfo "nhc98comp [options] file.hs" allOpts

{- If first argument is True, then print second and third with formatting -}
pF :: Bool -> [Char] -> [Char] -> IO ()
pF flag title text =
  if flag
    then hPutStr stderr ( "======\t"++title++":\n"++text++"\n")
    else return ()

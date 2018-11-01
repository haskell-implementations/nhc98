-- Compile takes the data from the front end and does the rest of the compilation

module Compile(compileOne) where

import IO

import Util.Extra
import System.FilePath
import System.Directory
import Control.Monad
import Flags
import Error
import qualified Data.Map as Map
import qualified Data.Set as Set
import SysDeps(PackedString, unpackPS)
import Syntax hiding (TokenId)
import IntState(IntState,getSymbolTable,getErrorsIS,strIS,arityIS,mrpsIS,lookupIS)
import TokenId
import Info
import Id(Id)
import ImportState(ImportState,initIS,getSymbolTableIS,getErrIS
                  ,getRenameTableIS)
import PrettySyntax(prettyPrintTokenId,prettyPrintId
                   ,ppModule,ppTopDecls,ppClassCodes)
import StrPos(strPCode)
import ReportImports(reportFnImports)


import Import(HideDeclIds,importOne)
import IExtract(getNeedIS,addPreludeTupleInstances)
import Rename
import Depend(depend)
import FFITrans(ffiTrans)
import Derive.Derive(derive)
import Extract(extract)
import Remove1_3(removeDecls)
import RmClasses(rmClasses)
import SccModule(sccTopDecls)
import Type.Type(typeTopDecls)
import Type.Lib(typeOfMain)
import Export(buildInterface)
import FixSyntax(fixSyntax)
import FreeVar(freeVar)
import Lift(liftCode)
import Case(caseTopLevel)
import PrimCode(primCode)
import STGArity(stgArity)
import PosAtom(posAtom)
import ByteCode.CompileYhcCore
import ByteCode.ByteCode
import DotNet.Compile
import DotNet.Show

import Core.Convert
import Yhc.Core
import ByteCode.Write(withDirectory) -- FIXME: totally the wrong place for withDirectory

import Front


compileOne :: FrontData -> Map.Map String FilePath -> IO ()
compileOne fd hiDeps = do
  let (parsedPrg, need, qualFun, overlap, expFun, imports, moduName, flags, fileflags) =
          (fParsedPrg fd, fNeed fd, fQualFun fd, fOverlap fd, fExpFun fd,
           fImports fd, fModName fd, fFlags fd, fFileFlags fd)

  (Module _ (Visible modid) _ impdecls inf decls) <- return parsedPrg

  shortName <- System.FilePath.makeRelativeToCurrentDirectory $ sSourceFile fileflags
  putStrLn $ "Compiling " ++ moduName ++
             replicate (max 0 (16 - length moduName)) ' ' ++
             " ( " ++ shortName ++ " )"

 {- Parse interface files for imported modules.  -}
  beginPhase "imports"
  importState   -- :: ImportState
              <- nhcImport flags (addPreludeTupleInstances () (initIS need)) hiDeps
                           imports

  {-
  -- Rename identifiers (also patches fixity information)
  -- Changes from ImportState to IntState
  -}
  beginPhase "rename"
  (decls        -- :: Decls Id  (renamed from decls :: Decls TokenId)
   ,state       -- :: IntState  (internal compiler state)
   ,tidFun      -- :: ((TokenId,IdKind) -> Id)
                --     (mapping from id token and kind to internal id)
   ,tidFunSafe  --   tidFunSafe does not appear to be used anywhere!
   ,derived     -- :: [(Id,[(Pos,Id)])]
                --     instances that have to be derived:
                --     class, position where derived, type constructor
   ,userDefault -- :: Maybe [Id]  (user defaults for Num classes)
   ,rt)         -- :: RenameTable
       <- catchError (rename flags modid qualFun expFun inf decls
                             importState overlap)
                     "when renaming"
  pF (sRename flags) "Declarations after rename and fixity:"
        (prettyPrintId flags state ppTopDecls decls)
  pF (sRBound flags) "Symbol table after rename and fixity:"
        (mixLine (map show (Map.toList (getSymbolTable state))))
  catchErrorStr (getErrorsIS state) "after renaming"

  {- Record dependencies in .dep file -}
  depend flags fileflags state rt


  {-
  -- For foreign imports, transform all functions with IO types to introduce
  -- the appropriate wrapper.
  -}
  beginPhase "ffitrans"
  (decls        -- :: Decls Id
   ,state)      -- :: IntState
             <- return (ffiTrans decls tidFun state)


  {- Derive class instances where required by data definitions -}
  beginPhase "derive"
  (state        -- :: IntState
   ,decls)      -- :: Decls Id
           <- catchErrorStr (derive tidFun state derived decls)
                         "Deriving failed"
  pF (sDerive flags) "Declarations after deriving:"
          (prettyPrintId flags state ppTopDecls decls)
  pF (sDBound flags) "Symbol table after deriving:"
         (mixLine (map show (Map.toList (getSymbolTable state))))


  {-
  -- Adds arity of all defined variables to symbol table of internal state.
  -- Adds type of variables from type declarations and primitive and foreign
  -- function definitions to symbol table of internal state
  -- (but not type declarations from classes).
  -- May discover a few errors and add appropriate messages to internal state.
  -}
  beginPhase "extract"
  state -- :: IntState
           <- return (extract decls state)
  pF (sEBound flags) "Symbol table after extract:"
           (mixLine (map show (Map.toList (getSymbolTable state))))
  catchErrorStr (getErrorsIS state) "after extract phase"


  {-
  -- Create selectors for record fields.
  -- (replace DeclConstrs by definitions for the selectors)
  -}
  beginPhase "remove fields"
  (decls        -- :: Decls Id
   ,zcon        -- :: [Int]
   ,state)      -- :: IntState
          <- return (removeDecls decls tidFun state)
  pF (sRemove flags) "Declarations after remove fields:"
         (prettyPrintId flags state ppTopDecls decls)
  catchErrorStr (getErrorsIS state) "after removing fields"


  {-
  -- First replace class and instance declarations by their type and method
  -- declarations; also fix arity of method definitions.
  -- Strongly Connected Component analysis
  -}
  beginPhase "scc"
  (code         -- :: [ClassCode (Exp Id) Id]
   ,decls       -- :: Decls Id
   ,state)      -- :: IntState
        <- return (rmClasses tidFun state decls)
  decls         -- :: Decls Id
        <- return (sccTopDecls decls)
  pF (sScc flags) "Declarations after scc:"
    (prettyPrintId flags state ppTopDecls decls)
  pF (sScc flags) "Class/instances after scc:"
    (prettyPrintId flags state ppClassCodes code)


  {-
  -- Type inference.
  -- Also remove do notation and record expressions.
  -}
  beginPhase "type"
  (code         -- :: [ClassCode (Exp Id) Id]
   ,decls       -- :: Decls Id
   ,state)      -- :: IntState
          <- return (typeTopDecls tidFun userDefault state code decls)
  pF (sType flags) "Declarations after type deriving:"
         (prettyPrintId flags state ppTopDecls decls)
  pF (sTBound flags) "Symbol table after type deriving:"
         (mixLine (map show (Map.toList (getSymbolTable state))))
  catchErrorStr (getErrorsIS state) "after type inference/checking"


  {- Build interface file for this module and write it out -}
  beginPhase "interface"
  let modname = reverse (unpackPS modid)
  pF (sRImport flags) ("Actual imports used by this module ("++modname++"):")
         (mixLine (reportFnImports modname state))
  state <- if modname == "Main"
                 then typeOfMain flags tidFun decls state
                 else return state

  catch (withDirectory (sTypeFile fileflags) id (buildInterface flags modid state))
        (\ioerror -> do
                       hPutStr stderr ("Couldn't write interface file "
                                       ++ sTypeFile fileflags ++ ":"
                                       ++ show ioerror ++ "\n")
                       exit)

  {-
  -- Fix syntax (small tweaks based on type information)
  -- optimisation: evaluation of `fromInteger' where possible
  -- Also removes data constructors defined by newtype.
  -}
  beginPhase "fixsyntax"
  (decls        -- :: [Decl Id]
   ,state       -- :: IntState
   ,t2i)        -- :: Tree (TokenId,Id)
        <- return (fixSyntax decls state tidFun)
  pF (sFixSyntax flags) "Declarations after fixSyntax"
          (prettyPrintId flags state ppTopDecls (DeclsParse decls))
  pF (sFSBound flags) "Symbol table after fixSyntax:"
          (mixLine (map show (Map.toList (getSymbolTable state))))


  {-
  -- Remove pattern matching: Change all pattern matches to case expressions.
  -- Go from Haskell syntax to STG language (PosLambda).
  -}
  beginPhase "case"
  (decls        -- :: [(Id,PosLambda)]
   ,state)      -- :: IntState
          <- return (caseTopLevel (if sPrelude flags
                                   then "Prelude:"++ sSourceFile fileflags
                                   else reverse (unpackPS (mrpsIS state)))
                                   t2i code decls state tidFun)
  case getErrorsIS state of
    Left errors ->
      pF True "Warning pattern removal" (mixLine errors)
    _ -> return ()
  pF (sCase flags) "Declarations after case:"
          (strPCode (strISInt state) decls)
  pF (sCBound flags) "Symbol table after case:"
          (mixLine (map show (Map.toList (getSymbolTable state))))


  {- Expand primitives -}
  beginPhase "prim"
  (decls        -- :: [(Id,PosLambda)]
   ,state)      -- :: IntState
          <- return (primCode primFlags True tidFun state decls)
  pF (sPrim flags) "Declarations after prim expand:"
          (strPCode (strISInt state) decls)
  pF (sPBound flags) "Symbol table after prim expand:"
          (mixLine (map show (Map.toList (getSymbolTable state))))


  {- Determine free variables (for lambda lifting) -}
  beginPhase "free"
  (decls        -- :: [(Id,PosLambda)]
   ,state)      -- :: IntState
          <- return (freeVar (sKeepCase flags) decls state)
  pF (sFree flags) "Declarations with explicit free variables:"
     (strPCode (strISInt state) decls)


  {- Do arity grouping on declarations (for lambda lifting) -}
  (decls        -- :: [(Id,PosLambda)]
   ,state)      -- :: IntState
          <- return (stgArity state decls)
  pF (sArity flags) "Declarations after first arity grouping"
     (strPCode (strISInt state) decls)


  {- Lambda lift, introduces thunks -}
  beginPhase "lift"
  (decls        -- :: [(Id,PosLambda)]
   ,state)      -- :: IntState
          <- return (liftCode decls state tidFun)
  pF (sLift flags) "Declarations after lambda lifting:"
     (strPCode (strISInt state) decls)
  pF (sLBound flags) "Symbol table after lambda lifting:"
     (mixLine (map show (Map.toList (getSymbolTable state))))

  {- Do arity grouping again -}
  (decls        -- :: [(Id,PosLambda)]
   ,state)      -- :: IntState
          <- return (stgArity state decls)
  pF (sArity flags) "Declarations after second arity grouping"
     (strPCode (strISInt state) decls)


  {- Pos Atom (applies field strictness information and possibly others) -}
  beginPhase "atom"
  (decls        -- :: [(Id,PosLambda)]
   ,state)      -- :: IntState
          <- return (posAtom state decls)
  pF (sAtom flags) "Declarations after atom:" (strPCode (strISInt state) decls)
  pF (sABound flags) "Symbol table after atom:"
     (mixLine (map show (Map.toList (getSymbolTable state))))

  {- Core outputting -}
  let importNames = [reverse $ unpackPS a | (a,b,c) <- imports, a /= rpsInternal]
  (core,coreImps) <- return $ makeCore importNames state zcon decls
  pF (sShowCore flags) "Human Readable Core" (show core)
  when (sGenCore flags) $ do
       let outfile = sCoreFile fileflags
       createDirectoryIfMissing True (takeDirectory outfile)
       saveCore outfile core

  if (sDotNet flags) then do
       {- Compile to DotNet IL -}
       (ilcode,
        state) <- return (ilCompile flags state decls zcon)
       writeFile (reverse ('l':'i':dropWhile (/='.') (reverse (sSourceFile fileflags)))) (strILCode ilcode)
   else when (not (sNoBytecode flags)) $ do
       {- Compile to BCode -}
       bcode <- return (bcCompile flags state coreImps core)
       bcOutput flags fileflags state bcode

-- | begin a phase
beginPhase :: (Monad m) => t -> m ()
beginPhase str = return ()

-- some miscellaneous settings
primFlags :: (Bool, Bool, Bool)
primFlags = (False   -- bool is not the same as Word
            ,False   -- && || not is not primitive
            ,False   -- translate into prim only when strict
            )

-- temporary, until errors as strings are removed
catchErrorStr :: Either [String] a -> String -> IO a
catchErrorStr (Left  xs) msg = catchError (Left (map ErrorRaw xs)) msg
catchErrorStr (Right xs) msg = catchError (Right xs) msg

-- some nicer error handling
catchError :: Either [Error] a -> String -> IO a
catchError comp msg = do
    case comp of
        Left errs -> raiseErrors msg errs
        Right a   -> return a


catchError2 :: Either err res -> (err -> String) -> IO res
catchError2 (Left err)  f = do hPutStr stderr (f err)
                               exit
catchError2 (Right res) f = return res



{- Parse interface files for imported modules -}
nhcImport :: Flags
          -> ImportState
          -> Map.Map String FilePath
          -> [( PackedString
              , (PackedString, PackedString, Set.Set TokenId)
                  -> [[TokenId]] -> Bool
              , HideDeclIds
              )]
          -> IO ImportState

nhcImport flags importState hiDeps [] = do
  --beginPhase "import []"
  pF (sINeed flags) "Need after all imports"
             (show (Set.toList (thd3 (getNeedIS importState))))
  pF (sIBound flags) "Symbol table after import"
             (mixLine (map show (Map.toList (getSymbolTableIS importState))))
  pF (sIRename flags) "Rename table after import"
             (mixLine (map show (Map.toList (getRenameTableIS importState))))
  catchError (getErrIS importState) "importing module"
  return importState

nhcImport flags importState hiDeps (x:xs) =
  {-trace ("import:" ++ (reverse . show . fst3) x) $ -} do
  --beginPhase ("import:" ++ (reverse . show . fst3) x)
  let fname = (reverse . unpackPS . (\(y,_,_)->y)) x
  importState <- importOne flags importState hiDeps x
  pF (sIINeed flags) ("Intermediate need after import "++fname)
       (show (Set.toList (thd3 (getNeedIS importState))))
  pF (sIIBound flags) ("Intermediate symbol table after import "++fname)
       (mixLine (map show (Map.toList (getSymbolTableIS importState))))
  pF (sIIRename flags) ("Intermediate rename table after import "++fname)
       (mixLine (map show (Map.toList (getRenameTableIS importState))))
  nhcImport flags importState hiDeps xs

---   Small help functions

strISInt :: IntState -> (Id -> String, Id -> Int)
strISInt state = (\v -> strIS state v ++ "{"++show v++"}", \v -> arityIS state v)


strISBC :: IntState -> Id -> String
strISBC state v = case lookupIS state v of
                      Just info -> let (md,id) = splitM (tidI info)
                                   in md ++ ";"++id
                      Nothing   -> "v" ++ show v

{- ---------------------------------------------------------------------------
The function main calls all the transformation phases of the compiler.
It does lots of head-standing to try to ensure
that things happen in the right order (due to lazy evaluation), that
error messages get reported correctly, and to be as space-efficient as
possible.
-} 
module Main where

import IO
import System

import Error

import AssocTree
import Memo
import qualified Data.Set as Set
import qualified Data.Map as Map
import Syntax hiding (TokenId)
import PosCode

import Util.Extra(mixSpace,strPos,showErr,mixLine,thd3,Warning(..))
import ImportState(ImportState,initIS,getSymbolTableIS,getErrIS
                  ,getRenameTableIS)
import IntState(IntState,getSymbolTable,getErrorsIS,strIS,mrpsIS)
import Parse.ParseCore(parseit)

import Flags(processArgs,FileFlags(..),getFileFlags,Flags(..),pF)
{-
import Flags(Flags,processArgs,pF
            ,sRealFile,sProfile,sUnlit,sSourceFile,sUnderscore,sLex
            ,sNeed,sParse,sIRename,sIBound,sINeed
            ,sIIBound,sIINeed,sRBound,sRename,sDBound,sDerive
            ,sEBound,sIIRename
            ,sRemove,sScc,sRImport,sTBound,sType,sTypeFile,sPrelude
            ,sFSBound,sFixSyntax,sCBound,sCase,sKeepCase,sPBound,sPrim,sFree
            ,sArity,sLBound,sLift,sABound,sAtom,sAnsiC,sObjectFile
            ,sGcode,sGcodeFix,sGcodeOpt1,sGcodeMem,sGcodeOpt2,sGcodeRel)
-}
import PrettySyntax(prettyPrintTokenId,prettyPrintId
                   ,ppModule,ppTopDecls,ppClassCodes)
import StrPos(strPCode')

import TokenId(TokenId(..))
import Id(Id)

import Unlit(unlit)
import Parse.Lexical(lexical)
import Parse.Parse(parseProg)
import Need(needProg)
import Import(HideDeclIds,importOne)
import IExtract(getNeedIS,addPreludeTupleInstances)
import Rename(rename)
import FFITrans(ffiTrans)
import EmitState
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
import STGGcode(stgGcode)
import PosAtom(posAtom)
import Gcode(Gcode,strGcode,strGcodeRel)
import GcodeFix(gcodeFixInit,gcodeFix,gcodeFixFinish)
import GcodeMem(gcodeMem)
import GcodeOpt1(gcodeOpt1)
import GcodeOpt2(gcodeOpt2)
import GcodeRel(gcodeRel)
import GcodeLow(gcodeHeader,gcodeDump)
import GcodeLowC(gcodeCHeader,gcodeGather)
import GcodeSpec(gcodeZCon)
import Depend(depend)
import SysDeps(PackedString, unpackPS)

import ForeignCode(Foreign,strForeign)
import ReportImports(reportFnImports)


--import NonStdProfile
--beginPhase str = profile str (return ())
beginPhase str = return ()

-- some miscellaneous settings
primFlags = (False   -- bool is not the same as Word
	    ,False   -- && || not is not primitive
	    ,False   -- translate into prim only when strict
	    )

-- some nicer error handling
catchError :: Either b a -> String -> (b->String) -> IO a
catchError comp errmsg showErrors = do
    case comp of
        Left errs -> do pF True errmsg (showErrors errs)
                        exit
        Right a   -> return a

-- for Hugs, which cannot read commandline args using System.getArgs:
gmain cml = main' (words cml)

-- for all other compilers:
main = do
  args <- getArgs
  main' args

main' args = do
  let flags = processArgs args
  let filename = head (sFileArgs flags)
  let fileflags = getFileFlags flags filename "Unknown"


  {- lex source code -}
  beginPhase "lex"
  mainChar	-- :: String
           <- catch (readFile filename) (can'tOpen filename) 
  lexdata	-- :: [PosToken]
           <- return (lexical (sUnderscore flags) (sSourceFile fileflags)
                              (if sUnlit flags 
                                then unlit (sSourceFile fileflags) mainChar 
                                else mainChar))
  pF (sLex flags) "Lexical" 
       (mixSpace (map (\ (p,l,_,_) -> strPos p ++ ':':show l) lexdata))


  {- parse source code -}
  beginPhase "parse"
  parsedPrg	-- :: Module TokenId
            <- catchError (parseit parseProg lexdata)
                          ("In file: "++sSourceFile fileflags)
                          (showErr filename)
  pF (sParse flags) "Parse" (prettyPrintTokenId flags ppModule parsedPrg) 


  -- (Module _ (Visible modid) _ _ _ _) <- return parsedPrg
  -- Insert check that sPart flags or modid == sourcefile ???


  {- 
  -- Perform "need" analysis (what imported entities are required?) 
  -- Second argument may contain error message or parse tree
  -}
  beginPhase "need"
  (need		-- :: NeedTable
   ,qualFun	-- :: TokenId -> [TokenId]
   ,overlap	-- :: Overlap
   ,info)	-- :: Either String (expFun,imports)
         <- return (needProg flags parsedPrg)
  (expFun	-- :: (TokenId->Bool) -> TokenId -> IdKind -> IE
   ,imports)	-- :: [ ( PackedString
		--      , (PackedString, PackedString, Tree (TokenId,IdKind))
		--            -> [[TokenId]] -> Bool
		--      , HideDeclIds
		--      )
		--    ]
            <- catchError info ("In file: "++sSourceFile fileflags) id
  pF (sNeed flags) "Need (after reading source module)"  
            (show (Map.toList need)) 


  {- Parse interface files for imported modules.  -}
  beginPhase "imports"
  importState	-- :: ImportState
              <- nhcImport flags (addPreludeTupleInstances () (initIS need))
                           imports

  {-
  -- Rename identifiers (also patches fixity information)
  -- Changes from ImportState to IntState
  -}
  (Module _ (Visible modid) _ impdecls inf decls) <- return parsedPrg

  beginPhase "rename"
  (decls	-- :: Decls Id  (renamed from decls :: Decls TokenId)
   ,state	-- :: IntState  (internal compiler state)
   ,tidFun	-- :: ((TokenId,IdKind) -> Id) 
		--     (mapping from id token and kind to internal id)
   ,tidFunSafe	--   tidFunSafe does not appear to be used anywhere!
   ,derived	-- :: [(Id,[(Pos,Id)])] 
		--     instances that have to be derived:
		--     class, position where derived, type constructor
   ,userDefault	-- :: Maybe [Id]  (user defaults for Num classes)
   ,rt)		-- :: RenameTable
       <- catchError (rename flags modid qualFun expFun inf decls
                             importState overlap)
                     "Errors when renaming" (mixLine . concatMap showError)
  pF (sRename flags) "Declarations after rename and fixity:" 
        (prettyPrintId flags state ppTopDecls decls) 
  pF (sRBound flags) "Symbol table after rename and fixity:"  
        (mixLine (map show (Map.toList (getSymbolTable state))))
  catchError (getErrorsIS state) "Errors after renaming" mixLine 


  {- Record dependencies in .dep file -}
  depend flags fileflags state rt 


  {-
  -- For foreign imports, transform all functions with IO types to introduce
  -- the appropriate wrapper.
  -}
  beginPhase "ffitrans"
  (decls	-- :: Decls Id
   ,state)	-- :: IntState
             <- return (ffiTrans decls tidFun state)


  {- Derive class instances where required by data definitions -}
  beginPhase "derive"
  (state	-- :: IntState
   ,decls)	-- :: Decls Id
           <- catchError (derive tidFun state derived decls)
                         "Deriving failed" mixLine
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
  state	-- :: IntState
           <- return (extract decls state)
  pF (sEBound flags) "Symbol table after extract:"  
           (mixLine (map show (Map.toList (getSymbolTable state)))) 
  catchError (getErrorsIS state) "Errors after extract phase" mixLine


  {-
  -- Create selectors for record fields.
  -- (replace DeclConstrs by definitions for the selectors)
  -} 
  beginPhase "remove fields"
  (decls	-- :: Decls Id
   ,zcon	-- :: [Int]
   ,state)	-- :: IntState
          <- return (removeDecls decls tidFun state)
  pF (sRemove flags) "Declarations after remove fields:" 
         (prettyPrintId flags state ppTopDecls decls) 
  catchError (getErrorsIS state) "Errors after removing fields" mixLine


  {- 
  -- First replace class and instance declarations by their type and method 
  -- declarations; also fix arity of method definitions.
  -- Strongly Connected Component analysis 
  -}
  beginPhase "scc"
  (code		-- :: [ClassCode (Exp Id) Id]
   ,decls	-- :: Decls Id
   ,state)	-- :: IntState
        <- return (rmClasses tidFun state decls)
  decls		-- :: Decls Id
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
  (code		-- :: [ClassCode (Exp Id) Id]
   ,decls	-- :: Decls Id
   ,state)	-- :: IntState
          <- return (typeTopDecls tidFun userDefault state code decls)
  pF (sType flags) "Declarations after type deriving:" 
         (prettyPrintId flags state ppTopDecls decls) 
  pF (sTBound flags) "Symbol table after type deriving:"  
         (mixLine (map show (Map.toList (getSymbolTable state)))) 
  catchError (getErrorsIS state) "Errors after type inference/checking" mixLine


  {- Build interface file for this module and write it out -}
  beginPhase "interface"
  let modname = reverse (unpackPS modid)
  pF (sRImport flags) ("Actual imports used by this module ("++modname++"):") 
         (mixLine (reportFnImports modname state)) 
  state <- if modname == "Main" 
                 then typeOfMain flags tidFun decls state 
                 else return state
  catch (writeFile (sTypeFile fileflags) (buildInterface flags modid state))
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
  (decls	-- :: [Decl Id]
   ,state	-- :: IntState
   ,t2i)	-- :: Tree (TokenId,Id)
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
  (decls	-- :: [(Id,PosLambda)]
   ,state)	-- :: IntState
          <- return (caseTopLevel (if sPrelude flags
                                   then "Prelude:"++ sSourceFile fileflags
                                   else reverse (unpackPS (mrpsIS state)))
                                   t2i code decls state tidFun)
  case getErrorsIS state of
    Left errors ->
      pF True "Warning pattern removal" (mixLine errors) 
    _ -> return ()
  pF (sCase flags) "Declarations after case:"  
          (strPCode' (strISInt state) decls) 
  pF (sCBound flags) "Symbol table after case:"  
          (mixLine (map show (Map.toList (getSymbolTable state))))


  {- Expand primitives -}
  beginPhase "prim"
  (decls	-- :: [(Id,PosLambda)]
   ,state)	-- :: IntState
          <- return (primCode primFlags True tidFun state decls)
  pF (sPrim flags) "Declarations after prim expand:" 
          (strPCode' (strISInt state) decls) 
  pF (sPBound flags) "Symbol table after prim expand:"  
          (mixLine (map show (Map.toList (getSymbolTable state)))) 


  {- Determine free variables (for lambda lifting) -}
  beginPhase "free"
  (decls	-- :: [(Id,PosLambda)]
   ,state)	-- :: IntState
          <- return (freeVar (sKeepCase flags) decls state)
  pF (sFree flags) "Declarations with explicit free variables:" 
     (strPCode' (strISInt state) decls)


  {- Do arity grouping on declarations (for lambda lifting) -}
  (decls	-- :: [(Id,PosLambda)]
   ,state)	-- :: IntState
          <- return (stgArity state decls)
  pF (sArity flags) "Declarations after first arity grouping" 
     (strPCode' (strISInt state) decls) 


  {- Lambda lift, introduces thunks -}
  beginPhase "lift"
  (decls	-- :: [(Id,PosLambda)]
   ,state)	-- :: IntState
          <- return (liftCode decls state tidFun)
  pF (sLift flags) "Declarations after lambda lifting:" 
     (strPCode' (strISInt state) decls) 
  pF (sLBound flags) "Symbol table after lambda lifting:"  
     (mixLine (map show (Map.toList (getSymbolTable state)))) 

    
  {- Do arity grouping again -}
  (decls	-- :: [(Id,PosLambda)]
   ,state)	-- :: IntState
          <- return (stgArity state decls)
  pF (sArity flags) "Declarations after second arity grouping" 
     (strPCode' (strISInt state) decls) 


  {- Pos Atom (not sure what this does!) -}
  beginPhase "atom"
  (decls	-- :: [(Id,PosLambda)]
   ,state)	-- :: IntState
          <- return (posAtom state decls)
  pF (sAtom flags) "Declarations after atom:" (strPCode' (strISInt state) decls)
  pF (sABound flags) "Symbol table after atom:"  
     (mixLine (map show (Map.toList (getSymbolTable state))))


  {-
  -- Dump zero-arity constructors to object file (as Gcode)
  -- Also dump source references and ids table for tracing to object file.
  -}
  beginPhase "dump zcon"
  zcons		-- :: [[Gcode]]
        <- return (gcodeZCon (sProfile flags) state zcon)
  handle <- catch (openFile (sObjectFile fileflags) WriteMode) 
	          (\ioerror -> do
                                 hPutStr stderr ("Couldn't open object file "
                                   ++ sObjectFile fileflags ++ ":" 
                                   ++ show ioerror ++ "\n")  
                                 exit) 
  --hSetBuffering handle LineBuffering
  (eslabs	-- :: EmitState
   ,escode)	-- :: EmitState
       <- let eslabs = startEmitState Labels
              escode = startEmitState Code in
          if (sAnsiC flags) 
          then if null zcons then return (eslabs,escode)
               else return (foldr (\a b-> gcodeGather Labels state b a)
                                  (emitWord Labels "42" eslabs) zcons
                           ,foldr (\a b-> gcodeGather Code   state b a)
                                  (emitWord Code "42" escode) zcons
                           )
          else do
            catch (hPutStr handle (gcodeHeader 
                     (foldr ( \ a b -> foldr (gcodeDump state) b a) 
                                             "\n" zcons)))
                  (\ioerror -> do
                                 hPutStr stderr 
                                    ("Failed writing to object file "
                                    ++ sObjectFile fileflags ++ ":" 
                                    ++ show ioerror ++ "\n")  
                                 exit) 
            return (eslabs, escode)


  {- Generate Gcode for functions -} 
  beginPhase "generate code"
  (state	-- :: IntState
   ,fixState)	-- :: (Tree ((Id,Id),Id), (Tree (String,Id), [(Id,Gcode)]))
             <- return (gcodeFixInit state flags)

  (state	-- :: IntState
   ,fixState	-- :: (Tree ((Id,Id),Id), (Tree (String,Id), [(Id,Gcode)]))
   ,foreigns	-- :: [Foreign]
   ,eslabs	-- :: EmitState
   ,escode)	-- :: EmitState
           <- generateCode handle flags fileflags [] state fixState
                           eslabs escode decls

  gcode		-- :: [[Gcode]]
        <- return (gcodeFixFinish state fixState)
  pF (sGcodeRel flags) "G Code (rel)" 
     (concatMap (strGcodeRel state) (concat gcode)) 


  {- Dump Gcode to object file (as bytecode) -}
  beginPhase "write code"
  if (sAnsiC flags) 
    then do
       let eslabs' = foldr (\a b-> gcodeGather Labels state b a) eslabs gcode
           escode' = foldr (\a b-> gcodeGather Code   state b a) escode gcode
       catch (do hPutStr handle (gcodeCHeader)
                 mapM_ (hPutStr handle) (emit Labels eslabs')
                 mapM_ (hPutStr handle) (emit Code escode'))
             (\ioerror -> do hPutStr stderr 
                                 ("Failed writing code to object file "
                                  ++ sObjectFile fileflags ++ ":" 
                                  ++ show ioerror ++ "\n") 
                             exit)
    else catch (hPutStr handle (foldr (\a b -> foldr (gcodeDump state) b a) 
                                      "\n" gcode))
               (\ioerror -> do
                              hPutStr stderr 
                                ("Failed appending tables to object file "
                                 ++ sObjectFile fileflags ++ ":" ++ 
                                 show ioerror ++ "\n") 
                              exit)
  if null foreigns 
    then return ()
    else do
           let warn = if sWarnFFI flags then FFIWarn else NoWarn
           hPutStr handle "\n#include <haskell2c.h>\n#include <HsFFI.h>\n" 
           mapM_ (\f-> hPutStr handle (strForeign warn f "")) foreigns
  hClose handle


--------


type FixState = (AssocTree (Int,Int) Int, (AssocTree String Int, [(Int,Gcode)]))


{-
-- Generate Gcode for functions: for each declaration, do
--        STGGcode
--         GcodeFix
--         GcodeOpt1
--         GcodeMem
--         GcodeOpt2
--         GcodeRel
-} 
generateCode :: Handle
                -> Flags
                -> FileFlags
                -> [Foreign]
                -> IntState
                -> FixState
                -> EmitState
                -> EmitState
                -> [(Id,PosLambda)]
                -> IO (IntState,FixState,[Foreign],EmitState,EmitState)

generateCode handle flags fileflags foreigns state fixState eslabs escode [] =
  return (state, fixState, foreigns, eslabs, escode)

generateCode handle flags fileflags foreigns state fixState eslabs escode
             (decl:decls)
  = do
  (gcode	-- :: [Gcode]
   ,state	-- :: IntState
   ,newforeigns)-- :: [Foreign]
          <- return (stgGcode (sProfile flags) state
                              ((\ (a,b)->(fromEnum a,b)) decl))
  pF (sGcode flags) "G Code" (concatMap (strGcode state) gcode) 

  (state	-- :: IntState
   ,fixState	-- :: FixState
   ,gcode)	-- :: [Gcode]
          <- return (gcodeFix flags state fixState gcode)
  pF (sGcodeFix flags) "G Code (fixed)" (concatMap (strGcode state) gcode)

  (gcode	-- :: [Gcode]
   ,state)	-- :: IntState
          <- return (gcodeOpt1 state gcode)
  pF (sGcodeOpt1 flags) "G Code (opt1)" (concatMap (strGcode state) gcode)

  (gcode	-- :: [Gcode]
   ,state)	-- :: IntState
          <- return (gcodeMem (sProfile flags) state gcode)
  pF (sGcodeMem flags) "G Code (mem)" (concatMap (strGcode state) gcode)

  (gcode	-- :: [Gcode]
   ,state)	-- :: IntState
          <- return (gcodeOpt2 state gcode)
  pF (sGcodeOpt2 flags) "G Code (opt2)" (concatMap (strGcode state) gcode)

  gcode		-- :: [Gcode]
          <- return (gcodeRel gcode)
  pF (sGcodeRel flags) "G Code (rel)" (concatMap (strGcodeRel state) gcode)

  (eslabs',escode') <-
           if (sAnsiC flags) 
           then return (gcodeGather Labels state eslabs gcode
                       ,gcodeGather Code   state escode gcode)
           else do 
                  catch (hPutStr handle (foldr (gcodeDump state) "\n" gcode))
                        (\ioerror -> do
                                       hPutStr stderr 
                                         ("Failed appending to object file "
                                          ++ sObjectFile fileflags ++ ":"  
                                          ++ show ioerror ++ "\n") 
                                       exit) 
                  return (eslabs,escode)
  generateCode handle flags fileflags (foreigns++newforeigns) state fixState
               eslabs' escode' decls



--------

{- Parse interface files for imported modules -}
nhcImport :: Flags 
          -> ImportState 
          -> [( PackedString
              , (PackedString, PackedString, Set.Set TokenId)
                  -> [[TokenId]] -> Bool
              , HideDeclIds
              )] 
          -> IO ImportState

nhcImport flags importState [] = do
  --beginPhase "import []"
  pF (sINeed flags) "Need after all imports"    
             (show (Set.toList (thd3 (getNeedIS importState)))) 
  pF (sIBound flags) "Symbol table after import"  
             (mixLine (map show (Map.toList (getSymbolTableIS importState)))) 
  pF (sIRename flags) "Rename table after import"  
             (mixLine (map show (Map.toList (getRenameTableIS importState)))) 
  catchError (getErrIS importState) "Errors after importing module"
             (mixLine . concatMap showError)
  return importState

nhcImport flags importState (x:xs) = do
  --trace ("import:" ++ (reverse . show . fst3) x) $
  --beginPhase ("import:" ++ (reverse . show . fst3) x)
  let fname = (reverse . unpackPS . (\(y,_,_)->y)) x
  importState <- importOne flags importState Map.empty x 
  pF (sIINeed flags) ("Intermediate need after import "++fname)
       (show (Set.toList (thd3 (getNeedIS importState))))
  pF (sIIBound flags) ("Intermediate symbol table after import "++fname)
       (mixLine (map show (Map.toList (getSymbolTableIS importState))))
  pF (sIIRename flags) ("Intermediate rename table after import "++fname)
       (mixLine (map show (Map.toList (getRenameTableIS importState)))) 
  nhcImport flags importState xs
    

---   Small help functions

strISInt :: IntState -> Id -> String
strISInt state v = strIS state v ++ "{"++show v++"}"

{- End Module Main ----------------------------------------------------------}
